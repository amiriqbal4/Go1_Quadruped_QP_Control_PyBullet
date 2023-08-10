/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:43 GMT-05:00
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
  double t671;
  double t256;
  double t315;
  double t263;
  double t747;
  double t178;
  double t366;
  double t1370;
  double t1406;
  double t1411;
  double t1445;
  double t1851;
  double t2192;
  double t3341;
  double t3457;
  double t3518;
  double t3597;
  double t3638;
  double t111;
  double t3643;
  double t3647;
  double t3717;
  double t3725;
  double t3734;
  double t3743;
  double t3757;
  double t3758;
  double t3668;
  double t3824;
  double t3826;
  double t3827;
  double t3840;
  double t3934;
  double t3937;
  double t3938;
  double t3970;
  double t3980;
  double t3981;
  double t3985;
  double t3989;
  double t3990;
  double t4082;
  double t4084;
  double t4070;
  double t4072;
  double t4077;
  double t4093;
  double t4094;
  double t3644;
  double t3670;
  double t3685;
  double t4191;
  double t4219;
  double t4220;
  double t4221;
  double t4223;
  double t4252;
  double t4253;
  double t4254;
  double t4255;
  double t4256;
  double t4257;
  double t4285;
  double t4286;
  double t4287;
  double t4288;
  double t4289;
  double t4290;
  double t4309;
  double t4310;
  double t4313;
  double t3760;
  double t3761;
  double t3792;
  double t4227;
  double t4343;
  double t4344;
  double t4359;
  double t4360;
  double t4314;
  double t4316;
  double t4317;
  double t4318;
  double t4319;
  double t4320;
  double t4323;
  double t4324;
  double t4371;
  double t4372;
  double t4373;
  double t3802;
  double t3866;
  double t3876;
  double t3877;
  double t3878;
  double t3879;
  double t3884;
  double t3904;
  double t3907;
  double t4207;
  double t4222;
  double t4226;
  double t4228;
  double t4229;
  double t4232;
  double t4243;
  double t4244;
  double t4246;
  double t4247;
  double t4345;
  double t4346;
  double t4348;
  double t4350;
  double t4352;
  double t4353;
  double t4354;
  double t4355;
  double t4432;
  double t4433;
  double t4434;
  double t4435;
  double t4436;
  double t4437;
  double t4468;
  double t4469;
  double t4470;
  double t4471;
  double t4472;
  double t4475;
  double t4078;
  double t4089;
  double t4090;
  double t4091;
  double t4100;
  double t4101;
  double t4109;
  double t4180;
  double t4198;
  double t4202;
  double t4203;
  double t4204;
  double t4331;
  double t4332;
  double t4335;
  double t4337;
  double t4338;
  double t4400;
  double t4401;
  double t4406;
  double t4407;
  double t4408;
  double t4410;
  double t4413;
  double t4415;
  double t4416;
  double t3911;
  double t3991;
  double t4002;
  double t4003;
  double t4027;
  double t4039;
  double t4041;
  double t4055;
  double t4056;
  double t4284;
  double t4292;
  double t4294;
  double t4296;
  double t4301;
  double t4302;
  double t4303;
  double t4304;
  double t4305;
  double t4306;
  double t4307;
  double t4375;
  double t4376;
  double t4379;
  double t4380;
  double t4382;
  double t4383;
  double t4384;
  double t4385;
  double t4387;
  double t4493;
  double t4494;
  double t4495;
  double t4496;
  double t4498;
  double t4499;
  double t4503;
  double t4504;
  double t4506;
  double t4457;
  double t4458;
  double t4463;
  double t4464;
  double t4465;
  double t4466;
  double t4476;
  double t4477;
  double t4478;
  double t4479;
  double t4481;
  double t4482;
  double t4483;
  double t4484;
  double t4485;
  double t4418;
  double t4251;
  double t4264;
  double t4265;
  double t4266;
  double t4268;
  double t4544;
  double t4545;
  double t4443;
  double t4566;
  double t4567;
  double t4568;
  double t4569;
  double t4570;
  double t4575;
  double t4582;
  double t4586;
  double t4587;
  double t4597;
  double t4616;
  double t4617;
  double t4620;
  double t4637;
  double t4639;
  double t4633;
  double t4634;
  double t4635;
  double t4645;
  double t4646;
  double t4576;
  double t4579;
  double t4580;
  double t4687;
  double t4688;
  double t4689;
  double t4730;
  double t4731;
  double t4591;
  double t4592;
  double t4593;
  double t4692;
  double t4758;
  double t4728;
  double t4729;
  double t4732;
  double t4733;
  double t4734;
  double t4735;
  double t4736;
  double t4737;
  double t4787;
  double t4615;
  double t4621;
  double t4622;
  double t4623;
  double t4624;
  double t4625;
  double t4628;
  double t4629;
  double t4630;
  double t4686;
  double t4690;
  double t4691;
  double t4694;
  double t4695;
  double t4696;
  double t4697;
  double t4698;
  double t4699;
  double t4700;
  double t4759;
  double t4760;
  double t4761;
  double t4762;
  double t4763;
  double t4764;
  double t4766;
  double t4767;
  double t4842;
  double t4843;
  double t4846;
  double t4849;
  double t4851;
  double t4596;
  double t4599;
  double t4602;
  double t4603;
  double t4605;
  double t4606;
  double t4607;
  double t4608;
  double t4611;
  double t4703;
  double t4704;
  double t4705;
  double t4706;
  double t4707;
  double t4708;
  double t4710;
  double t4711;
  double t4712;
  double t4713;
  double t4714;
  double t4770;
  double t4772;
  double t4773;
  double t4774;
  double t4775;
  double t4776;
  double t4778;
  double t4780;
  double t4782;
  double t4815;
  double t4816;
  double t4817;
  double t4818;
  double t4819;
  double t4820;
  double t4821;
  double t4824;
  double t4826;
  double t4832;
  double t4833;
  double t4834;
  double t4836;
  double t4716;
  double t4718;
  double t4719;
  double t4720;
  double t4721;
  double t4636;
  double t4641;
  double t4642;
  double t4643;
  double t4647;
  double t4648;
  double t4649;
  double t4671;
  double t4672;
  double t4673;
  double t4679;
  double t4684;
  double t4747;
  double t4748;
  double t4749;
  double t4750;
  double t4753;
  double t4867;
  double t4868;
  double t4869;
  double t4870;
  double t4871;
  double t4872;
  double t4873;
  double t4874;
  double t4803;
  double t4804;
  double t4806;
  double t4808;
  double t4809;
  double t4810;
  double t4812;
  double t4813;
  double t4905;
  double t4906;
  double t4907;
  double t4912;
  double t4913;
  double t4919;
  double t4920;
  double t4921;
  double t4935;
  double t4936;
  double t4931;
  double t4932;
  double t4933;
  double t4940;
  double t4941;
  double t4908;
  double t4909;
  double t4910;
  double t4964;
  double t4965;
  double t4966;
  double t4978;
  double t4979;
  double t4980;
  double t4993;
  double t4994;
  double t4914;
  double t4915;
  double t4916;
  double t4992;
  double t4995;
  double t4996;
  double t4997;
  double t4998;
  double t4999;
  double t5000;
  double t5001;
  double t4983;
  double t5012;
  double t5013;
  double t4918;
  double t4922;
  double t4923;
  double t4924;
  double t4925;
  double t4926;
  double t4927;
  double t4928;
  double t4929;
  double t4977;
  double t4981;
  double t4982;
  double t4984;
  double t4985;
  double t4986;
  double t4987;
  double t4988;
  double t4989;
  double t4990;
  double t5014;
  double t5015;
  double t5016;
  double t5017;
  double t5018;
  double t5019;
  double t5020;
  double t5021;
  double t4963;
  double t4968;
  double t4969;
  double t4970;
  double t5039;
  double t5040;
  double t5041;
  double t4934;
  double t4937;
  double t4938;
  double t4939;
  double t4942;
  double t4943;
  double t4944;
  double t4957;
  double t4958;
  double t4959;
  double t4960;
  double t4961;
  double t5005;
  double t5006;
  double t5007;
  double t5008;
  double t5009;
  double t5028;
  double t5029;
  double t5030;
  double t5031;
  double t5032;
  double t5033;
  double t5034;
  double t5035;
  double t5036;
  t671 = Cos(var1[3]);
  t256 = Cos(var1[5]);
  t315 = Sin(var1[4]);
  t263 = Sin(var1[3]);
  t747 = Sin(var1[5]);
  t178 = Cos(var1[6]);
  t366 = -1.*t256*t263*t315;
  t1370 = t671*t747;
  t1406 = t366 + t1370;
  t1411 = t178*t1406;
  t1445 = t671*t256*t315;
  t1851 = t263*t747;
  t2192 = t1445 + t1851;
  t3341 = Sin(var1[6]);
  t3457 = -1.*t3341;
  t3518 = 0. + t3457;
  t3597 = t2192*t3518;
  t3638 = t1411 + t3597;
  t111 = Cos(var1[8]);
  t3643 = Sin(var1[7]);
  t3647 = Cos(var1[7]);
  t3717 = t256*t263*t315;
  t3725 = -1.*t671*t747;
  t3734 = t3717 + t3725;
  t3743 = -1.*t178*t3734;
  t3757 = -1.*t2192*t3341;
  t3758 = t3743 + t3757;
  t3668 = Sin(var1[8]);
  t3824 = Cos(var1[4]);
  t3826 = t671*t3824*t256*t178;
  t3827 = t3824*t256*t263*t3518;
  t3840 = t3826 + t3827;
  t3934 = t256*t263;
  t3937 = -1.*t671*t315*t747;
  t3938 = t3934 + t3937;
  t3970 = t178*t3938;
  t3980 = -1.*t671*t256;
  t3981 = -1.*t263*t315*t747;
  t3985 = t3980 + t3981;
  t3989 = t3985*t3518;
  t3990 = t3970 + t3989;
  t4082 = t3824*t256;
  t4084 = 0. + t4082;
  t4070 = t178*t2192;
  t4072 = t3734*t3518;
  t4077 = 0. + t4070 + t4072;
  t4093 = t4084*t3647;
  t4094 = -1.*t4077*t3643;
  t3644 = -1.*t111*t3638*t3643;
  t3670 = -1.*t3647*t3638*t3668;
  t3685 = t3644 + t3670;
  t4191 = 0. + t111;
  t4219 = -1.*t3824*t256*t178*t263;
  t4220 = t671*t3824*t256*t3518;
  t4221 = t4219 + t4220;
  t4223 = 0. + t178;
  t4252 = -1.*t671*t256*t315;
  t4253 = -1.*t263*t747;
  t4254 = t4252 + t4253;
  t4255 = t178*t4254;
  t4256 = t1406*t3518;
  t4257 = t4255 + t4256;
  t4285 = t671*t256;
  t4286 = t263*t315*t747;
  t4287 = t4285 + t4286;
  t4288 = t178*t4287;
  t4289 = t3938*t3518;
  t4290 = t4288 + t4289;
  t4309 = -1.*t178*t2192;
  t4310 = -1.*t1406*t3341;
  t4313 = t4309 + t4310;
  t3760 = -1.*t111*t3758*t3643;
  t3761 = -1.*t3647*t3758*t3668;
  t3792 = t3760 + t3761;
  t4227 = -1.*t3824*t256*t263*t3341;
  t4343 = -1.*t671*t3824*t256*t3341;
  t4344 = t4219 + t4343;
  t4359 = t3734*t3341;
  t4360 = t4309 + t4359;
  t4314 = -0.213*t3647*t4313;
  t4316 = t1411 + t3757;
  t4317 = -0.08*t4316;
  t4318 = t3647*t4191*t4313;
  t4319 = -1.*t4313*t3643*t3668;
  t4320 = t4318 + t4319;
  t4323 = -0.213*t4320;
  t4324 = t4314 + t4317 + t4323;
  t4371 = -1.*t178*t3985;
  t4372 = -1.*t3938*t3341;
  t4373 = t4371 + t4372;
  t3802 = -1.*t256*t3647*t315;
  t3866 = -1.*t3840*t3643;
  t3876 = t3802 + t3866;
  t3877 = t111*t3876;
  t3878 = t3647*t3840;
  t3879 = -1.*t256*t315*t3643;
  t3884 = t3878 + t3879;
  t3904 = -1.*t3884*t3668;
  t3907 = t3877 + t3904;
  t4207 = -0.04675*t671*t3824*t256;
  t4222 = -0.213*t3647*t4221;
  t4226 = t671*t3824*t256*t4223;
  t4228 = t4226 + t4227;
  t4229 = -0.08*t4228;
  t4232 = t3647*t4191*t4221;
  t4243 = -1.*t4221*t3643*t3668;
  t4244 = t4232 + t4243;
  t4246 = -0.213*t4244;
  t4247 = t4207 + t4222 + t4229 + t4246;
  t4345 = -0.213*t3647*t4344;
  t4346 = t3826 + t4227;
  t4348 = -0.08*t4346;
  t4350 = t3647*t4191*t4344;
  t4352 = -1.*t4344*t3643*t3668;
  t4353 = t4350 + t4352;
  t4354 = -0.213*t4353;
  t4355 = t4345 + t4348 + t4354;
  t4432 = -1.*t671*t256*t178*t315;
  t4433 = -1.*t256*t263*t315*t3518;
  t4434 = t4432 + t4433;
  t4435 = t3647*t4434;
  t4436 = -1.*t3824*t256*t3643;
  t4437 = t4435 + t4436;
  t4468 = -1.*t671*t3824*t178*t747;
  t4469 = -1.*t3824*t263*t747*t3518;
  t4470 = t4468 + t4469;
  t4471 = t3647*t4470;
  t4472 = t315*t747*t3643;
  t4475 = t4471 + t4472;
  t4078 = -1.*t3647*t4077;
  t4089 = -1.*t4084*t3643;
  t4090 = t4078 + t4089;
  t4091 = t111*t4090;
  t4100 = t4093 + t4094;
  t4101 = -1.*t4100*t3668;
  t4109 = t4091 + t4101;
  t4180 = 0.213*t3638*t3643;
  t4198 = -1.*t4191*t3638*t3643;
  t4202 = t4198 + t3670;
  t4203 = -0.213*t4202;
  t4204 = t4180 + t4203;
  t4331 = 0.213*t3758*t3643;
  t4332 = -1.*t4191*t3758*t3643;
  t4335 = t4332 + t3761;
  t4337 = -0.213*t4335;
  t4338 = t4331 + t4337;
  t4400 = -0.213*t3876;
  t4401 = t4191*t3876;
  t4406 = -1.*t3647*t3840;
  t4407 = t256*t315*t3643;
  t4408 = t4406 + t4407;
  t4410 = t4408*t3668;
  t4413 = t4401 + t4410;
  t4415 = -0.213*t4413;
  t4416 = t4400 + t4415;
  t3911 = -1.*t3824*t3647*t747;
  t3991 = -1.*t3990*t3643;
  t4002 = t3911 + t3991;
  t4003 = t111*t4002;
  t4027 = t3647*t3990;
  t4039 = -1.*t3824*t747*t3643;
  t4041 = t4027 + t4039;
  t4055 = -1.*t4041*t3668;
  t4056 = t4003 + t4055;
  t4284 = -0.04675*t3938;
  t4292 = -0.213*t3647*t4290;
  t4294 = t4223*t3938;
  t4296 = t4287*t3341;
  t4301 = t4294 + t4296;
  t4302 = -0.08*t4301;
  t4303 = t3647*t4191*t4290;
  t4304 = -1.*t4290*t3643*t3668;
  t4305 = t4303 + t4304;
  t4306 = -0.213*t4305;
  t4307 = t4284 + t4292 + t4302 + t4306;
  t4375 = -0.213*t3647*t4373;
  t4376 = -1.*t3985*t3341;
  t4379 = t3970 + t4376;
  t4380 = -0.08*t4379;
  t4382 = t3647*t4191*t4373;
  t4383 = -1.*t4373*t3643*t3668;
  t4384 = t4382 + t4383;
  t4385 = -0.213*t4384;
  t4387 = t4375 + t4380 + t4385;
  t4493 = -0.213*t4002;
  t4494 = t4191*t4002;
  t4495 = -1.*t3647*t3990;
  t4496 = t3824*t747*t3643;
  t4498 = t4495 + t4496;
  t4499 = t4498*t3668;
  t4503 = t4494 + t4499;
  t4504 = -0.213*t4503;
  t4506 = t4493 + t4504;
  t4457 = 0.04675*t3824*t263*t747;
  t4458 = 0.1881*t315*t747;
  t4463 = -1.*t3824*t4223*t263*t747;
  t4464 = -1.*t671*t3824*t747*t3341;
  t4465 = t4463 + t4464;
  t4466 = -0.08*t4465;
  t4476 = -0.213*t4475;
  t4477 = t4191*t4475;
  t4478 = t3647*t315*t747;
  t4479 = -1.*t4470*t3643;
  t4481 = t4478 + t4479;
  t4482 = t4481*t3668;
  t4483 = t4477 + t4482;
  t4484 = -0.213*t4483;
  t4485 = t4457 + t4458 + t4466 + t4476 + t4484;
  t4418 = -0.1881*t3824*t256;
  t4251 = -0.04675*t1406;
  t4264 = t4223*t1406;
  t4265 = t4254*t3341;
  t4266 = t4264 + t4265;
  t4268 = -0.08*t4266;
  t4544 = t3647*t4257;
  t4545 = t4544 + t4436;
  t4443 = -1.*t3824*t256*t3647;
  t4566 = t178*t3985;
  t4567 = -1.*t256*t263;
  t4568 = t671*t315*t747;
  t4569 = t4567 + t4568;
  t4570 = t4569*t3518;
  t4575 = t4566 + t4570;
  t4582 = -1.*t178*t4287;
  t4586 = -1.*t4569*t3341;
  t4587 = t4582 + t4586;
  t4597 = t4070 + t4072;
  t4616 = t671*t3824*t178*t747;
  t4617 = t3824*t263*t747*t3518;
  t4620 = t4616 + t4617;
  t4637 = t3824*t747;
  t4639 = 0. + t4637;
  t4633 = t178*t4569;
  t4634 = t4287*t3518;
  t4635 = 0. + t4633 + t4634;
  t4645 = t3647*t4639;
  t4646 = -1.*t4635*t3643;
  t4576 = -1.*t111*t4575*t3643;
  t4579 = -1.*t3647*t4575*t3668;
  t4580 = t4576 + t4579;
  t4687 = -1.*t3824*t178*t263*t747;
  t4688 = t671*t3824*t747*t3518;
  t4689 = t4687 + t4688;
  t4730 = -1.*t178*t4569;
  t4731 = t4730 + t4376;
  t4591 = -1.*t111*t4587*t3643;
  t4592 = -1.*t3647*t4587*t3668;
  t4593 = t4591 + t4592;
  t4692 = -1.*t3824*t263*t747*t3341;
  t4758 = t4687 + t4464;
  t4728 = t4566 + t4586;
  t4729 = -0.08*t4728;
  t4732 = -0.213*t3647*t4731;
  t4733 = t3647*t4191*t4731;
  t4734 = -1.*t4731*t3643*t3668;
  t4735 = t4733 + t4734;
  t4736 = -0.213*t4735;
  t4737 = t4729 + t4732 + t4736;
  t4787 = t4730 + t4296;
  t4615 = -1.*t3647*t315*t747;
  t4621 = -1.*t4620*t3643;
  t4622 = t4615 + t4621;
  t4623 = t111*t4622;
  t4624 = t3647*t4620;
  t4625 = -1.*t315*t747*t3643;
  t4628 = t4624 + t4625;
  t4629 = -1.*t4628*t3668;
  t4630 = t4623 + t4629;
  t4686 = -0.04675*t671*t3824*t747;
  t4690 = -0.213*t3647*t4689;
  t4691 = t671*t3824*t4223*t747;
  t4694 = t4691 + t4692;
  t4695 = -0.08*t4694;
  t4696 = t3647*t4191*t4689;
  t4697 = -1.*t4689*t3643*t3668;
  t4698 = t4696 + t4697;
  t4699 = -0.213*t4698;
  t4700 = t4686 + t4690 + t4695 + t4699;
  t4759 = -0.213*t3647*t4758;
  t4760 = t4616 + t4692;
  t4761 = -0.08*t4760;
  t4762 = t3647*t4191*t4758;
  t4763 = -1.*t4758*t3643*t3668;
  t4764 = t4762 + t4763;
  t4766 = -0.213*t4764;
  t4767 = t4759 + t4761 + t4766;
  t4842 = -1.*t671*t178*t315*t747;
  t4843 = -1.*t263*t315*t747*t3518;
  t4846 = t4842 + t4843;
  t4849 = t3647*t4846;
  t4851 = t4849 + t4039;
  t4596 = t3824*t256*t3647;
  t4599 = -1.*t4597*t3643;
  t4602 = t4596 + t4599;
  t4603 = t111*t4602;
  t4605 = t3647*t4597;
  t4606 = t3824*t256*t3643;
  t4607 = t4605 + t4606;
  t4608 = -1.*t4607*t3668;
  t4611 = t4603 + t4608;
  t4703 = -0.04675*t2192;
  t4704 = -0.213*t3647*t3638;
  t4705 = t4223*t2192;
  t4706 = t1406*t3341;
  t4707 = t4705 + t4706;
  t4708 = -0.08*t4707;
  t4710 = t3647*t4191*t3638;
  t4711 = -1.*t3638*t3643*t3668;
  t4712 = t4710 + t4711;
  t4713 = -0.213*t4712;
  t4714 = t4703 + t4704 + t4708 + t4713;
  t4770 = -1.*t3734*t3341;
  t4772 = t4070 + t4770;
  t4773 = -0.08*t4772;
  t4774 = -0.213*t3647*t3758;
  t4775 = t3647*t4191*t3758;
  t4776 = -1.*t3758*t3643*t3668;
  t4778 = t4775 + t4776;
  t4780 = -0.213*t4778;
  t4782 = t4773 + t4774 + t4780;
  t4815 = -0.04675*t3824*t256*t263;
  t4816 = -0.1881*t256*t315;
  t4817 = t3824*t256*t4223*t263;
  t4818 = t671*t3824*t256*t3341;
  t4819 = t4817 + t4818;
  t4820 = -0.08*t4819;
  t4821 = -0.213*t3884;
  t4824 = t4191*t3884;
  t4826 = t3876*t3668;
  t4832 = t4824 + t4826;
  t4833 = -0.213*t4832;
  t4834 = t4815 + t4816 + t4820 + t4821 + t4833;
  t4836 = -0.1881*t3824*t747;
  t4716 = -0.04675*t3985;
  t4718 = t4223*t3985;
  t4719 = t3938*t3341;
  t4720 = t4718 + t4719;
  t4721 = -0.08*t4720;
  t4636 = -1.*t3647*t4635;
  t4641 = -1.*t4639*t3643;
  t4642 = t4636 + t4641;
  t4643 = t111*t4642;
  t4647 = t4645 + t4646;
  t4648 = -1.*t4647*t3668;
  t4649 = t4643 + t4648;
  t4671 = 0.213*t4575*t3643;
  t4672 = -1.*t4191*t4575*t3643;
  t4673 = t4672 + t4579;
  t4679 = -0.213*t4673;
  t4684 = t4671 + t4679;
  t4747 = 0.213*t4587*t3643;
  t4748 = -1.*t4191*t4587*t3643;
  t4749 = t4748 + t4592;
  t4750 = -0.213*t4749;
  t4753 = t4747 + t4750;
  t4867 = -0.213*t4602;
  t4868 = t4191*t4602;
  t4869 = -1.*t3647*t4597;
  t4870 = t4869 + t4436;
  t4871 = t4870*t3668;
  t4872 = t4868 + t4871;
  t4873 = -0.213*t4872;
  t4874 = t4867 + t4873;
  t4803 = -0.213*t4622;
  t4804 = t4191*t4622;
  t4806 = -1.*t3647*t4620;
  t4808 = t4806 + t4472;
  t4809 = t4808*t3668;
  t4810 = t4804 + t4809;
  t4812 = -0.213*t4810;
  t4813 = t4803 + t4812;
  t4905 = -1.*t3824*t178*t263;
  t4906 = t671*t3824*t3518;
  t4907 = t4905 + t4906;
  t4912 = -1.*t671*t3824*t3341;
  t4913 = t4905 + t4912;
  t4919 = -1.*t671*t178*t315;
  t4920 = -1.*t263*t315*t3518;
  t4921 = t4919 + t4920;
  t4935 = -1.*t315;
  t4936 = 0. + t4935;
  t4931 = t671*t3824*t178;
  t4932 = t3824*t263*t3518;
  t4933 = 0. + t4931 + t4932;
  t4940 = t3647*t4936;
  t4941 = -1.*t4933*t3643;
  t4908 = -1.*t111*t4907*t3643;
  t4909 = -1.*t3647*t4907*t3668;
  t4910 = t4908 + t4909;
  t4964 = -1.*t671*t3824*t178;
  t4965 = -1.*t3824*t263*t3518;
  t4966 = t4964 + t4965;
  t4978 = t178*t263*t315;
  t4979 = -1.*t671*t315*t3518;
  t4980 = t4978 + t4979;
  t4993 = t3824*t263*t3341;
  t4994 = t4964 + t4993;
  t4914 = -1.*t111*t4913*t3643;
  t4915 = -1.*t3647*t4913*t3668;
  t4916 = t4914 + t4915;
  t4992 = -0.08*t4913;
  t4995 = -0.213*t3647*t4994;
  t4996 = t3647*t4191*t4994;
  t4997 = -1.*t4994*t3643*t3668;
  t4998 = t4996 + t4997;
  t4999 = -0.213*t4998;
  t5000 = t4992 + t4995 + t4999;
  t5001 = var2[6]*t5000;
  t4983 = t263*t315*t3341;
  t5012 = t671*t315*t3341;
  t5013 = t4978 + t5012;
  t4918 = -1.*t3824*t3647;
  t4922 = -1.*t4921*t3643;
  t4923 = t4918 + t4922;
  t4924 = t111*t4923;
  t4925 = t3647*t4921;
  t4926 = -1.*t3824*t3643;
  t4927 = t4925 + t4926;
  t4928 = -1.*t4927*t3668;
  t4929 = t4924 + t4928;
  t4977 = 0.04675*t671*t315;
  t4981 = -0.213*t3647*t4980;
  t4982 = -1.*t671*t4223*t315;
  t4984 = t4982 + t4983;
  t4985 = -0.08*t4984;
  t4986 = t3647*t4191*t4980;
  t4987 = -1.*t4980*t3643*t3668;
  t4988 = t4986 + t4987;
  t4989 = -0.213*t4988;
  t4990 = t4977 + t4981 + t4985 + t4989;
  t5014 = -0.213*t3647*t5013;
  t5015 = t4919 + t4983;
  t5016 = -0.08*t5015;
  t5017 = t3647*t4191*t5013;
  t5018 = -1.*t5013*t3643*t3668;
  t5019 = t5017 + t5018;
  t5020 = -0.213*t5019;
  t5021 = t5014 + t5016 + t5020;
  t4963 = 0.04675*t3824*t263;
  t4968 = -1.*t3824*t4223*t263;
  t4969 = t4968 + t4912;
  t4970 = -0.08*t4969;
  t5039 = t3647*t4966;
  t5040 = t315*t3643;
  t5041 = t5039 + t5040;
  t4934 = -1.*t3647*t4933;
  t4937 = -1.*t4936*t3643;
  t4938 = t4934 + t4937;
  t4939 = t111*t4938;
  t4942 = t4940 + t4941;
  t4943 = -1.*t4942*t3668;
  t4944 = t4939 + t4943;
  t4957 = 0.213*t4907*t3643;
  t4958 = -1.*t4191*t4907*t3643;
  t4959 = t4958 + t4909;
  t4960 = -0.213*t4959;
  t4961 = t4957 + t4960;
  t5005 = 0.213*t4913*t3643;
  t5006 = -1.*t4191*t4913*t3643;
  t5007 = t5006 + t4915;
  t5008 = -0.213*t5007;
  t5009 = t5005 + t5008;
  t5028 = -0.213*t4923;
  t5029 = t4191*t4923;
  t5030 = -1.*t3647*t4921;
  t5031 = t3824*t3643;
  t5032 = t5030 + t5031;
  t5033 = t5032*t3668;
  t5034 = t5029 + t5033;
  t5035 = -0.213*t5034;
  t5036 = t5028 + t5035;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[3]*((t4251 - 0.213*t3647*t4257 - 0.213*(-1.*t3643*t3668*t4257 + t3647*t4191*t4257) + t4268)*var2[3] + t4247*var2[4] + t4307*var2[5] + t4324*var2[6] + t4204*var2[7] - 0.213*t3685*var2[8]) + var2[6]*(t4324*var2[3] + t4355*var2[4] + t4387*var2[5] + (-0.08*t3758 - 0.213*t3647*t4360 - 0.213*(-1.*t3643*t3668*t4360 + t3647*t4191*t4360))*var2[6] + t4338*var2[7] - 0.213*t3792*var2[8]) + var2[4]*(t4247*var2[3] + (0.04675*t256*t263*t315 + t4418 - 0.213*t4437 - 0.213*(t4191*t4437 + t3668*(-1.*t3643*t4434 + t4443)) - 0.08*(-1.*t256*t263*t315*t4223 - 1.*t256*t315*t3341*t671))*var2[4] + t4485*var2[5] + t4355*var2[6] + t4416*var2[7] - 0.213*t3907*var2[8]) + var2[5]*(t4307*var2[3] + t4485*var2[4] + (t4251 + t4268 + t4418 - 0.213*t4545 - 0.213*(t3668*(-1.*t3643*t4257 + t4443) + t4191*t4545))*var2[5] + t4387*var2[6] + t4506*var2[7] - 0.213*t4056*var2[8]) + var2[8]*(-0.213*t3685*var2[3] - 0.213*t3907*var2[4] - 0.213*t4056*var2[5] - 0.213*t3792*var2[6] - 0.213*t4109*var2[7] - 0.213*(-1.*t111*(0. + t3647*t4077 + t3643*t4084) - 1.*t3668*(0. + t4093 + t4094))*var2[8]) + var2[7]*(t4204*var2[3] + t4416*var2[4] + t4506*var2[5] + t4338*var2[6] + (-0.213*t4090 - 0.213*(t3668*(t3643*t4077 - 1.*t3647*t4084) + t4090*t4191))*var2[7] - 0.213*t4109*var2[8]);
  p_output1[7]=var2[3]*((-0.213*t3647*t3990 - 0.213*(-1.*t3643*t3668*t3990 + t3647*t3990*t4191) + t4716 + t4721)*var2[3] + t4700*var2[4] + t4714*var2[5] + t4737*var2[6] + t4684*var2[7] - 0.213*t4580*var2[8]) + var2[6]*(t4737*var2[3] + t4767*var2[4] + t4782*var2[5] + (-0.08*t4587 - 0.213*t3647*t4787 - 0.213*(-1.*t3643*t3668*t4787 + t3647*t4191*t4787))*var2[6] + t4753*var2[7] - 0.213*t4593*var2[8]) + var2[5]*(t4714*var2[3] + t4834*var2[4] + (-0.213*t4041 - 0.213*(t3668*t4002 + t4041*t4191) + t4716 + t4721 + t4836)*var2[5] + t4782*var2[6] + t4874*var2[7] - 0.213*t4611*var2[8]) + var2[4]*(t4700*var2[3] + (t4836 - 0.213*t4851 - 0.213*(t3668*(t3911 - 1.*t3643*t4846) + t4191*t4851) + 0.04675*t263*t315*t747 - 0.08*(-1.*t263*t315*t4223*t747 - 1.*t315*t3341*t671*t747))*var2[4] + t4834*var2[5] + t4767*var2[6] + t4813*var2[7] - 0.213*t4630*var2[8]) + var2[8]*(-0.213*t4580*var2[3] - 0.213*t4630*var2[4] - 0.213*t4611*var2[5] - 0.213*t4593*var2[6] - 0.213*t4649*var2[7] - 0.213*(-1.*t111*(0. + t3647*t4635 + t3643*t4639) - 1.*t3668*(0. + t4645 + t4646))*var2[8]) + var2[7]*(t4684*var2[3] + t4813*var2[4] + t4874*var2[5] + t4753*var2[6] + (-0.213*t4642 - 0.213*(t3668*(t3643*t4635 - 1.*t3647*t4639) + t4191*t4642))*var2[7] - 0.213*t4649*var2[8]);
  p_output1[8]=var2[3]*(t5001 + (t4963 - 0.213*t3647*t4966 - 0.213*(-1.*t3643*t3668*t4966 + t3647*t4191*t4966) + t4970)*var2[3] + t4990*var2[4] + t4961*var2[7] - 0.213*t4910*var2[8]) + var2[6]*(t5001 + t5000*var2[3] + t5021*var2[4] + t5009*var2[7] - 0.213*t4916*var2[8]) + var2[4]*(t4990*var2[3] + (0.1881*t315 + t4963 + t4970 - 0.213*t5041 - 0.213*(t3668*(t315*t3647 - 1.*t3643*t4966) + t4191*t5041))*var2[4] + t5021*var2[6] + t5036*var2[7] - 0.213*t4929*var2[8]) + var2[8]*(-0.213*t4910*var2[3] - 0.213*t4929*var2[4] - 0.213*t4916*var2[6] - 0.213*t4944*var2[7] - 0.213*(-1.*t111*(0. + t3647*t4933 + t3643*t4936) - 1.*t3668*(0. + t4940 + t4941))*var2[8]) + var2[7]*(t4961*var2[3] + t5036*var2[4] + t5009*var2[6] + (-0.213*t4938 - 0.213*(t3668*(t3643*t4933 - 1.*t3647*t4936) + t4191*t4938))*var2[7] - 0.213*t4944*var2[8]);
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

#include "jj_hc_3_func.hh"

namespace SymFunction
{

void jj_hc_3_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
