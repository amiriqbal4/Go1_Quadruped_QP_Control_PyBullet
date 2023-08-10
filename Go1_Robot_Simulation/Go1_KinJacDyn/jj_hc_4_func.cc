/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:46 GMT-05:00
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
  double t82;
  double t212;
  double t321;
  double t755;
  double t543;
  double t768;
  double t493;
  double t555;
  double t625;
  double t664;
  double t894;
  double t954;
  double t1370;
  double t1503;
  double t1787;
  double t3792;
  double t3797;
  double t1911;
  double t2541;
  double t3827;
  double t4002;
  double t4003;
  double t4056;
  double t4027;
  double t4057;
  double t4070;
  double t1338;
  double t4207;
  double t4220;
  double t4222;
  double t4226;
  double t4228;
  double t4229;
  double t4264;
  double t4277;
  double t4282;
  double t4283;
  double t4284;
  double t4285;
  double t4286;
  double t3826;
  double t3876;
  double t3877;
  double t3878;
  double t3907;
  double t3910;
  double t3934;
  double t3970;
  double t4316;
  double t4317;
  double t4318;
  double t4320;
  double t4323;
  double t4324;
  double t4326;
  double t4327;
  double t4328;
  double t4338;
  double t4342;
  double t4345;
  double t4361;
  double t4362;
  double t4363;
  double t4364;
  double t4365;
  double t4331;
  double t4399;
  double t4400;
  double t4401;
  double t4408;
  double t4410;
  double t4413;
  double t4407;
  double t4415;
  double t4416;
  double t4072;
  double t4082;
  double t4091;
  double t4093;
  double t4109;
  double t4112;
  double t4367;
  double t4451;
  double t4452;
  double t4330;
  double t4335;
  double t4471;
  double t4472;
  double t4476;
  double t4477;
  double t4478;
  double t4484;
  double t4485;
  double t4418;
  double t4504;
  double t4506;
  double t387;
  double t1292;
  double t1344;
  double t1411;
  double t1445;
  double t1851;
  double t2841;
  double t3597;
  double t3685;
  double t3687;
  double t4454;
  double t4457;
  double t4458;
  double t4537;
  double t4539;
  double t4542;
  double t4536;
  double t4544;
  double t4546;
  double t4366;
  double t4368;
  double t4369;
  double t4375;
  double t4379;
  double t4380;
  double t4382;
  double t4384;
  double t4603;
  double t4605;
  double t4606;
  double t4602;
  double t4611;
  double t4613;
  double t4265;
  double t4266;
  double t4268;
  double t4271;
  double t4272;
  double t4276;
  double t4288;
  double t4289;
  double t4292;
  double t4294;
  double t4296;
  double t4301;
  double t4302;
  double t4303;
  double t4305;
  double t4417;
  double t4419;
  double t4422;
  double t4423;
  double t4427;
  double t4428;
  double t4435;
  double t4440;
  double t4441;
  double t4503;
  double t4507;
  double t4508;
  double t4509;
  double t4510;
  double t4511;
  double t4513;
  double t4517;
  double t4520;
  double t4596;
  double t4616;
  double t4617;
  double t4622;
  double t4623;
  double t4624;
  double t4630;
  double t4632;
  double t4633;
  double t4634;
  double t4637;
  double t4180;
  double t4534;
  double t4548;
  double t4551;
  double t4552;
  double t4556;
  double t4657;
  double t4659;
  double t4246;
  double t4135;
  double t4150;
  double t4152;
  double t4153;
  double t4162;
  double t4164;
  double t4168;
  double t4173;
  double t4174;
  double t4475;
  double t4481;
  double t4482;
  double t4483;
  double t4486;
  double t4487;
  double t4488;
  double t4568;
  double t4570;
  double t4580;
  double t4581;
  double t4593;
  double t4387;
  double t4389;
  double t4390;
  double t4392;
  double t4397;
  double t4684;
  double t4685;
  double t4686;
  double t4688;
  double t4690;
  double t4691;
  double t4694;
  double t4695;
  double t4696;
  double t4723;
  double t4724;
  double t4725;
  double t4744;
  double t4746;
  double t4747;
  double t4749;
  double t4750;
  double t4753;
  double t4759;
  double t4813;
  double t4814;
  double t4833;
  double t4834;
  double t4835;
  double t4754;
  double t4760;
  double t4809;
  double t4855;
  double t4856;
  double t4863;
  double t4874;
  double t4875;
  double t4878;
  double t4879;
  double t4880;
  double t4884;
  double t4885;
  double t4728;
  double t4900;
  double t4857;
  double t4858;
  double t4859;
  double t4810;
  double t4812;
  double t4815;
  double t4816;
  double t4817;
  double t4818;
  double t4819;
  double t4820;
  double t4951;
  double t4722;
  double t4726;
  double t4727;
  double t4729;
  double t4732;
  double t4733;
  double t4735;
  double t4736;
  double t4737;
  double t4742;
  double t4901;
  double t4902;
  double t4903;
  double t4904;
  double t4906;
  double t4910;
  double t4911;
  double t4916;
  double t4832;
  double t4836;
  double t4837;
  double t4838;
  double t4839;
  double t4840;
  double t4841;
  double t4849;
  double t4852;
  double t5003;
  double t5004;
  double t5005;
  double t5007;
  double t5008;
  double t4962;
  double t4963;
  double t4967;
  double t4969;
  double t4970;
  double t4971;
  double t4972;
  double t4973;
  double t4974;
  double t4975;
  double t4976;
  double t4977;
  double t4862;
  double t4864;
  double t4865;
  double t4866;
  double t4867;
  double t4868;
  double t4870;
  double t4871;
  double t4872;
  double t4762;
  double t4764;
  double t4766;
  double t4767;
  double t4769;
  double t4772;
  double t4773;
  double t4774;
  double t4775;
  double t4778;
  double t4780;
  double t4923;
  double t4924;
  double t4925;
  double t4926;
  double t4929;
  double t4930;
  double t4931;
  double t4932;
  double t4935;
  double t4996;
  double t4791;
  double t4792;
  double t4795;
  double t4796;
  double t4797;
  double t4985;
  double t4986;
  double t4988;
  double t4989;
  double t4990;
  double t4991;
  double t4992;
  double t4993;
  double t4783;
  double t4784;
  double t4785;
  double t4788;
  double t4789;
  double t4944;
  double t4945;
  double t4946;
  double t4947;
  double t4948;
  double t4877;
  double t4881;
  double t4882;
  double t4883;
  double t4886;
  double t4887;
  double t4888;
  double t5026;
  double t5027;
  double t5028;
  double t5029;
  double t5031;
  double t5032;
  double t5033;
  double t5034;
  double t5064;
  double t5065;
  double t5066;
  double t5068;
  double t5082;
  double t5083;
  double t5084;
  double t5078;
  double t5094;
  double t5095;
  double t5104;
  double t5105;
  double t5106;
  double t5092;
  double t5121;
  double t5093;
  double t5096;
  double t5097;
  double t5098;
  double t5099;
  double t5100;
  double t5101;
  double t5102;
  double t5109;
  double t5131;
  double t5132;
  double t5067;
  double t5069;
  double t5120;
  double t5122;
  double t5147;
  double t5148;
  double t5149;
  double t5151;
  double t5152;
  double t5150;
  double t5153;
  double t5134;
  double t5171;
  double t5172;
  double t5077;
  double t5079;
  double t5080;
  double t5081;
  double t5185;
  double t5186;
  double t5187;
  double t5103;
  double t5107;
  double t5108;
  double t5110;
  double t5111;
  double t5112;
  double t5113;
  double t5114;
  double t5115;
  double t5116;
  double t5133;
  double t5135;
  double t5136;
  double t5137;
  double t5138;
  double t5139;
  double t5140;
  double t5141;
  double t5170;
  double t5173;
  double t5174;
  double t5175;
  double t5176;
  double t5177;
  double t5178;
  double t5179;
  double t5180;
  double t5071;
  double t5072;
  double t5073;
  double t5074;
  double t5075;
  double t5124;
  double t5125;
  double t5126;
  double t5127;
  double t5128;
  double t5156;
  double t5157;
  double t5158;
  double t5154;
  double t5155;
  double t5159;
  double t5160;
  double t5201;
  double t5202;
  double t5203;
  double t5204;
  double t5205;
  double t5206;
  double t5207;
  double t5208;
  double t5209;
  t82 = Cos(var1[3]);
  t212 = Cos(var1[4]);
  t321 = Cos(var1[5]);
  t755 = Cos(var1[15]);
  t543 = Sin(var1[15]);
  t768 = Sin(var1[3]);
  t493 = Cos(var1[16]);
  t555 = -1.*t543;
  t625 = 0. + t555;
  t664 = t82*t212*t321*t625;
  t894 = -1.*t755*t212*t321*t768;
  t954 = t664 + t894;
  t1370 = -1.*t212*t321*t543*t768;
  t1503 = Cos(var1[17]);
  t1787 = 0. + t1503;
  t3792 = -1.*t82*t212*t321*t543;
  t3797 = t3792 + t894;
  t1911 = Sin(var1[16]);
  t2541 = Sin(var1[17]);
  t3827 = t755*t82*t212*t321;
  t4002 = t212*t321*t625*t768;
  t4003 = t3827 + t4002;
  t4056 = Sin(var1[4]);
  t4027 = -1.*t1911*t4003;
  t4057 = -1.*t493*t321*t4056;
  t4070 = t4027 + t4057;
  t1338 = 0. + t755;
  t4207 = -1.*t212*t321*t1911;
  t4220 = -1.*t755*t82*t321*t4056;
  t4222 = -1.*t321*t625*t768*t4056;
  t4226 = t4220 + t4222;
  t4228 = t493*t4226;
  t4229 = t4207 + t4228;
  t4264 = Sin(var1[5]);
  t4277 = t1911*t4056*t4264;
  t4282 = -1.*t755*t82*t212*t4264;
  t4283 = -1.*t212*t625*t768*t4264;
  t4284 = t4282 + t4283;
  t4285 = t493*t4284;
  t4286 = t4277 + t4285;
  t3826 = -0.213*t493*t3797;
  t3876 = t3827 + t1370;
  t3877 = 0.08*t3876;
  t3878 = t493*t1787*t3797;
  t3907 = -1.*t1911*t2541*t3797;
  t3910 = t3878 + t3907;
  t3934 = -0.213*t3910;
  t3970 = t3826 + t3877 + t3934;
  t4316 = t321*t768*t4056;
  t4317 = -1.*t82*t4264;
  t4318 = t4316 + t4317;
  t4320 = -1.*t755*t4318;
  t4323 = t82*t321*t4056;
  t4324 = t768*t4264;
  t4326 = t4323 + t4324;
  t4327 = -1.*t543*t4326;
  t4328 = t4320 + t4327;
  t4338 = t543*t4318;
  t4342 = -1.*t755*t4326;
  t4345 = t4338 + t4342;
  t4361 = -1.*t321*t768*t4056;
  t4362 = t82*t4264;
  t4363 = t4361 + t4362;
  t4364 = -1.*t543*t4363;
  t4365 = t4364 + t4342;
  t4331 = -1.*t493*t2541*t4328;
  t4399 = t321*t768;
  t4400 = -1.*t82*t4056*t4264;
  t4401 = t4399 + t4400;
  t4408 = -1.*t82*t321;
  t4410 = -1.*t768*t4056*t4264;
  t4413 = t4408 + t4410;
  t4407 = -1.*t543*t4401;
  t4415 = -1.*t755*t4413;
  t4416 = t4407 + t4415;
  t4072 = t1503*t4070;
  t4082 = t493*t4003;
  t4091 = -1.*t321*t1911*t4056;
  t4093 = t4082 + t4091;
  t4109 = -1.*t2541*t4093;
  t4112 = t4072 + t4109;
  t4367 = t755*t4363;
  t4451 = t625*t4326;
  t4452 = t4367 + t4451;
  t4330 = -1.*t1503*t1911*t4328;
  t4335 = t4330 + t4331;
  t4471 = t212*t321;
  t4472 = 0. + t4471;
  t4476 = t625*t4318;
  t4477 = t755*t4326;
  t4478 = 0. + t4476 + t4477;
  t4484 = t493*t4472;
  t4485 = -1.*t1911*t4478;
  t4418 = t755*t4401;
  t4504 = t625*t4413;
  t4506 = t4418 + t4504;
  t387 = 0.04675*t82*t212*t321;
  t1292 = -0.213*t493*t954;
  t1344 = t1338*t82*t212*t321;
  t1411 = t1344 + t1370;
  t1445 = 0.08*t1411;
  t1851 = t493*t1787*t954;
  t2841 = -1.*t1911*t2541*t954;
  t3597 = t1851 + t2841;
  t3685 = -0.213*t3597;
  t3687 = t387 + t1292 + t1445 + t3685;
  t4454 = -1.*t1503*t1911*t4452;
  t4457 = -1.*t493*t2541*t4452;
  t4458 = t4454 + t4457;
  t4537 = -1.*t82*t321*t4056;
  t4539 = -1.*t768*t4264;
  t4542 = t4537 + t4539;
  t4536 = t625*t4363;
  t4544 = t755*t4542;
  t4546 = t4536 + t4544;
  t4366 = -0.213*t493*t4365;
  t4368 = t4367 + t4327;
  t4369 = 0.08*t4368;
  t4375 = t493*t1787*t4365;
  t4379 = -1.*t1911*t2541*t4365;
  t4380 = t4375 + t4379;
  t4382 = -0.213*t4380;
  t4384 = t4366 + t4369 + t4382;
  t4603 = t82*t321;
  t4605 = t768*t4056*t4264;
  t4606 = t4603 + t4605;
  t4602 = t625*t4401;
  t4611 = t755*t4606;
  t4613 = t4602 + t4611;
  t4265 = -0.04675*t212*t768*t4264;
  t4266 = -0.1881*t4056*t4264;
  t4268 = -1.*t82*t212*t543*t4264;
  t4271 = -1.*t1338*t212*t768*t4264;
  t4272 = t4268 + t4271;
  t4276 = 0.08*t4272;
  t4288 = -0.213*t4286;
  t4289 = t1787*t4286;
  t4292 = t493*t4056*t4264;
  t4294 = -1.*t1911*t4284;
  t4296 = t4292 + t4294;
  t4301 = t2541*t4296;
  t4302 = t4289 + t4301;
  t4303 = -0.213*t4302;
  t4305 = t4265 + t4266 + t4276 + t4288 + t4303;
  t4417 = -0.213*t493*t4416;
  t4419 = -1.*t543*t4413;
  t4422 = t4418 + t4419;
  t4423 = 0.08*t4422;
  t4427 = t493*t1787*t4416;
  t4428 = -1.*t1911*t2541*t4416;
  t4435 = t4427 + t4428;
  t4440 = -0.213*t4435;
  t4441 = t4417 + t4423 + t4440;
  t4503 = -1.*t212*t1911*t4264;
  t4507 = t493*t4506;
  t4508 = t4503 + t4507;
  t4509 = -1.*t2541*t4508;
  t4510 = -1.*t493*t212*t4264;
  t4511 = -1.*t1911*t4506;
  t4513 = t4510 + t4511;
  t4517 = t1503*t4513;
  t4520 = t4509 + t4517;
  t4596 = 0.04675*t4401;
  t4616 = -0.213*t493*t4613;
  t4617 = t1338*t4401;
  t4622 = t543*t4606;
  t4623 = t4617 + t4622;
  t4624 = 0.08*t4623;
  t4630 = t493*t1787*t4613;
  t4632 = -1.*t1911*t2541*t4613;
  t4633 = t4630 + t4632;
  t4634 = -0.213*t4633;
  t4637 = t4596 + t4616 + t4624 + t4634;
  t4180 = 0.1881*t212*t321;
  t4534 = 0.04675*t4363;
  t4548 = t1338*t4363;
  t4551 = t543*t4542;
  t4552 = t4548 + t4551;
  t4556 = 0.08*t4552;
  t4657 = t493*t4546;
  t4659 = t4207 + t4657;
  t4246 = -1.*t493*t212*t321;
  t4135 = -0.213*t4070;
  t4150 = t1787*t4070;
  t4152 = -1.*t493*t4003;
  t4153 = t321*t1911*t4056;
  t4162 = t4152 + t4153;
  t4164 = t2541*t4162;
  t4168 = t4150 + t4164;
  t4173 = -0.213*t4168;
  t4174 = t4135 + t4173;
  t4475 = -1.*t4472*t1911;
  t4481 = -1.*t493*t4478;
  t4482 = t4475 + t4481;
  t4483 = t1503*t4482;
  t4486 = t4484 + t4485;
  t4487 = -1.*t2541*t4486;
  t4488 = t4483 + t4487;
  t4568 = 0.213*t1911*t4452;
  t4570 = -1.*t1787*t1911*t4452;
  t4580 = t4570 + t4457;
  t4581 = -0.213*t4580;
  t4593 = t4568 + t4581;
  t4387 = 0.213*t1911*t4328;
  t4389 = -1.*t1787*t1911*t4328;
  t4390 = t4389 + t4331;
  t4392 = -0.213*t4390;
  t4397 = t4387 + t4392;
  t4684 = -0.213*t4513;
  t4685 = t212*t1911*t4264;
  t4686 = -1.*t493*t4506;
  t4688 = t4685 + t4686;
  t4690 = t2541*t4688;
  t4691 = t1787*t4513;
  t4694 = t4690 + t4691;
  t4695 = -0.213*t4694;
  t4696 = t4684 + t4695;
  t4723 = t82*t212*t625*t4264;
  t4724 = -1.*t755*t212*t768*t4264;
  t4725 = t4723 + t4724;
  t4744 = -1.*t321*t768;
  t4746 = t82*t4056*t4264;
  t4747 = t4744 + t4746;
  t4749 = t625*t4747;
  t4750 = t755*t4413;
  t4753 = t4749 + t4750;
  t4759 = -1.*t493*t2541*t4753;
  t4813 = -1.*t755*t4747;
  t4814 = t4813 + t4419;
  t4833 = t755*t82*t212*t4264;
  t4834 = t212*t625*t768*t4264;
  t4835 = t4833 + t4834;
  t4754 = -1.*t1503*t1911*t4753;
  t4760 = t4754 + t4759;
  t4809 = -1.*t543*t4747;
  t4855 = -1.*t755*t4606;
  t4856 = t4809 + t4855;
  t4863 = t4476 + t4477;
  t4874 = t212*t4264;
  t4875 = 0. + t4874;
  t4878 = t755*t4747;
  t4879 = t625*t4606;
  t4880 = 0. + t4878 + t4879;
  t4884 = t493*t4875;
  t4885 = -1.*t1911*t4880;
  t4728 = -1.*t212*t543*t768*t4264;
  t4900 = t4268 + t4724;
  t4857 = -1.*t1503*t1911*t4856;
  t4858 = -1.*t493*t2541*t4856;
  t4859 = t4857 + t4858;
  t4810 = t4809 + t4750;
  t4812 = 0.08*t4810;
  t4815 = -0.213*t493*t4814;
  t4816 = t493*t1787*t4814;
  t4817 = -1.*t1911*t2541*t4814;
  t4818 = t4816 + t4817;
  t4819 = -0.213*t4818;
  t4820 = t4812 + t4815 + t4819;
  t4951 = t4813 + t4622;
  t4722 = 0.04675*t82*t212*t4264;
  t4726 = -0.213*t493*t4725;
  t4727 = t1338*t82*t212*t4264;
  t4729 = t4727 + t4728;
  t4732 = 0.08*t4729;
  t4733 = t493*t1787*t4725;
  t4735 = -1.*t1911*t2541*t4725;
  t4736 = t4733 + t4735;
  t4737 = -0.213*t4736;
  t4742 = t4722 + t4726 + t4732 + t4737;
  t4901 = -0.213*t493*t4900;
  t4902 = t4833 + t4728;
  t4903 = 0.08*t4902;
  t4904 = t493*t1787*t4900;
  t4906 = -1.*t1911*t2541*t4900;
  t4910 = t4904 + t4906;
  t4911 = -0.213*t4910;
  t4916 = t4901 + t4903 + t4911;
  t4832 = -1.*t1911*t4056*t4264;
  t4836 = t493*t4835;
  t4837 = t4832 + t4836;
  t4838 = -1.*t2541*t4837;
  t4839 = -1.*t493*t4056*t4264;
  t4840 = -1.*t1911*t4835;
  t4841 = t4839 + t4840;
  t4849 = t1503*t4841;
  t4852 = t4838 + t4849;
  t5003 = -1.*t755*t82*t4056*t4264;
  t5004 = -1.*t625*t768*t4056*t4264;
  t5005 = t5003 + t5004;
  t5007 = t493*t5005;
  t5008 = t4503 + t5007;
  t4962 = 0.04675*t212*t321*t768;
  t4963 = t82*t212*t321*t543;
  t4967 = t1338*t212*t321*t768;
  t4969 = t4963 + t4967;
  t4970 = 0.08*t4969;
  t4971 = 0.1881*t321*t4056;
  t4972 = -0.213*t4093;
  t4973 = t2541*t4070;
  t4974 = t1787*t4093;
  t4975 = t4973 + t4974;
  t4976 = -0.213*t4975;
  t4977 = t4962 + t4970 + t4971 + t4972 + t4976;
  t4862 = t212*t321*t1911;
  t4864 = t493*t4863;
  t4865 = t4862 + t4864;
  t4866 = -1.*t2541*t4865;
  t4867 = t493*t212*t321;
  t4868 = -1.*t1911*t4863;
  t4870 = t4867 + t4868;
  t4871 = t1503*t4870;
  t4872 = t4866 + t4871;
  t4762 = 0.04675*t4326;
  t4764 = t543*t4363;
  t4766 = t1338*t4326;
  t4767 = t4764 + t4766;
  t4769 = 0.08*t4767;
  t4772 = -0.213*t493*t4452;
  t4773 = t493*t1787*t4452;
  t4774 = -1.*t1911*t2541*t4452;
  t4775 = t4773 + t4774;
  t4778 = -0.213*t4775;
  t4780 = t4762 + t4769 + t4772 + t4778;
  t4923 = -1.*t543*t4318;
  t4924 = t4923 + t4477;
  t4925 = 0.08*t4924;
  t4926 = -0.213*t493*t4328;
  t4929 = t493*t1787*t4328;
  t4930 = -1.*t1911*t2541*t4328;
  t4931 = t4929 + t4930;
  t4932 = -0.213*t4931;
  t4935 = t4925 + t4926 + t4932;
  t4996 = 0.1881*t212*t4264;
  t4791 = 0.04675*t4413;
  t4792 = t543*t4401;
  t4795 = t1338*t4413;
  t4796 = t4792 + t4795;
  t4797 = 0.08*t4796;
  t4985 = -0.213*t4841;
  t4986 = -1.*t493*t4835;
  t4988 = t4277 + t4986;
  t4989 = t2541*t4988;
  t4990 = t1787*t4841;
  t4991 = t4989 + t4990;
  t4992 = -0.213*t4991;
  t4993 = t4985 + t4992;
  t4783 = 0.213*t1911*t4753;
  t4784 = -1.*t1787*t1911*t4753;
  t4785 = t4784 + t4759;
  t4788 = -0.213*t4785;
  t4789 = t4783 + t4788;
  t4944 = 0.213*t1911*t4856;
  t4945 = -1.*t1787*t1911*t4856;
  t4946 = t4945 + t4858;
  t4947 = -0.213*t4946;
  t4948 = t4944 + t4947;
  t4877 = -1.*t1911*t4875;
  t4881 = -1.*t493*t4880;
  t4882 = t4877 + t4881;
  t4883 = t1503*t4882;
  t4886 = t4884 + t4885;
  t4887 = -1.*t2541*t4886;
  t4888 = t4883 + t4887;
  t5026 = -0.213*t4870;
  t5027 = -1.*t493*t4863;
  t5028 = t4207 + t5027;
  t5029 = t2541*t5028;
  t5031 = t1787*t4870;
  t5032 = t5029 + t5031;
  t5033 = -0.213*t5032;
  t5034 = t5026 + t5033;
  t5064 = t82*t212*t625;
  t5065 = -1.*t755*t212*t768;
  t5066 = t5064 + t5065;
  t5068 = -1.*t493*t2541*t5066;
  t5082 = -1.*t755*t82*t212;
  t5083 = -1.*t212*t625*t768;
  t5084 = t5082 + t5083;
  t5078 = -1.*t82*t212*t543;
  t5094 = t212*t543*t768;
  t5095 = t5082 + t5094;
  t5104 = -1.*t82*t625*t4056;
  t5105 = t755*t768*t4056;
  t5106 = t5104 + t5105;
  t5092 = t5078 + t5065;
  t5121 = -1.*t493*t2541*t5092;
  t5093 = 0.08*t5092;
  t5096 = -0.213*t493*t5095;
  t5097 = t493*t1787*t5095;
  t5098 = -1.*t1911*t2541*t5095;
  t5099 = t5097 + t5098;
  t5100 = -0.213*t5099;
  t5101 = t5093 + t5096 + t5100;
  t5102 = var2[15]*t5101;
  t5109 = t543*t768*t4056;
  t5131 = t82*t543*t4056;
  t5132 = t5131 + t5105;
  t5067 = -1.*t1503*t1911*t5066;
  t5069 = t5067 + t5068;
  t5120 = -1.*t1503*t1911*t5092;
  t5122 = t5120 + t5121;
  t5147 = t755*t82*t212;
  t5148 = t212*t625*t768;
  t5149 = 0. + t5147 + t5148;
  t5151 = -1.*t4056;
  t5152 = 0. + t5151;
  t5150 = -1.*t1911*t5149;
  t5153 = t493*t5152;
  t5134 = -1.*t755*t82*t4056;
  t5171 = -1.*t625*t768*t4056;
  t5172 = t5134 + t5171;
  t5077 = -0.04675*t212*t768;
  t5079 = -1.*t1338*t212*t768;
  t5080 = t5078 + t5079;
  t5081 = 0.08*t5080;
  t5185 = t493*t5084;
  t5186 = t1911*t4056;
  t5187 = t5185 + t5186;
  t5103 = -0.04675*t82*t4056;
  t5107 = -0.213*t493*t5106;
  t5108 = -1.*t1338*t82*t4056;
  t5110 = t5108 + t5109;
  t5111 = 0.08*t5110;
  t5112 = t493*t1787*t5106;
  t5113 = -1.*t1911*t2541*t5106;
  t5114 = t5112 + t5113;
  t5115 = -0.213*t5114;
  t5116 = t5103 + t5107 + t5111 + t5115;
  t5133 = -0.213*t493*t5132;
  t5135 = t5134 + t5109;
  t5136 = 0.08*t5135;
  t5137 = t493*t1787*t5132;
  t5138 = -1.*t1911*t2541*t5132;
  t5139 = t5137 + t5138;
  t5140 = -0.213*t5139;
  t5141 = t5133 + t5136 + t5140;
  t5170 = -1.*t212*t1911;
  t5173 = t493*t5172;
  t5174 = t5170 + t5173;
  t5175 = -1.*t2541*t5174;
  t5176 = -1.*t493*t212;
  t5177 = -1.*t1911*t5172;
  t5178 = t5176 + t5177;
  t5179 = t1503*t5178;
  t5180 = t5175 + t5179;
  t5071 = 0.213*t1911*t5066;
  t5072 = -1.*t1787*t1911*t5066;
  t5073 = t5072 + t5068;
  t5074 = -0.213*t5073;
  t5075 = t5071 + t5074;
  t5124 = 0.213*t1911*t5092;
  t5125 = -1.*t1787*t1911*t5092;
  t5126 = t5125 + t5121;
  t5127 = -0.213*t5126;
  t5128 = t5124 + t5127;
  t5156 = -1.*t493*t5149;
  t5157 = -1.*t1911*t5152;
  t5158 = t5156 + t5157;
  t5154 = t5150 + t5153;
  t5155 = -1.*t2541*t5154;
  t5159 = t1503*t5158;
  t5160 = t5155 + t5159;
  t5201 = -0.213*t5178;
  t5202 = t212*t1911;
  t5203 = -1.*t493*t5172;
  t5204 = t5202 + t5203;
  t5205 = t2541*t5204;
  t5206 = t1787*t5178;
  t5207 = t5205 + t5206;
  t5208 = -0.213*t5207;
  t5209 = t5201 + t5208;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=var2[4]*(t3687*var2[3] + (t4180 - 0.213*t4229 - 0.213*(t1787*t4229 + t2541*(-1.*t1911*t4226 + t4246)) - 0.04675*t321*t4056*t768 + 0.08*(-1.*t1338*t321*t4056*t768 - 1.*t321*t4056*t543*t82))*var2[4] + t4305*var2[5] + t3970*var2[15] + t4174*var2[16] - 0.213*t4112*var2[17]) + var2[15]*(t4384*var2[3] + t3970*var2[4] + t4441*var2[5] + (0.08*t4328 - 0.213*t4345*t493 - 0.213*(-1.*t1911*t2541*t4345 + t1787*t4345*t493))*var2[15] + t4397*var2[16] - 0.213*t4335*var2[17]) + var2[3]*((t4534 + t4556 - 0.213*t4546*t493 - 0.213*(-1.*t1911*t2541*t4546 + t1787*t4546*t493))*var2[3] + t3687*var2[4] + t4637*var2[5] + t4384*var2[15] + t4593*var2[16] - 0.213*t4458*var2[17]) + var2[16]*(t4593*var2[3] + t4174*var2[4] + t4696*var2[5] + t4397*var2[15] + (-0.213*t4482 - 0.213*(t1787*t4482 + t2541*(t1911*t4478 - 1.*t4472*t493)))*var2[16] - 0.213*t4488*var2[17]) + var2[5]*(t4637*var2[3] + t4305*var2[4] + (t4180 + t4534 + t4556 - 0.213*t4659 - 0.213*(t2541*(t4246 - 1.*t1911*t4546) + t1787*t4659))*var2[5] + t4441*var2[15] + t4696*var2[16] - 0.213*t4520*var2[17]) + var2[17]*(-0.213*t4458*var2[3] - 0.213*t4112*var2[4] - 0.213*t4520*var2[5] - 0.213*t4335*var2[15] - 0.213*t4488*var2[16] - 0.213*(-1.*t2541*(0. + t4484 + t4485) - 1.*t1503*(0. + t1911*t4472 + t4478*t493))*var2[17]);
  p_output1[7]=var2[3]*((t4791 + t4797 - 0.213*t4506*t493 - 0.213*(-1.*t1911*t2541*t4506 + t1787*t4506*t493))*var2[3] + t4742*var2[4] + t4780*var2[5] + t4820*var2[15] + t4789*var2[16] - 0.213*t4760*var2[17]) + var2[4]*(t4742*var2[3] + (t4996 - 0.213*t5008 - 0.213*(t2541*(t4510 - 1.*t1911*t5005) + t1787*t5008) - 0.04675*t4056*t4264*t768 + 0.08*(-1.*t1338*t4056*t4264*t768 - 1.*t4056*t4264*t543*t82))*var2[4] + t4977*var2[5] + t4916*var2[15] + t4993*var2[16] - 0.213*t4852*var2[17]) + var2[15]*(t4820*var2[3] + t4916*var2[4] + t4935*var2[5] + (0.08*t4856 - 0.213*t493*t4951 - 0.213*(-1.*t1911*t2541*t4951 + t1787*t493*t4951))*var2[15] + t4948*var2[16] - 0.213*t4859*var2[17]) + var2[5]*(t4780*var2[3] + t4977*var2[4] + (-0.213*t4508 - 0.213*(t1787*t4508 + t2541*t4513) + t4791 + t4797 + t4996)*var2[5] + t4935*var2[15] + t5034*var2[16] - 0.213*t4872*var2[17]) + var2[16]*(t4789*var2[3] + t4993*var2[4] + t5034*var2[5] + t4948*var2[15] + (-0.213*t4882 - 0.213*(t1787*t4882 + t2541*(t1911*t4880 - 1.*t4875*t493)))*var2[16] - 0.213*t4888*var2[17]) + var2[17]*(-0.213*t4760*var2[3] - 0.213*t4852*var2[4] - 0.213*t4872*var2[5] - 0.213*t4859*var2[15] - 0.213*t4888*var2[16] - 0.213*(-1.*t2541*(0. + t4884 + t4885) - 1.*t1503*(0. + t1911*t4875 + t4880*t493))*var2[17]);
  p_output1[8]=var2[3]*(t5102 + (t5077 + t5081 - 0.213*t493*t5084 - 0.213*(-1.*t1911*t2541*t5084 + t1787*t493*t5084))*var2[3] + t5116*var2[4] + t5075*var2[16] - 0.213*t5069*var2[17]) + var2[15]*(t5102 + t5101*var2[3] + t5141*var2[4] + t5128*var2[16] - 0.213*t5122*var2[17]) + var2[17]*(-0.213*t5069*var2[3] - 0.213*t5180*var2[4] - 0.213*t5122*var2[15] - 0.213*t5160*var2[16] - 0.213*(-1.*t1503*(0. + t493*t5149 + t1911*t5152) - 1.*t2541*(0. + t5150 + t5153))*var2[17]) + var2[16]*(t5075*var2[3] + t5209*var2[4] + t5128*var2[15] + (-0.213*t5158 - 0.213*(t2541*(t1911*t5149 - 1.*t493*t5152) + t1787*t5158))*var2[16] - 0.213*t5160*var2[17]) + var2[4]*(t5116*var2[3] + (-0.1881*t4056 + t5077 + t5081 - 0.213*t5187 - 0.213*(t2541*(t4056*t493 - 1.*t1911*t5084) + t1787*t5187))*var2[4] + t5141*var2[15] + t5209*var2[16] - 0.213*t5180*var2[17]);
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

#include "jj_hc_4_func.hh"

namespace SymFunction
{

void jj_hc_4_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
