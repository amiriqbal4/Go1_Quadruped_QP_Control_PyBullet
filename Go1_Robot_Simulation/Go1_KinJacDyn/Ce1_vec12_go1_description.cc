/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:27:21 GMT-05:00
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
  double t169;
  double t185;
  double t148;
  double t205;
  double t69;
  double t79;
  double t123;
  double t181;
  double t209;
  double t219;
  double t305;
  double t358;
  double t361;
  double t401;
  double t481;
  double t510;
  double t287;
  double t290;
  double t292;
  double t725;
  double t748;
  double t756;
  double t882;
  double t883;
  double t896;
  double t832;
  double t851;
  double t853;
  double t880;
  double t905;
  double t906;
  double t907;
  double t909;
  double t913;
  double t914;
  double t915;
  double t924;
  double t403;
  double t408;
  double t439;
  double t992;
  double t255;
  double t314;
  double t320;
  double t985;
  double t778;
  double t780;
  double t787;
  double t717;
  double t758;
  double t759;
  double t776;
  double t795;
  double t804;
  double t1335;
  double t1341;
  double t1350;
  double t1456;
  double t1466;
  double t1471;
  double t1481;
  double t1490;
  double t1494;
  double t1497;
  double t1498;
  double t1501;
  double t1508;
  double t1518;
  double t1527;
  double t1529;
  double t1532;
  double t1533;
  double t1135;
  double t1137;
  double t1140;
  double t1147;
  double t1148;
  double t1166;
  double t1232;
  double t1236;
  double t1248;
  double t1294;
  double t1297;
  double t1299;
  double t1381;
  double t1418;
  double t1420;
  double t1743;
  double t1778;
  double t1779;
  double t1789;
  double t1791;
  double t1792;
  double t1808;
  double t1820;
  double t1821;
  double t1873;
  double t1886;
  double t1888;
  double t1902;
  double t1905;
  double t1908;
  double t1917;
  double t1919;
  double t1943;
  double t1952;
  double t2018;
  double t2023;
  double t2036;
  double t2045;
  double t2054;
  double t2056;
  double t2059;
  double t2068;
  double t2090;
  double t2104;
  double t1866;
  double t1868;
  double t1870;
  double t1909;
  double t1957;
  double t1963;
  double t2166;
  double t2168;
  double t2176;
  double t1981;
  double t2106;
  double t2229;
  double t2238;
  double t2241;
  double t2251;
  double t2201;
  double t2204;
  double t2206;
  double t2133;
  double t2149;
  double t2161;
  double t2245;
  double t2269;
  double t2270;
  double t2214;
  double t2218;
  double t2221;
  double t2278;
  double t2286;
  double t2287;
  double t2107;
  double t2445;
  double t2455;
  double t2464;
  double t499;
  double t523;
  double t564;
  double t572;
  double t674;
  double t682;
  double t2300;
  double t2301;
  double t2321;
  double t2336;
  double t2634;
  double t2638;
  double t2640;
  double t2650;
  double t2652;
  double t2608;
  double t2610;
  double t2614;
  double t2660;
  double t2674;
  double t2683;
  double t2709;
  double t2713;
  double t2714;
  double t2399;
  double t2401;
  double t2411;
  double t2418;
  double t2496;
  double t2499;
  double t2502;
  double t2504;
  double t2632;
  double t2727;
  double t2734;
  double t2745;
  double t2567;
  double t2571;
  double t2574;
  double t2593;
  double t2968;
  double t2932;
  double t2938;
  double t2945;
  double t2994;
  double t3001;
  double t3005;
  double t3431;
  double t3436;
  double t3440;
  double t3447;
  double t3450;
  double t3480;
  double t3490;
  double t3500;
  double t3448;
  double t3451;
  double t3458;
  double t3478;
  double t3502;
  double t3507;
  double t3511;
  double t3513;
  double t3516;
  double t3378;
  double t3392;
  double t3421;
  double t3792;
  double t3797;
  double t3803;
  double t3813;
  double t3818;
  double t3798;
  double t3824;
  double t3830;
  double t3850;
  double t3858;
  double t3860;
  double t3875;
  double t3884;
  double t3888;
  double t3848;
  double t3861;
  double t3867;
  double t3533;
  double t3537;
  double t3550;
  double t3872;
  double t3890;
  double t3902;
  double t3909;
  double t3910;
  double t3917;
  double t3617;
  double t3638;
  double t3715;
  double t3722;
  double t2643;
  double t2699;
  double t2757;
  double t2763;
  double t2788;
  double t4094;
  double t2808;
  double t2858;
  double t2860;
  double t4046;
  double t4048;
  double t4049;
  double t2116;
  double t2207;
  double t2353;
  double t2366;
  double t4148;
  double t4152;
  double t4157;
  double t4164;
  double t4170;
  double t4171;
  double t2465;
  double t2469;
  double t4210;
  double t4211;
  double t4215;
  double t2512;
  double t2524;
  double t3464;
  double t3527;
  double t3620;
  double t4409;
  double t3659;
  double t4385;
  double t4387;
  double t4405;
  double t3869;
  double t4408;
  double t4416;
  double t3939;
  double t4451;
  double t3995;
  double t4460;
  double t4014;
  double t4475;
  double t4620;
  double t4176;
  double t4189;
  double t4069;
  double t4126;
  double t4621;
  double t4622;
  double t4630;
  double t4410;
  double t4716;
  double t4727;
  double t4741;
  double t4459;
  double t4850;
  double t4806;
  double t4811;
  double t4837;
  double t4842;
  double t4845;
  double t4853;
  double t4500;
  double t4882;
  double t4895;
  double t4529;
  double t4903;
  double t4904;
  double t4965;
  double t4971;
  double t5003;
  double t5023;
  double t5037;
  double t5041;
  double t5044;
  t169 = Cos(var1[11]);
  t185 = Sin(var1[10]);
  t148 = Cos(var1[10]);
  t205 = Sin(var1[11]);
  t69 = Cos(var1[4]);
  t79 = Cos(var1[5]);
  t123 = Sin(var1[9]);
  t181 = t148*t169;
  t209 = -1.*t185*t205;
  t219 = t181 + t209;
  t305 = Sin(var1[5]);
  t358 = -1.*t169*t185;
  t361 = -1.*t148*t205;
  t401 = t358 + t361;
  t481 = Sin(var1[4]);
  t510 = Cos(var1[9]);
  t287 = t169*t185;
  t290 = t148*t205;
  t292 = t287 + t290;
  t725 = t79*t219;
  t748 = t123*t401*t305;
  t756 = t725 + t748;
  t882 = -1.*t148*t169;
  t883 = t185*t205;
  t896 = t882 + t883;
  t832 = t510*t401*t481;
  t851 = t69*t756;
  t853 = t832 + t851;
  t880 = -0.0009932822900000022*t853;
  t905 = t510*t896*t481;
  t906 = t79*t401;
  t907 = t123*t896*t305;
  t909 = t906 + t907;
  t913 = t69*t909;
  t914 = t905 + t913;
  t915 = -0.019320336034999996*t914;
  t924 = t880 + t915;
  t403 = t79*t123*t401;
  t408 = -1.*t219*t305;
  t439 = t403 + t408;
  t992 = Sin(var1[3]);
  t255 = t79*t123*t219;
  t314 = -1.*t292*t305;
  t320 = t255 + t314;
  t985 = Cos(var1[3]);
  t778 = t79*t292;
  t780 = t123*t219*t305;
  t787 = t778 + t780;
  t717 = t510*t69*t401;
  t758 = -1.*t481*t756;
  t759 = t717 + t758;
  t776 = t510*t69*t219;
  t795 = -1.*t481*t787;
  t804 = t776 + t795;
  t1335 = -1.*t79*t123*t401;
  t1341 = t219*t305;
  t1350 = t1335 + t1341;
  t1456 = t985*t1350;
  t1466 = -1.*t992*t759;
  t1471 = t1456 + t1466;
  t1481 = -0.0009932822900000022*t1471;
  t1490 = -1.*t79*t123*t896;
  t1494 = t401*t305;
  t1497 = t1490 + t1494;
  t1498 = t985*t1497;
  t1501 = t510*t69*t896;
  t1508 = -1.*t481*t909;
  t1518 = t1501 + t1508;
  t1527 = -1.*t992*t1518;
  t1529 = t1498 + t1527;
  t1532 = -0.019320336034999996*t1529;
  t1533 = t1481 + t1532;
  t1135 = -1.*t510*t401*t481;
  t1137 = -1.*t69*t756;
  t1140 = t1135 + t1137;
  t1147 = -1.*t510*t219*t481;
  t1148 = -1.*t69*t787;
  t1166 = t1147 + t1148;
  t1232 = -1.*t69*t123*t401;
  t1236 = -1.*t510*t401*t481*t305;
  t1248 = t1232 + t1236;
  t1294 = -1.*t69*t123*t219;
  t1297 = -1.*t510*t219*t481*t305;
  t1299 = t1294 + t1297;
  t1381 = -1.*t79*t123*t219;
  t1418 = t292*t305;
  t1420 = t1381 + t1418;
  t1743 = t992*t1350;
  t1778 = t985*t759;
  t1779 = t1743 + t1778;
  t1789 = -0.0009932822900000022*t1779;
  t1791 = t992*t1497;
  t1792 = t985*t1518;
  t1808 = t1791 + t1792;
  t1820 = -0.019320336034999996*t1808;
  t1821 = t1789 + t1820;
  t1873 = -1.*t169;
  t1886 = 1. + t1873;
  t1888 = 0.1881*t1886;
  t1902 = 0.194386*t169;
  t1905 = -0.12226899999999999*t205;
  t1908 = t1888 + t1902 + t1905;
  t1917 = -0.213*t1886;
  t1919 = -0.335269*t169;
  t1943 = -0.006286*t205;
  t1952 = t1917 + t1919 + t1943;
  t2018 = -1.*t510;
  t2023 = 1. + t2018;
  t2036 = 0.04675*t2023;
  t2045 = 0.128057*t510;
  t2054 = 0.1881*t185;
  t2056 = -1.*t185*t1908;
  t2059 = t148*t1952;
  t2068 = 0. + t2054 + t2056 + t2059;
  t2090 = -1.*t123*t2068;
  t2104 = t2036 + t2045 + t2090;
  t1866 = -1.*t148;
  t1868 = 1. + t1866;
  t1870 = 0.1881*t1868;
  t1909 = t148*t1908;
  t1957 = t185*t1952;
  t1963 = 0. + t1870 + t1909 + t1957;
  t2166 = -1.*t79*t2104;
  t2168 = -1.*t1963*t305;
  t2176 = t2166 + t2168;
  t1981 = t79*t1963;
  t2106 = -1.*t2104*t305;
  t2229 = 0.081307*t123;
  t2238 = t510*t2068;
  t2241 = 0. + t2229 + t2238;
  t2251 = 0. + t1981 + t2106;
  t2201 = t79*t2104;
  t2204 = t1963*t305;
  t2206 = 0. + t2201 + t2204;
  t2133 = t123*t481;
  t2149 = -1.*t510*t69*t305;
  t2161 = t2133 + t2149;
  t2245 = t2241*t481;
  t2269 = t69*t2251;
  t2270 = 0. + t2245 + t2269;
  t2214 = t69*t123;
  t2218 = t510*t481*t305;
  t2221 = t2214 + t2218;
  t2278 = t69*t2241;
  t2286 = -1.*t481*t2251;
  t2287 = 0. + t2278 + t2286;
  t2107 = t1981 + t2106;
  t2445 = t510*t219*t481;
  t2455 = t69*t787;
  t2464 = t2445 + t2455;
  t499 = -1.*t123*t401*t481;
  t523 = t510*t69*t401*t305;
  t564 = t499 + t523;
  t572 = -1.*t123*t219*t481;
  t674 = t510*t69*t219*t305;
  t682 = t572 + t674;
  t2300 = t510*t79*t2206;
  t2301 = t2161*t2270;
  t2321 = t2221*t2287;
  t2336 = t2300 + t2301 + t2321;
  t2634 = -0.081307*t123;
  t2638 = -1.*t510*t2068;
  t2640 = t2634 + t2638;
  t2650 = 0.081307*t510;
  t2652 = t2650 + t2090;
  t2608 = t510*t481;
  t2610 = t69*t123*t305;
  t2614 = t2608 + t2610;
  t2660 = t2652*t481;
  t2674 = -1.*t69*t2640*t305;
  t2683 = t2660 + t2674;
  t2709 = t69*t2652;
  t2713 = t2640*t481*t305;
  t2714 = t2709 + t2713;
  t2399 = -1.*t2206*t1350;
  t2401 = -1.*t2270*t853;
  t2411 = -1.*t2287*t759;
  t2418 = t2399 + t2401 + t2411;
  t2496 = -1.*t510*t79*t2206;
  t2499 = -1.*t2161*t2270;
  t2502 = -1.*t2221*t2287;
  t2504 = t2496 + t2499 + t2502;
  t2632 = Power(t79,2);
  t2727 = t510*t69;
  t2734 = -1.*t123*t481*t305;
  t2745 = t2727 + t2734;
  t2567 = t2206*t1420;
  t2571 = t2270*t2464;
  t2574 = t2287*t804;
  t2593 = t2567 + t2571 + t2574;
  t2968 = t2278 + t2286;
  t2932 = -1.*t2241*t481;
  t2938 = -1.*t69*t2251;
  t2945 = t2932 + t2938;
  t2994 = -1.*t123*t481;
  t3001 = t510*t69*t305;
  t3005 = t2994 + t3001;
  t3431 = 0.1881*t148;
  t3436 = -1.*t148*t1908;
  t3440 = -1.*t185*t1952;
  t3447 = t3431 + t3436 + t3440;
  t3450 = t2054 + t2056 + t2059;
  t3480 = t79*t3450;
  t3490 = t123*t3447*t305;
  t3500 = t3480 + t3490;
  t3448 = -1.*t79*t123*t3447;
  t3451 = t3450*t305;
  t3458 = t3448 + t3451;
  t3478 = t510*t3447*t481;
  t3502 = t69*t3500;
  t3507 = t3478 + t3502;
  t3511 = t510*t69*t3447;
  t3513 = -1.*t481*t3500;
  t3516 = t3511 + t3513;
  t3378 = -0.000029*t853;
  t3392 = 1.e-6*t914;
  t3421 = t853*t2504;
  t3792 = -0.12226899999999999*t169;
  t3797 = t3792 + t1943;
  t3803 = -0.006286*t169;
  t3813 = 0.12226899999999999*t205;
  t3818 = t3803 + t3813;
  t3798 = -1.*t185*t3797;
  t3824 = t148*t3818;
  t3830 = t3798 + t3824;
  t3850 = t148*t3797;
  t3858 = t185*t3818;
  t3860 = t3850 + t3858;
  t3875 = t79*t3860;
  t3884 = t123*t3830*t305;
  t3888 = t3875 + t3884;
  t3848 = -1.*t79*t123*t3830;
  t3861 = t3860*t305;
  t3867 = t3848 + t3861;
  t3533 = t2206*t1350;
  t3537 = t2270*t853;
  t3550 = t2287*t759;
  t3872 = t510*t3830*t481;
  t3890 = t69*t3888;
  t3902 = t3872 + t3890;
  t3909 = t510*t69*t3830;
  t3910 = -1.*t481*t3888;
  t3917 = t3909 + t3910;
  t3617 = t914*t2336;
  t3638 = -1.*t2206*t1497;
  t3715 = -1.*t2270*t914;
  t3722 = -1.*t2287*t1518;
  t2643 = t510*t2632*t2640;
  t2699 = -1.*t79*t123*t2206;
  t2757 = t510*t79*t401*t2206;
  t2763 = -1.*t79*t2640*t1350;
  t2788 = -1.*t510*t2632*t2640;
  t4094 = Power(t305,2);
  t2808 = t79*t123*t2206;
  t2858 = -1.*t510*t79*t219*t2206;
  t2860 = t79*t2640*t1420;
  t4046 = t123*t2241;
  t4048 = -1.*t510*t305*t2251;
  t4049 = t4046 + t4048 + t2300;
  t2116 = t510*t79*t2107;
  t2207 = -1.*t510*t305*t2206;
  t2353 = -1.*t2206*t756;
  t2366 = -1.*t2107*t1350;
  t4148 = -1.*t510*t2241*t401;
  t4152 = -1.*t2251*t756;
  t4157 = t4148 + t4152 + t2399;
  t4164 = -1.*t123*t2241;
  t4170 = t510*t305*t2251;
  t4171 = t4164 + t4170 + t2496;
  t2465 = -1.*t510*t79*t2107;
  t2469 = t510*t305*t2206;
  t4210 = t510*t2241*t219;
  t4211 = t2251*t787;
  t4215 = t4210 + t2567 + t4211;
  t2512 = t2107*t1420;
  t2524 = t2206*t787;
  t3464 = -1.*t510*t79*t3458;
  t3527 = t3458*t1420;
  t3620 = t510*t79*t3458;
  t4409 = Power(t510,2);
  t3659 = -1.*t3458*t1350;
  t4385 = 1.e-6*t1497;
  t4387 = -0.000029*t1350;
  t4405 = t1350*t4171;
  t3869 = -1.*t510*t79*t3867;
  t4408 = t510*t2241*t401;
  t4416 = t2251*t756;
  t3939 = t3867*t1420;
  t4451 = t1497*t4049;
  t3995 = t510*t79*t3867;
  t4460 = -1.*t510*t2241*t896;
  t4014 = -1.*t3867*t1350;
  t4475 = -1.*t2251*t909;
  t4620 = t2229 + t2238;
  t4176 = -1.*t123*t2652;
  t4189 = t510*t2652*t219;
  t4069 = t123*t2652;
  t4126 = -1.*t510*t2652*t401;
  t4621 = -1.*t123*t4620;
  t4622 = -1.*t510*t2104;
  t4630 = t4621 + t4622;
  t4410 = t4409*t3447*t219;
  t4716 = t123*t4620;
  t4727 = t510*t2104;
  t4741 = t4716 + t4727;
  t4459 = -1.*t4409*t3447*t401;
  t4850 = Power(t123,2);
  t4806 = -0.000029*t510*t401;
  t4811 = 1.e-6*t510*t896;
  t4837 = t510*t4630*t401;
  t4842 = t510*t4620*t401;
  t4845 = -1.*t123*t2104*t401;
  t4853 = t1963*t219;
  t4500 = t4409*t3830*t219;
  t4882 = t510*t4741*t896;
  t4895 = -1.*t1963*t401;
  t4529 = -1.*t4409*t3830*t401;
  t4903 = -1.*t510*t4620*t896;
  t4904 = t123*t2104*t896;
  t4965 = -0.00007976080315303019*t401;
  t4971 = -0.000029*t219;
  t5003 = -0.128057*t219;
  t5023 = -0.04675*t896;
  t5037 = t5003 + t5023;
  t5041 = -0.019320336034999996*t5037;
  t5044 = t4965 + t4971 + t5041;
  p_output1[0]=var2[11]*(-0.5*(-0.019320336034999996*t759 - 0.0009932822900000022*t804)*var2[4] - 0.5*(-0.0009932822900000022*t320*t69 - 0.019320336034999996*t439*t69)*var2[5] - 0.5*(-0.019320336034999996*t564 - 0.0009932822900000022*t682)*var2[9] - 0.5*t924*var2[10] - 0.5*t924*var2[11]);
  p_output1[1]=var2[11]*(-0.5*(-0.019320336034999996*(-1.*t759*t985 - 1.*t1350*t992) - 0.0009932822900000022*(-1.*t804*t985 - 1.*t1420*t992))*var2[3] - 0.5*(0.019320336034999996*t1140*t992 + 0.0009932822900000022*t1166*t992)*var2[4] - 0.5*(-0.0009932822900000022*(t787*t985 + t320*t481*t992) - 0.019320336034999996*(t756*t985 + t439*t481*t992))*var2[5] - 0.5*(-0.019320336034999996*(-1.*t401*t510*t79*t985 - 1.*t1248*t992) - 0.0009932822900000022*(-1.*t219*t510*t79*t985 - 1.*t1299*t992))*var2[9] - 0.5*t1533*var2[10] - 0.5*t1533*var2[11]);
  p_output1[2]=var2[11]*(-0.5*(-0.019320336034999996*t1471 - 0.0009932822900000022*(t1420*t985 - 1.*t804*t992))*var2[3] - 0.5*(-0.019320336034999996*t1140*t985 - 0.0009932822900000022*t1166*t985)*var2[4] - 0.5*(-0.019320336034999996*(-1.*t439*t481*t985 + t756*t992) - 0.0009932822900000022*(-1.*t320*t481*t985 + t787*t992))*var2[5] - 0.5*(-0.0009932822900000022*(t1299*t985 - 1.*t219*t510*t79*t992) - 0.019320336034999996*(t1248*t985 - 1.*t401*t510*t79*t992))*var2[9] - 0.5*t1821*var2[10] - 0.5*t1821*var2[11]);
  p_output1[3]=var2[11]*(-0.5*(0.003627*t2221 + 1.e-6*t759 - 0.000029*t804 - 0.019320336034999996*(t2221*t2593 + t2464*(-1.*t2221*t2270 - 1.*t2221*t2945 - 1.*t2161*t2968 - 1.*t2287*t3005) + t2504*t804 + t2161*(t1166*t2287 + t2464*t2968 + t2270*t804 + t2945*t804)) - 0.0009932822900000022*(t2221*t2418 + t2336*t759 + (t2221*t2270 + t2221*t2945 + t2161*t2968 + t2287*t3005)*t853 + t2161*(-1.*t1140*t2287 - 1.*t2270*t759 - 1.*t2945*t759 - 1.*t2968*t853)))*var2[4] - 0.5*(-0.000029*t320*t69 + 1.e-6*t439*t69 - 0.003627*t510*t69*t79 - 0.019320336034999996*(t2504*t320*t69 - 1.*t2593*t510*t69*t79 + t2464*(t2465 + t2469 + t2176*t2221*t481 - 1.*t2161*t2176*t69 - 1.*t2287*t481*t510*t79 + t2270*t510*t69*t79) + t2161*(t2512 + t2524 - 1.*t2287*t320*t481 + t2176*t2464*t69 + t2270*t320*t69 - 1.*t2176*t481*t804)) - 0.0009932822900000022*(t2336*t439*t69 - 1.*t2418*t510*t69*t79 + (t2116 + t2207 - 1.*t2176*t2221*t481 + t2161*t2176*t69 + t2287*t481*t510*t79 - 1.*t2270*t510*t69*t79)*t853 + t2161*(t2353 + t2366 + t2287*t439*t481 - 1.*t2270*t439*t69 + t2176*t481*t759 - 1.*t2176*t69*t853)))*var2[5] - 0.5*(0.003627*t2614 + 1.e-6*t564 - 0.000029*t682 - 0.019320336034999996*(t2593*t2614 + t2464*(-1.*t2270*t2614 - 1.*t2161*t2683 - 1.*t2221*t2714 - 1.*t2287*t2745 + t2788 + t2808) + t2504*t682 + t2161*(t1299*t2287 + t2464*t2683 + t2858 + t2860 + t2270*t682 + t2714*t804)) - 0.0009932822900000022*(t2418*t2614 + t2336*t564 + (t2270*t2614 + t2643 + t2161*t2683 + t2699 + t2221*t2714 + t2287*t2745)*t853 + t2161*(-1.*t1248*t2287 + t2757 + t2763 - 1.*t2270*t564 - 1.*t2714*t759 - 1.*t2683*t853)))*var2[9] - 0.5*(t3378 + t3392 - 0.019320336034999996*(t3421 + t2464*(t3464 - 1.*t2161*t3507 - 1.*t2221*t3516) + t2161*(t2464*t3507 + t3527 + t3533 + t3537 + t3550 + t3516*t804)) - 0.0009932822900000022*(t3617 + (t2161*t3507 + t2221*t3516 + t3620)*t853 + t2161*(t3638 + t3659 + t3715 + t3722 - 1.*t3516*t759 - 1.*t3507*t853)))*var2[10] - 0.5*(t3378 + t3392 - 0.019320336034999996*(t3421 + t2464*(t3869 - 1.*t2161*t3902 - 1.*t2221*t3917) + t2161*(t3533 + t3537 + t3550 + t2464*t3902 + t3939 + t3917*t804)) - 0.0009932822900000022*(t3617 + (t2161*t3902 + t2221*t3917 + t3995)*t853 + t2161*(t3638 + t3715 + t3722 + t4014 - 1.*t3917*t759 - 1.*t3902*t853)))*var2[11]);
  p_output1[4]=var2[11]*(-0.5*(-0.003627*t305*t510 + 1.e-6*t756 - 0.000029*t787 - 0.0009932822900000022*(-1.*t305*t4157*t510 + t4049*t756 + t510*(t2353 + t2366 - 1.*t2251*t439 - 1.*t2176*t756)*t79 + t1350*(t2116 + t2207 - 1.*t2176*t305*t510 - 1.*t2251*t510*t79)) - 0.019320336034999996*(-1.*t305*t4215*t510 + t4171*t787 + t510*(t2512 + t2524 + t2251*t320 + t2176*t787)*t79 + t1420*(t2465 + t2469 + t2176*t305*t510 + t2251*t510*t79)))*var2[5] - 0.5*(-0.003627*t123*t79 + 0.000029*t219*t510*t79 - 1.e-6*t401*t510*t79 - 0.0009932822900000022*(t1350*(t2643 + t2699 + t123*t2251*t305 + t4069 + t2241*t510 + t2640*t4094*t510) - 1.*t123*t4157*t79 - 1.*t401*t4049*t510*t79 + t510*(t2757 + t2763 + t123*t2241*t401 + t4126 - 1.*t2251*t305*t401*t510 + t2640*t305*t756)*t79) - 0.019320336034999996*(t1420*(t2788 + t2808 - 1.*t123*t2251*t305 + t4176 - 1.*t2241*t510 - 1.*t2640*t4094*t510) - 1.*t123*t4215*t79 - 1.*t219*t4171*t510*t79 + t510*(-1.*t123*t219*t2241 + t2858 + t2860 + t4189 + t219*t2251*t305*t510 - 1.*t2640*t305*t787)*t79))*var2[9] - 0.5*(t4385 + t4387 - 0.0009932822900000022*(t4451 + t1350*(t3620 + t123*t3447*t510 - 1.*t305*t3500*t510) + t510*(t3638 + t3659 + t4459 + t4460 + t4475 - 1.*t3500*t756)*t79) - 0.019320336034999996*(t4405 + t1420*(t3464 - 1.*t123*t3447*t510 + t305*t3500*t510) + t510*(t3527 + t3533 + t4408 + t4410 + t4416 + t3500*t787)*t79))*var2[10] - 0.5*(t4385 + t4387 - 0.0009932822900000022*(t4451 + t1350*(t3995 + t123*t3830*t510 - 1.*t305*t3888*t510) + t510*(t3638 + t4014 + t4460 + t4475 + t4529 - 1.*t3888*t756)*t79) - 0.019320336034999996*(t4405 + t1420*(t3869 - 1.*t123*t3830*t510 + t305*t3888*t510) + t510*(t3533 + t3939 + t4408 + t4416 + t4500 + t3888*t787)*t79))*var2[11]);
  p_output1[5]=var2[11]*(-0.5*(0.000029*t123*t219 - 1.e-6*t123*t401 + 0.003627*t510 - 0.019320336034999996*(-1.*t123*t219*t4630 + t123*(-1.*t123*t219*t2640 + t4189 - 1.*t123*t219*t4620 - 1.*t2104*t219*t510) + t219*t510*(t123*t2104 + t4176 - 1.*t2640*t510 - 1.*t4620*t510) + t510*(-1.*t123*t2104*t219 + t1963*t292 + t219*t4620*t510)) - 0.0009932822900000022*(-1.*t123*t401*t4741 + t123*(t123*t2640*t401 + t4126 + t123*t401*t4620 + t2104*t401*t510) + t401*t510*(-1.*t123*t2104 + t4069 + t2640*t510 + t4620*t510) + t510*(-1.*t1963*t219 + t123*t2104*t401 - 1.*t401*t4620*t510)))*var2[9] - 0.5*(t4806 + t4811 - 0.019320336034999996*(t4837 + t123*(t292*t3450 + t4410 + t4842 + t4845 + t219*t3447*t4850 + t4853)) - 0.0009932822900000022*(t4882 + t123*(-1.*t219*t3450 + t4459 - 1.*t3447*t401*t4850 + t4895 + t4903 + t4904)))*var2[10] - 0.5*(t4806 + t4811 - 0.019320336034999996*(t4837 + t123*(t292*t3860 + t4500 + t4842 + t4845 + t219*t3830*t4850 + t4853)) - 0.0009932822900000022*(t4882 + t123*(-1.*t219*t3860 + t4529 - 1.*t3830*t401*t4850 + t4895 + t4903 + t4904)))*var2[11]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=var2[11]*(-0.5*t5044*var2[10] - 0.5*t5044*var2[11]);
  p_output1[10]=-0.5*(-0.019320336034999996*(-0.1881*t169 + t169*t1908 - 1.*t1952*t205 + t205*t3797 + t169*t3818) - 0.0009932822900000022*(t169*t1952 - 0.1881*t205 + t1908*t205 - 1.*t169*t3797 + t205*t3818))*Power(var2[11],2);
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

#include "Ce1_vec12_go1_description.hh"

namespace SymFunction
{

void Ce1_vec12_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
