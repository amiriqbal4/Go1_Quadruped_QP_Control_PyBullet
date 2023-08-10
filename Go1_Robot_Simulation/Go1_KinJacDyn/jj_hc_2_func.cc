/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:38 GMT-05:00
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
  double t200;
  double t365;
  double t612;
  double t1396;
  double t1001;
  double t1421;
  double t838;
  double t1109;
  double t1200;
  double t1370;
  double t1478;
  double t1577;
  double t3446;
  double t3527;
  double t3558;
  double t3649;
  double t3661;
  double t3608;
  double t3613;
  double t3670;
  double t3761;
  double t3764;
  double t3772;
  double t3767;
  double t3788;
  double t3792;
  double t3262;
  double t3959;
  double t3963;
  double t3964;
  double t3966;
  double t3970;
  double t3979;
  double t4029;
  double t4057;
  double t4058;
  double t4060;
  double t4068;
  double t4070;
  double t4072;
  double t3668;
  double t3685;
  double t3687;
  double t3725;
  double t3733;
  double t3734;
  double t3757;
  double t3758;
  double t4112;
  double t4113;
  double t4129;
  double t4131;
  double t4134;
  double t4135;
  double t4137;
  double t4139;
  double t4141;
  double t4153;
  double t4154;
  double t4160;
  double t4197;
  double t4198;
  double t4199;
  double t4200;
  double t4201;
  double t4149;
  double t4232;
  double t4233;
  double t4235;
  double t4237;
  double t4238;
  double t4239;
  double t4236;
  double t4240;
  double t4242;
  double t3797;
  double t3802;
  double t3818;
  double t3820;
  double t3822;
  double t3824;
  double t4203;
  double t4259;
  double t4261;
  double t4148;
  double t4150;
  double t4268;
  double t4269;
  double t4271;
  double t4272;
  double t4273;
  double t4277;
  double t4278;
  double t4244;
  double t4294;
  double t4295;
  double t747;
  double t1851;
  double t3341;
  double t3457;
  double t3518;
  double t3597;
  double t3630;
  double t3638;
  double t3643;
  double t3644;
  double t4262;
  double t4263;
  double t4264;
  double t4311;
  double t4312;
  double t4313;
  double t4310;
  double t4314;
  double t4315;
  double t4202;
  double t4204;
  double t4205;
  double t4207;
  double t4211;
  double t4219;
  double t4220;
  double t4221;
  double t4345;
  double t4346;
  double t4347;
  double t4344;
  double t4348;
  double t4349;
  double t4039;
  double t4041;
  double t4047;
  double t4054;
  double t4055;
  double t4056;
  double t4077;
  double t4078;
  double t4082;
  double t4083;
  double t4084;
  double t4089;
  double t4090;
  double t4091;
  double t4093;
  double t4243;
  double t4245;
  double t4246;
  double t4247;
  double t4248;
  double t4250;
  double t4251;
  double t4252;
  double t4253;
  double t4293;
  double t4296;
  double t4297;
  double t4298;
  double t4299;
  double t4300;
  double t4301;
  double t4302;
  double t4303;
  double t4343;
  double t4350;
  double t4352;
  double t4353;
  double t4354;
  double t4355;
  double t4356;
  double t4358;
  double t4359;
  double t4360;
  double t4361;
  double t3907;
  double t4309;
  double t4317;
  double t4318;
  double t4319;
  double t4320;
  double t4369;
  double t4370;
  double t3982;
  double t3827;
  double t3840;
  double t3852;
  double t3866;
  double t3876;
  double t3877;
  double t3878;
  double t3879;
  double t3884;
  double t4270;
  double t4274;
  double t4275;
  double t4276;
  double t4280;
  double t4281;
  double t4282;
  double t4332;
  double t4333;
  double t4335;
  double t4337;
  double t4338;
  double t4223;
  double t4224;
  double t4226;
  double t4227;
  double t4228;
  double t4384;
  double t4385;
  double t4386;
  double t4387;
  double t4389;
  double t4390;
  double t4392;
  double t4397;
  double t4398;
  double t4437;
  double t4438;
  double t4439;
  double t4453;
  double t4454;
  double t4456;
  double t4457;
  double t4458;
  double t4459;
  double t4462;
  double t4501;
  double t4502;
  double t4513;
  double t4517;
  double t4519;
  double t4461;
  double t4463;
  double t4497;
  double t4530;
  double t4531;
  double t4538;
  double t4548;
  double t4549;
  double t4551;
  double t4552;
  double t4553;
  double t4557;
  double t4558;
  double t4442;
  double t4577;
  double t4532;
  double t4533;
  double t4534;
  double t4498;
  double t4499;
  double t4503;
  double t4504;
  double t4505;
  double t4506;
  double t4507;
  double t4508;
  double t4618;
  double t4436;
  double t4440;
  double t4441;
  double t4443;
  double t4445;
  double t4446;
  double t4447;
  double t4448;
  double t4450;
  double t4451;
  double t4579;
  double t4580;
  double t4581;
  double t4582;
  double t4583;
  double t4586;
  double t4587;
  double t4591;
  double t4512;
  double t4520;
  double t4521;
  double t4522;
  double t4523;
  double t4524;
  double t4525;
  double t4526;
  double t4527;
  double t4674;
  double t4675;
  double t4676;
  double t4679;
  double t4682;
  double t4632;
  double t4633;
  double t4634;
  double t4635;
  double t4636;
  double t4637;
  double t4639;
  double t4641;
  double t4642;
  double t4643;
  double t4645;
  double t4646;
  double t4537;
  double t4539;
  double t4540;
  double t4541;
  double t4542;
  double t4543;
  double t4544;
  double t4545;
  double t4546;
  double t4465;
  double t4466;
  double t4468;
  double t4469;
  double t4470;
  double t4471;
  double t4472;
  double t4474;
  double t4475;
  double t4476;
  double t4477;
  double t4594;
  double t4595;
  double t4596;
  double t4597;
  double t4599;
  double t4600;
  double t4602;
  double t4603;
  double t4605;
  double t4668;
  double t4485;
  double t4486;
  double t4487;
  double t4488;
  double t4489;
  double t4651;
  double t4652;
  double t4653;
  double t4654;
  double t4657;
  double t4659;
  double t4665;
  double t4666;
  double t4479;
  double t4480;
  double t4481;
  double t4482;
  double t4483;
  double t4608;
  double t4609;
  double t4611;
  double t4613;
  double t4615;
  double t4550;
  double t4554;
  double t4555;
  double t4556;
  double t4559;
  double t4560;
  double t4561;
  double t4700;
  double t4701;
  double t4702;
  double t4703;
  double t4704;
  double t4705;
  double t4706;
  double t4707;
  double t4737;
  double t4738;
  double t4739;
  double t4741;
  double t4755;
  double t4756;
  double t4757;
  double t4751;
  double t4767;
  double t4768;
  double t4777;
  double t4778;
  double t4779;
  double t4765;
  double t4794;
  double t4766;
  double t4769;
  double t4770;
  double t4771;
  double t4772;
  double t4773;
  double t4774;
  double t4775;
  double t4782;
  double t4804;
  double t4805;
  double t4740;
  double t4742;
  double t4793;
  double t4795;
  double t4820;
  double t4821;
  double t4822;
  double t4824;
  double t4825;
  double t4823;
  double t4826;
  double t4807;
  double t4844;
  double t4845;
  double t4750;
  double t4752;
  double t4753;
  double t4754;
  double t4858;
  double t4859;
  double t4860;
  double t4776;
  double t4780;
  double t4781;
  double t4783;
  double t4784;
  double t4785;
  double t4786;
  double t4787;
  double t4788;
  double t4789;
  double t4806;
  double t4808;
  double t4809;
  double t4810;
  double t4811;
  double t4812;
  double t4813;
  double t4814;
  double t4843;
  double t4846;
  double t4847;
  double t4848;
  double t4849;
  double t4850;
  double t4851;
  double t4852;
  double t4853;
  double t4744;
  double t4745;
  double t4746;
  double t4747;
  double t4748;
  double t4797;
  double t4798;
  double t4799;
  double t4800;
  double t4801;
  double t4829;
  double t4830;
  double t4831;
  double t4827;
  double t4828;
  double t4832;
  double t4833;
  double t4874;
  double t4875;
  double t4876;
  double t4877;
  double t4878;
  double t4879;
  double t4880;
  double t4881;
  double t4882;
  t200 = Cos(var1[3]);
  t365 = Cos(var1[4]);
  t612 = Cos(var1[5]);
  t1396 = Cos(var1[12]);
  t1001 = Sin(var1[12]);
  t1421 = Sin(var1[3]);
  t838 = Cos(var1[13]);
  t1109 = -1.*t1001;
  t1200 = 0. + t1109;
  t1370 = t200*t365*t612*t1200;
  t1478 = -1.*t1396*t365*t612*t1421;
  t1577 = t1370 + t1478;
  t3446 = -1.*t365*t612*t1001*t1421;
  t3527 = Cos(var1[14]);
  t3558 = 0. + t3527;
  t3649 = -1.*t200*t365*t612*t1001;
  t3661 = t3649 + t1478;
  t3608 = Sin(var1[13]);
  t3613 = Sin(var1[14]);
  t3670 = t1396*t200*t365*t612;
  t3761 = t365*t612*t1200*t1421;
  t3764 = t3670 + t3761;
  t3772 = Sin(var1[4]);
  t3767 = -1.*t3608*t3764;
  t3788 = -1.*t838*t612*t3772;
  t3792 = t3767 + t3788;
  t3262 = 0. + t1396;
  t3959 = -1.*t365*t612*t3608;
  t3963 = -1.*t1396*t200*t612*t3772;
  t3964 = -1.*t612*t1200*t1421*t3772;
  t3966 = t3963 + t3964;
  t3970 = t838*t3966;
  t3979 = t3959 + t3970;
  t4029 = Sin(var1[5]);
  t4057 = t3608*t3772*t4029;
  t4058 = -1.*t1396*t200*t365*t4029;
  t4060 = -1.*t365*t1200*t1421*t4029;
  t4068 = t4058 + t4060;
  t4070 = t838*t4068;
  t4072 = t4057 + t4070;
  t3668 = -0.213*t838*t3661;
  t3685 = t3670 + t3446;
  t3687 = -0.08*t3685;
  t3725 = t838*t3558*t3661;
  t3733 = -1.*t3608*t3613*t3661;
  t3734 = t3725 + t3733;
  t3757 = -0.213*t3734;
  t3758 = t3668 + t3687 + t3757;
  t4112 = t612*t1421*t3772;
  t4113 = -1.*t200*t4029;
  t4129 = t4112 + t4113;
  t4131 = -1.*t1396*t4129;
  t4134 = t200*t612*t3772;
  t4135 = t1421*t4029;
  t4137 = t4134 + t4135;
  t4139 = -1.*t1001*t4137;
  t4141 = t4131 + t4139;
  t4153 = t1001*t4129;
  t4154 = -1.*t1396*t4137;
  t4160 = t4153 + t4154;
  t4197 = -1.*t612*t1421*t3772;
  t4198 = t200*t4029;
  t4199 = t4197 + t4198;
  t4200 = -1.*t1001*t4199;
  t4201 = t4200 + t4154;
  t4149 = -1.*t838*t3613*t4141;
  t4232 = t612*t1421;
  t4233 = -1.*t200*t3772*t4029;
  t4235 = t4232 + t4233;
  t4237 = -1.*t200*t612;
  t4238 = -1.*t1421*t3772*t4029;
  t4239 = t4237 + t4238;
  t4236 = -1.*t1001*t4235;
  t4240 = -1.*t1396*t4239;
  t4242 = t4236 + t4240;
  t3797 = t3527*t3792;
  t3802 = t838*t3764;
  t3818 = -1.*t612*t3608*t3772;
  t3820 = t3802 + t3818;
  t3822 = -1.*t3613*t3820;
  t3824 = t3797 + t3822;
  t4203 = t1396*t4199;
  t4259 = t1200*t4137;
  t4261 = t4203 + t4259;
  t4148 = -1.*t3527*t3608*t4141;
  t4150 = t4148 + t4149;
  t4268 = t365*t612;
  t4269 = 0. + t4268;
  t4271 = t1200*t4129;
  t4272 = t1396*t4137;
  t4273 = 0. + t4271 + t4272;
  t4277 = t838*t4269;
  t4278 = -1.*t3608*t4273;
  t4244 = t1396*t4235;
  t4294 = t1200*t4239;
  t4295 = t4244 + t4294;
  t747 = -0.04675*t200*t365*t612;
  t1851 = -0.213*t838*t1577;
  t3341 = t3262*t200*t365*t612;
  t3457 = t3341 + t3446;
  t3518 = -0.08*t3457;
  t3597 = t838*t3558*t1577;
  t3630 = -1.*t3608*t3613*t1577;
  t3638 = t3597 + t3630;
  t3643 = -0.213*t3638;
  t3644 = t747 + t1851 + t3518 + t3643;
  t4262 = -1.*t3527*t3608*t4261;
  t4263 = -1.*t838*t3613*t4261;
  t4264 = t4262 + t4263;
  t4311 = -1.*t200*t612*t3772;
  t4312 = -1.*t1421*t4029;
  t4313 = t4311 + t4312;
  t4310 = t1200*t4199;
  t4314 = t1396*t4313;
  t4315 = t4310 + t4314;
  t4202 = -0.213*t838*t4201;
  t4204 = t4203 + t4139;
  t4205 = -0.08*t4204;
  t4207 = t838*t3558*t4201;
  t4211 = -1.*t3608*t3613*t4201;
  t4219 = t4207 + t4211;
  t4220 = -0.213*t4219;
  t4221 = t4202 + t4205 + t4220;
  t4345 = t200*t612;
  t4346 = t1421*t3772*t4029;
  t4347 = t4345 + t4346;
  t4344 = t1200*t4235;
  t4348 = t1396*t4347;
  t4349 = t4344 + t4348;
  t4039 = 0.04675*t365*t1421*t4029;
  t4041 = -0.1881*t3772*t4029;
  t4047 = -1.*t200*t365*t1001*t4029;
  t4054 = -1.*t3262*t365*t1421*t4029;
  t4055 = t4047 + t4054;
  t4056 = -0.08*t4055;
  t4077 = -0.213*t4072;
  t4078 = t3558*t4072;
  t4082 = t838*t3772*t4029;
  t4083 = -1.*t3608*t4068;
  t4084 = t4082 + t4083;
  t4089 = t3613*t4084;
  t4090 = t4078 + t4089;
  t4091 = -0.213*t4090;
  t4093 = t4039 + t4041 + t4056 + t4077 + t4091;
  t4243 = -0.213*t838*t4242;
  t4245 = -1.*t1001*t4239;
  t4246 = t4244 + t4245;
  t4247 = -0.08*t4246;
  t4248 = t838*t3558*t4242;
  t4250 = -1.*t3608*t3613*t4242;
  t4251 = t4248 + t4250;
  t4252 = -0.213*t4251;
  t4253 = t4243 + t4247 + t4252;
  t4293 = -1.*t365*t3608*t4029;
  t4296 = t838*t4295;
  t4297 = t4293 + t4296;
  t4298 = -1.*t3613*t4297;
  t4299 = -1.*t838*t365*t4029;
  t4300 = -1.*t3608*t4295;
  t4301 = t4299 + t4300;
  t4302 = t3527*t4301;
  t4303 = t4298 + t4302;
  t4343 = -0.04675*t4235;
  t4350 = -0.213*t838*t4349;
  t4352 = t3262*t4235;
  t4353 = t1001*t4347;
  t4354 = t4352 + t4353;
  t4355 = -0.08*t4354;
  t4356 = t838*t3558*t4349;
  t4358 = -1.*t3608*t3613*t4349;
  t4359 = t4356 + t4358;
  t4360 = -0.213*t4359;
  t4361 = t4343 + t4350 + t4355 + t4360;
  t3907 = 0.1881*t365*t612;
  t4309 = -0.04675*t4199;
  t4317 = t3262*t4199;
  t4318 = t1001*t4313;
  t4319 = t4317 + t4318;
  t4320 = -0.08*t4319;
  t4369 = t838*t4315;
  t4370 = t3959 + t4369;
  t3982 = -1.*t838*t365*t612;
  t3827 = -0.213*t3792;
  t3840 = t3558*t3792;
  t3852 = -1.*t838*t3764;
  t3866 = t612*t3608*t3772;
  t3876 = t3852 + t3866;
  t3877 = t3613*t3876;
  t3878 = t3840 + t3877;
  t3879 = -0.213*t3878;
  t3884 = t3827 + t3879;
  t4270 = -1.*t4269*t3608;
  t4274 = -1.*t838*t4273;
  t4275 = t4270 + t4274;
  t4276 = t3527*t4275;
  t4280 = t4277 + t4278;
  t4281 = -1.*t3613*t4280;
  t4282 = t4276 + t4281;
  t4332 = 0.213*t3608*t4261;
  t4333 = -1.*t3558*t3608*t4261;
  t4335 = t4333 + t4263;
  t4337 = -0.213*t4335;
  t4338 = t4332 + t4337;
  t4223 = 0.213*t3608*t4141;
  t4224 = -1.*t3558*t3608*t4141;
  t4226 = t4224 + t4149;
  t4227 = -0.213*t4226;
  t4228 = t4223 + t4227;
  t4384 = -0.213*t4301;
  t4385 = t365*t3608*t4029;
  t4386 = -1.*t838*t4295;
  t4387 = t4385 + t4386;
  t4389 = t3613*t4387;
  t4390 = t3558*t4301;
  t4392 = t4389 + t4390;
  t4397 = -0.213*t4392;
  t4398 = t4384 + t4397;
  t4437 = t200*t365*t1200*t4029;
  t4438 = -1.*t1396*t365*t1421*t4029;
  t4439 = t4437 + t4438;
  t4453 = -1.*t612*t1421;
  t4454 = t200*t3772*t4029;
  t4456 = t4453 + t4454;
  t4457 = t1200*t4456;
  t4458 = t1396*t4239;
  t4459 = t4457 + t4458;
  t4462 = -1.*t838*t3613*t4459;
  t4501 = -1.*t1396*t4456;
  t4502 = t4501 + t4245;
  t4513 = t1396*t200*t365*t4029;
  t4517 = t365*t1200*t1421*t4029;
  t4519 = t4513 + t4517;
  t4461 = -1.*t3527*t3608*t4459;
  t4463 = t4461 + t4462;
  t4497 = -1.*t1001*t4456;
  t4530 = -1.*t1396*t4347;
  t4531 = t4497 + t4530;
  t4538 = t4271 + t4272;
  t4548 = t365*t4029;
  t4549 = 0. + t4548;
  t4551 = t1396*t4456;
  t4552 = t1200*t4347;
  t4553 = 0. + t4551 + t4552;
  t4557 = t838*t4549;
  t4558 = -1.*t3608*t4553;
  t4442 = -1.*t365*t1001*t1421*t4029;
  t4577 = t4047 + t4438;
  t4532 = -1.*t3527*t3608*t4531;
  t4533 = -1.*t838*t3613*t4531;
  t4534 = t4532 + t4533;
  t4498 = t4497 + t4458;
  t4499 = -0.08*t4498;
  t4503 = -0.213*t838*t4502;
  t4504 = t838*t3558*t4502;
  t4505 = -1.*t3608*t3613*t4502;
  t4506 = t4504 + t4505;
  t4507 = -0.213*t4506;
  t4508 = t4499 + t4503 + t4507;
  t4618 = t4501 + t4353;
  t4436 = -0.04675*t200*t365*t4029;
  t4440 = -0.213*t838*t4439;
  t4441 = t3262*t200*t365*t4029;
  t4443 = t4441 + t4442;
  t4445 = -0.08*t4443;
  t4446 = t838*t3558*t4439;
  t4447 = -1.*t3608*t3613*t4439;
  t4448 = t4446 + t4447;
  t4450 = -0.213*t4448;
  t4451 = t4436 + t4440 + t4445 + t4450;
  t4579 = -0.213*t838*t4577;
  t4580 = t4513 + t4442;
  t4581 = -0.08*t4580;
  t4582 = t838*t3558*t4577;
  t4583 = -1.*t3608*t3613*t4577;
  t4586 = t4582 + t4583;
  t4587 = -0.213*t4586;
  t4591 = t4579 + t4581 + t4587;
  t4512 = -1.*t3608*t3772*t4029;
  t4520 = t838*t4519;
  t4521 = t4512 + t4520;
  t4522 = -1.*t3613*t4521;
  t4523 = -1.*t838*t3772*t4029;
  t4524 = -1.*t3608*t4519;
  t4525 = t4523 + t4524;
  t4526 = t3527*t4525;
  t4527 = t4522 + t4526;
  t4674 = -1.*t1396*t200*t3772*t4029;
  t4675 = -1.*t1200*t1421*t3772*t4029;
  t4676 = t4674 + t4675;
  t4679 = t838*t4676;
  t4682 = t4293 + t4679;
  t4632 = -0.04675*t365*t612*t1421;
  t4633 = t200*t365*t612*t1001;
  t4634 = t3262*t365*t612*t1421;
  t4635 = t4633 + t4634;
  t4636 = -0.08*t4635;
  t4637 = 0.1881*t612*t3772;
  t4639 = -0.213*t3820;
  t4641 = t3613*t3792;
  t4642 = t3558*t3820;
  t4643 = t4641 + t4642;
  t4645 = -0.213*t4643;
  t4646 = t4632 + t4636 + t4637 + t4639 + t4645;
  t4537 = t365*t612*t3608;
  t4539 = t838*t4538;
  t4540 = t4537 + t4539;
  t4541 = -1.*t3613*t4540;
  t4542 = t838*t365*t612;
  t4543 = -1.*t3608*t4538;
  t4544 = t4542 + t4543;
  t4545 = t3527*t4544;
  t4546 = t4541 + t4545;
  t4465 = -0.04675*t4137;
  t4466 = t1001*t4199;
  t4468 = t3262*t4137;
  t4469 = t4466 + t4468;
  t4470 = -0.08*t4469;
  t4471 = -0.213*t838*t4261;
  t4472 = t838*t3558*t4261;
  t4474 = -1.*t3608*t3613*t4261;
  t4475 = t4472 + t4474;
  t4476 = -0.213*t4475;
  t4477 = t4465 + t4470 + t4471 + t4476;
  t4594 = -1.*t1001*t4129;
  t4595 = t4594 + t4272;
  t4596 = -0.08*t4595;
  t4597 = -0.213*t838*t4141;
  t4599 = t838*t3558*t4141;
  t4600 = -1.*t3608*t3613*t4141;
  t4602 = t4599 + t4600;
  t4603 = -0.213*t4602;
  t4605 = t4596 + t4597 + t4603;
  t4668 = 0.1881*t365*t4029;
  t4485 = -0.04675*t4239;
  t4486 = t1001*t4235;
  t4487 = t3262*t4239;
  t4488 = t4486 + t4487;
  t4489 = -0.08*t4488;
  t4651 = -0.213*t4525;
  t4652 = -1.*t838*t4519;
  t4653 = t4057 + t4652;
  t4654 = t3613*t4653;
  t4657 = t3558*t4525;
  t4659 = t4654 + t4657;
  t4665 = -0.213*t4659;
  t4666 = t4651 + t4665;
  t4479 = 0.213*t3608*t4459;
  t4480 = -1.*t3558*t3608*t4459;
  t4481 = t4480 + t4462;
  t4482 = -0.213*t4481;
  t4483 = t4479 + t4482;
  t4608 = 0.213*t3608*t4531;
  t4609 = -1.*t3558*t3608*t4531;
  t4611 = t4609 + t4533;
  t4613 = -0.213*t4611;
  t4615 = t4608 + t4613;
  t4550 = -1.*t3608*t4549;
  t4554 = -1.*t838*t4553;
  t4555 = t4550 + t4554;
  t4556 = t3527*t4555;
  t4559 = t4557 + t4558;
  t4560 = -1.*t3613*t4559;
  t4561 = t4556 + t4560;
  t4700 = -0.213*t4544;
  t4701 = -1.*t838*t4538;
  t4702 = t3959 + t4701;
  t4703 = t3613*t4702;
  t4704 = t3558*t4544;
  t4705 = t4703 + t4704;
  t4706 = -0.213*t4705;
  t4707 = t4700 + t4706;
  t4737 = t200*t365*t1200;
  t4738 = -1.*t1396*t365*t1421;
  t4739 = t4737 + t4738;
  t4741 = -1.*t838*t3613*t4739;
  t4755 = -1.*t1396*t200*t365;
  t4756 = -1.*t365*t1200*t1421;
  t4757 = t4755 + t4756;
  t4751 = -1.*t200*t365*t1001;
  t4767 = t365*t1001*t1421;
  t4768 = t4755 + t4767;
  t4777 = -1.*t200*t1200*t3772;
  t4778 = t1396*t1421*t3772;
  t4779 = t4777 + t4778;
  t4765 = t4751 + t4738;
  t4794 = -1.*t838*t3613*t4765;
  t4766 = -0.08*t4765;
  t4769 = -0.213*t838*t4768;
  t4770 = t838*t3558*t4768;
  t4771 = -1.*t3608*t3613*t4768;
  t4772 = t4770 + t4771;
  t4773 = -0.213*t4772;
  t4774 = t4766 + t4769 + t4773;
  t4775 = var2[12]*t4774;
  t4782 = t1001*t1421*t3772;
  t4804 = t200*t1001*t3772;
  t4805 = t4804 + t4778;
  t4740 = -1.*t3527*t3608*t4739;
  t4742 = t4740 + t4741;
  t4793 = -1.*t3527*t3608*t4765;
  t4795 = t4793 + t4794;
  t4820 = t1396*t200*t365;
  t4821 = t365*t1200*t1421;
  t4822 = 0. + t4820 + t4821;
  t4824 = -1.*t3772;
  t4825 = 0. + t4824;
  t4823 = -1.*t3608*t4822;
  t4826 = t838*t4825;
  t4807 = -1.*t1396*t200*t3772;
  t4844 = -1.*t1200*t1421*t3772;
  t4845 = t4807 + t4844;
  t4750 = 0.04675*t365*t1421;
  t4752 = -1.*t3262*t365*t1421;
  t4753 = t4751 + t4752;
  t4754 = -0.08*t4753;
  t4858 = t838*t4757;
  t4859 = t3608*t3772;
  t4860 = t4858 + t4859;
  t4776 = 0.04675*t200*t3772;
  t4780 = -0.213*t838*t4779;
  t4781 = -1.*t3262*t200*t3772;
  t4783 = t4781 + t4782;
  t4784 = -0.08*t4783;
  t4785 = t838*t3558*t4779;
  t4786 = -1.*t3608*t3613*t4779;
  t4787 = t4785 + t4786;
  t4788 = -0.213*t4787;
  t4789 = t4776 + t4780 + t4784 + t4788;
  t4806 = -0.213*t838*t4805;
  t4808 = t4807 + t4782;
  t4809 = -0.08*t4808;
  t4810 = t838*t3558*t4805;
  t4811 = -1.*t3608*t3613*t4805;
  t4812 = t4810 + t4811;
  t4813 = -0.213*t4812;
  t4814 = t4806 + t4809 + t4813;
  t4843 = -1.*t365*t3608;
  t4846 = t838*t4845;
  t4847 = t4843 + t4846;
  t4848 = -1.*t3613*t4847;
  t4849 = -1.*t838*t365;
  t4850 = -1.*t3608*t4845;
  t4851 = t4849 + t4850;
  t4852 = t3527*t4851;
  t4853 = t4848 + t4852;
  t4744 = 0.213*t3608*t4739;
  t4745 = -1.*t3558*t3608*t4739;
  t4746 = t4745 + t4741;
  t4747 = -0.213*t4746;
  t4748 = t4744 + t4747;
  t4797 = 0.213*t3608*t4765;
  t4798 = -1.*t3558*t3608*t4765;
  t4799 = t4798 + t4794;
  t4800 = -0.213*t4799;
  t4801 = t4797 + t4800;
  t4829 = -1.*t838*t4822;
  t4830 = -1.*t3608*t4825;
  t4831 = t4829 + t4830;
  t4827 = t4823 + t4826;
  t4828 = -1.*t3613*t4827;
  t4832 = t3527*t4831;
  t4833 = t4828 + t4832;
  t4874 = -0.213*t4851;
  t4875 = t365*t3608;
  t4876 = -1.*t838*t4845;
  t4877 = t4875 + t4876;
  t4878 = t3613*t4877;
  t4879 = t3558*t4851;
  t4880 = t4878 + t4879;
  t4881 = -0.213*t4880;
  t4882 = t4874 + t4881;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[4]*(t3644*var2[3] + (t3907 - 0.213*t3979 - 0.213*(t3558*t3979 + t3613*(-1.*t3608*t3966 + t3982)) + 0.04675*t1421*t3772*t612 - 0.08*(-1.*t1001*t200*t3772*t612 - 1.*t1421*t3262*t3772*t612))*var2[4] + t4093*var2[5] + t3758*var2[12] + t3884*var2[13] - 0.213*t3824*var2[14]) + var2[12]*(t4221*var2[3] + t3758*var2[4] + t4253*var2[5] + (-0.08*t4141 - 0.213*t4160*t838 - 0.213*(-1.*t3608*t3613*t4160 + t3558*t4160*t838))*var2[12] + t4228*var2[13] - 0.213*t4150*var2[14]) + var2[3]*((t4309 + t4320 - 0.213*t4315*t838 - 0.213*(-1.*t3608*t3613*t4315 + t3558*t4315*t838))*var2[3] + t3644*var2[4] + t4361*var2[5] + t4221*var2[12] + t4338*var2[13] - 0.213*t4264*var2[14]) + var2[13]*(t4338*var2[3] + t3884*var2[4] + t4398*var2[5] + t4228*var2[12] + (-0.213*t4275 - 0.213*(t3558*t4275 + t3613*(t3608*t4273 - 1.*t4269*t838)))*var2[13] - 0.213*t4282*var2[14]) + var2[5]*(t4361*var2[3] + t4093*var2[4] + (t3907 + t4309 + t4320 - 0.213*t4370 - 0.213*(t3613*(t3982 - 1.*t3608*t4315) + t3558*t4370))*var2[5] + t4253*var2[12] + t4398*var2[13] - 0.213*t4303*var2[14]) + var2[14]*(-0.213*t4264*var2[3] - 0.213*t3824*var2[4] - 0.213*t4303*var2[5] - 0.213*t4150*var2[12] - 0.213*t4282*var2[13] - 0.213*(-1.*t3613*(0. + t4277 + t4278) - 1.*t3527*(0. + t3608*t4269 + t4273*t838))*var2[14]);
  p_output1[7]=var2[3]*((t4485 + t4489 - 0.213*t4295*t838 - 0.213*(-1.*t3608*t3613*t4295 + t3558*t4295*t838))*var2[3] + t4451*var2[4] + t4477*var2[5] + t4508*var2[12] + t4483*var2[13] - 0.213*t4463*var2[14]) + var2[4]*(t4451*var2[3] + (0.04675*t1421*t3772*t4029 - 0.08*(-1.*t1001*t200*t3772*t4029 - 1.*t1421*t3262*t3772*t4029) + t4668 - 0.213*t4682 - 0.213*(t3613*(t4299 - 1.*t3608*t4676) + t3558*t4682))*var2[4] + t4646*var2[5] + t4591*var2[12] + t4666*var2[13] - 0.213*t4527*var2[14]) + var2[12]*(t4508*var2[3] + t4591*var2[4] + t4605*var2[5] + (-0.08*t4531 - 0.213*t4618*t838 - 0.213*(-1.*t3608*t3613*t4618 + t3558*t4618*t838))*var2[12] + t4615*var2[13] - 0.213*t4534*var2[14]) + var2[5]*(t4477*var2[3] + t4646*var2[4] + (-0.213*t4297 - 0.213*(t3558*t4297 + t3613*t4301) + t4485 + t4489 + t4668)*var2[5] + t4605*var2[12] + t4707*var2[13] - 0.213*t4546*var2[14]) + var2[13]*(t4483*var2[3] + t4666*var2[4] + t4707*var2[5] + t4615*var2[12] + (-0.213*t4555 - 0.213*(t3558*t4555 + t3613*(t3608*t4553 - 1.*t4549*t838)))*var2[13] - 0.213*t4561*var2[14]) + var2[14]*(-0.213*t4463*var2[3] - 0.213*t4527*var2[4] - 0.213*t4546*var2[5] - 0.213*t4534*var2[12] - 0.213*t4561*var2[13] - 0.213*(-1.*t3613*(0. + t4557 + t4558) - 1.*t3527*(0. + t3608*t4549 + t4553*t838))*var2[14]);
  p_output1[8]=var2[3]*(t4775 + (t4750 + t4754 - 0.213*t4757*t838 - 0.213*(-1.*t3608*t3613*t4757 + t3558*t4757*t838))*var2[3] + t4789*var2[4] + t4748*var2[13] - 0.213*t4742*var2[14]) + var2[12]*(t4775 + t4774*var2[3] + t4814*var2[4] + t4801*var2[13] - 0.213*t4795*var2[14]) + var2[13]*(t4748*var2[3] + t4882*var2[4] + t4801*var2[12] + (-0.213*t4831 - 0.213*(t3558*t4831 + t3613*(t3608*t4822 - 1.*t4825*t838)))*var2[13] - 0.213*t4833*var2[14]) + var2[4]*(t4789*var2[3] + (-0.1881*t3772 + t4750 + t4754 - 0.213*t4860 - 0.213*(t3558*t4860 + t3613*(-1.*t3608*t4757 + t3772*t838)))*var2[4] + t4814*var2[12] + t4882*var2[13] - 0.213*t4853*var2[14]) + var2[14]*(-0.213*t4742*var2[3] - 0.213*t4853*var2[4] - 0.213*t4795*var2[12] - 0.213*t4833*var2[13] - 0.213*(-1.*t3613*(0. + t4823 + t4826) - 1.*t3527*(0. + t3608*t4825 + t4822*t838))*var2[14]);
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

#include "jj_hc_2_func.hh"

namespace SymFunction
{

void jj_hc_2_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
