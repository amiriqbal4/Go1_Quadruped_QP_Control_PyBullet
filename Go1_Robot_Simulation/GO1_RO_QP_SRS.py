############# QP-based planning and control algorithm
import sys
sys.path.append("C:\\My_Python_Lib")

if "C:\\My_Python_Lib" not in sys.path:
    sys.path.append("C:\\My_Python_Lib")

path1= "C:\\Users\Amir_Iqbal\\OneDrive - University of Massachusetts Lowell - UMass Lowell\Ocean_waves\\A1_robot\\Go1_KinJacDyn"
path2= "C:\\Users\Amir_Iqbal\\OneDrive - University of Massachusetts Lowell - UMass Lowell\Ocean_waves\\A1_robot\\A1_Trotting_StaticSurface"
path3= "C:\\Users\Amir_Iqbal\\OneDrive - University of Massachusetts Lowell - UMass Lowell\Desktop\\Go1_Robot_Simulation\\Go1_KinJacDyn"
sys.path.append(path1)
sys.path.append(path2)
# print(sys.path)
import pybullet as p
import matplotlib.pyplot as plt
import numpy as np
from numpy.linalg import pinv
from numpy import linalg as LA
from scipy.spatial.transform import Rotation as R
import quadprog #import solve_qp
import csv
import time
import datetime
import pdb
from supporting_functions import*
# from laikago_dynamics import*
# ###############################
import matlab.engine
eng = matlab.engine.start_matlab()
# eng.cd(r'C:\\Users\Amir_Iqbal\\OneDrive - University of Massachusetts Lowell - UMass Lowell\Ocean_waves\\A1_robot\\A1_Trotting_StaticSurface',nargout=0)
eng.cd(path3,nargout=0)
##################################
import pybullet_data as pd
p.connect(p.GUI)
p.setAdditionalSearchPath(pd.getDataPath())
# 

##########################################
###### Data storing vectors ###############
control_torque =np.zeros((1,37))
base_pose_cd =np.zeros((1,13)) #t,xyzrpy_c,xyzrpy_d
control_torque =np.zeros((1,4))
time_vec = np.zeros(1)
contactForce = np.zeros((4))
contactState = np.zeros((4))
t=0
####### Gait  desired input ##########
vd_b = np.array([0.3,0.0,0.0]) #User input for x, y, and z velocity

wd_b = np.array([0.0,0.0,0.0]) #User input for x, y, and z angular velocity

F_p = np.array([0,0,40]*4)  ## initialized contact force

########################################
## Tunable parameters set 1: Gains########################
#######Compute these at run time by estimating DRS motion ###########
k1_hlip=1.0
k2_hlip=0.18
#############Gain Parameters##################
kp_p = np.diag([1000,1000,500])
kp_w = 15*np.diag([1000,1000,1000])
kd_p = np.diag([200,200,0])
kd_w = np.diag([200,200,200])
###for swing leg
kp_sw = 300#0.2*np.diag([1000.5,10.2,1000.2,1000.5,10.2,1000.2])
kp_sw_w = 15
kd_sw = 0.01*np.diag([100,10,200,100,10,200])

#pdb.set_trace()
###############################
## Tunable parameters set 2: QP Weight parameters#####

c1=0.0005
c2=0.0005
Q=1*np.diag([5,5,10,10.0,20.0,10.0])
#Q= 5000000*np.eye(6); # A 6X6 SPD matrix corrresponding to base motion
W= 0.0001*np.diag([5,50,2,5,50,2,5,50,2,5,50,2]); # A 12X12 SPD matrix corrresponding for scaling ||F||
W= 0.0001*np.diag([5,50,20,5,50,20,5,50,20,5,50,20]); 
ub =200*np.ones((12))
lb =-200*np.ones((12))
mu= 0.3 #friction coefficient
theta_p = 0*np.pi/180
hz_0 = 0.320 #average/reference base height for locomotion in meter
T_phi = 0.15 #reference time for a legto be in stance during a complete walking cycle
sf_index = 1 #sf_index 1=FL,2=RR, 3=FR, 4=RL
#########################
step_length_x=2*vd_b[0]*T_phi
step_length_y=2*vd_b[1]*T_phi
##############################################################
#####Initialization and update of desired base pose based on user input (v,w)######
thd_b = np.zeros(3) #base orientation euler initialization
pd_b = np.zeros(3)  #base position cartesion initialization
pd_b[2] = hz_0  #desired base height
##############################################################

############ Fixed parameters ##########################
m = 12.213
g=np.array([0.,0.,-9.81])
I_cg =np.diag([0.1853,0.4068,0.3879])
B =np.block([[np.zeros((6,12))],[np.eye(12)]])
#print(B)
#pdb.set_trace()
#########################################################

###################################################################
#################Loading urdf in PyBullet environment##############
#################################################################
# class Dog:
plane = p.loadURDF("DynamicSurfaceModels/Plane/plane.urdf", [0.0,0.0,0.0],[0,0,0,1], useFixedBase=True)#p.loadURDF("plane.urdf")
p.setGravity(0,0,-9.8)
dt=1.0/(2*240.0)#0.001#1.0/240.0;
p.setTimeStep(dt)
p.setRealTimeSimulation(0)
#p.setDefaultContactERP(0)
urdfFlags = p.URDF_USE_SELF_COLLISION+p.URDF_USE_SELF_COLLISION_EXCLUDE_ALL_PARENTS #flags = urdfFlags,
#urdfFlags = p.URDF_USE_SELF_COLLISION
#quadruped = p.loadURDF("data/laikago/urdf/laikago.urdf",[-0.00,0.0,0.570],[0,0,0,1], useFixedBase=False) A1_xacro  A1_modified

#quadruped = p.loadURDF("../a1/urdf/a1.urdf",[0.0,0.0,0.35],[0,0,0,1], flags=p.URDF_USE_INERTIA_FROM_FILE, useFixedBase=False)
quadruped = p.loadURDF("go1/urdf/Go1_Modified.urdf",[0.0,0.0,0.42],[0,0,0,1], flags=urdfFlags, useFixedBase=False)
#quadruped_2 = p.loadURDF("laikago/laikago.urdf",[0,0,0.48],[0,0,0,1], flags = urdfFlags,useFixedBase=False)
#enable collision between lower legs

###Limits from urdf
jp_LL = np.array([-0.86,-0.68,-2.8]*4)
jp_UL = np.array([0.86,4.5,-0.88,]*4)
jt_L = np.array([23.7, 23.7, 35.5]*4)
###Joint limits further shrinked

##### Define bodyID forlower legs##########################################
###### We can use it to check contact state and contact force##############
lower_legs = [2,5,8,11]
for l0 in lower_legs:
    for l1 in lower_legs:
        if (l1>l0):
            enableCollision = 1
            #print("collision for pair",l0,l1, p.getJointInfo(quadruped,l0)[12],p.getJointInfo(quadruped,l1)[12], "enabled=",enableCollision)
            p.setCollisionFilterPair(quadruped, quadruped, 2,5,enableCollision)

jointIds=[]
paramIds=[]

# #maxForceId = p.addUserDebugParameter("maxForce",0,200,80)
# print("Mass Matrix = ")
# print(np.array(p.calculateMassMatrix(quadruped,[0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])))
# pdb.set_trace()



for j in range (p.getNumJoints(quadruped)):
    print(j)
    # p.changeDynamics(quadruped,j,linearDamping=0.0, angularDamping=0.0,jointLowerLimit=jp_LL[j],jointUpperLimit=jp_UL[j],jointLimitForce=jt_L[j])
    p.changeDynamics(quadruped,j,linearDamping=0.0, angularDamping=0.0, lateralFriction=0.9,spinningFriction=0.1,rollingFriction=0.1,restitution=0.999,frictionAnchor=0 )
    info = p.getJointInfo(quadruped,j)
    # print(info)
    jointName = info[1]
    jointType = info[2]
    if (jointType==p.JOINT_PRISMATIC or jointType==p.JOINT_REVOLUTE):
        jointIds.append(j)
print(jointIds)
###### Initial pose from file############
# trajectory=[]
# with open('Trotting_05S_medHeightSteps.csv', 'r') as csvfile:  #int_10_step
#     spamreader = csv.reader(csvfile)
#     for row in spamreader:
#         row = [float(element) for element in list(row)]
#         trajectory.append(row)
# trajectory = np.array(trajectory)


# targetPos = trajectory[0,j]

targetPos=np.array([-0.00, 0.62,-1.25,0.00, 0.62,-1.25,-0.00, 0.62,-1.25, 0.00, 0.62,-1.25])
pos_r=3
for i in range(20):
    for j in range(p.getNumJoints(quadruped)):
        #p.enableJointForceTorqueSensor(quadruped, j, enableSensor=1)
        #p.stepSimulation()
        pos=(pos_r/(i+1)+(i+1))/(i+1)
    # #targetPos = p.readUserDebugParameter(c)
    #     #maxForce = p.readUserDebugParameter(maxForceId)
    #     targetPos = trajectory[0,j]
        p.setJointMotorControl2(quadruped,jointIds[j],p.POSITION_CONTROL,targetPos[j]/pos,force=100)
        p.stepSimulation()
        time.sleep(dt)

print('motion ready')
print(pos)
# pdb.set_trace()
# p.setJointMotorControlArray(quadruped, jointIds ,controlMode= p.TORQUE_CONTROL, forces=20*np.ones(12))
for j in range(p.getNumJoints(quadruped)):
    p.enableJointForceTorqueSensor(quadruped, j, enableSensor=1)

############update############
pd_b +=vd_b*dt # desired position update
thd_b +=wd_b*dt  # desired angular positions update

#####from scipy.spatial.transform import Rotation as R####
rd = R.from_euler('xyz', thd_b, degrees=False) #using scipy library
Rd_b = rd.as_matrix() #desired rotation matrix for base orientation
print(rd)
#################################################################


###############################
####### current measured value of  generalized position and velocity###########
#base_pose
pc_b =np.array(p.getBasePositionAndOrientation(quadruped)[0])
base_quat =np.array(p.getBasePositionAndOrientation(quadruped)[1])
thc_b =np.array(p.getEulerFromQuaternion(base_quat))

#base_velocity
vc_b = np.array(p.getBaseVelocity(quadruped)[0])
wc_b = np.array(p.getBaseVelocity(quadruped)[1])

#Joints positions and velocity
joint_states = p.getJointStates(quadruped, range(12))
jc_p = [jp[0] for jp in joint_states]
jc_v = [jv[1] for jv in joint_states]
## generalized position and velocity
qc = np.concatenate([pc_b,thc_b,jc_p]) #qc = current measured position
dqc = np.concatenate([vc_b,wc_b,jc_v]) #dqc = current measured velocity

############ Making initial error to e zero ##################
pd_b= pc_b
thd_b= thc_b
rd = R.from_euler('xyz', thd_b, degrees=False) #using scipy library
Rd_b = rd.as_matrix() #desired rotation matrix for base orientation
###################

##############################
Base =p.getDynamicsInfo(quadruped,-1) 
print(Base)
for j in range(p.getNumJoints(quadruped)):
    Link_In =p.getDynamicsInfo(quadruped,j) 
    print(Link_In)
    # pdb.set_trace()

# pdb.set_trace()
##################################


######## control ad_b, dwd_b ##############
#ori_error_b = orientation_error (Rd_b,Rc_b) # Returns 3x1 vector of error in orientation
#dvd_b = kp_p@(pd_b -pc_b) +kd_p@(vd_b-vc_b) #desired base linear acceleration
#dwd_b = kp_w@(ori_error_b) + kd_w@(wd_b-wc_b) #desired base angular acceleration

#b_d =np.concatenate([m*(dvd_b-g),I_cg@dwd_b])

########################################
####Control loop########################
########################################
for i in range(100):
    p.stepSimulation()
    time.sleep(dt)
t=0
p.setJointMotorControlArray(quadruped, jointIds,controlMode= p.VELOCITY_CONTROL, forces=0.00*np.ones(12))
#jointIndices = np.arange(0, 12)
t_prev=0.0
s=0.0

###########################################
for i in range(50):
### outer loop for sf controller#####
    # p_i = swing_foot_p_i(qc, sf_index)
    psf_i = swing_foot_p_i_trotting(qc, sf_index)
    # p_f_1, pf_2 = swing_foot_p_f(qc,T_phi,vc_b,vd_b,hz_0, sf_index)
    t_prev+=s*T_phi
    s=0   
    switch_event=0
    # pdb.set_trace() 
    ub =200*np.ones((12))
    lb =-200*np.ones((12))
    while (s<1):
    # while (s<1 or switch_event == 0):
        # print(s)
        tic = time.perf_counter()

        #vd_b = np.array([0.0,0.,0.04*4*(np.cos(np.pi*t))])
        ############update############
        t+=dt
        pd_b +=vd_b*dt # desired position update
        thd_b +=wd_b*dt  # desired angular positions update
        s+=1.0*dt/T_phi

        #####from scipy.spatial.transform import Rotation as R####
        rd = R.from_euler('xyz', thd_b, degrees=False) #using scipy library
        Rd_b = rd.as_matrix() #desired rotation matrix for base orientation
        #################################################################
        #base_pose
        pc_b =np.array(p.getBasePositionAndOrientation(quadruped)[0])
        base_quat =np.array(p.getBasePositionAndOrientation(quadruped)[1])
        thc_b =np.array(p.getEulerFromQuaternion(base_quat))

        #base_velocity
        vc_b = np.array(p.getBaseVelocity(quadruped)[0])
        wc_b = np.array(p.getBaseVelocity(quadruped)[1])

        #Joints positions and velocity
        joint_states = p.getJointStates(quadruped, range(12))
        jc_p = [jp[0] for jp in joint_states]
        jc_v = [jv[1] for jv in joint_states]
        ## generalized position and velocity
        qc = np.concatenate([pc_b,thc_b,jc_p]) #qc = current measured position
        dqc = np.concatenate([vc_b,wc_b,jc_v]) #dqc = current measured velocity

        #####from scipy.spatial.transform import Rotation as R####
        rc = R.from_euler('xyz', thc_b, degrees=False) #using scipy library
        Rc_b = rc.as_matrix() #desired rotation matrix for base orientation
        ###################################################################

        #######################
        SL_x_hlip= step_length_x + k1_hlip*(qc[0]+(1-s)*T_phi*vd_b[0] - vd_b[0]*(t_prev+T_phi))+k2_hlip*(dqc[0]-vd_b[0])
        SL_y_hlip= step_length_y + k1_hlip*(qc[1]+(1-s)*T_phi*vd_b[1] - vd_b[1]*(t_prev+T_phi))+k2_hlip*(dqc[1]-vd_b[1])
        psf_f=swing_foot_p_f_trotting(SL_x_hlip,SL_y_hlip,T_phi,t_prev,vd_b, sf_index) 
        ##########

        ######## control ad_b, dwd_b ##############
        ori_error_b = orientation_error (Rd_b,Rc_b) # Returns 3x1 vector of error in orientation
        dvd_b = kp_p@(pd_b -pc_b) +kd_p@(vd_b-vc_b) #desired base linear acceleration
        dwd_b = kp_w@(ori_error_b) + kd_w@(wd_b-wc_b) #desired base angular acceleration

        b_d =np.concatenate([m*(dvd_b-g),I_cg@dwd_b])

        ########################################
        ####################################################################
        jt_stance, jt_swing = Jacobian_transpose_stacked_trotting(qc, sf_index)
        ps_d, vs_d, as_d = Swing_foot_Bezier_6th(psf_i,psf_f,s) #(t in (0,T_phi/4)--> s(0,1)=> s= 4(t-t_p)/T_phi)
        M = InertiaMatrixFloatingBase(qc)
        # print(np.shape(M))
        G = Grav_FloatingBase(qc,dqc)
        # C = GravCoriolisFloatingBase(qc,dqc)
        # M = mass_mat_full(qc)
        # G = grav_mat_full(qc)
        #C = Ce_vec_total(qc,dqc)
        # print(np.shape(jt_stance))
        # print(np.shape(jt_swing))
        # pdb.set_trace()
        OS_M_swing = op_sp_inertia_swing_leg(M,jt_swing) #
        # pdb.set_trace()
        kp_sw=np.diag(np.diag(OS_M_swing)*kp_sw_w**2)

        #print(kp_sw)
        djdq_sw = swing_foot_djdq(qc,dqc, sf_index)
        ps_c = swing_foot_p_i_trotting(qc, sf_index) #current value of swing foot end point
        vs_c = (jt_swing)@dqc ## Swing foot current velocity = Jsw@dq
        tau_ff_swing = jt_swing.T@(OS_M_swing@(as_d-djdq_sw))+G #G #+C # term +C(q,dq)dq is dropped for speeding up the computation
        tau_fb_swing = jt_swing.T @((kp_sw@(ps_d-ps_c))+kd_sw@(vs_d-vs_c))
        tau_swing = pinv(B)@(tau_ff_swing+tau_fb_swing)
        #print("swing torque =:",tau_swing)
        #pdb.set_trace()

        #######sf controller end##############
        ###############################################
        #  object = (A*F-b_d)'*Q*(A*F-b_d)+ c1*(F'*W*F)+c2*(F-F_p)'*(F-F_p); eqn =A*F_p'-b_d;
        # Needto rewrite the objective in the quadprogram form i.e. O=0.5F'*H*F+ c'*F

        # Upon simplifying expression the objective is %% O = 0.5F'*H*F+ c'*F%%%
        # where H= 2*(A'*Q*A + (c1+c2)*W), and c_obj'= -2*b'*Q*A -2*F_p
        ##############################################

        ###############################################
        ########## Objective matrices start ###########
        A = mat_A_trotting(qc) #from laikago_kinematics A matrix of eq AF=b_d
        #print(A)
        H= 2*(A.T @ Q @ A + (c1+c2)*W)
        #H =(H+H.T)/2;
        c_obj = (-2*b_d.T @ Q @ A - W@F_p)
        A_ineq, b_ineq = QP_stance_Ab_ineq(m,mu,theta_p,ub,lb,sf_index)
        #print(A_ineq)
        #pdb.set_trace()
        F_p = quadprog_solve_qp(H, c_obj, G=A_ineq, h=b_ineq)

        tau_ff_stance = -pinv(B)@jt_stance.T@F_p
        #print("stance torque =:",tau_ff_stance)
        tau_total = tau_ff_stance+tau_swing
        #print("total torque =:",tau_total)
        ##########################################
        #maxForce = 0
        p.setJointMotorControlArray(quadruped, jointIds, controlMode=p.TORQUE_CONTROL, forces=tau_total)
        #########################################
        # pdb.set_trace()
        #QP solver ends
        p.stepSimulation()

        time.sleep(dt)

        #print(t)
        ####### Jacobian matrices for swing and stance #########
        #pdb.set_trace()
        #jt_stance, jt_swing = Jacobian_transpose_stacked(qc, sf_index)
    sf_index =np.mod(sf_index,2)+1
        #pdb.set_trace()
    ##############################################
    ######Control loop ends #####################
    #############################################
