/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:29:43 GMT-05:00
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
  double t253;
  double t153;
  double t160;
  double t311;
  double t172;
  double t348;
  double t378;
  double t116;
  double t407;
  double t414;
  double t429;
  double t120;
  double t449;
  double t81;
  double t480;
  double t503;
  double t504;
  double t542;
  double t677;
  double t686;
  double t698;
  double t380;
  double t454;
  double t456;
  double t526;
  double t555;
  double t556;
  double t559;
  double t593;
  double t595;
  double t670;
  double t721;
  double t727;
  double t786;
  double t808;
  double t812;
  double t863;
  double t896;
  double t898;
  double t1101;
  double t1111;
  double t1112;
  double t1159;
  double t1171;
  double t1175;
  double t1323;
  double t1324;
  double t1326;
  double t1428;
  double t1440;
  double t1444;
  double t1447;
  double t1472;
  double t1473;
  double t1490;
  double t1496;
  double t1509;
  double t1523;
  double t1413;
  double t1487;
  double t1547;
  double t1552;
  double t1378;
  double t1597;
  double t1604;
  double t1625;
  double t1630;
  double t1642;
  double t1648;
  double t1659;
  double t1664;
  double t1708;
  double t1718;
  double t1744;
  double t1756;
  double t1762;
  double t1776;
  double t1784;
  double t1785;
  double t1789;
  double t1919;
  double t1935;
  double t1889;
  double t1900;
  double t1901;
  double t1855;
  double t1879;
  double t1880;
  double t1973;
  double t1938;
  double t1368;
  double t1369;
  double t1377;
  double t1623;
  double t1817;
  double t1837;
  double t2008;
  double t2017;
  double t2026;
  double t1962;
  double t1968;
  double t1972;
  double t2252;
  double t2264;
  double t2283;
  double t2570;
  double t2584;
  double t2604;
  double t2513;
  double t2515;
  double t2550;
  double t2031;
  double t2806;
  double t2815;
  double t2817;
  double t2798;
  double t2153;
  double t2372;
  double t2467;
  double t2799;
  double t2820;
  double t2048;
  double t2050;
  double t2052;
  double t2844;
  double t2872;
  double t2169;
  double t2188;
  double t2213;
  double t2961;
  double t3016;
  double t2374;
  double t2376;
  double t2391;
  double t3072;
  double t3093;
  double t2474;
  double t2480;
  double t2482;
  double t3404;
  double t3428;
  double t3437;
  double t3441;
  double t3478;
  double t3481;
  double t3819;
  double t3820;
  double t3821;
  double t3850;
  double t3859;
  double t3867;
  double t2785;
  double t2791;
  double t2795;
  double t3656;
  double t3689;
  double t2881;
  double t2884;
  double t2895;
  double t2936;
  double t2940;
  double t2953;
  double t4016;
  double t3487;
  double t4030;
  double t3520;
  double t3033;
  double t3035;
  double t3040;
  double t3771;
  double t3777;
  double t3781;
  double t3792;
  double t3797;
  double t3802;
  double t4017;
  double t4050;
  double t4242;
  double t4274;
  double t4279;
  double t4077;
  double t4105;
  double t4299;
  double t4317;
  double t4327;
  double t4349;
  double t4360;
  double t4361;
  double t4145;
  double t4151;
  double t4370;
  double t4375;
  double t4377;
  double t4177;
  double t4180;
  double t4567;
  double t4572;
  double t4574;
  double t3407;
  double t3409;
  double t3413;
  double t4636;
  double t4646;
  double t4647;
  double t4651;
  double t3606;
  double t3611;
  double t3618;
  double t4633;
  double t4654;
  double t4630;
  double t4747;
  double t4751;
  double t4756;
  double t987;
  double t998;
  double t1012;
  double t4795;
  double t4796;
  double t4802;
  double t4834;
  double t4862;
  double t4869;
  double t4652;
  double t4973;
  double t4976;
  double t4982;
  double t4997;
  double t4999;
  double t5000;
  double t4704;
  double t4739;
  double t4763;
  double t4768;
  double t4994;
  double t5019;
  double t5027;
  double t5137;
  double t5141;
  double t5145;
  double t5148;
  double t5151;
  double t5154;
  double t5057;
  double t5077;
  double t5091;
  double t5352;
  double t5355;
  double t5307;
  double t5313;
  double t5317;
  double t4549;
  double t4556;
  double t4563;
  double t4588;
  double t4591;
  double t4593;
  double t4594;
  double t4598;
  double t4600;
  double t4615;
  double t4616;
  double t4621;
  double t4628;
  double t4660;
  double t5487;
  double t5492;
  double t5496;
  double t4699;
  double t4709;
  double t5464;
  double t5477;
  double t5482;
  double t4712;
  double t4713;
  double t4735;
  double t4778;
  double t4783;
  double t4784;
  double t4785;
  double t4787;
  double t4791;
  double t4792;
  double t4815;
  double t4894;
  double t4913;
  double t4914;
  double t4915;
  double t4946;
  double t4949;
  double t4950;
  double t4951;
  double t4952;
  double t4953;
  double t4958;
  double t4963;
  double t4965;
  double t4969;
  double t5016;
  double t5017;
  double t5521;
  double t5018;
  double t5650;
  double t5652;
  double t5659;
  double t5640;
  double t5644;
  double t5645;
  double t5070;
  double t5573;
  double t5075;
  double t5092;
  double t5127;
  double t5128;
  double t5133;
  double t5661;
  double t5667;
  double t5170;
  double t5174;
  double t5758;
  double t5772;
  double t5797;
  double t5807;
  double t5811;
  double t5823;
  double t5192;
  double t5693;
  double t5728;
  double t5243;
  double t5248;
  t253 = Cos(var1[10]);
  t153 = Cos(var1[11]);
  t160 = Sin(var1[10]);
  t311 = Sin(var1[11]);
  t172 = -1.*t153*t160;
  t348 = -1.*t253*t311;
  t378 = t172 + t348;
  t116 = Cos(var1[5]);
  t407 = t253*t153;
  t414 = -1.*t160*t311;
  t429 = t407 + t414;
  t120 = Sin(var1[9]);
  t449 = Sin(var1[5]);
  t81 = Sin(var1[3]);
  t480 = Cos(var1[3]);
  t503 = Cos(var1[9]);
  t504 = Cos(var1[4]);
  t542 = Sin(var1[4]);
  t677 = t153*t160;
  t686 = t253*t311;
  t698 = t677 + t686;
  t380 = -1.*t116*t120*t378;
  t454 = t429*t449;
  t456 = t380 + t454;
  t526 = t503*t504*t378;
  t555 = t116*t429;
  t556 = t120*t378*t449;
  t559 = t555 + t556;
  t593 = -1.*t542*t559;
  t595 = t526 + t593;
  t670 = -1.*t116*t120*t429;
  t721 = t698*t449;
  t727 = t670 + t721;
  t786 = t503*t504*t429;
  t808 = t116*t698;
  t812 = t120*t429*t449;
  t863 = t808 + t812;
  t896 = -1.*t542*t863;
  t898 = t786 + t896;
  t1101 = -1.*t503*t378*t542;
  t1111 = -1.*t504*t559;
  t1112 = t1101 + t1111;
  t1159 = -1.*t503*t429*t542;
  t1171 = -1.*t504*t863;
  t1175 = t1159 + t1171;
  t1323 = t504*t120;
  t1324 = t503*t542*t449;
  t1326 = t1323 + t1324;
  t1428 = -1.*t153;
  t1440 = 1. + t1428;
  t1444 = 0.1881*t1440;
  t1447 = 0.194386*t153;
  t1472 = -0.12226899999999999*t311;
  t1473 = t1444 + t1447 + t1472;
  t1490 = -0.213*t1440;
  t1496 = -0.335269*t153;
  t1509 = -0.006286*t311;
  t1523 = t1490 + t1496 + t1509;
  t1413 = 0.1881*t160;
  t1487 = -1.*t160*t1473;
  t1547 = t253*t1523;
  t1552 = 0. + t1413 + t1487 + t1547;
  t1378 = 0.081307*t120;
  t1597 = t503*t1552;
  t1604 = 0. + t1378 + t1597;
  t1625 = -1.*t253;
  t1630 = 1. + t1625;
  t1642 = 0.1881*t1630;
  t1648 = t253*t1473;
  t1659 = t160*t1523;
  t1664 = 0. + t1642 + t1648 + t1659;
  t1708 = t116*t1664;
  t1718 = -1.*t503;
  t1744 = 1. + t1718;
  t1756 = 0.04675*t1744;
  t1762 = 0.128057*t503;
  t1776 = -1.*t120*t1552;
  t1784 = t1756 + t1762 + t1776;
  t1785 = -1.*t1784*t449;
  t1789 = 0. + t1708 + t1785;
  t1919 = t504*t1604;
  t1935 = -1.*t542*t1789;
  t1889 = t120*t542;
  t1900 = -1.*t503*t504*t449;
  t1901 = t1889 + t1900;
  t1855 = t1604*t542;
  t1879 = t504*t1789;
  t1880 = 0. + t1855 + t1879;
  t1973 = 0. + t1919 + t1935;
  t1938 = t1919 + t1935;
  t1368 = t503*t378*t542;
  t1369 = t504*t559;
  t1377 = t1368 + t1369;
  t1623 = -1.*t1604*t542;
  t1817 = -1.*t504*t1789;
  t1837 = t1623 + t1817;
  t2008 = t116*t1784;
  t2017 = t1664*t449;
  t2026 = 0. + t2008 + t2017;
  t1962 = -1.*t120*t542;
  t1968 = t503*t504*t449;
  t1972 = t1962 + t1968;
  t2252 = t503*t429*t542;
  t2264 = t504*t863;
  t2283 = t2252 + t2264;
  t2570 = t116*t120*t378;
  t2584 = -1.*t429*t449;
  t2604 = t2570 + t2584;
  t2513 = t116*t120*t429;
  t2515 = -1.*t698*t449;
  t2550 = t2513 + t2515;
  t2031 = t503*t116*t2026;
  t2806 = -1.*t116*t1784;
  t2815 = -1.*t1664*t449;
  t2817 = t2806 + t2815;
  t2798 = t1708 + t1785;
  t2153 = -1.*t2026*t456;
  t2372 = -1.*t503*t116*t2026;
  t2467 = t2026*t727;
  t2799 = t503*t116*t2798;
  t2820 = -1.*t503*t449*t2026;
  t2048 = t1901*t1880;
  t2050 = t1326*t1973;
  t2052 = t2031 + t2048 + t2050;
  t2844 = -1.*t2026*t559;
  t2872 = -1.*t2798*t456;
  t2169 = -1.*t1880*t1377;
  t2188 = -1.*t1973*t595;
  t2213 = t2153 + t2169 + t2188;
  t2961 = -1.*t503*t116*t2798;
  t3016 = t503*t449*t2026;
  t2374 = -1.*t1901*t1880;
  t2376 = -1.*t1326*t1973;
  t2391 = t2372 + t2374 + t2376;
  t3072 = t2798*t727;
  t3093 = t2026*t863;
  t2474 = t1880*t2283;
  t2480 = t1973*t898;
  t2482 = t2467 + t2474 + t2480;
  t3404 = t1378 + t1597;
  t3428 = -0.081307*t120;
  t3437 = -1.*t503*t1552;
  t3441 = t3428 + t3437;
  t3478 = 0.081307*t503;
  t3481 = t3478 + t1776;
  t3819 = -1.*t504*t120*t378;
  t3820 = -1.*t503*t378*t542*t449;
  t3821 = t3819 + t3820;
  t3850 = -1.*t504*t120*t429;
  t3859 = -1.*t503*t429*t542*t449;
  t3867 = t3850 + t3859;
  t2785 = t120*t1604;
  t2791 = -1.*t503*t449*t1789;
  t2795 = t2785 + t2791 + t2031;
  t3656 = t120*t3481;
  t3689 = -1.*t503*t3481*t378;
  t2881 = -1.*t503*t1604*t378;
  t2884 = -1.*t1789*t559;
  t2895 = t2881 + t2884 + t2153;
  t2936 = -1.*t120*t1604;
  t2940 = t503*t449*t1789;
  t2953 = t2936 + t2940 + t2372;
  t4016 = Power(t116,2);
  t3487 = -1.*t120*t3481;
  t4030 = Power(t449,2);
  t3520 = t503*t3481*t429;
  t3033 = t503*t1604*t429;
  t3035 = t1789*t863;
  t3040 = t3033 + t2467 + t3035;
  t3771 = -1.*t120*t378*t542;
  t3777 = t503*t504*t378*t449;
  t3781 = t3771 + t3777;
  t3792 = -1.*t120*t429*t542;
  t3797 = t503*t504*t429*t449;
  t3802 = t3792 + t3797;
  t4017 = t503*t4016*t3441;
  t4050 = -1.*t116*t120*t2026;
  t4242 = t503*t542;
  t4274 = t504*t120*t449;
  t4279 = t4242 + t4274;
  t4077 = t503*t116*t378*t2026;
  t4105 = -1.*t116*t3441*t456;
  t4299 = t3481*t542;
  t4317 = -1.*t504*t3441*t449;
  t4327 = t4299 + t4317;
  t4349 = t504*t3481;
  t4360 = t3441*t542*t449;
  t4361 = t4349 + t4360;
  t4145 = -1.*t503*t4016*t3441;
  t4151 = t116*t120*t2026;
  t4370 = t503*t504;
  t4375 = -1.*t120*t542*t449;
  t4377 = t4370 + t4375;
  t4177 = -1.*t503*t116*t429*t2026;
  t4180 = t116*t3441*t727;
  t4567 = -1.*t253*t153;
  t4572 = t160*t311;
  t4574 = t4567 + t4572;
  t3407 = -1.*t120*t3404;
  t3409 = -1.*t503*t1784;
  t3413 = t3407 + t3409;
  t4636 = 0.1881*t253;
  t4646 = -1.*t253*t1473;
  t4647 = -1.*t160*t1523;
  t4651 = t4636 + t4646 + t4647;
  t3606 = t120*t3404;
  t3611 = t503*t1784;
  t3618 = t3606 + t3611;
  t4633 = Power(t503,2);
  t4654 = Power(t120,2);
  t4630 = t1413 + t1487 + t1547;
  t4747 = t116*t378;
  t4751 = t120*t4574*t449;
  t4756 = t4747 + t4751;
  t987 = t480*t456;
  t998 = -1.*t81*t595;
  t1012 = t987 + t998;
  t4795 = -1.*t116*t120*t4574;
  t4796 = t378*t449;
  t4802 = t4795 + t4796;
  t4834 = t503*t504*t4574;
  t4862 = -1.*t542*t4756;
  t4869 = t4834 + t4862;
  t4652 = t4633*t4651*t429;
  t4973 = -1.*t116*t120*t4651;
  t4976 = t4630*t449;
  t4982 = t4973 + t4976;
  t4997 = t116*t4630;
  t4999 = t120*t4651*t449;
  t5000 = t4997 + t4999;
  t4704 = -1.*t4633*t4651*t378;
  t4739 = t503*t4574*t542;
  t4763 = t504*t4756;
  t4768 = t4739 + t4763;
  t4994 = -1.*t503*t116*t4982;
  t5019 = t4982*t727;
  t5027 = t2026*t456;
  t5137 = t503*t4651*t542;
  t5141 = t504*t5000;
  t5145 = t5137 + t5141;
  t5148 = t503*t504*t4651;
  t5151 = -1.*t542*t5000;
  t5154 = t5148 + t5151;
  t5057 = t503*t116*t4982;
  t5077 = -1.*t2026*t4802;
  t5091 = -1.*t4982*t456;
  t5352 = -0.12226899999999999*t153;
  t5355 = t5352 + t1509;
  t5307 = -0.006286*t153;
  t5313 = 0.12226899999999999*t311;
  t5317 = t5307 + t5313;
  t4549 = 0.00007976080315303019*t378;
  t4556 = 0.000029*t429;
  t4563 = -0.128057*t429;
  t4588 = -0.04675*t4574;
  t4591 = t4563 + t4588;
  t4593 = 0.019320336034999996*t4591;
  t4594 = t4549 + t4556 + t4593;
  t4598 = -0.5*var2[9]*t4594;
  t4600 = 0.000029*t503*t378;
  t4615 = -1.e-6*t503*t4574;
  t4616 = t503*t3413*t378;
  t4621 = t503*t3404*t378;
  t4628 = -1.*t120*t1784*t378;
  t4660 = t1664*t429;
  t5487 = -1.*t160*t5355;
  t5492 = t253*t5317;
  t5496 = t5487 + t5492;
  t4699 = t503*t3618*t4574;
  t4709 = -1.*t1664*t378;
  t5464 = t253*t5355;
  t5477 = t160*t5317;
  t5482 = t5464 + t5477;
  t4712 = -1.*t503*t3404*t4574;
  t4713 = t120*t1784*t4574;
  t4735 = 0.0009932822900000022*t1377;
  t4778 = 0.019320336034999996*t4768;
  t4783 = t4735 + t4778;
  t4784 = -0.5*var2[0]*t4783;
  t4785 = t81*t456;
  t4787 = t480*t595;
  t4791 = t4785 + t4787;
  t4792 = 0.0009932822900000022*t4791;
  t4815 = t81*t4802;
  t4894 = t480*t4869;
  t4913 = t4815 + t4894;
  t4914 = 0.019320336034999996*t4913;
  t4915 = t4792 + t4914;
  t4946 = -0.5*var2[2]*t4915;
  t4949 = 0.0009932822900000022*t1012;
  t4950 = t480*t4802;
  t4951 = -1.*t81*t4869;
  t4952 = t4950 + t4951;
  t4953 = 0.019320336034999996*t4952;
  t4958 = t4949 + t4953;
  t4963 = -0.5*var2[1]*t4958;
  t4965 = -1.e-6*t4802;
  t4969 = 0.000029*t456;
  t5016 = t456*t2953;
  t5017 = t503*t1604*t378;
  t5521 = t4633*t5496*t429;
  t5018 = t1789*t559;
  t5650 = -1.*t116*t120*t5496;
  t5652 = t5482*t449;
  t5659 = t5650 + t5652;
  t5640 = t116*t5482;
  t5644 = t120*t5496*t449;
  t5645 = t5640 + t5644;
  t5070 = t4802*t2795;
  t5573 = -1.*t4633*t5496*t378;
  t5075 = -1.*t503*t1604*t4574;
  t5092 = -1.*t1789*t4756;
  t5127 = 0.000029*t1377;
  t5128 = -1.e-6*t4768;
  t5133 = t1377*t2391;
  t5661 = -1.*t503*t116*t5659;
  t5667 = t5659*t727;
  t5170 = t1880*t1377;
  t5174 = t1973*t595;
  t5758 = t503*t5496*t542;
  t5772 = t504*t5645;
  t5797 = t5758 + t5772;
  t5807 = t503*t504*t5496;
  t5811 = -1.*t542*t5645;
  t5823 = t5807 + t5811;
  t5192 = t4768*t2052;
  t5693 = t503*t116*t5659;
  t5728 = -1.*t5659*t456;
  t5243 = -1.*t1880*t4768;
  t5248 = -1.*t1973*t4869;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.019320336034999996*(-1.*t480*t595 - 1.*t456*t81) + 0.0009932822900000022*(-1.*t727*t81 - 1.*t480*t898))*var2[1] - 0.5*(0.019320336034999996*t1012 + 0.0009932822900000022*(t480*t727 - 1.*t81*t898))*var2[2])*var2[11];
  p_output1[4]=(-0.5*(0.019320336034999996*t595 + 0.0009932822900000022*t898)*var2[0] - 0.5*(-0.019320336034999996*t1112*t81 - 0.0009932822900000022*t1175*t81)*var2[1] - 0.5*(0.019320336034999996*t1112*t480 + 0.0009932822900000022*t1175*t480)*var2[2] - 0.5*(-0.003627*t1326 - 1.e-6*t595 + 0.0009932822900000022*(t1377*(t1326*t1837 + t1326*t1880 + t1901*t1938 + t1972*t1973) + t1326*t2213 + t2052*t595 + t1901*(-1.*t1377*t1938 - 1.*t1112*t1973 - 1.*t1837*t595 - 1.*t1880*t595)) + 0.000029*t898 + 0.019320336034999996*((-1.*t1326*t1837 - 1.*t1326*t1880 - 1.*t1901*t1938 - 1.*t1972*t1973)*t2283 + t1326*t2482 + t2391*t898 + t1901*(t1175*t1973 + t1938*t2283 + t1837*t898 + t1880*t898)))*var2[3])*var2[11];
  p_output1[5]=(-0.5*(0.0009932822900000022*t2550*t504 + 0.019320336034999996*t2604*t504)*var2[0] - 0.5*(0.019320336034999996*(t480*t559 + t2604*t542*t81) + 0.0009932822900000022*(t2550*t542*t81 + t480*t863))*var2[1] - 0.5*(0.019320336034999996*(-1.*t2604*t480*t542 + t559*t81) + 0.0009932822900000022*(-1.*t2550*t480*t542 + t81*t863))*var2[2] - 0.5*(0.000029*t2550*t504 - 1.e-6*t2604*t504 + 0.003627*t116*t503*t504 + 0.0009932822900000022*(t2052*t2604*t504 - 1.*t116*t2213*t503*t504 + t1377*(t2799 + t2820 + t1901*t2817*t504 - 1.*t116*t1880*t503*t504 - 1.*t1326*t2817*t542 + t116*t1973*t503*t542) + t1901*(t2844 + t2872 - 1.*t1880*t2604*t504 - 1.*t1377*t2817*t504 + t1973*t2604*t542 + t2817*t542*t595)) + 0.019320336034999996*(t2391*t2550*t504 - 1.*t116*t2482*t503*t504 + t2283*(t2961 + t3016 - 1.*t1901*t2817*t504 + t116*t1880*t503*t504 + t1326*t2817*t542 - 1.*t116*t1973*t503*t542) + t1901*(t3072 + t3093 + t1880*t2550*t504 + t2283*t2817*t504 - 1.*t1973*t2550*t542 - 1.*t2817*t542*t898)))*var2[3] - 0.5*(0.003627*t449*t503 - 1.e-6*t559 + 0.0009932822900000022*(-1.*t2895*t449*t503 + t456*(t2799 + t2820 - 1.*t116*t1789*t503 - 1.*t2817*t449*t503) + t2795*t559 + t116*t503*(-1.*t1789*t2604 + t2844 + t2872 - 1.*t2817*t559)) + 0.000029*t863 + 0.019320336034999996*(-1.*t3040*t449*t503 + (t2961 + t3016 + t116*t1789*t503 + t2817*t449*t503)*t727 + t2953*t863 + t116*t503*(t1789*t2550 + t3072 + t3093 + t2817*t863)))*var2[4])*var2[11];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.5*(0.019320336034999996*t3781 + 0.0009932822900000022*t3802)*var2[0] - 0.5*(0.019320336034999996*(-1.*t116*t378*t480*t503 - 1.*t3821*t81) + 0.0009932822900000022*(-1.*t116*t429*t480*t503 - 1.*t3867*t81))*var2[1] - 0.5*(0.019320336034999996*(t3821*t480 - 1.*t116*t378*t503*t81) + 0.0009932822900000022*(t3867*t480 - 1.*t116*t429*t503*t81))*var2[2] - 0.5*(-1.e-6*t3781 + 0.000029*t3802 - 0.003627*t4279 + 0.0009932822900000022*(t2052*t3781 + t2213*t4279 + t1377*(t4017 + t4050 + t1880*t4279 + t1901*t4327 + t1326*t4361 + t1973*t4377) + t1901*(-1.*t1880*t3781 - 1.*t1973*t3821 + t4077 + t4105 - 1.*t1377*t4327 - 1.*t4361*t595)) + 0.019320336034999996*(t2391*t3802 + t2482*t4279 + t2283*(t4145 + t4151 - 1.*t1880*t4279 - 1.*t1901*t4327 - 1.*t1326*t4361 - 1.*t1973*t4377) + t1901*(t1880*t3802 + t1973*t3867 + t4177 + t4180 + t2283*t4327 + t4361*t898)))*var2[3] - 0.5*(0.003627*t116*t120 + 1.e-6*t116*t378*t503 - 0.000029*t116*t429*t503 + 0.0009932822900000022*(-1.*t116*t120*t2895 - 1.*t116*t2795*t378*t503 + t456*(t3656 + t4017 + t4050 + t120*t1789*t449 + t1604*t503 + t3441*t4030*t503) + t116*t503*(t3689 + t120*t1604*t378 + t4077 + t4105 - 1.*t1789*t378*t449*t503 + t3441*t449*t559)) + 0.019320336034999996*(-1.*t116*t120*t3040 - 1.*t116*t2953*t429*t503 + (t3487 + t4145 + t4151 - 1.*t120*t1789*t449 - 1.*t1604*t503 - 1.*t3441*t4030*t503)*t727 + t116*t503*(t3520 + t4177 + t4180 - 1.*t120*t1604*t429 + t1789*t429*t449*t503 - 1.*t3441*t449*t863)))*var2[4] - 0.5*(1.e-6*t120*t378 - 0.000029*t120*t429 - 0.003627*t503 + 0.0009932822900000022*(-1.*t120*t3618*t378 + t378*t503*(-1.*t120*t1784 + t3656 + t3404*t503 + t3441*t503) + t120*(t3689 + t120*t3404*t378 + t120*t3441*t378 + t1784*t378*t503) + t503*(t120*t1784*t378 - 1.*t1664*t429 - 1.*t3404*t378*t503)) + 0.019320336034999996*(-1.*t120*t3413*t429 + t429*t503*(t120*t1784 + t3487 - 1.*t3404*t503 - 1.*t3441*t503) + t120*(t3520 - 1.*t120*t3404*t429 - 1.*t120*t3441*t429 - 1.*t1784*t429*t503) + t503*(-1.*t120*t1784*t429 + t3404*t429*t503 + t1664*t698)))*var2[5])*var2[11];
  p_output1[10]=(t4598 + t4784 + t4946 + t4963 - 0.5*(t5127 + t5128 + 0.0009932822900000022*(t1377*(t5057 + t1901*t5145 + t1326*t5154) + t5192 + t1901*(t5077 + t5091 - 1.*t1377*t5145 + t5243 + t5248 - 1.*t5154*t595)) + 0.019320336034999996*(t5133 + t2283*(t4994 - 1.*t1901*t5145 - 1.*t1326*t5154) + t1901*(t5019 + t5027 + t2283*t5145 + t5170 + t5174 + t5154*t898)))*var2[3] - 0.5*(t4965 + t4969 + 0.0009932822900000022*(t456*(t120*t4651*t503 - 1.*t449*t5000*t503 + t5057) + t5070 + t116*t503*(t4704 + t5075 + t5077 + t5091 + t5092 - 1.*t5000*t559)) + 0.019320336034999996*(t5016 + (t4994 - 1.*t120*t4651*t503 + t449*t5000*t503)*t727 + t116*t503*(t4652 + t5017 + t5018 + t5019 + t5027 + t5000*t863)))*var2[4] - 0.5*(t4600 + t4615 + 0.0009932822900000022*(t4699 + t120*(-1.*t429*t4630 - 1.*t378*t4651*t4654 + t4704 + t4709 + t4712 + t4713)) + 0.019320336034999996*(t4616 + t120*(t4621 + t4628 + t4652 + t429*t4651*t4654 + t4660 + t4630*t698)))*var2[5])*var2[11];
  p_output1[11]=(t4598 + t4784 + t4946 + t4963 - 0.5*(t5127 + t5128 + 0.0009932822900000022*(t5192 + t1377*(t5693 + t1901*t5797 + t1326*t5823) + t1901*(t5077 + t5243 + t5248 + t5728 - 1.*t1377*t5797 - 1.*t5823*t595)) + 0.019320336034999996*(t5133 + t2283*(t5661 - 1.*t1901*t5797 - 1.*t1326*t5823) + t1901*(t5027 + t5170 + t5174 + t5667 + t2283*t5797 + t5823*t898)))*var2[3] - 0.5*(t4965 + t4969 + 0.0009932822900000022*(t5070 + t456*(t120*t503*t5496 - 1.*t449*t503*t5645 + t5693) + t116*t503*(t5075 + t5077 + t5092 + t5573 - 1.*t559*t5645 + t5728)) + 0.019320336034999996*(t5016 + (-1.*t120*t503*t5496 + t449*t503*t5645 + t5661)*t727 + t116*t503*(t5017 + t5018 + t5027 + t5521 + t5667 + t5645*t863)))*var2[4] - 0.5*(t4600 + t4615 + 0.0009932822900000022*(t4699 + t120*(t4709 + t4712 + t4713 - 1.*t429*t5482 - 1.*t378*t4654*t5496 + t5573)) + 0.019320336034999996*(t4616 + t120*(t4621 + t4628 + t4660 + t429*t4654*t5496 + t5521 + t5482*t698)))*var2[5] - 0.5*(0.0009932822900000022*(t1523*t153 - 0.1881*t311 + t1473*t311 + t311*t5317 - 1.*t153*t5355) + 0.019320336034999996*(-0.1881*t153 + t1473*t153 - 1.*t1523*t311 + t153*t5317 + t311*t5355))*var2[10])*var2[11];
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

#include "Ce3_vec12_go1_description.hh"

namespace SymFunction
{

void Ce3_vec12_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
