/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:29:32 GMT-05:00
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
  double t379;
  double t344;
  double t367;
  double t386;
  double t373;
  double t412;
  double t417;
  double t430;
  double t304;
  double t277;
  double t431;
  double t432;
  double t440;
  double t249;
  double t516;
  double t521;
  double t525;
  double t530;
  double t709;
  double t725;
  double t731;
  double t428;
  double t444;
  double t463;
  double t528;
  double t536;
  double t559;
  double t567;
  double t580;
  double t610;
  double t756;
  double t774;
  double t807;
  double t859;
  double t871;
  double t881;
  double t884;
  double t891;
  double t901;
  double t1106;
  double t1109;
  double t1117;
  double t1125;
  double t1130;
  double t1137;
  double t1219;
  double t1262;
  double t1270;
  double t1349;
  double t1361;
  double t1330;
  double t1365;
  double t1406;
  double t1441;
  double t1450;
  double t1455;
  double t1464;
  double t1473;
  double t1480;
  double t1494;
  double t1502;
  double t1503;
  double t1318;
  double t1509;
  double t1516;
  double t1525;
  double t1545;
  double t1547;
  double t1550;
  double t1553;
  double t1582;
  double t1583;
  double t1587;
  double t1593;
  double t1597;
  double t1623;
  double t1624;
  double t1628;
  double t1683;
  double t1685;
  double t1868;
  double t1871;
  double t1836;
  double t1852;
  double t1867;
  double t1794;
  double t1804;
  double t1818;
  double t1929;
  double t1878;
  double t1949;
  double t1950;
  double t1956;
  double t1522;
  double t1691;
  double t1727;
  double t1973;
  double t1974;
  double t1979;
  double t1901;
  double t1907;
  double t1926;
  double t2106;
  double t2107;
  double t2111;
  double t2266;
  double t2269;
  double t2304;
  double t2308;
  double t2316;
  double t2325;
  double t1985;
  double t2558;
  double t2559;
  double t2561;
  double t2541;
  double t2055;
  double t2145;
  double t2163;
  double t1966;
  double t1972;
  double t1995;
  double t2545;
  double t2569;
  double t2060;
  double t2062;
  double t2066;
  double t2585;
  double t2608;
  double t2140;
  double t2142;
  double t2148;
  double t2633;
  double t2649;
  double t2168;
  double t2169;
  double t2171;
  double t2735;
  double t2765;
  double t3111;
  double t3113;
  double t3118;
  double t3136;
  double t3153;
  double t3158;
  double t3263;
  double t3305;
  double t3306;
  double t3315;
  double t3346;
  double t3350;
  double t2505;
  double t2510;
  double t2536;
  double t3544;
  double t3595;
  double t2620;
  double t2621;
  double t2622;
  double t2674;
  double t2676;
  double t2678;
  double t3696;
  double t3715;
  double t3356;
  double t3469;
  double t2722;
  double t2723;
  double t2725;
  double t3026;
  double t3031;
  double t3050;
  double t3064;
  double t3065;
  double t3080;
  double t3902;
  double t3907;
  double t3911;
  double t3706;
  double t3728;
  double t3754;
  double t3761;
  double t3951;
  double t3956;
  double t3957;
  double t3933;
  double t3937;
  double t3938;
  double t3979;
  double t3980;
  double t3983;
  double t3803;
  double t3831;
  double t3851;
  double t3852;
  double t4163;
  double t4165;
  double t4168;
  double t3279;
  double t3294;
  double t3297;
  double t4255;
  double t4257;
  double t4260;
  double t4267;
  double t3510;
  double t3513;
  double t3514;
  double t4250;
  double t4272;
  double t4234;
  double t4182;
  double t4184;
  double t4185;
  double t975;
  double t982;
  double t987;
  double t4389;
  double t4410;
  double t4416;
  double t4429;
  double t4431;
  double t4433;
  double t4271;
  double t4511;
  double t4513;
  double t4515;
  double t4518;
  double t4520;
  double t4524;
  double t4315;
  double t4181;
  double t4189;
  double t4191;
  double t4517;
  double t4545;
  double t4554;
  double t4681;
  double t4683;
  double t4684;
  double t4659;
  double t4665;
  double t4669;
  double t4587;
  double t4605;
  double t4607;
  double t4863;
  double t4865;
  double t4824;
  double t4849;
  double t4850;
  double t4154;
  double t4158;
  double t4161;
  double t4169;
  double t4170;
  double t4175;
  double t4176;
  double t4178;
  double t4180;
  double t4192;
  double t4200;
  double t4203;
  double t4206;
  double t4207;
  double t4212;
  double t4214;
  double t4217;
  double t4287;
  double t4954;
  double t4965;
  double t4966;
  double t4303;
  double t4320;
  double t4922;
  double t4936;
  double t4945;
  double t4329;
  double t4330;
  double t4377;
  double t4380;
  double t4385;
  double t4387;
  double t4427;
  double t4438;
  double t4439;
  double t4442;
  double t4443;
  double t4448;
  double t4461;
  double t4463;
  double t4464;
  double t4467;
  double t4475;
  double t4484;
  double t4495;
  double t4500;
  double t4502;
  double t4507;
  double t4539;
  double t4968;
  double t4541;
  double t5037;
  double t5038;
  double t5043;
  double t5026;
  double t5027;
  double t5028;
  double t4601;
  double t4986;
  double t4602;
  double t4614;
  double t4647;
  double t4651;
  double t4653;
  double t5046;
  double t5052;
  double t4701;
  double t4705;
  double t5151;
  double t5154;
  double t5160;
  double t5138;
  double t5145;
  double t5146;
  double t5076;
  double t4759;
  double t5096;
  double t4769;
  double t4774;
  t379 = Cos(var1[7]);
  t344 = Cos(var1[8]);
  t367 = Sin(var1[7]);
  t386 = Sin(var1[8]);
  t373 = -1.*t344*t367;
  t412 = -1.*t379*t386;
  t417 = t373 + t412;
  t430 = Sin(var1[5]);
  t304 = Sin(var1[6]);
  t277 = Cos(var1[5]);
  t431 = t379*t344;
  t432 = -1.*t367*t386;
  t440 = t431 + t432;
  t249 = Sin(var1[3]);
  t516 = Cos(var1[3]);
  t521 = Cos(var1[4]);
  t525 = Cos(var1[6]);
  t530 = Sin(var1[4]);
  t709 = t344*t367;
  t725 = t379*t386;
  t731 = t709 + t725;
  t428 = -1.*t277*t304*t417;
  t444 = t430*t440;
  t463 = t428 + t444;
  t528 = t521*t525*t417;
  t536 = t430*t304*t417;
  t559 = t277*t440;
  t567 = t536 + t559;
  t580 = -1.*t530*t567;
  t610 = t528 + t580;
  t756 = t430*t731;
  t774 = -1.*t277*t304*t440;
  t807 = t756 + t774;
  t859 = t521*t525*t440;
  t871 = t277*t731;
  t881 = t430*t304*t440;
  t884 = t871 + t881;
  t891 = -1.*t530*t884;
  t901 = t859 + t891;
  t1106 = -1.*t525*t530*t417;
  t1109 = -1.*t521*t567;
  t1117 = t1106 + t1109;
  t1125 = -1.*t525*t530*t440;
  t1130 = -1.*t521*t884;
  t1137 = t1125 + t1130;
  t1219 = t525*t530*t430;
  t1262 = t521*t304;
  t1270 = t1219 + t1262;
  t1349 = -1.*t344;
  t1361 = 1. + t1349;
  t1330 = 0.1881*t367;
  t1365 = 0.1881*t1361;
  t1406 = 0.194386*t344;
  t1441 = -0.12226899999999999*t386;
  t1450 = t1365 + t1406 + t1441;
  t1455 = -1.*t367*t1450;
  t1464 = -0.213*t1361;
  t1473 = -0.335269*t344;
  t1480 = -0.006286*t386;
  t1494 = t1464 + t1473 + t1480;
  t1502 = t379*t1494;
  t1503 = 0. + t1330 + t1455 + t1502;
  t1318 = -0.078693*t304;
  t1509 = t525*t1503;
  t1516 = 0. + t1318 + t1509;
  t1525 = -1.*t525;
  t1545 = 1. + t1525;
  t1547 = -0.04675*t1545;
  t1550 = -0.125443*t525;
  t1553 = -1.*t304*t1503;
  t1582 = t1547 + t1550 + t1553;
  t1583 = -1.*t430*t1582;
  t1587 = -1.*t379;
  t1593 = 1. + t1587;
  t1597 = 0.1881*t1593;
  t1623 = t379*t1450;
  t1624 = t367*t1494;
  t1628 = 0. + t1597 + t1623 + t1624;
  t1683 = t277*t1628;
  t1685 = 0. + t1583 + t1683;
  t1868 = t521*t1516;
  t1871 = -1.*t530*t1685;
  t1836 = -1.*t521*t525*t430;
  t1852 = t530*t304;
  t1867 = t1836 + t1852;
  t1794 = t530*t1516;
  t1804 = t521*t1685;
  t1818 = 0. + t1794 + t1804;
  t1929 = 0. + t1868 + t1871;
  t1878 = t1868 + t1871;
  t1949 = t525*t530*t417;
  t1950 = t521*t567;
  t1956 = t1949 + t1950;
  t1522 = -1.*t530*t1516;
  t1691 = -1.*t521*t1685;
  t1727 = t1522 + t1691;
  t1973 = t277*t1582;
  t1974 = t430*t1628;
  t1979 = 0. + t1973 + t1974;
  t1901 = t521*t525*t430;
  t1907 = -1.*t530*t304;
  t1926 = t1901 + t1907;
  t2106 = t525*t530*t440;
  t2107 = t521*t884;
  t2111 = t2106 + t2107;
  t2266 = t277*t304*t417;
  t2269 = -1.*t430*t440;
  t2304 = t2266 + t2269;
  t2308 = -1.*t430*t731;
  t2316 = t277*t304*t440;
  t2325 = t2308 + t2316;
  t1985 = t277*t525*t1979;
  t2558 = -1.*t277*t1582;
  t2559 = -1.*t430*t1628;
  t2561 = t2558 + t2559;
  t2541 = t1583 + t1683;
  t2055 = -1.*t1979*t463;
  t2145 = -1.*t277*t525*t1979;
  t2163 = t1979*t807;
  t1966 = t1867*t1818;
  t1972 = t1270*t1929;
  t1995 = t1966 + t1972 + t1985;
  t2545 = t277*t525*t2541;
  t2569 = -1.*t525*t430*t1979;
  t2060 = -1.*t1818*t1956;
  t2062 = -1.*t1929*t610;
  t2066 = t2055 + t2060 + t2062;
  t2585 = -1.*t1979*t567;
  t2608 = -1.*t2541*t463;
  t2140 = -1.*t1867*t1818;
  t2142 = -1.*t1270*t1929;
  t2148 = t2140 + t2142 + t2145;
  t2633 = -1.*t277*t525*t2541;
  t2649 = t525*t430*t1979;
  t2168 = t1818*t2111;
  t2169 = t1929*t901;
  t2171 = t2163 + t2168 + t2169;
  t2735 = t2541*t807;
  t2765 = t1979*t884;
  t3111 = -1.*t525*t530*t430*t417;
  t3113 = -1.*t521*t304*t417;
  t3118 = t3111 + t3113;
  t3136 = -1.*t525*t530*t430*t440;
  t3153 = -1.*t521*t304*t440;
  t3158 = t3136 + t3153;
  t3263 = t1318 + t1509;
  t3305 = 0.078693*t304;
  t3306 = -1.*t525*t1503;
  t3315 = t3305 + t3306;
  t3346 = -0.078693*t525;
  t3350 = t3346 + t1553;
  t2505 = t304*t1516;
  t2510 = -1.*t525*t430*t1685;
  t2536 = t2505 + t2510 + t1985;
  t3544 = t304*t3350;
  t3595 = -1.*t525*t3350*t417;
  t2620 = -1.*t525*t1516*t417;
  t2621 = -1.*t1685*t567;
  t2622 = t2620 + t2621 + t2055;
  t2674 = -1.*t304*t1516;
  t2676 = t525*t430*t1685;
  t2678 = t2674 + t2676 + t2145;
  t3696 = Power(t277,2);
  t3715 = Power(t430,2);
  t3356 = -1.*t304*t3350;
  t3469 = t525*t3350*t440;
  t2722 = t525*t1516*t440;
  t2723 = t1685*t884;
  t2725 = t2722 + t2163 + t2723;
  t3026 = t521*t525*t430*t417;
  t3031 = -1.*t530*t304*t417;
  t3050 = t3026 + t3031;
  t3064 = t521*t525*t430*t440;
  t3065 = -1.*t530*t304*t440;
  t3080 = t3064 + t3065;
  t3902 = t525*t530;
  t3907 = t521*t430*t304;
  t3911 = t3902 + t3907;
  t3706 = t3696*t525*t3315;
  t3728 = -1.*t277*t304*t1979;
  t3754 = t277*t525*t1979*t417;
  t3761 = -1.*t277*t3315*t463;
  t3951 = -1.*t521*t430*t3315;
  t3956 = t530*t3350;
  t3957 = t3951 + t3956;
  t3933 = t530*t430*t3315;
  t3937 = t521*t3350;
  t3938 = t3933 + t3937;
  t3979 = t521*t525;
  t3980 = -1.*t530*t430*t304;
  t3983 = t3979 + t3980;
  t3803 = -1.*t3696*t525*t3315;
  t3831 = t277*t304*t1979;
  t3851 = -1.*t277*t525*t1979*t440;
  t3852 = t277*t3315*t807;
  t4163 = -1.*t379*t344;
  t4165 = t367*t386;
  t4168 = t4163 + t4165;
  t3279 = -1.*t304*t3263;
  t3294 = -1.*t525*t1582;
  t3297 = t3279 + t3294;
  t4255 = 0.1881*t379;
  t4257 = -1.*t379*t1450;
  t4260 = -1.*t367*t1494;
  t4267 = t4255 + t4257 + t4260;
  t3510 = t304*t3263;
  t3513 = t525*t1582;
  t3514 = t3510 + t3513;
  t4250 = Power(t525,2);
  t4272 = Power(t304,2);
  t4234 = t1330 + t1455 + t1502;
  t4182 = t277*t417;
  t4184 = t430*t304*t4168;
  t4185 = t4182 + t4184;
  t975 = t516*t463;
  t982 = -1.*t249*t610;
  t987 = t975 + t982;
  t4389 = t430*t417;
  t4410 = -1.*t277*t304*t4168;
  t4416 = t4389 + t4410;
  t4429 = t521*t525*t4168;
  t4431 = -1.*t530*t4185;
  t4433 = t4429 + t4431;
  t4271 = t4250*t4267*t440;
  t4511 = t430*t4234;
  t4513 = -1.*t277*t304*t4267;
  t4515 = t4511 + t4513;
  t4518 = t277*t4234;
  t4520 = t430*t304*t4267;
  t4524 = t4518 + t4520;
  t4315 = -1.*t4250*t4267*t417;
  t4181 = t525*t530*t4168;
  t4189 = t521*t4185;
  t4191 = t4181 + t4189;
  t4517 = -1.*t277*t525*t4515;
  t4545 = t1979*t463;
  t4554 = t4515*t807;
  t4681 = t521*t4524;
  t4683 = t525*t530*t4267;
  t4684 = t4681 + t4683;
  t4659 = -1.*t530*t4524;
  t4665 = t521*t525*t4267;
  t4669 = t4659 + t4665;
  t4587 = t277*t525*t4515;
  t4605 = -1.*t4515*t463;
  t4607 = -1.*t1979*t4416;
  t4863 = -0.12226899999999999*t344;
  t4865 = t4863 + t1480;
  t4824 = -0.006286*t344;
  t4849 = 0.12226899999999999*t386;
  t4850 = t4824 + t4849;
  t4154 = -0.00007916436324697017*t417;
  t4158 = 0.000029*t440;
  t4161 = 0.125443*t440;
  t4169 = 0.04675*t4168;
  t4170 = t4161 + t4169;
  t4175 = 0.019320336034999996*t4170;
  t4176 = t4154 + t4158 + t4175;
  t4178 = -0.5*var2[6]*t4176;
  t4180 = 0.0009932822900000022*t1956;
  t4192 = 0.019320336034999996*t4191;
  t4200 = t4180 + t4192;
  t4203 = -0.5*var2[0]*t4200;
  t4206 = 0.000029*t525*t417;
  t4207 = -1.e-6*t525*t4168;
  t4212 = t525*t3297*t417;
  t4214 = t525*t3263*t417;
  t4217 = -1.*t304*t1582*t417;
  t4287 = t1628*t440;
  t4954 = -1.*t367*t4865;
  t4965 = t379*t4850;
  t4966 = t4954 + t4965;
  t4303 = t525*t3514*t4168;
  t4320 = -1.*t1628*t417;
  t4922 = t379*t4865;
  t4936 = t367*t4850;
  t4945 = t4922 + t4936;
  t4329 = -1.*t525*t3263*t4168;
  t4330 = t304*t1582*t4168;
  t4377 = t249*t463;
  t4380 = t516*t610;
  t4385 = t4377 + t4380;
  t4387 = 0.0009932822900000022*t4385;
  t4427 = t249*t4416;
  t4438 = t516*t4433;
  t4439 = t4427 + t4438;
  t4442 = 0.019320336034999996*t4439;
  t4443 = t4387 + t4442;
  t4448 = -0.5*var2[2]*t4443;
  t4461 = 0.0009932822900000022*t987;
  t4463 = t516*t4416;
  t4464 = -1.*t249*t4433;
  t4467 = t4463 + t4464;
  t4475 = 0.019320336034999996*t4467;
  t4484 = t4461 + t4475;
  t4495 = -0.5*var2[1]*t4484;
  t4500 = 0.000029*t463;
  t4502 = -1.e-6*t4416;
  t4507 = t2678*t463;
  t4539 = t525*t1516*t417;
  t4968 = t4250*t4966*t440;
  t4541 = t1685*t567;
  t5037 = -1.*t277*t304*t4966;
  t5038 = t430*t4945;
  t5043 = t5037 + t5038;
  t5026 = t430*t304*t4966;
  t5027 = t277*t4945;
  t5028 = t5026 + t5027;
  t4601 = t2536*t4416;
  t4986 = -1.*t4250*t4966*t417;
  t4602 = -1.*t525*t1516*t4168;
  t4614 = -1.*t1685*t4185;
  t4647 = 0.000029*t1956;
  t4651 = -1.e-6*t4191;
  t4653 = t2148*t1956;
  t5046 = -1.*t277*t525*t5043;
  t5052 = t5043*t807;
  t4701 = t1818*t1956;
  t4705 = t1929*t610;
  t5151 = t521*t5028;
  t5154 = t525*t530*t4966;
  t5160 = t5151 + t5154;
  t5138 = -1.*t530*t5028;
  t5145 = t521*t525*t4966;
  t5146 = t5138 + t5145;
  t5076 = t277*t525*t5043;
  t4759 = t1995*t4191;
  t5096 = -1.*t5043*t463;
  t4769 = -1.*t1818*t4191;
  t4774 = -1.*t1929*t4433;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.019320336034999996*(-1.*t249*t463 - 1.*t516*t610) + 0.0009932822900000022*(-1.*t249*t807 - 1.*t516*t901))*var2[1] - 0.5*(0.0009932822900000022*(t516*t807 - 1.*t249*t901) + 0.019320336034999996*t987)*var2[2])*var2[8];
  p_output1[4]=(-0.5*(0.019320336034999996*t610 + 0.0009932822900000022*t901)*var2[0] - 0.5*(-0.019320336034999996*t1117*t249 - 0.0009932822900000022*t1137*t249)*var2[1] - 0.5*(0.019320336034999996*t1117*t516 + 0.0009932822900000022*t1137*t516)*var2[2] - 0.5*(-0.003627*t1270 - 1.e-6*t610 + 0.0009932822900000022*((t1270*t1727 + t1270*t1818 + t1867*t1878 + t1926*t1929)*t1956 + t1270*t2066 + t1995*t610 + t1867*(-1.*t1117*t1929 - 1.*t1878*t1956 - 1.*t1727*t610 - 1.*t1818*t610)) + 0.000029*t901 + 0.019320336034999996*((-1.*t1270*t1727 - 1.*t1270*t1818 - 1.*t1867*t1878 - 1.*t1926*t1929)*t2111 + t1270*t2171 + t2148*t901 + t1867*(t1137*t1929 + t1878*t2111 + t1727*t901 + t1818*t901)))*var2[3])*var2[8];
  p_output1[5]=(-0.5*(0.019320336034999996*t2304*t521 + 0.0009932822900000022*t2325*t521)*var2[0] - 0.5*(0.019320336034999996*(t2304*t249*t530 + t516*t567) + 0.0009932822900000022*(t2325*t249*t530 + t516*t884))*var2[1] - 0.5*(0.019320336034999996*(-1.*t2304*t516*t530 + t249*t567) + 0.0009932822900000022*(-1.*t2325*t516*t530 + t249*t884))*var2[2] - 0.5*(-1.e-6*t2304*t521 + 0.000029*t2325*t521 + 0.003627*t277*t521*t525 + 0.0009932822900000022*(t1995*t2304*t521 - 1.*t2066*t277*t521*t525 + t1956*(t2545 + t2569 + t1867*t2561*t521 - 1.*t1818*t277*t521*t525 - 1.*t1270*t2561*t530 + t1929*t277*t525*t530) + t1867*(t2585 + t2608 - 1.*t1818*t2304*t521 - 1.*t1956*t2561*t521 + t1929*t2304*t530 + t2561*t530*t610)) + 0.019320336034999996*(t2148*t2325*t521 - 1.*t2171*t277*t521*t525 + t2111*(t2633 + t2649 - 1.*t1867*t2561*t521 + t1818*t277*t521*t525 + t1270*t2561*t530 - 1.*t1929*t277*t525*t530) + t1867*(t2735 + t2765 + t1818*t2325*t521 + t2111*t2561*t521 - 1.*t1929*t2325*t530 - 1.*t2561*t530*t901)))*var2[3] - 0.5*(0.003627*t430*t525 - 1.e-6*t567 + 0.0009932822900000022*(-1.*t2622*t430*t525 + t463*(t2545 + t2569 - 1.*t1685*t277*t525 - 1.*t2561*t430*t525) + t2536*t567 + t277*t525*(-1.*t1685*t2304 + t2585 + t2608 - 1.*t2561*t567)) + 0.000029*t884 + 0.019320336034999996*(-1.*t2725*t430*t525 + (t2633 + t2649 + t1685*t277*t525 + t2561*t430*t525)*t807 + t2678*t884 + t277*t525*(t1685*t2325 + t2735 + t2765 + t2561*t884)))*var2[4])*var2[8];
  p_output1[6]=(-0.5*(0.019320336034999996*t3050 + 0.0009932822900000022*t3080)*var2[0] - 0.5*(0.019320336034999996*(-1.*t249*t3118 - 1.*t277*t417*t516*t525) + 0.0009932822900000022*(-1.*t249*t3158 - 1.*t277*t440*t516*t525))*var2[1] - 0.5*(0.019320336034999996*(t3118*t516 - 1.*t249*t277*t417*t525) + 0.0009932822900000022*(t3158*t516 - 1.*t249*t277*t440*t525))*var2[2] - 0.5*(-1.e-6*t3050 + 0.000029*t3080 - 0.003627*t3911 + 0.0009932822900000022*(t1995*t3050 + t2066*t3911 + t1956*(t3706 + t3728 + t1818*t3911 + t1270*t3938 + t1867*t3957 + t1929*t3983) + t1867*(-1.*t1818*t3050 - 1.*t1929*t3118 + t3754 + t3761 - 1.*t1956*t3957 - 1.*t3938*t610)) + 0.019320336034999996*(t2148*t3080 + t2171*t3911 + t2111*(t3803 + t3831 - 1.*t1818*t3911 - 1.*t1270*t3938 - 1.*t1867*t3957 - 1.*t1929*t3983) + t1867*(t1818*t3080 + t1929*t3158 + t3851 + t3852 + t2111*t3957 + t3938*t901)))*var2[3] - 0.5*(0.003627*t277*t304 + 1.e-6*t277*t417*t525 - 0.000029*t277*t440*t525 + 0.0009932822900000022*(-1.*t2622*t277*t304 - 1.*t2536*t277*t417*t525 + t463*(t3544 + t3706 + t3728 + t1685*t304*t430 + t1516*t525 + t3315*t3715*t525) + t277*t525*(t3595 + t3754 + t3761 + t1516*t304*t417 - 1.*t1685*t417*t430*t525 + t3315*t430*t567)) + 0.019320336034999996*(-1.*t2725*t277*t304 - 1.*t2678*t277*t440*t525 + (t3356 + t3803 + t3831 - 1.*t1685*t304*t430 - 1.*t1516*t525 - 1.*t3315*t3715*t525)*t807 + t277*t525*(t3469 + t3851 + t3852 - 1.*t1516*t304*t440 + t1685*t430*t440*t525 - 1.*t3315*t430*t884)))*var2[4] - 0.5*(1.e-6*t304*t417 - 0.000029*t304*t440 - 0.003627*t525 + 0.0009932822900000022*(-1.*t304*t3514*t417 + t417*t525*(-1.*t1582*t304 + t3544 + t3263*t525 + t3315*t525) + t304*(t3595 + t304*t3263*t417 + t304*t3315*t417 + t1582*t417*t525) + t525*(t1582*t304*t417 - 1.*t1628*t440 - 1.*t3263*t417*t525)) + 0.019320336034999996*(-1.*t304*t3297*t440 + t440*t525*(t1582*t304 + t3356 - 1.*t3263*t525 - 1.*t3315*t525) + t304*(t3469 - 1.*t304*t3263*t440 - 1.*t304*t3315*t440 - 1.*t1582*t440*t525) + t525*(-1.*t1582*t304*t440 + t3263*t440*t525 + t1628*t731)))*var2[5])*var2[8];
  p_output1[7]=(t4178 + t4203 + t4448 + t4495 - 0.5*(t4647 + t4651 + 0.0009932822900000022*(t1956*(t4587 + t1270*t4669 + t1867*t4684) + t4759 + t1867*(t4605 + t4607 - 1.*t1956*t4684 + t4769 + t4774 - 1.*t4669*t610)) + 0.019320336034999996*(t4653 + t2111*(t4517 - 1.*t1270*t4669 - 1.*t1867*t4684) + t1867*(t4545 + t4554 + t2111*t4684 + t4701 + t4705 + t4669*t901)))*var2[3] - 0.5*(t4500 + t4502 + 0.0009932822900000022*(t4601 + t463*(t4587 + t304*t4267*t525 - 1.*t430*t4524*t525) + t277*t525*(t4315 + t4602 + t4605 + t4607 + t4614 - 1.*t4524*t567)) + 0.019320336034999996*(t4507 + (t4517 - 1.*t304*t4267*t525 + t430*t4524*t525)*t807 + t277*t525*(t4271 + t4539 + t4541 + t4545 + t4554 + t4524*t884)))*var2[4] - 0.5*(t4206 + t4207 + 0.0009932822900000022*(t4303 + t304*(-1.*t417*t4267*t4272 + t4315 + t4320 + t4329 + t4330 - 1.*t4234*t440)) + 0.019320336034999996*(t4212 + t304*(t4214 + t4217 + t4271 + t4287 + t4267*t4272*t440 + t4234*t731)))*var2[5])*var2[8];
  p_output1[8]=(t4178 + t4203 + t4448 + t4495 - 0.5*(t4647 + t4651 + 0.0009932822900000022*(t4759 + t1956*(t5076 + t1270*t5146 + t1867*t5160) + t1867*(t4607 + t4769 + t4774 + t5096 - 1.*t1956*t5160 - 1.*t5146*t610)) + 0.019320336034999996*(t4653 + t2111*(t5046 - 1.*t1270*t5146 - 1.*t1867*t5160) + t1867*(t4545 + t4701 + t4705 + t5052 + t2111*t5160 + t5146*t901)))*var2[3] - 0.5*(t4500 + t4502 + 0.0009932822900000022*(t4601 + t463*(t5076 + t304*t4966*t525 - 1.*t430*t5028*t525) + t277*t525*(t4602 + t4607 + t4614 + t4986 + t5096 - 1.*t5028*t567)) + 0.019320336034999996*(t4507 + (t5046 - 1.*t304*t4966*t525 + t430*t5028*t525)*t807 + t277*t525*(t4539 + t4541 + t4545 + t4968 + t5052 + t5028*t884)))*var2[4] - 0.5*(t4206 + t4207 + 0.0009932822900000022*(t4303 + t304*(t4320 + t4329 + t4330 - 1.*t440*t4945 - 1.*t417*t4272*t4966 + t4986)) + 0.019320336034999996*(t4212 + t304*(t4214 + t4217 + t4287 + t4272*t440*t4966 + t4968 + t4945*t731)))*var2[5] - 0.5*(0.0009932822900000022*(t1494*t344 - 0.1881*t386 + t1450*t386 + t386*t4850 - 1.*t344*t4865) + 0.019320336034999996*(-0.1881*t344 + t1450*t344 - 1.*t1494*t386 + t344*t4850 + t386*t4865))*var2[7])*var2[8];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec9_go1_description.hh"

namespace SymFunction
{

void Ce3_vec9_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
