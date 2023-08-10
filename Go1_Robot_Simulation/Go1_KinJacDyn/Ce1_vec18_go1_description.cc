/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:27:44 GMT-05:00
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
  double t195;
  double t212;
  double t183;
  double t218;
  double t6;
  double t91;
  double t127;
  double t199;
  double t253;
  double t267;
  double t355;
  double t374;
  double t407;
  double t408;
  double t457;
  double t466;
  double t311;
  double t330;
  double t345;
  double t562;
  double t580;
  double t582;
  double t752;
  double t757;
  double t763;
  double t723;
  double t727;
  double t729;
  double t736;
  double t796;
  double t807;
  double t819;
  double t831;
  double t842;
  double t846;
  double t847;
  double t849;
  double t412;
  double t418;
  double t425;
  double t903;
  double t310;
  double t363;
  double t365;
  double t895;
  double t660;
  double t665;
  double t681;
  double t550;
  double t602;
  double t614;
  double t629;
  double t683;
  double t689;
  double t1201;
  double t1214;
  double t1225;
  double t1304;
  double t1310;
  double t1315;
  double t1329;
  double t1331;
  double t1332;
  double t1334;
  double t1338;
  double t1340;
  double t1351;
  double t1353;
  double t1359;
  double t1360;
  double t1367;
  double t1372;
  double t1016;
  double t1018;
  double t1023;
  double t1049;
  double t1052;
  double t1055;
  double t1098;
  double t1105;
  double t1110;
  double t1139;
  double t1163;
  double t1164;
  double t1243;
  double t1245;
  double t1250;
  double t1601;
  double t1602;
  double t1606;
  double t1611;
  double t1621;
  double t1625;
  double t1630;
  double t1633;
  double t1635;
  double t1693;
  double t1699;
  double t1701;
  double t1704;
  double t1707;
  double t1708;
  double t1712;
  double t1716;
  double t1721;
  double t1730;
  double t1756;
  double t1760;
  double t1763;
  double t1769;
  double t1772;
  double t1773;
  double t1776;
  double t1784;
  double t1790;
  double t1794;
  double t1666;
  double t1678;
  double t1681;
  double t1709;
  double t1741;
  double t1749;
  double t1833;
  double t1869;
  double t1872;
  double t1753;
  double t1795;
  double t1924;
  double t1928;
  double t1941;
  double t1985;
  double t1875;
  double t1887;
  double t1890;
  double t1806;
  double t1820;
  double t1823;
  double t1943;
  double t1986;
  double t1996;
  double t1909;
  double t1913;
  double t1920;
  double t2001;
  double t2002;
  double t2005;
  double t1798;
  double t2184;
  double t2187;
  double t2192;
  double t459;
  double t480;
  double t486;
  double t508;
  double t511;
  double t520;
  double t2070;
  double t2072;
  double t2081;
  double t2085;
  double t2381;
  double t2391;
  double t2394;
  double t2401;
  double t2436;
  double t2359;
  double t2361;
  double t2370;
  double t2437;
  double t2445;
  double t2457;
  double t2470;
  double t2473;
  double t2474;
  double t2145;
  double t2150;
  double t2153;
  double t2169;
  double t2233;
  double t2234;
  double t2237;
  double t2239;
  double t2379;
  double t2484;
  double t2486;
  double t2489;
  double t2311;
  double t2321;
  double t2324;
  double t2325;
  double t2656;
  double t2644;
  double t2648;
  double t2651;
  double t2667;
  double t2675;
  double t2679;
  double t2934;
  double t2935;
  double t2940;
  double t2943;
  double t2965;
  double t3006;
  double t3017;
  double t3020;
  double t2961;
  double t2983;
  double t2989;
  double t2993;
  double t3022;
  double t3034;
  double t3038;
  double t3043;
  double t3044;
  double t2925;
  double t2927;
  double t2931;
  double t3188;
  double t3189;
  double t3196;
  double t3197;
  double t3201;
  double t3192;
  double t3206;
  double t3210;
  double t3213;
  double t3247;
  double t3260;
  double t3278;
  double t3290;
  double t3291;
  double t3211;
  double t3261;
  double t3268;
  double t3082;
  double t3088;
  double t3090;
  double t3275;
  double t3296;
  double t3299;
  double t3326;
  double t3329;
  double t3331;
  double t3123;
  double t3152;
  double t3160;
  double t3162;
  double t2399;
  double t2466;
  double t2495;
  double t2497;
  double t2525;
  double t3634;
  double t2530;
  double t2597;
  double t2599;
  double t3595;
  double t3597;
  double t3598;
  double t1804;
  double t1894;
  double t2095;
  double t2096;
  double t3694;
  double t3695;
  double t3725;
  double t3755;
  double t3756;
  double t3764;
  double t2193;
  double t2219;
  double t3837;
  double t3841;
  double t3842;
  double t2243;
  double t2254;
  double t2992;
  double t3074;
  double t3128;
  double t4116;
  double t3153;
  double t4083;
  double t4084;
  double t4108;
  double t3274;
  double t4112;
  double t4125;
  double t3443;
  double t4179;
  double t3477;
  double t4190;
  double t3514;
  double t4204;
  double t4317;
  double t3781;
  double t3812;
  double t3622;
  double t3665;
  double t4318;
  double t4319;
  double t4322;
  double t4124;
  double t4390;
  double t4393;
  double t4395;
  double t4183;
  double t4471;
  double t4454;
  double t4457;
  double t4458;
  double t4463;
  double t4464;
  double t4489;
  double t4234;
  double t4501;
  double t4503;
  double t4268;
  double t4510;
  double t4512;
  double t4573;
  double t4574;
  double t4576;
  double t4582;
  double t4583;
  double t4585;
  double t4588;
  t195 = Cos(var1[17]);
  t212 = Sin(var1[16]);
  t183 = Cos(var1[16]);
  t218 = Sin(var1[17]);
  t6 = Cos(var1[4]);
  t91 = Cos(var1[5]);
  t127 = Sin(var1[15]);
  t199 = t183*t195;
  t253 = -1.*t212*t218;
  t267 = t199 + t253;
  t355 = Sin(var1[5]);
  t374 = -1.*t195*t212;
  t407 = -1.*t183*t218;
  t408 = t374 + t407;
  t457 = Sin(var1[4]);
  t466 = Cos(var1[15]);
  t311 = t195*t212;
  t330 = t183*t218;
  t345 = t311 + t330;
  t562 = t91*t267;
  t580 = t127*t408*t355;
  t582 = t562 + t580;
  t752 = -1.*t183*t195;
  t757 = t212*t218;
  t763 = t752 + t757;
  t723 = t466*t408*t457;
  t727 = t6*t582;
  t729 = t723 + t727;
  t736 = -0.0009932822899999978*t729;
  t796 = t466*t763*t457;
  t807 = t91*t408;
  t819 = t127*t763*t355;
  t831 = t807 + t819;
  t842 = t6*t831;
  t846 = t796 + t842;
  t847 = -0.019320336034999996*t846;
  t849 = t736 + t847;
  t412 = t91*t127*t408;
  t418 = -1.*t267*t355;
  t425 = t412 + t418;
  t903 = Sin(var1[3]);
  t310 = t91*t127*t267;
  t363 = -1.*t345*t355;
  t365 = t310 + t363;
  t895 = Cos(var1[3]);
  t660 = t91*t345;
  t665 = t127*t267*t355;
  t681 = t660 + t665;
  t550 = t466*t6*t408;
  t602 = -1.*t457*t582;
  t614 = t550 + t602;
  t629 = t466*t6*t267;
  t683 = -1.*t457*t681;
  t689 = t629 + t683;
  t1201 = -1.*t91*t127*t408;
  t1214 = t267*t355;
  t1225 = t1201 + t1214;
  t1304 = t895*t1225;
  t1310 = -1.*t903*t614;
  t1315 = t1304 + t1310;
  t1329 = -0.0009932822899999978*t1315;
  t1331 = -1.*t91*t127*t763;
  t1332 = t408*t355;
  t1334 = t1331 + t1332;
  t1338 = t895*t1334;
  t1340 = t466*t6*t763;
  t1351 = -1.*t457*t831;
  t1353 = t1340 + t1351;
  t1359 = -1.*t903*t1353;
  t1360 = t1338 + t1359;
  t1367 = -0.019320336034999996*t1360;
  t1372 = t1329 + t1367;
  t1016 = -1.*t466*t408*t457;
  t1018 = -1.*t6*t582;
  t1023 = t1016 + t1018;
  t1049 = -1.*t466*t267*t457;
  t1052 = -1.*t6*t681;
  t1055 = t1049 + t1052;
  t1098 = -1.*t6*t127*t408;
  t1105 = -1.*t466*t408*t457*t355;
  t1110 = t1098 + t1105;
  t1139 = -1.*t6*t127*t267;
  t1163 = -1.*t466*t267*t457*t355;
  t1164 = t1139 + t1163;
  t1243 = -1.*t91*t127*t267;
  t1245 = t345*t355;
  t1250 = t1243 + t1245;
  t1601 = t903*t1225;
  t1602 = t895*t614;
  t1606 = t1601 + t1602;
  t1611 = -0.0009932822899999978*t1606;
  t1621 = t903*t1334;
  t1625 = t895*t1353;
  t1630 = t1621 + t1625;
  t1633 = -0.019320336034999996*t1630;
  t1635 = t1611 + t1633;
  t1693 = -1.*t195;
  t1699 = 1. + t1693;
  t1701 = -0.1881*t1699;
  t1704 = -0.181814*t195;
  t1707 = -0.12226899999999999*t218;
  t1708 = t1701 + t1704 + t1707;
  t1712 = -0.213*t1699;
  t1716 = -0.335269*t195;
  t1721 = -0.006286*t218;
  t1730 = t1712 + t1716 + t1721;
  t1756 = -1.*t466;
  t1760 = 1. + t1756;
  t1763 = 0.04675*t1760;
  t1769 = 0.128057*t466;
  t1772 = -0.1881*t212;
  t1773 = -1.*t212*t1708;
  t1776 = t183*t1730;
  t1784 = 0. + t1772 + t1773 + t1776;
  t1790 = -1.*t127*t1784;
  t1794 = t1763 + t1769 + t1790;
  t1666 = -1.*t183;
  t1678 = 1. + t1666;
  t1681 = -0.1881*t1678;
  t1709 = t183*t1708;
  t1741 = t212*t1730;
  t1749 = 0. + t1681 + t1709 + t1741;
  t1833 = -1.*t91*t1794;
  t1869 = -1.*t1749*t355;
  t1872 = t1833 + t1869;
  t1753 = t91*t1749;
  t1795 = -1.*t1794*t355;
  t1924 = 0.081307*t127;
  t1928 = t466*t1784;
  t1941 = 0. + t1924 + t1928;
  t1985 = 0. + t1753 + t1795;
  t1875 = t91*t1794;
  t1887 = t1749*t355;
  t1890 = 0. + t1875 + t1887;
  t1806 = t127*t457;
  t1820 = -1.*t466*t6*t355;
  t1823 = t1806 + t1820;
  t1943 = t1941*t457;
  t1986 = t6*t1985;
  t1996 = 0. + t1943 + t1986;
  t1909 = t6*t127;
  t1913 = t466*t457*t355;
  t1920 = t1909 + t1913;
  t2001 = t6*t1941;
  t2002 = -1.*t457*t1985;
  t2005 = 0. + t2001 + t2002;
  t1798 = t1753 + t1795;
  t2184 = t466*t267*t457;
  t2187 = t6*t681;
  t2192 = t2184 + t2187;
  t459 = -1.*t127*t408*t457;
  t480 = t466*t6*t408*t355;
  t486 = t459 + t480;
  t508 = -1.*t127*t267*t457;
  t511 = t466*t6*t267*t355;
  t520 = t508 + t511;
  t2070 = t466*t91*t1890;
  t2072 = t1823*t1996;
  t2081 = t1920*t2005;
  t2085 = t2070 + t2072 + t2081;
  t2381 = -0.081307*t127;
  t2391 = -1.*t466*t1784;
  t2394 = t2381 + t2391;
  t2401 = 0.081307*t466;
  t2436 = t2401 + t1790;
  t2359 = t466*t457;
  t2361 = t6*t127*t355;
  t2370 = t2359 + t2361;
  t2437 = t2436*t457;
  t2445 = -1.*t6*t2394*t355;
  t2457 = t2437 + t2445;
  t2470 = t6*t2436;
  t2473 = t2394*t457*t355;
  t2474 = t2470 + t2473;
  t2145 = -1.*t1890*t1225;
  t2150 = -1.*t1996*t729;
  t2153 = -1.*t2005*t614;
  t2169 = t2145 + t2150 + t2153;
  t2233 = -1.*t466*t91*t1890;
  t2234 = -1.*t1823*t1996;
  t2237 = -1.*t1920*t2005;
  t2239 = t2233 + t2234 + t2237;
  t2379 = Power(t91,2);
  t2484 = t466*t6;
  t2486 = -1.*t127*t457*t355;
  t2489 = t2484 + t2486;
  t2311 = t1890*t1250;
  t2321 = t1996*t2192;
  t2324 = t2005*t689;
  t2325 = t2311 + t2321 + t2324;
  t2656 = t2001 + t2002;
  t2644 = -1.*t1941*t457;
  t2648 = -1.*t6*t1985;
  t2651 = t2644 + t2648;
  t2667 = -1.*t127*t457;
  t2675 = t466*t6*t355;
  t2679 = t2667 + t2675;
  t2934 = -0.1881*t183;
  t2935 = -1.*t183*t1708;
  t2940 = -1.*t212*t1730;
  t2943 = t2934 + t2935 + t2940;
  t2965 = t1772 + t1773 + t1776;
  t3006 = t91*t2965;
  t3017 = t127*t2943*t355;
  t3020 = t3006 + t3017;
  t2961 = -1.*t91*t127*t2943;
  t2983 = t2965*t355;
  t2989 = t2961 + t2983;
  t2993 = t466*t2943*t457;
  t3022 = t6*t3020;
  t3034 = t2993 + t3022;
  t3038 = t466*t6*t2943;
  t3043 = -1.*t457*t3020;
  t3044 = t3038 + t3043;
  t2925 = -0.000029*t729;
  t2927 = 1.e-6*t846;
  t2931 = t729*t2239;
  t3188 = -0.12226899999999999*t195;
  t3189 = t3188 + t1721;
  t3196 = -0.006286*t195;
  t3197 = 0.12226899999999999*t218;
  t3201 = t3196 + t3197;
  t3192 = -1.*t212*t3189;
  t3206 = t183*t3201;
  t3210 = t3192 + t3206;
  t3213 = t183*t3189;
  t3247 = t212*t3201;
  t3260 = t3213 + t3247;
  t3278 = t91*t3260;
  t3290 = t127*t3210*t355;
  t3291 = t3278 + t3290;
  t3211 = -1.*t91*t127*t3210;
  t3261 = t3260*t355;
  t3268 = t3211 + t3261;
  t3082 = t1890*t1225;
  t3088 = t1996*t729;
  t3090 = t2005*t614;
  t3275 = t466*t3210*t457;
  t3296 = t6*t3291;
  t3299 = t3275 + t3296;
  t3326 = t466*t6*t3210;
  t3329 = -1.*t457*t3291;
  t3331 = t3326 + t3329;
  t3123 = t846*t2085;
  t3152 = -1.*t1890*t1334;
  t3160 = -1.*t1996*t846;
  t3162 = -1.*t2005*t1353;
  t2399 = t466*t2379*t2394;
  t2466 = -1.*t91*t127*t1890;
  t2495 = t466*t91*t408*t1890;
  t2497 = -1.*t91*t2394*t1225;
  t2525 = -1.*t466*t2379*t2394;
  t3634 = Power(t355,2);
  t2530 = t91*t127*t1890;
  t2597 = -1.*t466*t91*t267*t1890;
  t2599 = t91*t2394*t1250;
  t3595 = t127*t1941;
  t3597 = -1.*t466*t355*t1985;
  t3598 = t3595 + t3597 + t2070;
  t1804 = t466*t91*t1798;
  t1894 = -1.*t466*t355*t1890;
  t2095 = -1.*t1890*t582;
  t2096 = -1.*t1798*t1225;
  t3694 = -1.*t466*t1941*t408;
  t3695 = -1.*t1985*t582;
  t3725 = t3694 + t3695 + t2145;
  t3755 = -1.*t127*t1941;
  t3756 = t466*t355*t1985;
  t3764 = t3755 + t3756 + t2233;
  t2193 = -1.*t466*t91*t1798;
  t2219 = t466*t355*t1890;
  t3837 = t466*t1941*t267;
  t3841 = t1985*t681;
  t3842 = t3837 + t2311 + t3841;
  t2243 = t1798*t1250;
  t2254 = t1890*t681;
  t2992 = -1.*t466*t91*t2989;
  t3074 = t2989*t1250;
  t3128 = t466*t91*t2989;
  t4116 = Power(t466,2);
  t3153 = -1.*t2989*t1225;
  t4083 = 1.e-6*t1334;
  t4084 = -0.000029*t1225;
  t4108 = t1225*t3764;
  t3274 = -1.*t466*t91*t3268;
  t4112 = t466*t1941*t408;
  t4125 = t1985*t582;
  t3443 = t3268*t1250;
  t4179 = t1334*t3598;
  t3477 = t466*t91*t3268;
  t4190 = -1.*t466*t1941*t763;
  t3514 = -1.*t3268*t1225;
  t4204 = -1.*t1985*t831;
  t4317 = t1924 + t1928;
  t3781 = -1.*t127*t2436;
  t3812 = t466*t2436*t267;
  t3622 = t127*t2436;
  t3665 = -1.*t466*t2436*t408;
  t4318 = -1.*t127*t4317;
  t4319 = -1.*t466*t1794;
  t4322 = t4318 + t4319;
  t4124 = t4116*t2943*t267;
  t4390 = t127*t4317;
  t4393 = t466*t1794;
  t4395 = t4390 + t4393;
  t4183 = -1.*t4116*t2943*t408;
  t4471 = Power(t127,2);
  t4454 = -0.000029*t466*t408;
  t4457 = 1.e-6*t466*t763;
  t4458 = t466*t4322*t408;
  t4463 = t466*t4317*t408;
  t4464 = -1.*t127*t1794*t408;
  t4489 = t1749*t267;
  t4234 = t4116*t3210*t267;
  t4501 = t466*t4395*t763;
  t4503 = -1.*t1749*t408;
  t4268 = -1.*t4116*t3210*t408;
  t4510 = -1.*t466*t4317*t763;
  t4512 = t127*t1794*t763;
  t4573 = -0.00007976080315302984*t408;
  t4574 = -0.000029*t267;
  t4576 = -0.128057*t267;
  t4582 = -0.04675*t763;
  t4583 = t4576 + t4582;
  t4585 = -0.019320336034999996*t4583;
  t4588 = t4573 + t4574 + t4585;
  p_output1[0]=var2[17]*(-0.5*(-0.019320336034999996*t614 - 0.0009932822899999978*t689)*var2[4] - 0.5*(-0.0009932822899999978*t365*t6 - 0.019320336034999996*t425*t6)*var2[5] - 0.5*(-0.019320336034999996*t486 - 0.0009932822899999978*t520)*var2[15] - 0.5*t849*var2[16] - 0.5*t849*var2[17]);
  p_output1[1]=var2[17]*(-0.5*(-0.019320336034999996*(-1.*t614*t895 - 1.*t1225*t903) - 0.0009932822899999978*(-1.*t689*t895 - 1.*t1250*t903))*var2[3] - 0.5*(0.019320336034999996*t1023*t903 + 0.0009932822899999978*t1055*t903)*var2[4] - 0.5*(-0.0009932822899999978*(t681*t895 + t365*t457*t903) - 0.019320336034999996*(t582*t895 + t425*t457*t903))*var2[5] - 0.5*(-0.0009932822899999978*(-1.*t1164*t903 - 1.*t267*t466*t895*t91) - 0.019320336034999996*(-1.*t1110*t903 - 1.*t408*t466*t895*t91))*var2[15] - 0.5*t1372*var2[16] - 0.5*t1372*var2[17]);
  p_output1[2]=var2[17]*(-0.5*(-0.019320336034999996*t1315 - 0.0009932822899999978*(t1250*t895 - 1.*t689*t903))*var2[3] - 0.5*(-0.019320336034999996*t1023*t895 - 0.0009932822899999978*t1055*t895)*var2[4] - 0.5*(-0.019320336034999996*(-1.*t425*t457*t895 + t582*t903) - 0.0009932822899999978*(-1.*t365*t457*t895 + t681*t903))*var2[5] - 0.5*(-0.0009932822899999978*(t1164*t895 - 1.*t267*t466*t903*t91) - 0.019320336034999996*(t1110*t895 - 1.*t408*t466*t903*t91))*var2[15] - 0.5*t1635*var2[16] - 0.5*t1635*var2[17]);
  p_output1[3]=var2[17]*(-0.5*(0.003627*t1920 + 1.e-6*t614 - 0.000029*t689 - 0.019320336034999996*(t1920*t2325 + t2192*(-1.*t1920*t1996 - 1.*t1920*t2651 - 1.*t1823*t2656 - 1.*t2005*t2679) + t2239*t689 + t1823*(t1055*t2005 + t2192*t2656 + t1996*t689 + t2651*t689)) - 0.0009932822899999978*(t1920*t2169 + t2085*t614 + (t1920*t1996 + t1920*t2651 + t1823*t2656 + t2005*t2679)*t729 + t1823*(-1.*t1023*t2005 - 1.*t1996*t614 - 1.*t2651*t614 - 1.*t2656*t729)))*var2[4] - 0.5*(-0.000029*t365*t6 + 1.e-6*t425*t6 - 0.003627*t466*t6*t91 - 0.0009932822899999978*(t2085*t425*t6 + t1823*(t2095 + t2096 + t2005*t425*t457 - 1.*t1996*t425*t6 + t1872*t457*t614 - 1.*t1872*t6*t729) - 1.*t2169*t466*t6*t91 + t729*(t1804 + t1894 - 1.*t1872*t1920*t457 + t1823*t1872*t6 + t2005*t457*t466*t91 - 1.*t1996*t466*t6*t91)) - 0.019320336034999996*(t2239*t365*t6 + t1823*(t2243 + t2254 - 1.*t2005*t365*t457 + t1872*t2192*t6 + t1996*t365*t6 - 1.*t1872*t457*t689) - 1.*t2325*t466*t6*t91 + t2192*(t2193 + t2219 + t1872*t1920*t457 - 1.*t1823*t1872*t6 - 1.*t2005*t457*t466*t91 + t1996*t466*t6*t91)))*var2[5] - 0.5*(0.003627*t2370 + 1.e-6*t486 - 0.000029*t520 - 0.019320336034999996*(t2325*t2370 + t2192*(-1.*t1996*t2370 - 1.*t1823*t2457 - 1.*t1920*t2474 - 1.*t2005*t2489 + t2525 + t2530) + t2239*t520 + t1823*(t1164*t2005 + t2192*t2457 + t2597 + t2599 + t1996*t520 + t2474*t689)) - 0.0009932822899999978*(t2169*t2370 + t2085*t486 + (t1996*t2370 + t2399 + t1823*t2457 + t2466 + t1920*t2474 + t2005*t2489)*t729 + t1823*(-1.*t1110*t2005 + t2495 + t2497 - 1.*t1996*t486 - 1.*t2474*t614 - 1.*t2457*t729)))*var2[15] - 0.5*(t2925 + t2927 - 0.019320336034999996*(t2931 + t2192*(t2992 - 1.*t1823*t3034 - 1.*t1920*t3044) + t1823*(t2192*t3034 + t3074 + t3082 + t3088 + t3090 + t3044*t689)) - 0.0009932822899999978*(t3123 + (t1823*t3034 + t1920*t3044 + t3128)*t729 + t1823*(t3152 + t3153 + t3160 + t3162 - 1.*t3044*t614 - 1.*t3034*t729)))*var2[16] - 0.5*(t2925 + t2927 - 0.019320336034999996*(t2931 + t2192*(t3274 - 1.*t1823*t3299 - 1.*t1920*t3331) + t1823*(t3082 + t3088 + t3090 + t2192*t3299 + t3443 + t3331*t689)) - 0.0009932822899999978*(t3123 + (t1823*t3299 + t1920*t3331 + t3477)*t729 + t1823*(t3152 + t3160 + t3162 + t3514 - 1.*t3331*t614 - 1.*t3299*t729)))*var2[17]);
  p_output1[4]=var2[17]*(-0.5*(-0.003627*t355*t466 + 1.e-6*t582 - 0.000029*t681 - 0.0009932822899999978*(-1.*t355*t3725*t466 + t3598*t582 + t466*(t2095 + t2096 - 1.*t1985*t425 - 1.*t1872*t582)*t91 + t1225*(t1804 + t1894 - 1.*t1872*t355*t466 - 1.*t1985*t466*t91)) - 0.019320336034999996*(-1.*t355*t3842*t466 + t3764*t681 + t466*(t2243 + t2254 + t1985*t365 + t1872*t681)*t91 + t1250*(t2193 + t2219 + t1872*t355*t466 + t1985*t466*t91)))*var2[5] - 0.5*(-0.003627*t127*t91 + 0.000029*t267*t466*t91 - 1.e-6*t408*t466*t91 - 0.0009932822899999978*(t1225*(t2399 + t2466 + t127*t1985*t355 + t3622 + t1941*t466 + t2394*t3634*t466) - 1.*t127*t3725*t91 - 1.*t3598*t408*t466*t91 + t466*(t2495 + t2497 + t3665 + t127*t1941*t408 - 1.*t1985*t355*t408*t466 + t2394*t355*t582)*t91) - 0.019320336034999996*(t1250*(t2525 + t2530 - 1.*t127*t1985*t355 + t3781 - 1.*t1941*t466 - 1.*t2394*t3634*t466) - 1.*t127*t3842*t91 - 1.*t267*t3764*t466*t91 + t466*(t2597 + t2599 - 1.*t127*t1941*t267 + t3812 + t1985*t267*t355*t466 - 1.*t2394*t355*t681)*t91))*var2[15] - 0.5*(t4083 + t4084 - 0.0009932822899999978*(t4179 + t1225*(t3128 + t127*t2943*t466 - 1.*t3020*t355*t466) + t466*(t3152 + t3153 + t4183 + t4190 + t4204 - 1.*t3020*t582)*t91) - 0.019320336034999996*(t4108 + t1250*(t2992 - 1.*t127*t2943*t466 + t3020*t355*t466) + t466*(t3074 + t3082 + t4112 + t4124 + t4125 + t3020*t681)*t91))*var2[16] - 0.5*(t4083 + t4084 - 0.0009932822899999978*(t4179 + t1225*(t3477 + t127*t3210*t466 - 1.*t3291*t355*t466) + t466*(t3152 + t3514 + t4190 + t4204 + t4268 - 1.*t3291*t582)*t91) - 0.019320336034999996*(t4108 + t1250*(t3274 - 1.*t127*t3210*t466 + t3291*t355*t466) + t466*(t3082 + t3443 + t4112 + t4125 + t4234 + t3291*t681)*t91))*var2[17]);
  p_output1[5]=var2[17]*(-0.5*(0.000029*t127*t267 - 1.e-6*t127*t408 + 0.003627*t466 - 0.019320336034999996*(-1.*t127*t267*t4322 + t127*(-1.*t127*t2394*t267 + t3812 - 1.*t127*t267*t4317 - 1.*t1794*t267*t466) + t267*t466*(t127*t1794 + t3781 - 1.*t2394*t466 - 1.*t4317*t466) + t466*(-1.*t127*t1794*t267 + t1749*t345 + t267*t4317*t466)) - 0.0009932822899999978*(-1.*t127*t408*t4395 + t127*(t3665 + t127*t2394*t408 + t127*t408*t4317 + t1794*t408*t466) + t408*t466*(-1.*t127*t1794 + t3622 + t2394*t466 + t4317*t466) + t466*(-1.*t1749*t267 + t127*t1794*t408 - 1.*t408*t4317*t466)))*var2[15] - 0.5*(t4454 + t4457 - 0.019320336034999996*(t4458 + t127*(t2965*t345 + t4124 + t4463 + t4464 + t267*t2943*t4471 + t4489)) - 0.0009932822899999978*(t4501 + t127*(-1.*t267*t2965 + t4183 - 1.*t2943*t408*t4471 + t4503 + t4510 + t4512)))*var2[16] - 0.5*(t4454 + t4457 - 0.019320336034999996*(t4458 + t127*(t3260*t345 + t4234 + t4463 + t4464 + t267*t3210*t4471 + t4489)) - 0.0009932822899999978*(t4501 + t127*(-1.*t267*t3260 + t4268 - 1.*t3210*t408*t4471 + t4503 + t4510 + t4512)))*var2[17]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=var2[17]*(-0.5*t4588*var2[16] - 0.5*t4588*var2[17]);
  p_output1[16]=-0.5*(-0.019320336034999996*(0.1881*t195 + t1708*t195 - 1.*t1730*t218 + t218*t3189 + t195*t3201) - 0.0009932822899999978*(t1730*t195 + 0.1881*t218 + t1708*t218 - 1.*t195*t3189 + t218*t3201))*Power(var2[17],2);
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

#include "Ce1_vec18_go1_description.hh"

namespace SymFunction
{

void Ce1_vec18_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
