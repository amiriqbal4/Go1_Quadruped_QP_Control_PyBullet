/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:30:10 GMT-05:00
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
  double t78;
  double t218;
  double t169;
  double t183;
  double t247;
  double t64;
  double t194;
  double t265;
  double t282;
  double t356;
  double t377;
  double t381;
  double t426;
  double t471;
  double t642;
  double t661;
  double t659;
  double t767;
  double t782;
  double t432;
  double t474;
  double t486;
  double t510;
  double t520;
  double t524;
  double t543;
  double t574;
  double t614;
  double t630;
  double t953;
  double t906;
  double t654;
  double t662;
  double t683;
  double t693;
  double t696;
  double t700;
  double t703;
  double t711;
  double t714;
  double t725;
  double t1105;
  double t1078;
  double t779;
  double t798;
  double t811;
  double t826;
  double t827;
  double t844;
  double t854;
  double t857;
  double t866;
  double t869;
  double t1301;
  double t1248;
  double t908;
  double t925;
  double t926;
  double t964;
  double t965;
  double t971;
  double t982;
  double t1421;
  double t1424;
  double t1453;
  double t1457;
  double t987;
  double t1025;
  double t1049;
  double t1079;
  double t1083;
  double t1089;
  double t1109;
  double t1115;
  double t1130;
  double t1173;
  double t1635;
  double t1638;
  double t1646;
  double t1656;
  double t1182;
  double t1222;
  double t1225;
  double t1262;
  double t1274;
  double t1279;
  double t1317;
  double t1348;
  double t1381;
  double t1382;
  double t1742;
  double t1745;
  double t1754;
  double t1763;
  double t1384;
  double t1392;
  double t1393;
  double t458;
  double t1854;
  double t1873;
  double t1856;
  double t1864;
  double t1871;
  double t1877;
  double t1885;
  double t1895;
  double t1904;
  double t1950;
  double t1952;
  double t1954;
  double t2015;
  double t2062;
  double t2036;
  double t2045;
  double t2049;
  double t2073;
  double t2088;
  double t2090;
  double t2095;
  double t2108;
  double t2112;
  double t2123;
  double t2149;
  double t2160;
  double t2165;
  double t2167;
  double t2335;
  double t2267;
  double t2268;
  double t2271;
  double t2279;
  double t2288;
  double t2307;
  double t2311;
  double t2317;
  double t2336;
  double t2339;
  double t2340;
  double t2348;
  double t2350;
  double t2366;
  double t2378;
  double t2380;
  double t2396;
  double t2403;
  double t2404;
  double t2427;
  double t2428;
  double t2453;
  double t2456;
  double t2470;
  double t2483;
  double t2496;
  double t1455;
  double t1481;
  double t1485;
  double t2498;
  double t2527;
  double t2530;
  double t1522;
  double t1533;
  double t1542;
  double t2555;
  double t2558;
  double t2559;
  double t2589;
  double t2611;
  double t1655;
  double t1658;
  double t1666;
  double t2618;
  double t2626;
  double t2629;
  double t1672;
  double t1674;
  double t1683;
  double t2643;
  double t2654;
  double t2657;
  double t2682;
  double t2690;
  double t1760;
  double t1764;
  double t1768;
  double t2692;
  double t2693;
  double t2695;
  double t1775;
  double t1779;
  double t1795;
  double t2703;
  double t2714;
  double t2715;
  double t2263;
  double t3003;
  double t3019;
  double t3024;
  double t3030;
  double t3037;
  double t3050;
  double t3055;
  double t3059;
  double t3073;
  double t3088;
  double t3098;
  double t3103;
  double t3113;
  double t2166;
  double t2170;
  double t2180;
  double t3126;
  double t3131;
  double t3132;
  double t2185;
  double t2188;
  double t2193;
  double t3268;
  double t3274;
  double t3289;
  double t3303;
  double t3308;
  double t3309;
  double t3317;
  double t3392;
  double t3291;
  double t3348;
  double t3416;
  double t3418;
  double t3424;
  double t3427;
  double t3428;
  double t3435;
  double t3437;
  double t3444;
  double t3454;
  double t3455;
  double t3463;
  double t3465;
  double t3470;
  double t3486;
  double t3489;
  double t3493;
  double t3504;
  double t3508;
  double t3510;
  double t3519;
  double t3525;
  double t3530;
  double t3534;
  double t3543;
  double t3399;
  double t3725;
  double t3744;
  double t3751;
  double t3754;
  double t3761;
  double t3763;
  double t3784;
  double t3790;
  double t3800;
  double t3929;
  double t3937;
  double t3939;
  double t3941;
  double t3942;
  double t3950;
  double t3961;
  double t3964;
  double t4146;
  double t4148;
  double t4150;
  double t4142;
  double t4153;
  double t4176;
  double t4182;
  double t4183;
  double t4155;
  double t4156;
  double t4160;
  double t4216;
  double t4260;
  double t4265;
  double t4269;
  double t4230;
  double t4351;
  double t4352;
  double t4353;
  double t4355;
  double t4371;
  double t4386;
  double t4390;
  double t4391;
  double t4479;
  double t4482;
  double t4484;
  double t4485;
  double t4488;
  double t4491;
  double t4503;
  double t4505;
  double t4581;
  double t4583;
  double t4584;
  double t4536;
  double t4544;
  double t4639;
  double t4642;
  double t4652;
  double t4632;
  double t4637;
  double t4670;
  double t4671;
  double t4672;
  double t4781;
  double t4785;
  double t4787;
  double t4800;
  double t4805;
  double t4815;
  double t4819;
  double t4820;
  double t4898;
  double t4905;
  double t4906;
  double t4839;
  double t4855;
  double t4955;
  double t4957;
  double t4958;
  double t4963;
  double t4964;
  double t4973;
  double t4975;
  double t4978;
  double t5095;
  double t5097;
  double t5098;
  double t5103;
  double t5107;
  double t5122;
  double t5123;
  double t5125;
  double t5210;
  double t5212;
  double t5216;
  double t5168;
  double t5180;
  t78 = Sin(var1[3]);
  t218 = Cos(var1[3]);
  t169 = Cos(var1[5]);
  t183 = Sin(var1[4]);
  t247 = Sin(var1[5]);
  t64 = Cos(var1[4]);
  t194 = t169*t78*t183;
  t265 = t218*t247;
  t282 = t194 + t265;
  t356 = t218*t169;
  t377 = -1.*t78*t183*t247;
  t381 = t356 + t377;
  t426 = Sin(var1[9]);
  t471 = Cos(var1[9]);
  t642 = Sin(var1[12]);
  t661 = Cos(var1[12]);
  t659 = -0.18269*t282;
  t767 = Sin(var1[15]);
  t782 = Cos(var1[15]);
  t432 = 0.04675*t64*t426*t78;
  t474 = -1.*t471;
  t486 = 1. + t474;
  t510 = 0.04675*t486*t381;
  t520 = -1.*t64*t426*t78;
  t524 = t471*t381;
  t543 = t520 + t524;
  t574 = -1.*t471*t64*t78;
  t614 = -1.*t426*t381;
  t630 = t574 + t614;
  t953 = Sin(var1[10]);
  t906 = Cos(var1[10]);
  t654 = -0.04675*t64*t642*t78;
  t662 = -1.*t661;
  t683 = 1. + t662;
  t693 = -0.04675*t683*t381;
  t696 = -1.*t64*t642*t78;
  t700 = t661*t381;
  t703 = t696 + t700;
  t711 = -1.*t661*t64*t78;
  t714 = -1.*t642*t381;
  t725 = t711 + t714;
  t1105 = Sin(var1[13]);
  t1078 = Cos(var1[13]);
  t779 = 0.04675*t64*t767*t78;
  t798 = -1.*t782;
  t811 = 1. + t798;
  t826 = 0.04675*t811*t381;
  t827 = -1.*t64*t767*t78;
  t844 = t782*t381;
  t854 = t827 + t844;
  t857 = -1.*t782*t64*t78;
  t866 = -1.*t767*t381;
  t869 = t857 + t866;
  t1301 = Sin(var1[16]);
  t1248 = Cos(var1[16]);
  t908 = -1.*t906;
  t925 = 1. + t908;
  t926 = 0.1881*t925*t282;
  t964 = 0.1881*t953*t630;
  t965 = t953*t282;
  t971 = t906*t630;
  t982 = t965 + t971;
  t1421 = Cos(var1[11]);
  t1424 = -1.*t1421;
  t1453 = 1. + t1424;
  t1457 = Sin(var1[11]);
  t987 = t906*t282;
  t1025 = -1.*t953*t630;
  t1049 = t987 + t1025;
  t1079 = -1.*t1078;
  t1083 = 1. + t1079;
  t1089 = -0.1881*t1083*t282;
  t1109 = -0.1881*t1105*t725;
  t1115 = t1105*t282;
  t1130 = t1078*t725;
  t1173 = t1115 + t1130;
  t1635 = Cos(var1[14]);
  t1638 = -1.*t1635;
  t1646 = 1. + t1638;
  t1656 = Sin(var1[14]);
  t1182 = t1078*t282;
  t1222 = -1.*t1105*t725;
  t1225 = t1182 + t1222;
  t1262 = -1.*t1248;
  t1274 = 1. + t1262;
  t1279 = -0.1881*t1274*t282;
  t1317 = -0.1881*t1301*t869;
  t1348 = t1301*t282;
  t1381 = t1248*t869;
  t1382 = t1348 + t1381;
  t1742 = Cos(var1[17]);
  t1745 = -1.*t1742;
  t1754 = 1. + t1745;
  t1763 = Sin(var1[17]);
  t1384 = t1248*t282;
  t1392 = -1.*t1301*t869;
  t1393 = t1384 + t1392;
  t458 = 0.18269*t282;
  t1854 = Cos(var1[6]);
  t1873 = Sin(var1[6]);
  t1856 = -1.*t1854;
  t1864 = 1. + t1856;
  t1871 = -0.04675*t1864*t381;
  t1877 = -0.04675*t64*t78*t1873;
  t1885 = t1854*t381;
  t1895 = -1.*t64*t78*t1873;
  t1904 = t1885 + t1895;
  t1950 = -1.*t64*t1854*t78;
  t1952 = -1.*t381*t1873;
  t1954 = t1950 + t1952;
  t2015 = Cos(var1[7]);
  t2062 = Sin(var1[7]);
  t2036 = -1.*t2015;
  t2045 = 1. + t2036;
  t2049 = 0.1881*t2045*t282;
  t2073 = 0.1881*t1954*t2062;
  t2088 = t2015*t1954;
  t2090 = t282*t2062;
  t2095 = t2088 + t2090;
  t2108 = t2015*t282;
  t2112 = -1.*t1954*t2062;
  t2123 = t2108 + t2112;
  t2149 = Cos(var1[8]);
  t2160 = -1.*t2149;
  t2165 = 1. + t2160;
  t2167 = Sin(var1[8]);
  t2335 = 0.18269*t218*t64*t169;
  t2267 = 0.04675*t218*t426*t183;
  t2268 = 0.04675*t486*t218*t64*t247;
  t2271 = -1.*t218*t426*t183;
  t2279 = t471*t218*t64*t247;
  t2288 = t2271 + t2279;
  t2307 = -1.*t471*t218*t183;
  t2311 = -1.*t218*t64*t426*t247;
  t2317 = t2307 + t2311;
  t2336 = -0.04675*t218*t642*t183;
  t2339 = -0.04675*t683*t218*t64*t247;
  t2340 = -1.*t218*t642*t183;
  t2348 = t661*t218*t64*t247;
  t2350 = t2340 + t2348;
  t2366 = -1.*t661*t218*t183;
  t2378 = -1.*t218*t64*t642*t247;
  t2380 = t2366 + t2378;
  t2396 = 0.04675*t218*t767*t183;
  t2403 = 0.04675*t811*t218*t64*t247;
  t2404 = -1.*t218*t767*t183;
  t2427 = t782*t218*t64*t247;
  t2428 = t2404 + t2427;
  t2453 = -1.*t782*t218*t183;
  t2456 = -1.*t218*t64*t767*t247;
  t2470 = t2453 + t2456;
  t2483 = -0.1881*t925*t218*t64*t169;
  t2496 = 0.1881*t953*t2317;
  t1455 = -0.213*t1453;
  t1481 = 0.1881*t1457;
  t1485 = t1455 + t1481;
  t2498 = -1.*t218*t64*t169*t953;
  t2527 = t906*t2317;
  t2530 = t2498 + t2527;
  t1522 = 0.1881*t1453;
  t1533 = 0.213*t1457;
  t1542 = t1522 + t1533;
  t2555 = -1.*t906*t218*t64*t169;
  t2558 = -1.*t953*t2317;
  t2559 = t2555 + t2558;
  t2589 = 0.1881*t1083*t218*t64*t169;
  t2611 = -0.1881*t1105*t2380;
  t1655 = -0.213*t1646;
  t1658 = -0.1881*t1656;
  t1666 = t1655 + t1658;
  t2618 = -1.*t218*t64*t169*t1105;
  t2626 = t1078*t2380;
  t2629 = t2618 + t2626;
  t1672 = -0.1881*t1646;
  t1674 = 0.213*t1656;
  t1683 = t1672 + t1674;
  t2643 = -1.*t1078*t218*t64*t169;
  t2654 = -1.*t1105*t2380;
  t2657 = t2643 + t2654;
  t2682 = 0.1881*t1274*t218*t64*t169;
  t2690 = -0.1881*t1301*t2470;
  t1760 = -0.213*t1754;
  t1764 = -0.1881*t1763;
  t1768 = t1760 + t1764;
  t2692 = -1.*t218*t64*t169*t1301;
  t2693 = t1248*t2470;
  t2695 = t2692 + t2693;
  t1775 = -0.1881*t1754;
  t1779 = 0.213*t1763;
  t1795 = t1775 + t1779;
  t2703 = -1.*t1248*t218*t64*t169;
  t2714 = -1.*t1301*t2470;
  t2715 = t2703 + t2714;
  t2263 = -0.18269*t218*t64*t169;
  t3003 = -0.04675*t218*t64*t1864*t247;
  t3019 = -0.04675*t218*t183*t1873;
  t3024 = t218*t64*t1854*t247;
  t3030 = -1.*t218*t183*t1873;
  t3037 = t3024 + t3030;
  t3050 = -1.*t218*t1854*t183;
  t3055 = -1.*t218*t64*t247*t1873;
  t3059 = t3050 + t3055;
  t3073 = -0.1881*t218*t64*t169*t2045;
  t3088 = 0.1881*t3059*t2062;
  t3098 = t2015*t3059;
  t3103 = -1.*t218*t64*t169*t2062;
  t3113 = t3098 + t3103;
  t2166 = -0.213*t2165;
  t2170 = 0.1881*t2167;
  t2180 = t2166 + t2170;
  t3126 = -1.*t218*t64*t169*t2015;
  t3131 = -1.*t3059*t2062;
  t3132 = t3126 + t3131;
  t2185 = 0.1881*t2165;
  t2188 = 0.213*t2167;
  t2193 = t2185 + t2188;
  t3268 = t218*t169*t183;
  t3274 = -1.*t78*t247;
  t3289 = t3268 + t3274;
  t3303 = t169*t78;
  t3308 = t218*t183*t247;
  t3309 = t3303 + t3308;
  t3317 = -0.18269*t3309;
  t3392 = 0.04675*t486*t3289;
  t3291 = -0.04675*t683*t3289;
  t3348 = 0.04675*t811*t3289;
  t3416 = -0.1881*t426*t953*t3289;
  t3418 = 0.1881*t925*t3309;
  t3424 = t426*t953*t3289;
  t3427 = t906*t3309;
  t3428 = t3424 + t3427;
  t3435 = -1.*t906*t426*t3289;
  t3437 = t953*t3309;
  t3444 = t3435 + t3437;
  t3454 = 0.1881*t642*t1105*t3289;
  t3455 = -0.1881*t1083*t3309;
  t3463 = t642*t1105*t3289;
  t3465 = t1078*t3309;
  t3470 = t3463 + t3465;
  t3486 = -1.*t1078*t642*t3289;
  t3489 = t1105*t3309;
  t3493 = t3486 + t3489;
  t3504 = 0.1881*t767*t1301*t3289;
  t3508 = -0.1881*t1274*t3309;
  t3510 = t767*t1301*t3289;
  t3519 = t1248*t3309;
  t3525 = t3510 + t3519;
  t3530 = -1.*t1248*t767*t3289;
  t3534 = t1301*t3309;
  t3543 = t3530 + t3534;
  t3399 = 0.18269*t3309;
  t3725 = -0.04675*t1864*t3289;
  t3744 = 0.1881*t2045*t3309;
  t3751 = -0.1881*t3289*t1873*t2062;
  t3754 = -1.*t2015*t3289*t1873;
  t3761 = t3309*t2062;
  t3763 = t3754 + t3761;
  t3784 = t2015*t3309;
  t3790 = t3289*t1873*t2062;
  t3800 = t3784 + t3790;
  t3929 = 0.04675*t218*t64*t1854;
  t3937 = -0.04675*t3309*t1873;
  t3939 = -1.*t1854*t3309;
  t3941 = -1.*t218*t64*t1873;
  t3942 = t3939 + t3941;
  t3950 = t218*t64*t1854;
  t3961 = -1.*t3309*t1873;
  t3964 = t3950 + t3961;
  t4146 = -1.*t218*t169*t183;
  t4148 = t78*t247;
  t4150 = t4146 + t4148;
  t4142 = 0.1881*t2015*t3964;
  t4153 = 0.1881*t4150*t2062;
  t4176 = t2015*t4150;
  t4182 = -1.*t3964*t2062;
  t4183 = t4176 + t4182;
  t4155 = -1.*t2015*t3964;
  t4156 = -1.*t4150*t2062;
  t4160 = t4155 + t4156;
  t4216 = t2149*t4183;
  t4260 = t2015*t3964;
  t4265 = t4150*t2062;
  t4269 = t4260 + t4265;
  t4230 = -1.*t4183*t2167;
  t4351 = -0.04675*t471*t218*t64;
  t4352 = 0.04675*t426*t3309;
  t4353 = -1.*t218*t64*t426;
  t4355 = -1.*t471*t3309;
  t4371 = t4353 + t4355;
  t4386 = t471*t218*t64;
  t4390 = -1.*t426*t3309;
  t4391 = t4386 + t4390;
  t4479 = 0.1881*t953*t4150;
  t4482 = 0.1881*t906*t4391;
  t4484 = -1.*t953*t4150;
  t4485 = -1.*t906*t4391;
  t4488 = t4484 + t4485;
  t4491 = t906*t4150;
  t4503 = -1.*t953*t4391;
  t4505 = t4491 + t4503;
  t4581 = t953*t4150;
  t4583 = t906*t4391;
  t4584 = t4581 + t4583;
  t4536 = t1421*t4505;
  t4544 = -1.*t1457*t4505;
  t4639 = -1.*t218*t64*t642;
  t4642 = -1.*t661*t3309;
  t4652 = t4639 + t4642;
  t4632 = 0.04675*t661*t218*t64;
  t4637 = -0.04675*t642*t3309;
  t4670 = t661*t218*t64;
  t4671 = -1.*t642*t3309;
  t4672 = t4670 + t4671;
  t4781 = -0.1881*t1105*t4150;
  t4785 = -0.1881*t1078*t4672;
  t4787 = -1.*t1105*t4150;
  t4800 = -1.*t1078*t4672;
  t4805 = t4787 + t4800;
  t4815 = t1078*t4150;
  t4819 = -1.*t1105*t4672;
  t4820 = t4815 + t4819;
  t4898 = t1105*t4150;
  t4905 = t1078*t4672;
  t4906 = t4898 + t4905;
  t4839 = t1635*t4820;
  t4855 = -1.*t1656*t4820;
  t4955 = -0.04675*t782*t218*t64;
  t4957 = 0.04675*t767*t3309;
  t4958 = -1.*t218*t64*t767;
  t4963 = -1.*t782*t3309;
  t4964 = t4958 + t4963;
  t4973 = t782*t218*t64;
  t4975 = -1.*t767*t3309;
  t4978 = t4973 + t4975;
  t5095 = -0.1881*t1301*t4150;
  t5097 = -0.1881*t1248*t4978;
  t5098 = -1.*t1301*t4150;
  t5103 = -1.*t1248*t4978;
  t5107 = t5098 + t5103;
  t5122 = t1248*t4150;
  t5123 = -1.*t1301*t4978;
  t5125 = t5122 + t5123;
  t5210 = t1301*t4150;
  t5212 = t1248*t4978;
  t5216 = t5210 + t5212;
  t5168 = t1742*t5125;
  t5180 = -1.*t1763*t5125;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-108.58622292;
  p_output1[3]=-8.818395390000001*(t1871 + t1877 - 0.107803*t1904 + t2049 + t2073 - 0.032736*t2095 + 0.184632*t2123) - 1.55012715*(t1871 + t1877 - 0.125443*t1904 + t2049 + t2073 + 0.194386*(t2123*t2149 - 1.*t2095*t2167) - 0.335269*(t2095*t2149 + t2123*t2167) + t2095*t2180 + t2123*t2193) - 5.00603319*(t1871 + t1877 - 0.04601*t1904 + 6.e-6*t1954 + t458) - 5.00603319*(t432 + t458 + t510 + 0.04601*t543 + 6.e-6*t630) - 1.55012715*(t1089 + t1109 - 0.181814*(t1225*t1635 - 1.*t1173*t1656) - 0.335269*(t1173*t1635 + t1225*t1656) + t1173*t1666 + t1225*t1683 + t654 + t693 - 0.125443*t703) - 8.818395390000001*(t1089 + t1109 - 0.032736*t1173 - 0.191568*t1225 + t654 + t693 - 0.107803*t703) - 5.00603319*(t654 + t659 + t693 - 0.04601*t703 + 6.e-6*t725) - 47.088*(0.011611*t282 + 0.004437*t381 - 0.000108*t64*t78) - 8.818395390000001*(t1279 + t1317 - 0.032736*t1382 - 0.191568*t1393 + t779 + t826 + 0.107803*t854) - 1.55012715*(t1279 + t1317 - 0.181814*(t1393*t1742 - 1.*t1382*t1763) - 0.335269*(t1382*t1742 + t1393*t1763) + t1382*t1768 + t1393*t1795 + t779 + t826 + 0.128057*t854) - 5.00603319*(t659 + t779 + t826 + 0.04601*t854 + 6.e-6*t869) - 8.818395390000001*(0.184632*t1049 + t432 + t510 + 0.107803*t543 + t926 + t964 - 0.032736*t982) - 1.55012715*(t1049*t1542 + t432 + t510 + 0.128057*t543 + t926 + t964 + t1485*t982 - 0.335269*(t1049*t1457 + t1421*t982) + 0.194386*(t1049*t1421 - 1.*t1457*t982));
  p_output1[4]=-5.00603319*(t2263 + t2267 + t2268 + 0.04601*t2288 + 6.e-6*t2317) - 5.00603319*(t2335 + t2336 + t2339 - 0.04601*t2350 + 6.e-6*t2380) - 5.00603319*(t2335 + t2396 + t2403 + 0.04601*t2428 + 6.e-6*t2470) - 8.818395390000001*(t2267 + t2268 + 0.107803*t2288 + t2483 + t2496 - 0.032736*t2530 + 0.184632*t2559) - 1.55012715*(t2267 + t2268 + 0.128057*t2288 + t2483 + t2496 + t1485*t2530 + t1542*t2559 + 0.194386*(-1.*t1457*t2530 + t1421*t2559) - 0.335269*(t1421*t2530 + t1457*t2559)) - 8.818395390000001*(t2336 + t2339 - 0.107803*t2350 + t2589 + t2611 - 0.032736*t2629 - 0.191568*t2657) - 1.55012715*(t2336 + t2339 - 0.125443*t2350 + t2589 + t2611 + t1666*t2629 + t1683*t2657 - 0.181814*(-1.*t1656*t2629 + t1635*t2657) - 0.335269*(t1635*t2629 + t1656*t2657)) - 8.818395390000001*(t2396 + t2403 + 0.107803*t2428 + t2682 + t2690 - 0.032736*t2695 - 0.191568*t2715) - 1.55012715*(t2396 + t2403 + 0.128057*t2428 + t2682 + t2690 + t1768*t2695 + t1795*t2715 - 0.181814*(-1.*t1763*t2695 + t1742*t2715) - 0.335269*(t1742*t2695 + t1763*t2715)) - 5.00603319*(t2263 + t3003 + t3019 - 0.04601*t3037 + 6.e-6*t3059) - 8.818395390000001*(t3003 + t3019 - 0.107803*t3037 + t3073 + t3088 - 0.032736*t3113 + 0.184632*t3132) - 1.55012715*(t3003 + t3019 - 0.125443*t3037 + t3073 + t3088 + t2180*t3113 + t2193*t3132 + 0.194386*(-1.*t2167*t3113 + t2149*t3132) - 0.335269*(t2149*t3113 + t2167*t3132)) - 47.088*(-0.000108*t183*t218 - 0.011611*t169*t218*t64 + 0.004437*t218*t247*t64);
  p_output1[5]=-47.088*(0.004437*t3289 + 0.011611*t3309) - 5.00603319*(-0.04601*t1854*t3289 - 6.e-6*t1873*t3289 + t3399 + t3725) - 8.818395390000001*(-0.107803*t1854*t3289 + t3725 + t3744 + t3751 - 0.032736*t3763 + 0.184632*t3800) - 1.55012715*(-0.125443*t1854*t3289 + t3725 + t3744 + t3751 + t2180*t3763 + t2193*t3800 + 0.194386*(-1.*t2167*t3763 + t2149*t3800) - 0.335269*(t2149*t3763 + t2167*t3800)) - 5.00603319*(t3392 + t3399 - 6.e-6*t3289*t426 + 0.04601*t3289*t471) - 8.818395390000001*(t3392 + t3416 + t3418 + 0.184632*t3428 - 0.032736*t3444 + 0.107803*t3289*t471) - 1.55012715*(t3392 + t3416 + t3418 + t1542*t3428 + t1485*t3444 - 0.335269*(t1457*t3428 + t1421*t3444) + 0.194386*(t1421*t3428 - 1.*t1457*t3444) + 0.128057*t3289*t471) - 1.55012715*(t3291 + t3454 + t3455 + t1683*t3470 + t1666*t3493 - 0.335269*(t1656*t3470 + t1635*t3493) - 0.181814*(t1635*t3470 - 1.*t1656*t3493) - 0.125443*t3289*t661) - 8.818395390000001*(t3291 + t3454 + t3455 - 0.191568*t3470 - 0.032736*t3493 - 0.107803*t3289*t661) - 5.00603319*(t3291 + t3317 - 6.e-6*t3289*t642 - 0.04601*t3289*t661) - 5.00603319*(t3317 + t3348 - 6.e-6*t3289*t767 + 0.04601*t3289*t782) - 8.818395390000001*(t3348 + t3504 + t3508 - 0.191568*t3525 - 0.032736*t3543 + 0.107803*t3289*t782) - 1.55012715*(t3348 + t3504 + t3508 + t1795*t3525 + t1768*t3543 - 0.335269*(t1763*t3525 + t1742*t3543) - 0.181814*(t1742*t3525 - 1.*t1763*t3543) + 0.128057*t3289*t782);
  p_output1[6]=-1.55012715*(t3929 + t3937 + 0.1881*t2062*t3942 + t2015*t2180*t3942 - 1.*t2062*t2193*t3942 + 0.194386*(-1.*t2062*t2149*t3942 - 1.*t2015*t2167*t3942) - 0.335269*(t2015*t2149*t3942 - 1.*t2062*t2167*t3942) - 0.125443*t3964) - 8.818395390000001*(t3929 + t3937 - 0.032736*t2015*t3942 + 0.003468*t2062*t3942 - 0.107803*t3964) - 5.00603319*(t3929 + t3937 + 6.e-6*t3942 - 0.04601*t3964);
  p_output1[7]=-8.818395390000001*(t4142 + t4153 + 0.184632*t4160 - 0.032736*t4183) - 1.55012715*(t4142 + t4153 + t2193*t4160 + t2180*t4183 - 0.335269*(t2167*t4160 + t4216) + 0.194386*(t2149*t4160 + t4230));
  p_output1[8]=-1.55012715*((0.213*t2149 + t2170)*t4183 + (0.1881*t2149 - 0.213*t2167)*t4269 + 0.194386*(t4230 - 1.*t2149*t4269) - 0.335269*(t4216 - 1.*t2167*t4269));
  p_output1[9]=-5.00603319*(t4351 + t4352 + 6.e-6*t4371 + 0.04601*t4391) - 8.818395390000001*(t4351 + t4352 + 0.107803*t4391 - 0.032736*t4371*t906 + 0.003468*t4371*t953) - 1.55012715*(t4351 + t4352 + 0.128057*t4391 + t1485*t4371*t906 + 0.1881*t4371*t953 - 1.*t1542*t4371*t953 + 0.194386*(-1.*t1457*t4371*t906 - 1.*t1421*t4371*t953) - 0.335269*(t1421*t4371*t906 - 1.*t1457*t4371*t953));
  p_output1[10]=-8.818395390000001*(t4479 + t4482 + 0.184632*t4488 - 0.032736*t4505) - 1.55012715*(t4479 + t4482 + t1542*t4488 + t1485*t4505 - 0.335269*(t1457*t4488 + t4536) + 0.194386*(t1421*t4488 + t4544));
  p_output1[11]=-1.55012715*((0.213*t1421 + t1481)*t4505 + (0.1881*t1421 - 0.213*t1457)*t4584 + 0.194386*(t4544 - 1.*t1421*t4584) - 0.335269*(t4536 - 1.*t1457*t4584));
  p_output1[12]=-1.55012715*(t4632 + t4637 - 0.1881*t1105*t4652 + t1078*t1666*t4652 - 1.*t1105*t1683*t4652 - 0.181814*(-1.*t1105*t1635*t4652 - 1.*t1078*t1656*t4652) - 0.335269*(t1078*t1635*t4652 - 1.*t1105*t1656*t4652) - 0.125443*t4672) - 8.818395390000001*(t4632 + t4637 - 0.032736*t1078*t4652 + 0.003468*t1105*t4652 - 0.107803*t4672) - 5.00603319*(t4632 + t4637 + 6.e-6*t4652 - 0.04601*t4672);
  p_output1[13]=-8.818395390000001*(t4781 + t4785 - 0.191568*t4805 - 0.032736*t4820) - 1.55012715*(t4781 + t4785 + t1683*t4805 + t1666*t4820 - 0.335269*(t1656*t4805 + t4839) - 0.181814*(t1635*t4805 + t4855));
  p_output1[14]=-1.55012715*((0.213*t1635 + t1658)*t4820 + (-0.1881*t1635 - 0.213*t1656)*t4906 - 0.181814*(t4855 - 1.*t1635*t4906) - 0.335269*(t4839 - 1.*t1656*t4906));
  p_output1[15]=-5.00603319*(t4955 + t4957 + 6.e-6*t4964 + 0.04601*t4978) - 8.818395390000001*(t4955 + t4957 - 0.032736*t1248*t4964 + 0.003468*t1301*t4964 + 0.107803*t4978) - 1.55012715*(t4955 + t4957 - 0.1881*t1301*t4964 + t1248*t1768*t4964 - 1.*t1301*t1795*t4964 - 0.181814*(-1.*t1301*t1742*t4964 - 1.*t1248*t1763*t4964) - 0.335269*(t1248*t1742*t4964 - 1.*t1301*t1763*t4964) + 0.128057*t4978);
  p_output1[16]=-8.818395390000001*(t5095 + t5097 - 0.191568*t5107 - 0.032736*t5125) - 1.55012715*(t5095 + t5097 + t1795*t5107 + t1768*t5125 - 0.335269*(t1763*t5107 + t5168) - 0.181814*(t1742*t5107 + t5180));
  p_output1[17]=-1.55012715*((0.213*t1742 + t1764)*t5125 + (-0.1881*t1742 - 0.213*t1763)*t5216 - 0.181814*(t5180 - 1.*t1742*t5216) - 0.335269*(t5168 - 1.*t1763*t5216));
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

#include "Ge_vec_go1_description.hh"

namespace SymFunction
{

void Ge_vec_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
