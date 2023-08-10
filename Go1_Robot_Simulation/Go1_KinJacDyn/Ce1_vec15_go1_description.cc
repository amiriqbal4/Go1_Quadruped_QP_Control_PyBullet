/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:27:32 GMT-05:00
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
  double t116;
  double t161;
  double t110;
  double t182;
  double t46;
  double t78;
  double t100;
  double t122;
  double t188;
  double t224;
  double t282;
  double t341;
  double t349;
  double t351;
  double t423;
  double t471;
  double t269;
  double t270;
  double t277;
  double t653;
  double t654;
  double t659;
  double t836;
  double t851;
  double t854;
  double t760;
  double t774;
  double t775;
  double t821;
  double t855;
  double t858;
  double t861;
  double t864;
  double t885;
  double t888;
  double t898;
  double t904;
  double t353;
  double t357;
  double t370;
  double t962;
  double t228;
  double t299;
  double t312;
  double t939;
  double t698;
  double t702;
  double t704;
  double t643;
  double t671;
  double t673;
  double t692;
  double t705;
  double t710;
  double t1220;
  double t1221;
  double t1227;
  double t1306;
  double t1307;
  double t1310;
  double t1317;
  double t1321;
  double t1334;
  double t1337;
  double t1338;
  double t1340;
  double t1341;
  double t1346;
  double t1348;
  double t1351;
  double t1353;
  double t1354;
  double t1059;
  double t1065;
  double t1072;
  double t1075;
  double t1078;
  double t1089;
  double t1130;
  double t1143;
  double t1144;
  double t1171;
  double t1173;
  double t1174;
  double t1256;
  double t1269;
  double t1274;
  double t1637;
  double t1657;
  double t1659;
  double t1661;
  double t1662;
  double t1664;
  double t1665;
  double t1666;
  double t1669;
  double t1745;
  double t1757;
  double t1767;
  double t1778;
  double t1781;
  double t1782;
  double t1791;
  double t1806;
  double t1811;
  double t1819;
  double t1838;
  double t1885;
  double t1905;
  double t1909;
  double t1935;
  double t1948;
  double t1950;
  double t1954;
  double t1960;
  double t1972;
  double t1724;
  double t1731;
  double t1738;
  double t1783;
  double t1820;
  double t1826;
  double t2066;
  double t2074;
  double t2076;
  double t1835;
  double t1981;
  double t2153;
  double t2156;
  double t2160;
  double t2172;
  double t2087;
  double t2095;
  double t2121;
  double t2030;
  double t2031;
  double t2040;
  double t2169;
  double t2175;
  double t2181;
  double t2130;
  double t2137;
  double t2139;
  double t2195;
  double t2196;
  double t2218;
  double t1988;
  double t2328;
  double t2347;
  double t2348;
  double t425;
  double t538;
  double t541;
  double t584;
  double t588;
  double t590;
  double t2229;
  double t2239;
  double t2242;
  double t2245;
  double t2545;
  double t2554;
  double t2559;
  double t2565;
  double t2566;
  double t2513;
  double t2515;
  double t2518;
  double t2598;
  double t2601;
  double t2603;
  double t2616;
  double t2619;
  double t2623;
  double t2285;
  double t2290;
  double t2298;
  double t2301;
  double t2386;
  double t2390;
  double t2392;
  double t2393;
  double t2544;
  double t2637;
  double t2639;
  double t2650;
  double t2467;
  double t2474;
  double t2476;
  double t2479;
  double t3019;
  double t2990;
  double t2997;
  double t3011;
  double t3029;
  double t3031;
  double t3033;
  double t3247;
  double t3248;
  double t3249;
  double t3258;
  double t3271;
  double t3294;
  double t3295;
  double t3297;
  double t3259;
  double t3278;
  double t3280;
  double t3288;
  double t3301;
  double t3316;
  double t3326;
  double t3328;
  double t3334;
  double t3226;
  double t3231;
  double t3246;
  double t3576;
  double t3577;
  double t3616;
  double t3622;
  double t3623;
  double t3610;
  double t3624;
  double t3641;
  double t3661;
  double t3681;
  double t3689;
  double t3732;
  double t3740;
  double t3742;
  double t3660;
  double t3695;
  double t3696;
  double t3404;
  double t3405;
  double t3411;
  double t3725;
  double t3755;
  double t3762;
  double t3767;
  double t3773;
  double t3774;
  double t3478;
  double t3508;
  double t3539;
  double t3562;
  double t2560;
  double t2613;
  double t2660;
  double t2673;
  double t2758;
  double t4003;
  double t2779;
  double t2872;
  double t2876;
  double t3957;
  double t3966;
  double t3967;
  double t2008;
  double t2129;
  double t2255;
  double t2268;
  double t4036;
  double t4037;
  double t4039;
  double t4046;
  double t4050;
  double t4051;
  double t2357;
  double t2363;
  double t4145;
  double t4159;
  double t4162;
  double t2398;
  double t2402;
  double t3286;
  double t3393;
  double t3481;
  double t4338;
  double t3511;
  double t4310;
  double t4312;
  double t4334;
  double t3697;
  double t4336;
  double t4346;
  double t3789;
  double t4382;
  double t3844;
  double t4391;
  double t3872;
  double t4400;
  double t4504;
  double t4065;
  double t4122;
  double t3982;
  double t4018;
  double t4506;
  double t4507;
  double t4511;
  double t4341;
  double t4593;
  double t4595;
  double t4605;
  double t4383;
  double t4820;
  double t4799;
  double t4800;
  double t4801;
  double t4805;
  double t4810;
  double t4826;
  double t4434;
  double t4852;
  double t4862;
  double t4485;
  double t4864;
  double t4865;
  double t5014;
  double t5022;
  double t5027;
  double t5040;
  double t5043;
  double t5078;
  double t5079;
  t116 = Cos(var1[14]);
  t161 = Sin(var1[13]);
  t110 = Cos(var1[13]);
  t182 = Sin(var1[14]);
  t46 = Cos(var1[4]);
  t78 = Cos(var1[5]);
  t100 = Sin(var1[12]);
  t122 = t110*t116;
  t188 = -1.*t161*t182;
  t224 = t122 + t188;
  t282 = Sin(var1[5]);
  t341 = -1.*t116*t161;
  t349 = -1.*t110*t182;
  t351 = t341 + t349;
  t423 = Sin(var1[4]);
  t471 = Cos(var1[12]);
  t269 = t116*t161;
  t270 = t110*t182;
  t277 = t269 + t270;
  t653 = t78*t224;
  t654 = t100*t351*t282;
  t659 = t653 + t654;
  t836 = -1.*t110*t116;
  t851 = t161*t182;
  t854 = t836 + t851;
  t760 = t471*t351*t423;
  t774 = t46*t659;
  t775 = t760 + t774;
  t821 = -0.0009932822899999978*t775;
  t855 = t471*t854*t423;
  t858 = t78*t351;
  t861 = t100*t854*t282;
  t864 = t858 + t861;
  t885 = t46*t864;
  t888 = t855 + t885;
  t898 = -0.019320336034999996*t888;
  t904 = t821 + t898;
  t353 = t78*t100*t351;
  t357 = -1.*t224*t282;
  t370 = t353 + t357;
  t962 = Sin(var1[3]);
  t228 = t78*t100*t224;
  t299 = -1.*t277*t282;
  t312 = t228 + t299;
  t939 = Cos(var1[3]);
  t698 = t78*t277;
  t702 = t100*t224*t282;
  t704 = t698 + t702;
  t643 = t471*t46*t351;
  t671 = -1.*t423*t659;
  t673 = t643 + t671;
  t692 = t471*t46*t224;
  t705 = -1.*t423*t704;
  t710 = t692 + t705;
  t1220 = -1.*t78*t100*t351;
  t1221 = t224*t282;
  t1227 = t1220 + t1221;
  t1306 = t939*t1227;
  t1307 = -1.*t962*t673;
  t1310 = t1306 + t1307;
  t1317 = -0.0009932822899999978*t1310;
  t1321 = -1.*t78*t100*t854;
  t1334 = t351*t282;
  t1337 = t1321 + t1334;
  t1338 = t939*t1337;
  t1340 = t471*t46*t854;
  t1341 = -1.*t423*t864;
  t1346 = t1340 + t1341;
  t1348 = -1.*t962*t1346;
  t1351 = t1338 + t1348;
  t1353 = -0.019320336034999996*t1351;
  t1354 = t1317 + t1353;
  t1059 = -1.*t471*t351*t423;
  t1065 = -1.*t46*t659;
  t1072 = t1059 + t1065;
  t1075 = -1.*t471*t224*t423;
  t1078 = -1.*t46*t704;
  t1089 = t1075 + t1078;
  t1130 = -1.*t46*t100*t351;
  t1143 = -1.*t471*t351*t423*t282;
  t1144 = t1130 + t1143;
  t1171 = -1.*t46*t100*t224;
  t1173 = -1.*t471*t224*t423*t282;
  t1174 = t1171 + t1173;
  t1256 = -1.*t78*t100*t224;
  t1269 = t277*t282;
  t1274 = t1256 + t1269;
  t1637 = t962*t1227;
  t1657 = t939*t673;
  t1659 = t1637 + t1657;
  t1661 = -0.0009932822899999978*t1659;
  t1662 = t962*t1337;
  t1664 = t939*t1346;
  t1665 = t1662 + t1664;
  t1666 = -0.019320336034999996*t1665;
  t1669 = t1661 + t1666;
  t1745 = -1.*t116;
  t1757 = 1. + t1745;
  t1767 = -0.1881*t1757;
  t1778 = -0.181814*t116;
  t1781 = -0.12226899999999999*t182;
  t1782 = t1767 + t1778 + t1781;
  t1791 = -0.213*t1757;
  t1806 = -0.335269*t116;
  t1811 = -0.006286*t182;
  t1819 = t1791 + t1806 + t1811;
  t1838 = -1.*t471;
  t1885 = 1. + t1838;
  t1905 = -0.04675*t1885;
  t1909 = -0.125443*t471;
  t1935 = -0.1881*t161;
  t1948 = -1.*t161*t1782;
  t1950 = t110*t1819;
  t1954 = 0. + t1935 + t1948 + t1950;
  t1960 = -1.*t100*t1954;
  t1972 = t1905 + t1909 + t1960;
  t1724 = -1.*t110;
  t1731 = 1. + t1724;
  t1738 = -0.1881*t1731;
  t1783 = t110*t1782;
  t1820 = t161*t1819;
  t1826 = 0. + t1738 + t1783 + t1820;
  t2066 = -1.*t78*t1972;
  t2074 = -1.*t1826*t282;
  t2076 = t2066 + t2074;
  t1835 = t78*t1826;
  t1981 = -1.*t1972*t282;
  t2153 = -0.078693*t100;
  t2156 = t471*t1954;
  t2160 = 0. + t2153 + t2156;
  t2172 = 0. + t1835 + t1981;
  t2087 = t78*t1972;
  t2095 = t1826*t282;
  t2121 = 0. + t2087 + t2095;
  t2030 = t100*t423;
  t2031 = -1.*t471*t46*t282;
  t2040 = t2030 + t2031;
  t2169 = t2160*t423;
  t2175 = t46*t2172;
  t2181 = 0. + t2169 + t2175;
  t2130 = t46*t100;
  t2137 = t471*t423*t282;
  t2139 = t2130 + t2137;
  t2195 = t46*t2160;
  t2196 = -1.*t423*t2172;
  t2218 = 0. + t2195 + t2196;
  t1988 = t1835 + t1981;
  t2328 = t471*t224*t423;
  t2347 = t46*t704;
  t2348 = t2328 + t2347;
  t425 = -1.*t100*t351*t423;
  t538 = t471*t46*t351*t282;
  t541 = t425 + t538;
  t584 = -1.*t100*t224*t423;
  t588 = t471*t46*t224*t282;
  t590 = t584 + t588;
  t2229 = t471*t78*t2121;
  t2239 = t2040*t2181;
  t2242 = t2139*t2218;
  t2245 = t2229 + t2239 + t2242;
  t2545 = 0.078693*t100;
  t2554 = -1.*t471*t1954;
  t2559 = t2545 + t2554;
  t2565 = -0.078693*t471;
  t2566 = t2565 + t1960;
  t2513 = t471*t423;
  t2515 = t46*t100*t282;
  t2518 = t2513 + t2515;
  t2598 = t2566*t423;
  t2601 = -1.*t46*t2559*t282;
  t2603 = t2598 + t2601;
  t2616 = t46*t2566;
  t2619 = t2559*t423*t282;
  t2623 = t2616 + t2619;
  t2285 = -1.*t2121*t1227;
  t2290 = -1.*t2181*t775;
  t2298 = -1.*t2218*t673;
  t2301 = t2285 + t2290 + t2298;
  t2386 = -1.*t471*t78*t2121;
  t2390 = -1.*t2040*t2181;
  t2392 = -1.*t2139*t2218;
  t2393 = t2386 + t2390 + t2392;
  t2544 = Power(t78,2);
  t2637 = t471*t46;
  t2639 = -1.*t100*t423*t282;
  t2650 = t2637 + t2639;
  t2467 = t2121*t1274;
  t2474 = t2181*t2348;
  t2476 = t2218*t710;
  t2479 = t2467 + t2474 + t2476;
  t3019 = t2195 + t2196;
  t2990 = -1.*t2160*t423;
  t2997 = -1.*t46*t2172;
  t3011 = t2990 + t2997;
  t3029 = -1.*t100*t423;
  t3031 = t471*t46*t282;
  t3033 = t3029 + t3031;
  t3247 = -0.1881*t110;
  t3248 = -1.*t110*t1782;
  t3249 = -1.*t161*t1819;
  t3258 = t3247 + t3248 + t3249;
  t3271 = t1935 + t1948 + t1950;
  t3294 = t78*t3271;
  t3295 = t100*t3258*t282;
  t3297 = t3294 + t3295;
  t3259 = -1.*t78*t100*t3258;
  t3278 = t3271*t282;
  t3280 = t3259 + t3278;
  t3288 = t471*t3258*t423;
  t3301 = t46*t3297;
  t3316 = t3288 + t3301;
  t3326 = t471*t46*t3258;
  t3328 = -1.*t423*t3297;
  t3334 = t3326 + t3328;
  t3226 = -0.000029*t775;
  t3231 = 1.e-6*t888;
  t3246 = t775*t2393;
  t3576 = -0.12226899999999999*t116;
  t3577 = t3576 + t1811;
  t3616 = -0.006286*t116;
  t3622 = 0.12226899999999999*t182;
  t3623 = t3616 + t3622;
  t3610 = -1.*t161*t3577;
  t3624 = t110*t3623;
  t3641 = t3610 + t3624;
  t3661 = t110*t3577;
  t3681 = t161*t3623;
  t3689 = t3661 + t3681;
  t3732 = t78*t3689;
  t3740 = t100*t3641*t282;
  t3742 = t3732 + t3740;
  t3660 = -1.*t78*t100*t3641;
  t3695 = t3689*t282;
  t3696 = t3660 + t3695;
  t3404 = t2121*t1227;
  t3405 = t2181*t775;
  t3411 = t2218*t673;
  t3725 = t471*t3641*t423;
  t3755 = t46*t3742;
  t3762 = t3725 + t3755;
  t3767 = t471*t46*t3641;
  t3773 = -1.*t423*t3742;
  t3774 = t3767 + t3773;
  t3478 = t888*t2245;
  t3508 = -1.*t2121*t1337;
  t3539 = -1.*t2181*t888;
  t3562 = -1.*t2218*t1346;
  t2560 = t471*t2544*t2559;
  t2613 = -1.*t78*t100*t2121;
  t2660 = t471*t78*t351*t2121;
  t2673 = -1.*t78*t2559*t1227;
  t2758 = -1.*t471*t2544*t2559;
  t4003 = Power(t282,2);
  t2779 = t78*t100*t2121;
  t2872 = -1.*t471*t78*t224*t2121;
  t2876 = t78*t2559*t1274;
  t3957 = t100*t2160;
  t3966 = -1.*t471*t282*t2172;
  t3967 = t3957 + t3966 + t2229;
  t2008 = t471*t78*t1988;
  t2129 = -1.*t471*t282*t2121;
  t2255 = -1.*t2121*t659;
  t2268 = -1.*t1988*t1227;
  t4036 = -1.*t471*t2160*t351;
  t4037 = -1.*t2172*t659;
  t4039 = t4036 + t4037 + t2285;
  t4046 = -1.*t100*t2160;
  t4050 = t471*t282*t2172;
  t4051 = t4046 + t4050 + t2386;
  t2357 = -1.*t471*t78*t1988;
  t2363 = t471*t282*t2121;
  t4145 = t471*t2160*t224;
  t4159 = t2172*t704;
  t4162 = t4145 + t2467 + t4159;
  t2398 = t1988*t1274;
  t2402 = t2121*t704;
  t3286 = -1.*t471*t78*t3280;
  t3393 = t3280*t1274;
  t3481 = t471*t78*t3280;
  t4338 = Power(t471,2);
  t3511 = -1.*t3280*t1227;
  t4310 = 1.e-6*t1337;
  t4312 = -0.000029*t1227;
  t4334 = t1227*t4051;
  t3697 = -1.*t471*t78*t3696;
  t4336 = t471*t2160*t351;
  t4346 = t2172*t659;
  t3789 = t3696*t1274;
  t4382 = t1337*t3967;
  t3844 = t471*t78*t3696;
  t4391 = -1.*t471*t2160*t854;
  t3872 = -1.*t3696*t1227;
  t4400 = -1.*t2172*t864;
  t4504 = t2153 + t2156;
  t4065 = -1.*t100*t2566;
  t4122 = t471*t2566*t224;
  t3982 = t100*t2566;
  t4018 = -1.*t471*t2566*t351;
  t4506 = -1.*t100*t4504;
  t4507 = -1.*t471*t1972;
  t4511 = t4506 + t4507;
  t4341 = t4338*t3258*t224;
  t4593 = t100*t4504;
  t4595 = t471*t1972;
  t4605 = t4593 + t4595;
  t4383 = -1.*t4338*t3258*t351;
  t4820 = Power(t100,2);
  t4799 = -0.000029*t471*t351;
  t4800 = 1.e-6*t471*t854;
  t4801 = t471*t4511*t351;
  t4805 = t471*t4504*t351;
  t4810 = -1.*t100*t1972*t351;
  t4826 = t1826*t224;
  t4434 = t4338*t3641*t224;
  t4852 = t471*t4605*t854;
  t4862 = -1.*t1826*t351;
  t4485 = -1.*t4338*t3641*t351;
  t4864 = -1.*t471*t4504*t854;
  t4865 = t100*t1972*t854;
  t5014 = 0.00007916436324696982*t351;
  t5022 = -0.000029*t224;
  t5027 = 0.125443*t224;
  t5040 = 0.04675*t854;
  t5043 = t5027 + t5040;
  t5078 = -0.019320336034999996*t5043;
  t5079 = t5014 + t5022 + t5078;
  p_output1[0]=var2[14]*(-0.5*(-0.019320336034999996*t673 - 0.0009932822899999978*t710)*var2[4] - 0.5*(-0.0009932822899999978*t312*t46 - 0.019320336034999996*t370*t46)*var2[5] - 0.5*(-0.019320336034999996*t541 - 0.0009932822899999978*t590)*var2[12] - 0.5*t904*var2[13] - 0.5*t904*var2[14]);
  p_output1[1]=var2[14]*(-0.5*(-0.019320336034999996*(-1.*t673*t939 - 1.*t1227*t962) - 0.0009932822899999978*(-1.*t710*t939 - 1.*t1274*t962))*var2[3] - 0.5*(0.019320336034999996*t1072*t962 + 0.0009932822899999978*t1089*t962)*var2[4] - 0.5*(-0.0009932822899999978*(t704*t939 + t312*t423*t962) - 0.019320336034999996*(t659*t939 + t370*t423*t962))*var2[5] - 0.5*(-0.019320336034999996*(-1.*t351*t471*t78*t939 - 1.*t1144*t962) - 0.0009932822899999978*(-1.*t224*t471*t78*t939 - 1.*t1174*t962))*var2[12] - 0.5*t1354*var2[13] - 0.5*t1354*var2[14]);
  p_output1[2]=var2[14]*(-0.5*(-0.019320336034999996*t1310 - 0.0009932822899999978*(t1274*t939 - 1.*t710*t962))*var2[3] - 0.5*(-0.019320336034999996*t1072*t939 - 0.0009932822899999978*t1089*t939)*var2[4] - 0.5*(-0.019320336034999996*(-1.*t370*t423*t939 + t659*t962) - 0.0009932822899999978*(-1.*t312*t423*t939 + t704*t962))*var2[5] - 0.5*(-0.0009932822899999978*(t1174*t939 - 1.*t224*t471*t78*t962) - 0.019320336034999996*(t1144*t939 - 1.*t351*t471*t78*t962))*var2[12] - 0.5*t1669*var2[13] - 0.5*t1669*var2[14]);
  p_output1[3]=var2[14]*(-0.5*(0.003627*t2139 + 1.e-6*t673 - 0.000029*t710 - 0.019320336034999996*(t2139*t2479 + t2348*(-1.*t2139*t2181 - 1.*t2139*t3011 - 1.*t2040*t3019 - 1.*t2218*t3033) + t2393*t710 + t2040*(t1089*t2218 + t2348*t3019 + t2181*t710 + t3011*t710)) - 0.0009932822899999978*(t2139*t2301 + t2245*t673 + (t2139*t2181 + t2139*t3011 + t2040*t3019 + t2218*t3033)*t775 + t2040*(-1.*t1072*t2218 - 1.*t2181*t673 - 1.*t3011*t673 - 1.*t3019*t775)))*var2[4] - 0.5*(-0.000029*t312*t46 + 1.e-6*t370*t46 - 0.003627*t46*t471*t78 - 0.0009932822899999978*(t2245*t370*t46 + t2040*(t2255 + t2268 + t2218*t370*t423 - 1.*t2181*t370*t46 + t2076*t423*t673 - 1.*t2076*t46*t775) - 1.*t2301*t46*t471*t78 + t775*(t2008 + t2129 - 1.*t2076*t2139*t423 + t2040*t2076*t46 + t2218*t423*t471*t78 - 1.*t2181*t46*t471*t78)) - 0.019320336034999996*(t2393*t312*t46 + t2040*(t2398 + t2402 - 1.*t2218*t312*t423 + t2076*t2348*t46 + t2181*t312*t46 - 1.*t2076*t423*t710) - 1.*t2479*t46*t471*t78 + t2348*(t2357 + t2363 + t2076*t2139*t423 - 1.*t2040*t2076*t46 - 1.*t2218*t423*t471*t78 + t2181*t46*t471*t78)))*var2[5] - 0.5*(0.003627*t2518 + 1.e-6*t541 - 0.000029*t590 - 0.019320336034999996*(t2479*t2518 + t2348*(-1.*t2181*t2518 - 1.*t2040*t2603 - 1.*t2139*t2623 - 1.*t2218*t2650 + t2758 + t2779) + t2393*t590 + t2040*(t1174*t2218 + t2348*t2603 + t2872 + t2876 + t2181*t590 + t2623*t710)) - 0.0009932822899999978*(t2301*t2518 + t2245*t541 + (t2181*t2518 + t2560 + t2040*t2603 + t2613 + t2139*t2623 + t2218*t2650)*t775 + t2040*(-1.*t1144*t2218 + t2660 + t2673 - 1.*t2181*t541 - 1.*t2623*t673 - 1.*t2603*t775)))*var2[12] - 0.5*(t3226 + t3231 - 0.019320336034999996*(t3246 + t2348*(t3286 - 1.*t2040*t3316 - 1.*t2139*t3334) + t2040*(t2348*t3316 + t3393 + t3404 + t3405 + t3411 + t3334*t710)) - 0.0009932822899999978*(t3478 + (t2040*t3316 + t2139*t3334 + t3481)*t775 + t2040*(t3508 + t3511 + t3539 + t3562 - 1.*t3334*t673 - 1.*t3316*t775)))*var2[13] - 0.5*(t3226 + t3231 - 0.019320336034999996*(t3246 + t2348*(t3697 - 1.*t2040*t3762 - 1.*t2139*t3774) + t2040*(t3404 + t3405 + t3411 + t2348*t3762 + t3789 + t3774*t710)) - 0.0009932822899999978*(t3478 + (t2040*t3762 + t2139*t3774 + t3844)*t775 + t2040*(t3508 + t3539 + t3562 + t3872 - 1.*t3774*t673 - 1.*t3762*t775)))*var2[14]);
  p_output1[4]=var2[14]*(-0.5*(-0.003627*t282*t471 + 1.e-6*t659 - 0.000029*t704 - 0.0009932822899999978*(-1.*t282*t4039*t471 + t3967*t659 + t471*(t2255 + t2268 - 1.*t2172*t370 - 1.*t2076*t659)*t78 + t1227*(t2008 + t2129 - 1.*t2076*t282*t471 - 1.*t2172*t471*t78)) - 0.019320336034999996*(-1.*t282*t4162*t471 + t4051*t704 + t471*(t2398 + t2402 + t2172*t312 + t2076*t704)*t78 + t1274*(t2357 + t2363 + t2076*t282*t471 + t2172*t471*t78)))*var2[5] - 0.5*(-0.003627*t100*t78 + 0.000029*t224*t471*t78 - 1.e-6*t351*t471*t78 - 0.0009932822899999978*(t1227*(t2560 + t2613 + t100*t2172*t282 + t3982 + t2160*t471 + t2559*t4003*t471) - 1.*t100*t4039*t78 - 1.*t351*t3967*t471*t78 + t471*(t2660 + t2673 + t100*t2160*t351 + t4018 - 1.*t2172*t282*t351*t471 + t2559*t282*t659)*t78) - 0.019320336034999996*(t1274*(t2758 + t2779 - 1.*t100*t2172*t282 + t4065 - 1.*t2160*t471 - 1.*t2559*t4003*t471) - 1.*t100*t4162*t78 - 1.*t224*t4051*t471*t78 + t471*(-1.*t100*t2160*t224 + t2872 + t2876 + t4122 + t2172*t224*t282*t471 - 1.*t2559*t282*t704)*t78))*var2[12] - 0.5*(t4310 + t4312 - 0.0009932822899999978*(t4382 + t1227*(t3481 + t100*t3258*t471 - 1.*t282*t3297*t471) + t471*(t3508 + t3511 + t4383 + t4391 + t4400 - 1.*t3297*t659)*t78) - 0.019320336034999996*(t4334 + t1274*(t3286 - 1.*t100*t3258*t471 + t282*t3297*t471) + t471*(t3393 + t3404 + t4336 + t4341 + t4346 + t3297*t704)*t78))*var2[13] - 0.5*(t4310 + t4312 - 0.0009932822899999978*(t4382 + t1227*(t3844 + t100*t3641*t471 - 1.*t282*t3742*t471) + t471*(t3508 + t3872 + t4391 + t4400 + t4485 - 1.*t3742*t659)*t78) - 0.019320336034999996*(t4334 + t1274*(t3697 - 1.*t100*t3641*t471 + t282*t3742*t471) + t471*(t3404 + t3789 + t4336 + t4346 + t4434 + t3742*t704)*t78))*var2[14]);
  p_output1[5]=var2[14]*(-0.5*(0.000029*t100*t224 - 1.e-6*t100*t351 + 0.003627*t471 - 0.019320336034999996*(-1.*t100*t224*t4511 + t100*(-1.*t100*t224*t2559 + t4122 - 1.*t100*t224*t4504 - 1.*t1972*t224*t471) + t224*t471*(t100*t1972 + t4065 - 1.*t2559*t471 - 1.*t4504*t471) + t471*(-1.*t100*t1972*t224 + t1826*t277 + t224*t4504*t471)) - 0.0009932822899999978*(-1.*t100*t351*t4605 + t100*(t100*t2559*t351 + t4018 + t100*t351*t4504 + t1972*t351*t471) + t351*t471*(-1.*t100*t1972 + t3982 + t2559*t471 + t4504*t471) + t471*(-1.*t1826*t224 + t100*t1972*t351 - 1.*t351*t4504*t471)))*var2[12] - 0.5*(t4799 + t4800 - 0.019320336034999996*(t4801 + t100*(t277*t3271 + t4341 + t4805 + t4810 + t224*t3258*t4820 + t4826)) - 0.0009932822899999978*(t4852 + t100*(-1.*t224*t3271 + t4383 - 1.*t3258*t351*t4820 + t4862 + t4864 + t4865)))*var2[13] - 0.5*(t4799 + t4800 - 0.019320336034999996*(t4801 + t100*(t277*t3689 + t4434 + t4805 + t4810 + t224*t3641*t4820 + t4826)) - 0.0009932822899999978*(t4852 + t100*(-1.*t224*t3689 + t4485 - 1.*t351*t3641*t4820 + t4862 + t4864 + t4865)))*var2[14]);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=var2[14]*(-0.5*t5079*var2[13] - 0.5*t5079*var2[14]);
  p_output1[13]=-0.5*(-0.019320336034999996*(0.1881*t116 + t116*t1782 - 1.*t1819*t182 + t182*t3577 + t116*t3623) - 0.0009932822899999978*(t116*t1819 + 0.1881*t182 + t1782*t182 - 1.*t116*t3577 + t182*t3623))*Power(var2[14],2);
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

#include "Ce1_vec15_go1_description.hh"

namespace SymFunction
{

void Ce1_vec15_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
