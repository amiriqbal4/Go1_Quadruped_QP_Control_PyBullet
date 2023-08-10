import pybullet as p
import pybullet_data as pd
import numpy as np
import time
p.connect(p.GUI)
p.setAdditionalSearchPath(pd.getDataPath())

## Load plane from pybullet_data.
plane = p.loadURDF("plane.urdf")
#plane = p.loadURDF("Plane/plane.urdf")

p.setGravity(0, 0, -9.8)
p.setRealTimeSimulation(1)
#p.setTimeStep(1./250)
#p.setDefaultContactERP(0)
#urdfFlags = p.URDF_USE_SELF_COLLISION+p.URDF_USE_SELF_COLLISION_EXCLUDE_ALL_PARENTS


DRS_Treadmill = p.loadURDF("DRS_Motek_treadmill/urdf/DRS_Treadmill.urdf", [0.0, 0.3, -0.2], [0.0, 0.0, 0.7071, 0.7071],
                        globalScaling=1.0,
                       useFixedBase=True)
#                       flags=urdfFlags,
jointIds_dp = []
paramIds_dp = []

for j in range(p.getNumJoints(DRS_Treadmill)):
    p.changeDynamics(DRS_Treadmill, j, linearDamping=0, angularDamping=0)
    info = p.getJointInfo(DRS_Treadmill, j)
    js = p.getJointState(DRS_Treadmill, j)
    print(js)
    #pdb.set_trace()
    jointName = info[1]
    jointType = info[2]
    if (jointType == p.JOINT_PRISMATIC or jointType == p.JOINT_REVOLUTE):
        jointIds_dp.append(j)
        print(jointIds_dp)
        print("hello")
maxForceId = p.addUserDebugParameter("maxForce", 0, 10000, 5000)
maxForce=5000
for i in range(500):
    for j in range(p.getNumJoints(DRS_Treadmill)):
        tp=0.02*i
        targetpos =[5*np.pi*np.sin(6.28*tp)/180, -0.05*tp]
        p.setJointMotorControl2(DRS_Treadmill, jointIds_dp[j], p.POSITION_CONTROL, targetpos[j],targetVelocity=0.5, force=5000)
        #print(targetPosition)
        js = p.getJointState(DRS_Treadmill, jointIds_dp[j])
        print(js)
        time.sleep(0.02)
        #pdb.set_trace()
p.getCameraImage(480, 320)



time.sleep(100)

p.disconnect()
