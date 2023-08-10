/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:34 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t196;
  double t389;
  double t986;
  double t3363;
  double t1573;
  double t3385;
  double t1219;
  double t2211;
  double t3188;
  double t3341;
  double t3395;
  double t3423;
  double t3506;
  double t3540;
  double t3546;
  double t3631;
  double t3634;
  double t3560;
  double t3580;
  double t3643;
  double t3687;
  double t3695;
  double t3710;
  double t3702;
  double t3711;
  double t3725;
  double t3447;
  double t3833;
  double t3834;
  double t3835;
  double t3838;
  double t3840;
  double t3847;
  double t3909;
  double t3938;
  double t3950;
  double t3954;
  double t3956;
  double t3959;
  double t3963;
  double t3638;
  double t3644;
  double t3647;
  double t3649;
  double t3654;
  double t3661;
  double t3668;
  double t3670;
  double t4003;
  double t4005;
  double t4006;
  double t4008;
  double t4027;
  double t4029;
  double t4030;
  double t4031;
  double t4032;
  double t4047;
  double t4049;
  double t4053;
  double t4071;
  double t4072;
  double t4073;
  double t4074;
  double t4075;
  double t4036;
  double t4113;
  double t4114;
  double t4115;
  double t4119;
  double t4123;
  double t4124;
  double t4118;
  double t4127;
  double t4128;
  double t3733;
  double t3734;
  double t3735;
  double t3736;
  double t3740;
  double t3757;
  double t4078;
  double t4154;
  double t4155;
  double t4033;
  double t4039;
  double t4168;
  double t4169;
  double t4173;
  double t4174;
  double t4175;
  double t4180;
  double t4183;
  double t4131;
  double t4207;
  double t4208;
  double t1001;
  double t3446;
  double t3457;
  double t3518;
  double t3527;
  double t3558;
  double t3585;
  double t3597;
  double t3608;
  double t3613;
  double t4156;
  double t4157;
  double t4160;
  double t4230;
  double t4231;
  double t4232;
  double t4229;
  double t4233;
  double t4234;
  double t4077;
  double t4082;
  double t4083;
  double t4084;
  double t4085;
  double t4089;
  double t4090;
  double t4091;
  double t4256;
  double t4257;
  double t4258;
  double t4255;
  double t4259;
  double t4260;
  double t3910;
  double t3911;
  double t3921;
  double t3926;
  double t3934;
  double t3937;
  double t3964;
  double t3966;
  double t3970;
  double t3973;
  double t3979;
  double t3980;
  double t3981;
  double t3982;
  double t3985;
  double t4129;
  double t4132;
  double t4134;
  double t4135;
  double t4137;
  double t4138;
  double t4139;
  double t4141;
  double t4148;
  double t4206;
  double t4211;
  double t4214;
  double t4216;
  double t4217;
  double t4218;
  double t4219;
  double t4220;
  double t4221;
  double t4254;
  double t4261;
  double t4262;
  double t4263;
  double t4264;
  double t4265;
  double t4266;
  double t4267;
  double t4268;
  double t4269;
  double t4270;
  double t3818;
  double t4228;
  double t4236;
  double t4237;
  double t4238;
  double t4239;
  double t4278;
  double t4279;
  double t3875;
  double t3760;
  double t3761;
  double t3762;
  double t3764;
  double t3767;
  double t3772;
  double t3788;
  double t3792;
  double t3797;
  double t4171;
  double t4177;
  double t4178;
  double t4179;
  double t4185;
  double t4189;
  double t4191;
  double t4248;
  double t4249;
  double t4250;
  double t4251;
  double t4252;
  double t4094;
  double t4098;
  double t4100;
  double t4101;
  double t4109;
  double t4289;
  double t4290;
  double t4291;
  double t4292;
  double t4293;
  double t4294;
  double t4295;
  double t4296;
  double t4297;
  double t4320;
  double t4321;
  double t4322;
  double t4334;
  double t4335;
  double t4336;
  double t4337;
  double t4338;
  double t4339;
  double t4341;
  double t4377;
  double t4378;
  double t4389;
  double t4390;
  double t4391;
  double t4340;
  double t4342;
  double t4374;
  double t4402;
  double t4403;
  double t4409;
  double t4419;
  double t4420;
  double t4422;
  double t4423;
  double t4424;
  double t4428;
  double t4429;
  double t4325;
  double t4444;
  double t4404;
  double t4405;
  double t4406;
  double t4375;
  double t4376;
  double t4379;
  double t4380;
  double t4381;
  double t4382;
  double t4383;
  double t4384;
  double t4473;
  double t4319;
  double t4323;
  double t4324;
  double t4326;
  double t4327;
  double t4328;
  double t4329;
  double t4330;
  double t4331;
  double t4332;
  double t4445;
  double t4446;
  double t4447;
  double t4448;
  double t4449;
  double t4450;
  double t4451;
  double t4452;
  double t4388;
  double t4392;
  double t4393;
  double t4394;
  double t4395;
  double t4396;
  double t4397;
  double t4398;
  double t4399;
  double t4514;
  double t4515;
  double t4516;
  double t4517;
  double t4518;
  double t4483;
  double t4484;
  double t4485;
  double t4486;
  double t4487;
  double t4488;
  double t4489;
  double t4490;
  double t4491;
  double t4492;
  double t4493;
  double t4494;
  double t4408;
  double t4410;
  double t4411;
  double t4412;
  double t4413;
  double t4414;
  double t4415;
  double t4416;
  double t4417;
  double t4344;
  double t4345;
  double t4346;
  double t4347;
  double t4348;
  double t4349;
  double t4350;
  double t4351;
  double t4352;
  double t4353;
  double t4354;
  double t4455;
  double t4456;
  double t4457;
  double t4458;
  double t4459;
  double t4460;
  double t4461;
  double t4462;
  double t4463;
  double t4508;
  double t4362;
  double t4363;
  double t4364;
  double t4365;
  double t4366;
  double t4499;
  double t4500;
  double t4501;
  double t4502;
  double t4503;
  double t4504;
  double t4505;
  double t4506;
  double t4356;
  double t4357;
  double t4358;
  double t4359;
  double t4360;
  double t4466;
  double t4467;
  double t4468;
  double t4469;
  double t4470;
  double t4421;
  double t4425;
  double t4426;
  double t4427;
  double t4430;
  double t4431;
  double t4432;
  double t4534;
  double t4535;
  double t4536;
  double t4537;
  double t4538;
  double t4539;
  double t4540;
  double t4541;
  double t4570;
  double t4571;
  double t4572;
  double t4574;
  double t4588;
  double t4589;
  double t4590;
  double t4584;
  double t4600;
  double t4601;
  double t4610;
  double t4611;
  double t4612;
  double t4598;
  double t4627;
  double t4599;
  double t4602;
  double t4603;
  double t4604;
  double t4605;
  double t4606;
  double t4607;
  double t4608;
  double t4615;
  double t4637;
  double t4638;
  double t4573;
  double t4575;
  double t4626;
  double t4628;
  double t4653;
  double t4654;
  double t4655;
  double t4657;
  double t4658;
  double t4656;
  double t4659;
  double t4640;
  double t4677;
  double t4678;
  double t4583;
  double t4585;
  double t4586;
  double t4587;
  double t4691;
  double t4692;
  double t4693;
  double t4609;
  double t4613;
  double t4614;
  double t4616;
  double t4617;
  double t4618;
  double t4619;
  double t4620;
  double t4621;
  double t4622;
  double t4639;
  double t4641;
  double t4642;
  double t4643;
  double t4644;
  double t4645;
  double t4646;
  double t4647;
  double t4676;
  double t4679;
  double t4680;
  double t4681;
  double t4682;
  double t4683;
  double t4684;
  double t4685;
  double t4686;
  double t4577;
  double t4578;
  double t4579;
  double t4580;
  double t4581;
  double t4630;
  double t4631;
  double t4632;
  double t4633;
  double t4634;
  double t4662;
  double t4663;
  double t4664;
  double t4660;
  double t4661;
  double t4665;
  double t4666;
  double t4707;
  double t4708;
  double t4709;
  double t4710;
  double t4711;
  double t4712;
  double t4713;
  double t4714;
  double t4715;
  t196 = Cos(var1[3]);
  t389 = Cos(var1[4]);
  t986 = Cos(var1[5]);
  t3363 = Cos(var1[9]);
  t1573 = Sin(var1[9]);
  t3385 = Sin(var1[3]);
  t1219 = Cos(var1[10]);
  t2211 = -1.*t1573;
  t3188 = 0. + t2211;
  t3341 = t196*t389*t986*t3188;
  t3395 = -1.*t3363*t389*t986*t3385;
  t3423 = t3341 + t3395;
  t3506 = -1.*t389*t986*t1573*t3385;
  t3540 = Cos(var1[11]);
  t3546 = 0. + t3540;
  t3631 = -1.*t196*t389*t986*t1573;
  t3634 = t3631 + t3395;
  t3560 = Sin(var1[10]);
  t3580 = Sin(var1[11]);
  t3643 = t3363*t196*t389*t986;
  t3687 = t389*t986*t3188*t3385;
  t3695 = t3643 + t3687;
  t3710 = Sin(var1[4]);
  t3702 = -1.*t3560*t3695;
  t3711 = -1.*t1219*t986*t3710;
  t3725 = t3702 + t3711;
  t3447 = 0. + t3363;
  t3833 = -1.*t389*t986*t3560;
  t3834 = -1.*t3363*t196*t986*t3710;
  t3835 = -1.*t986*t3188*t3385*t3710;
  t3838 = t3834 + t3835;
  t3840 = t1219*t3838;
  t3847 = t3833 + t3840;
  t3909 = Sin(var1[5]);
  t3938 = t3560*t3710*t3909;
  t3950 = -1.*t3363*t196*t389*t3909;
  t3954 = -1.*t389*t3188*t3385*t3909;
  t3956 = t3950 + t3954;
  t3959 = t1219*t3956;
  t3963 = t3938 + t3959;
  t3638 = -0.213*t1219*t3634;
  t3644 = t3643 + t3506;
  t3647 = 0.08*t3644;
  t3649 = t1219*t3546*t3634;
  t3654 = -1.*t3560*t3580*t3634;
  t3661 = t3649 + t3654;
  t3668 = -0.213*t3661;
  t3670 = t3638 + t3647 + t3668;
  t4003 = t986*t3385*t3710;
  t4005 = -1.*t196*t3909;
  t4006 = t4003 + t4005;
  t4008 = -1.*t3363*t4006;
  t4027 = t196*t986*t3710;
  t4029 = t3385*t3909;
  t4030 = t4027 + t4029;
  t4031 = -1.*t1573*t4030;
  t4032 = t4008 + t4031;
  t4047 = t1573*t4006;
  t4049 = -1.*t3363*t4030;
  t4053 = t4047 + t4049;
  t4071 = -1.*t986*t3385*t3710;
  t4072 = t196*t3909;
  t4073 = t4071 + t4072;
  t4074 = -1.*t1573*t4073;
  t4075 = t4074 + t4049;
  t4036 = -1.*t1219*t3580*t4032;
  t4113 = t986*t3385;
  t4114 = -1.*t196*t3710*t3909;
  t4115 = t4113 + t4114;
  t4119 = -1.*t196*t986;
  t4123 = -1.*t3385*t3710*t3909;
  t4124 = t4119 + t4123;
  t4118 = -1.*t1573*t4115;
  t4127 = -1.*t3363*t4124;
  t4128 = t4118 + t4127;
  t3733 = t3540*t3725;
  t3734 = t1219*t3695;
  t3735 = -1.*t986*t3560*t3710;
  t3736 = t3734 + t3735;
  t3740 = -1.*t3580*t3736;
  t3757 = t3733 + t3740;
  t4078 = t3363*t4073;
  t4154 = t3188*t4030;
  t4155 = t4078 + t4154;
  t4033 = -1.*t3540*t3560*t4032;
  t4039 = t4033 + t4036;
  t4168 = t389*t986;
  t4169 = 0. + t4168;
  t4173 = t3188*t4006;
  t4174 = t3363*t4030;
  t4175 = 0. + t4173 + t4174;
  t4180 = t1219*t4169;
  t4183 = -1.*t3560*t4175;
  t4131 = t3363*t4115;
  t4207 = t3188*t4124;
  t4208 = t4131 + t4207;
  t1001 = 0.04675*t196*t389*t986;
  t3446 = -0.213*t1219*t3423;
  t3457 = t3447*t196*t389*t986;
  t3518 = t3457 + t3506;
  t3527 = 0.08*t3518;
  t3558 = t1219*t3546*t3423;
  t3585 = -1.*t3560*t3580*t3423;
  t3597 = t3558 + t3585;
  t3608 = -0.213*t3597;
  t3613 = t1001 + t3446 + t3527 + t3608;
  t4156 = -1.*t3540*t3560*t4155;
  t4157 = -1.*t1219*t3580*t4155;
  t4160 = t4156 + t4157;
  t4230 = -1.*t196*t986*t3710;
  t4231 = -1.*t3385*t3909;
  t4232 = t4230 + t4231;
  t4229 = t3188*t4073;
  t4233 = t3363*t4232;
  t4234 = t4229 + t4233;
  t4077 = -0.213*t1219*t4075;
  t4082 = t4078 + t4031;
  t4083 = 0.08*t4082;
  t4084 = t1219*t3546*t4075;
  t4085 = -1.*t3560*t3580*t4075;
  t4089 = t4084 + t4085;
  t4090 = -0.213*t4089;
  t4091 = t4077 + t4083 + t4090;
  t4256 = t196*t986;
  t4257 = t3385*t3710*t3909;
  t4258 = t4256 + t4257;
  t4255 = t3188*t4115;
  t4259 = t3363*t4258;
  t4260 = t4255 + t4259;
  t3910 = -0.04675*t389*t3385*t3909;
  t3911 = 0.1881*t3710*t3909;
  t3921 = -1.*t196*t389*t1573*t3909;
  t3926 = -1.*t3447*t389*t3385*t3909;
  t3934 = t3921 + t3926;
  t3937 = 0.08*t3934;
  t3964 = -0.213*t3963;
  t3966 = t3546*t3963;
  t3970 = t1219*t3710*t3909;
  t3973 = -1.*t3560*t3956;
  t3979 = t3970 + t3973;
  t3980 = t3580*t3979;
  t3981 = t3966 + t3980;
  t3982 = -0.213*t3981;
  t3985 = t3910 + t3911 + t3937 + t3964 + t3982;
  t4129 = -0.213*t1219*t4128;
  t4132 = -1.*t1573*t4124;
  t4134 = t4131 + t4132;
  t4135 = 0.08*t4134;
  t4137 = t1219*t3546*t4128;
  t4138 = -1.*t3560*t3580*t4128;
  t4139 = t4137 + t4138;
  t4141 = -0.213*t4139;
  t4148 = t4129 + t4135 + t4141;
  t4206 = -1.*t389*t3560*t3909;
  t4211 = t1219*t4208;
  t4214 = t4206 + t4211;
  t4216 = -1.*t3580*t4214;
  t4217 = -1.*t1219*t389*t3909;
  t4218 = -1.*t3560*t4208;
  t4219 = t4217 + t4218;
  t4220 = t3540*t4219;
  t4221 = t4216 + t4220;
  t4254 = 0.04675*t4115;
  t4261 = -0.213*t1219*t4260;
  t4262 = t3447*t4115;
  t4263 = t1573*t4258;
  t4264 = t4262 + t4263;
  t4265 = 0.08*t4264;
  t4266 = t1219*t3546*t4260;
  t4267 = -1.*t3560*t3580*t4260;
  t4268 = t4266 + t4267;
  t4269 = -0.213*t4268;
  t4270 = t4254 + t4261 + t4265 + t4269;
  t3818 = -0.1881*t389*t986;
  t4228 = 0.04675*t4073;
  t4236 = t3447*t4073;
  t4237 = t1573*t4232;
  t4238 = t4236 + t4237;
  t4239 = 0.08*t4238;
  t4278 = t1219*t4234;
  t4279 = t3833 + t4278;
  t3875 = -1.*t1219*t389*t986;
  t3760 = -0.213*t3725;
  t3761 = t3546*t3725;
  t3762 = -1.*t1219*t3695;
  t3764 = t986*t3560*t3710;
  t3767 = t3762 + t3764;
  t3772 = t3580*t3767;
  t3788 = t3761 + t3772;
  t3792 = -0.213*t3788;
  t3797 = t3760 + t3792;
  t4171 = -1.*t4169*t3560;
  t4177 = -1.*t1219*t4175;
  t4178 = t4171 + t4177;
  t4179 = t3540*t4178;
  t4185 = t4180 + t4183;
  t4189 = -1.*t3580*t4185;
  t4191 = t4179 + t4189;
  t4248 = 0.213*t3560*t4155;
  t4249 = -1.*t3546*t3560*t4155;
  t4250 = t4249 + t4157;
  t4251 = -0.213*t4250;
  t4252 = t4248 + t4251;
  t4094 = 0.213*t3560*t4032;
  t4098 = -1.*t3546*t3560*t4032;
  t4100 = t4098 + t4036;
  t4101 = -0.213*t4100;
  t4109 = t4094 + t4101;
  t4289 = -0.213*t4219;
  t4290 = t389*t3560*t3909;
  t4291 = -1.*t1219*t4208;
  t4292 = t4290 + t4291;
  t4293 = t3580*t4292;
  t4294 = t3546*t4219;
  t4295 = t4293 + t4294;
  t4296 = -0.213*t4295;
  t4297 = t4289 + t4296;
  t4320 = t196*t389*t3188*t3909;
  t4321 = -1.*t3363*t389*t3385*t3909;
  t4322 = t4320 + t4321;
  t4334 = -1.*t986*t3385;
  t4335 = t196*t3710*t3909;
  t4336 = t4334 + t4335;
  t4337 = t3188*t4336;
  t4338 = t3363*t4124;
  t4339 = t4337 + t4338;
  t4341 = -1.*t1219*t3580*t4339;
  t4377 = -1.*t3363*t4336;
  t4378 = t4377 + t4132;
  t4389 = t3363*t196*t389*t3909;
  t4390 = t389*t3188*t3385*t3909;
  t4391 = t4389 + t4390;
  t4340 = -1.*t3540*t3560*t4339;
  t4342 = t4340 + t4341;
  t4374 = -1.*t1573*t4336;
  t4402 = -1.*t3363*t4258;
  t4403 = t4374 + t4402;
  t4409 = t4173 + t4174;
  t4419 = t389*t3909;
  t4420 = 0. + t4419;
  t4422 = t3363*t4336;
  t4423 = t3188*t4258;
  t4424 = 0. + t4422 + t4423;
  t4428 = t1219*t4420;
  t4429 = -1.*t3560*t4424;
  t4325 = -1.*t389*t1573*t3385*t3909;
  t4444 = t3921 + t4321;
  t4404 = -1.*t3540*t3560*t4403;
  t4405 = -1.*t1219*t3580*t4403;
  t4406 = t4404 + t4405;
  t4375 = t4374 + t4338;
  t4376 = 0.08*t4375;
  t4379 = -0.213*t1219*t4378;
  t4380 = t1219*t3546*t4378;
  t4381 = -1.*t3560*t3580*t4378;
  t4382 = t4380 + t4381;
  t4383 = -0.213*t4382;
  t4384 = t4376 + t4379 + t4383;
  t4473 = t4377 + t4263;
  t4319 = 0.04675*t196*t389*t3909;
  t4323 = -0.213*t1219*t4322;
  t4324 = t3447*t196*t389*t3909;
  t4326 = t4324 + t4325;
  t4327 = 0.08*t4326;
  t4328 = t1219*t3546*t4322;
  t4329 = -1.*t3560*t3580*t4322;
  t4330 = t4328 + t4329;
  t4331 = -0.213*t4330;
  t4332 = t4319 + t4323 + t4327 + t4331;
  t4445 = -0.213*t1219*t4444;
  t4446 = t4389 + t4325;
  t4447 = 0.08*t4446;
  t4448 = t1219*t3546*t4444;
  t4449 = -1.*t3560*t3580*t4444;
  t4450 = t4448 + t4449;
  t4451 = -0.213*t4450;
  t4452 = t4445 + t4447 + t4451;
  t4388 = -1.*t3560*t3710*t3909;
  t4392 = t1219*t4391;
  t4393 = t4388 + t4392;
  t4394 = -1.*t3580*t4393;
  t4395 = -1.*t1219*t3710*t3909;
  t4396 = -1.*t3560*t4391;
  t4397 = t4395 + t4396;
  t4398 = t3540*t4397;
  t4399 = t4394 + t4398;
  t4514 = -1.*t3363*t196*t3710*t3909;
  t4515 = -1.*t3188*t3385*t3710*t3909;
  t4516 = t4514 + t4515;
  t4517 = t1219*t4516;
  t4518 = t4206 + t4517;
  t4483 = 0.04675*t389*t986*t3385;
  t4484 = t196*t389*t986*t1573;
  t4485 = t3447*t389*t986*t3385;
  t4486 = t4484 + t4485;
  t4487 = 0.08*t4486;
  t4488 = -0.1881*t986*t3710;
  t4489 = -0.213*t3736;
  t4490 = t3580*t3725;
  t4491 = t3546*t3736;
  t4492 = t4490 + t4491;
  t4493 = -0.213*t4492;
  t4494 = t4483 + t4487 + t4488 + t4489 + t4493;
  t4408 = t389*t986*t3560;
  t4410 = t1219*t4409;
  t4411 = t4408 + t4410;
  t4412 = -1.*t3580*t4411;
  t4413 = t1219*t389*t986;
  t4414 = -1.*t3560*t4409;
  t4415 = t4413 + t4414;
  t4416 = t3540*t4415;
  t4417 = t4412 + t4416;
  t4344 = 0.04675*t4030;
  t4345 = t1573*t4073;
  t4346 = t3447*t4030;
  t4347 = t4345 + t4346;
  t4348 = 0.08*t4347;
  t4349 = -0.213*t1219*t4155;
  t4350 = t1219*t3546*t4155;
  t4351 = -1.*t3560*t3580*t4155;
  t4352 = t4350 + t4351;
  t4353 = -0.213*t4352;
  t4354 = t4344 + t4348 + t4349 + t4353;
  t4455 = -1.*t1573*t4006;
  t4456 = t4455 + t4174;
  t4457 = 0.08*t4456;
  t4458 = -0.213*t1219*t4032;
  t4459 = t1219*t3546*t4032;
  t4460 = -1.*t3560*t3580*t4032;
  t4461 = t4459 + t4460;
  t4462 = -0.213*t4461;
  t4463 = t4457 + t4458 + t4462;
  t4508 = -0.1881*t389*t3909;
  t4362 = 0.04675*t4124;
  t4363 = t1573*t4115;
  t4364 = t3447*t4124;
  t4365 = t4363 + t4364;
  t4366 = 0.08*t4365;
  t4499 = -0.213*t4397;
  t4500 = -1.*t1219*t4391;
  t4501 = t3938 + t4500;
  t4502 = t3580*t4501;
  t4503 = t3546*t4397;
  t4504 = t4502 + t4503;
  t4505 = -0.213*t4504;
  t4506 = t4499 + t4505;
  t4356 = 0.213*t3560*t4339;
  t4357 = -1.*t3546*t3560*t4339;
  t4358 = t4357 + t4341;
  t4359 = -0.213*t4358;
  t4360 = t4356 + t4359;
  t4466 = 0.213*t3560*t4403;
  t4467 = -1.*t3546*t3560*t4403;
  t4468 = t4467 + t4405;
  t4469 = -0.213*t4468;
  t4470 = t4466 + t4469;
  t4421 = -1.*t3560*t4420;
  t4425 = -1.*t1219*t4424;
  t4426 = t4421 + t4425;
  t4427 = t3540*t4426;
  t4430 = t4428 + t4429;
  t4431 = -1.*t3580*t4430;
  t4432 = t4427 + t4431;
  t4534 = -0.213*t4415;
  t4535 = -1.*t1219*t4409;
  t4536 = t3833 + t4535;
  t4537 = t3580*t4536;
  t4538 = t3546*t4415;
  t4539 = t4537 + t4538;
  t4540 = -0.213*t4539;
  t4541 = t4534 + t4540;
  t4570 = t196*t389*t3188;
  t4571 = -1.*t3363*t389*t3385;
  t4572 = t4570 + t4571;
  t4574 = -1.*t1219*t3580*t4572;
  t4588 = -1.*t3363*t196*t389;
  t4589 = -1.*t389*t3188*t3385;
  t4590 = t4588 + t4589;
  t4584 = -1.*t196*t389*t1573;
  t4600 = t389*t1573*t3385;
  t4601 = t4588 + t4600;
  t4610 = -1.*t196*t3188*t3710;
  t4611 = t3363*t3385*t3710;
  t4612 = t4610 + t4611;
  t4598 = t4584 + t4571;
  t4627 = -1.*t1219*t3580*t4598;
  t4599 = 0.08*t4598;
  t4602 = -0.213*t1219*t4601;
  t4603 = t1219*t3546*t4601;
  t4604 = -1.*t3560*t3580*t4601;
  t4605 = t4603 + t4604;
  t4606 = -0.213*t4605;
  t4607 = t4599 + t4602 + t4606;
  t4608 = var2[9]*t4607;
  t4615 = t1573*t3385*t3710;
  t4637 = t196*t1573*t3710;
  t4638 = t4637 + t4611;
  t4573 = -1.*t3540*t3560*t4572;
  t4575 = t4573 + t4574;
  t4626 = -1.*t3540*t3560*t4598;
  t4628 = t4626 + t4627;
  t4653 = t3363*t196*t389;
  t4654 = t389*t3188*t3385;
  t4655 = 0. + t4653 + t4654;
  t4657 = -1.*t3710;
  t4658 = 0. + t4657;
  t4656 = -1.*t3560*t4655;
  t4659 = t1219*t4658;
  t4640 = -1.*t3363*t196*t3710;
  t4677 = -1.*t3188*t3385*t3710;
  t4678 = t4640 + t4677;
  t4583 = -0.04675*t389*t3385;
  t4585 = -1.*t3447*t389*t3385;
  t4586 = t4584 + t4585;
  t4587 = 0.08*t4586;
  t4691 = t1219*t4590;
  t4692 = t3560*t3710;
  t4693 = t4691 + t4692;
  t4609 = -0.04675*t196*t3710;
  t4613 = -0.213*t1219*t4612;
  t4614 = -1.*t3447*t196*t3710;
  t4616 = t4614 + t4615;
  t4617 = 0.08*t4616;
  t4618 = t1219*t3546*t4612;
  t4619 = -1.*t3560*t3580*t4612;
  t4620 = t4618 + t4619;
  t4621 = -0.213*t4620;
  t4622 = t4609 + t4613 + t4617 + t4621;
  t4639 = -0.213*t1219*t4638;
  t4641 = t4640 + t4615;
  t4642 = 0.08*t4641;
  t4643 = t1219*t3546*t4638;
  t4644 = -1.*t3560*t3580*t4638;
  t4645 = t4643 + t4644;
  t4646 = -0.213*t4645;
  t4647 = t4639 + t4642 + t4646;
  t4676 = -1.*t389*t3560;
  t4679 = t1219*t4678;
  t4680 = t4676 + t4679;
  t4681 = -1.*t3580*t4680;
  t4682 = -1.*t1219*t389;
  t4683 = -1.*t3560*t4678;
  t4684 = t4682 + t4683;
  t4685 = t3540*t4684;
  t4686 = t4681 + t4685;
  t4577 = 0.213*t3560*t4572;
  t4578 = -1.*t3546*t3560*t4572;
  t4579 = t4578 + t4574;
  t4580 = -0.213*t4579;
  t4581 = t4577 + t4580;
  t4630 = 0.213*t3560*t4598;
  t4631 = -1.*t3546*t3560*t4598;
  t4632 = t4631 + t4627;
  t4633 = -0.213*t4632;
  t4634 = t4630 + t4633;
  t4662 = -1.*t1219*t4655;
  t4663 = -1.*t3560*t4658;
  t4664 = t4662 + t4663;
  t4660 = t4656 + t4659;
  t4661 = -1.*t3580*t4660;
  t4665 = t3540*t4664;
  t4666 = t4661 + t4665;
  t4707 = -0.213*t4684;
  t4708 = t389*t3560;
  t4709 = -1.*t1219*t4678;
  t4710 = t4708 + t4709;
  t4711 = t3580*t4710;
  t4712 = t3546*t4684;
  t4713 = t4711 + t4712;
  t4714 = -0.213*t4713;
  t4715 = t4707 + t4714;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[4]*(t3613*var2[3] + (t3818 - 0.213*t3847 - 0.213*(t3546*t3847 + t3580*(-1.*t3560*t3838 + t3875)) - 0.04675*t3385*t3710*t986 + 0.08*(-1.*t1573*t196*t3710*t986 - 1.*t3385*t3447*t3710*t986))*var2[4] + t3985*var2[5] + t3670*var2[9] + t3797*var2[10] - 0.213*t3757*var2[11]) + var2[9]*(t4091*var2[3] + t3670*var2[4] + t4148*var2[5] + (0.08*t4032 - 0.213*t1219*t4053 - 0.213*(t1219*t3546*t4053 - 1.*t3560*t3580*t4053))*var2[9] + t4109*var2[10] - 0.213*t4039*var2[11]) + var2[3]*((t4228 - 0.213*t1219*t4234 - 0.213*(t1219*t3546*t4234 - 1.*t3560*t3580*t4234) + t4239)*var2[3] + t3613*var2[4] + t4270*var2[5] + t4091*var2[9] + t4252*var2[10] - 0.213*t4160*var2[11]) + var2[11]*(-0.213*t4160*var2[3] - 0.213*t3757*var2[4] - 0.213*t4221*var2[5] - 0.213*t4039*var2[9] - 0.213*t4191*var2[10] - 0.213*(-1.*t3540*(0. + t3560*t4169 + t1219*t4175) - 1.*t3580*(0. + t4180 + t4183))*var2[11]) + var2[10]*(t4252*var2[3] + t3797*var2[4] + t4297*var2[5] + t4109*var2[9] + (-0.213*t4178 - 0.213*(t3580*(-1.*t1219*t4169 + t3560*t4175) + t3546*t4178))*var2[10] - 0.213*t4191*var2[11]) + var2[5]*(t4270*var2[3] + t3985*var2[4] + (t3818 + t4228 + t4239 - 0.213*t4279 - 0.213*(t3580*(t3875 - 1.*t3560*t4234) + t3546*t4279))*var2[5] + t4148*var2[9] + t4297*var2[10] - 0.213*t4221*var2[11]);
  p_output1[7]=var2[3]*((-0.213*t1219*t4208 - 0.213*(t1219*t3546*t4208 - 1.*t3560*t3580*t4208) + t4362 + t4366)*var2[3] + t4332*var2[4] + t4354*var2[5] + t4384*var2[9] + t4360*var2[10] - 0.213*t4342*var2[11]) + var2[4]*(t4332*var2[3] + (-0.04675*t3385*t3710*t3909 + 0.08*(-1.*t1573*t196*t3710*t3909 - 1.*t3385*t3447*t3710*t3909) + t4508 - 0.213*t4518 - 0.213*(t3580*(t4217 - 1.*t3560*t4516) + t3546*t4518))*var2[4] + t4494*var2[5] + t4452*var2[9] + t4506*var2[10] - 0.213*t4399*var2[11]) + var2[9]*(t4384*var2[3] + t4452*var2[4] + t4463*var2[5] + (0.08*t4403 - 0.213*t1219*t4473 - 0.213*(t1219*t3546*t4473 - 1.*t3560*t3580*t4473))*var2[9] + t4470*var2[10] - 0.213*t4406*var2[11]) + var2[5]*(t4354*var2[3] + t4494*var2[4] + (-0.213*t4214 - 0.213*(t3546*t4214 + t3580*t4219) + t4362 + t4366 + t4508)*var2[5] + t4463*var2[9] + t4541*var2[10] - 0.213*t4417*var2[11]) + var2[11]*(-0.213*t4342*var2[3] - 0.213*t4399*var2[4] - 0.213*t4417*var2[5] - 0.213*t4406*var2[9] - 0.213*t4432*var2[10] - 0.213*(-1.*t3540*(0. + t3560*t4420 + t1219*t4424) - 1.*t3580*(0. + t4428 + t4429))*var2[11]) + var2[10]*(t4360*var2[3] + t4506*var2[4] + t4541*var2[5] + t4470*var2[9] + (-0.213*t4426 - 0.213*(t3580*(-1.*t1219*t4420 + t3560*t4424) + t3546*t4426))*var2[10] - 0.213*t4432*var2[11]);
  p_output1[8]=var2[3]*(t4608 + (t4583 + t4587 - 0.213*t1219*t4590 - 0.213*(t1219*t3546*t4590 - 1.*t3560*t3580*t4590))*var2[3] + t4622*var2[4] + t4581*var2[10] - 0.213*t4575*var2[11]) + var2[9]*(t4608 + t4607*var2[3] + t4647*var2[4] + t4634*var2[10] - 0.213*t4628*var2[11]) + var2[11]*(-0.213*t4575*var2[3] - 0.213*t4686*var2[4] - 0.213*t4628*var2[9] - 0.213*t4666*var2[10] - 0.213*(-1.*t3540*(0. + t1219*t4655 + t3560*t4658) - 1.*t3580*(0. + t4656 + t4659))*var2[11]) + var2[10]*(t4581*var2[3] + t4715*var2[4] + t4634*var2[9] + (-0.213*t4664 - 0.213*(t3580*(t3560*t4655 - 1.*t1219*t4658) + t3546*t4664))*var2[10] - 0.213*t4666*var2[11]) + var2[4]*(t4622*var2[3] + (0.1881*t3710 + t4583 + t4587 - 0.213*t4693 - 0.213*(t3580*(t1219*t3710 - 1.*t3560*t4590) + t3546*t4693))*var2[4] + t4647*var2[9] + t4715*var2[10] - 0.213*t4686*var2[11]);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_hc_1_func.hh"

namespace SymFunction
{

void jj_hc_1_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
