/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:28:20 GMT-05:00
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
  double t184;
  double t191;
  double t194;
  double t205;
  double t220;
  double t223;
  double t235;
  double t83;
  double t97;
  double t251;
  double t273;
  double t252;
  double t258;
  double t358;
  double t373;
  double t384;
  double t462;
  double t472;
  double t239;
  double t260;
  double t278;
  double t285;
  double t288;
  double t289;
  double t306;
  double t319;
  double t328;
  double t484;
  double t485;
  double t493;
  double t500;
  double t513;
  double t531;
  double t535;
  double t536;
  double t580;
  double t586;
  double t560;
  double t564;
  double t565;
  double t611;
  double t623;
  double t629;
  double t386;
  double t390;
  double t407;
  double t413;
  double t422;
  double t439;
  double t632;
  double t633;
  double t637;
  double t675;
  double t678;
  double t699;
  double t711;
  double t752;
  double t783;
  double t906;
  double t916;
  double t923;
  double t929;
  double t905;
  double t930;
  double t939;
  double t949;
  double t956;
  double t960;
  double t961;
  double t962;
  double t973;
  double t1025;
  double t1035;
  double t1072;
  double t1077;
  double t1081;
  double t1083;
  double t1183;
  double t1184;
  double t1187;
  double t1130;
  double t1138;
  double t1142;
  double t1154;
  double t1155;
  double t1170;
  double t999;
  double t1006;
  double t1158;
  double t1161;
  double t1164;
  double t1089;
  double t1173;
  double t1195;
  double t943;
  double t975;
  double t980;
  double t1270;
  double t1271;
  double t1285;
  double t1286;
  double t1345;
  double t1381;
  double t1404;
  double t1663;
  double t1667;
  double t1671;
  double t1672;
  double t1687;
  double t1697;
  double t1700;
  double t1710;
  double t1720;
  double t1723;
  double t1726;
  double t1911;
  double t1918;
  double t1927;
  double t1738;
  double t1744;
  double t1748;
  double t1762;
  double t1775;
  double t1787;
  double t1815;
  double t1827;
  double t1832;
  double t1838;
  double t1856;
  double t1857;
  double t2024;
  double t2027;
  double t2028;
  double t2033;
  double t2054;
  double t2064;
  double t2065;
  double t2136;
  double t2141;
  double t2158;
  double t2162;
  double t1193;
  double t2305;
  double t2306;
  double t2308;
  double t2274;
  double t2279;
  double t2281;
  double t2026;
  double t2042;
  double t2066;
  double t2069;
  double t1441;
  double t2336;
  double t2340;
  double t2346;
  double t2098;
  double t1361;
  double t2099;
  double t2107;
  double t1384;
  double t2544;
  double t2545;
  double t2547;
  double t2561;
  double t2580;
  double t2583;
  double t2552;
  double t2555;
  double t2560;
  double t2208;
  double t2614;
  double t2615;
  double t2617;
  double t2315;
  double t2358;
  double t2667;
  double t2674;
  double t2675;
  double t2646;
  double t2648;
  double t2658;
  double t2393;
  double t2551;
  double t2584;
  double t2586;
  double t2418;
  double t2419;
  double t2695;
  double t2706;
  double t2447;
  double t2457;
  double t2590;
  double t2594;
  double t2505;
  double t2508;
  double t1977;
  double t1984;
  double t1991;
  double t460;
  double t509;
  double t537;
  double t539;
  double t552;
  double t553;
  double t569;
  double t576;
  double t591;
  double t598;
  double t618;
  double t630;
  double t631;
  double t1944;
  double t1953;
  double t1961;
  double t824;
  double t1547;
  double t1548;
  double t1551;
  double t1559;
  double t1560;
  double t1562;
  double t1573;
  double t1584;
  double t1585;
  double t1598;
  double t1599;
  double t1610;
  double t1612;
  double t1614;
  double t1629;
  double t1495;
  double t1504;
  double t1509;
  double t1515;
  double t1520;
  double t1525;
  double t1534;
  double t1539;
  double t1933;
  double t1939;
  double t1975;
  double t1999;
  double t2003;
  double t2953;
  double t2960;
  double t2961;
  double t1287;
  double t1290;
  double t1303;
  double t1304;
  double t1305;
  double t1340;
  double t1365;
  double t1371;
  double t1380;
  double t1387;
  double t1409;
  double t1415;
  double t1417;
  double t1418;
  double t1420;
  double t997;
  double t1097;
  double t1105;
  double t1107;
  double t1151;
  double t1168;
  double t1201;
  double t1205;
  double t1213;
  double t1218;
  double t1435;
  double t1438;
  double t1442;
  double t1448;
  double t1454;
  double t1467;
  double t1468;
  double t1474;
  double t1478;
  double t1228;
  double t1240;
  double t1248;
  double t1250;
  double t1251;
  double t1260;
  double t1264;
  double t1753;
  double t1790;
  double t1810;
  double t1833;
  double t1868;
  double t1880;
  double t2089;
  double t2109;
  double t2114;
  double t2127;
  double t2271;
  double t2286;
  double t2316;
  double t2318;
  double t2320;
  double t2363;
  double t2373;
  double t2383;
  double t2385;
  double t2174;
  double t2196;
  double t2212;
  double t2231;
  double t2241;
  double t2263;
  double t2390;
  double t2398;
  double t2405;
  double t2406;
  double t2407;
  double t2408;
  double t2415;
  double t2421;
  double t2423;
  double t2424;
  double t2431;
  double t2437;
  double t2440;
  double t2444;
  double t2448;
  double t2451;
  double t2452;
  double t2458;
  double t2463;
  double t2478;
  double t2482;
  double t2490;
  double t2509;
  double t2520;
  double t2523;
  double t2524;
  double t2588;
  double t2596;
  double t2602;
  double t2609;
  double t2621;
  double t2622;
  double t2625;
  double t2629;
  double t2634;
  double t2635;
  double t2643;
  double t2666;
  double t2676;
  double t2683;
  double t2691;
  double t2711;
  double t2714;
  double t2719;
  double t2723;
  double t2725;
  double t2731;
  double t2739;
  double t2742;
  double t2744;
  double t2745;
  double t2747;
  double t2749;
  double t2753;
  double t2757;
  double t2763;
  double t2766;
  double t2773;
  double t2785;
  double t2791;
  double t2793;
  double t2799;
  double t2803;
  double t2806;
  double t2807;
  double t2809;
  double t2815;
  double t2817;
  double t2830;
  double t2833;
  double t2834;
  double t2839;
  double t2850;
  double t2859;
  double t2861;
  double t1727;
  double t1729;
  double t1811;
  double t1882;
  double t1896;
  double t3161;
  double t3169;
  double t3171;
  double t3030;
  double t3032;
  double t3033;
  double t3039;
  double t3040;
  double t3303;
  double t3306;
  double t2613;
  double t2639;
  double t2726;
  double t2778;
  double t2862;
  double t2864;
  double t3278;
  double t3280;
  double t3284;
  double t3285;
  double t3291;
  double t3294;
  double t3079;
  double t3084;
  double t3089;
  double t3093;
  double t3095;
  double t3101;
  double t3378;
  double t3357;
  double t3367;
  double t3368;
  double t3371;
  double t3375;
  double t3385;
  double t3386;
  double t3390;
  double t3394;
  double t3408;
  double t3423;
  double t3448;
  double t3470;
  double t3476;
  double t3480;
  double t3414;
  double t3703;
  double t3704;
  double t2134;
  double t2267;
  double t2386;
  double t2435;
  double t2531;
  double t2541;
  double t3254;
  double t3267;
  double t3268;
  double t3269;
  double t3270;
  double t3271;
  double t3058;
  double t3065;
  double t3066;
  double t3067;
  double t3071;
  double t3072;
  double t3784;
  double t3639;
  double t3644;
  double t3646;
  double t3510;
  double t3511;
  double t3515;
  double t3770;
  double t3771;
  double t3773;
  double t3776;
  double t3783;
  double t3786;
  double t3788;
  double t3794;
  double t3796;
  double t3797;
  double t3826;
  double t3827;
  double t3560;
  double t3562;
  double t3566;
  double t3802;
  double t3626;
  double t3631;
  double t3632;
  double t3633;
  double t3635;
  double t3648;
  double t3963;
  double t3964;
  double t1109;
  double t1222;
  double t1268;
  double t1434;
  double t1483;
  double t1484;
  double t4022;
  double t4005;
  double t4009;
  double t4011;
  double t4019;
  double t4021;
  double t4025;
  double t4026;
  double t4029;
  double t4030;
  double t4031;
  double t4036;
  double t4040;
  double t3212;
  double t3220;
  double t3230;
  double t3232;
  double t3237;
  double t3239;
  double t3010;
  double t3011;
  double t3018;
  double t3019;
  double t3021;
  double t3026;
  double t4033;
  double t3829;
  double t3831;
  double t3832;
  double t3833;
  double t3842;
  double t3843;
  double t3469;
  double t3481;
  double t3495;
  double t3505;
  double t3507;
  double t3516;
  double t4225;
  double t1506;
  double t1521;
  double t1522;
  double t1544;
  double t1634;
  double t1640;
  double t4253;
  double t4235;
  double t4088;
  double t4090;
  double t4094;
  double t4099;
  double t4100;
  double t4101;
  double t4252;
  double t4254;
  double t4260;
  double t4261;
  double t4275;
  double t4281;
  double t4284;
  double t4294;
  double t4304;
  double t4305;
  double t3175;
  double t3178;
  double t3179;
  double t3182;
  double t3188;
  double t3200;
  double t2963;
  double t2973;
  double t2977;
  double t2987;
  double t2988;
  double t2990;
  double t4263;
  double t3865;
  double t3871;
  double t3873;
  double t3874;
  double t3885;
  double t3886;
  double t3553;
  double t3554;
  double t3555;
  double t3558;
  double t3559;
  double t3571;
  double t4240;
  double t4242;
  double t4244;
  double t4245;
  double t4246;
  double t549;
  double t608;
  double t818;
  double t838;
  double t841;
  double t3973;
  double t3974;
  double t3986;
  double t3988;
  double t4001;
  double t3138;
  double t3139;
  double t3140;
  double t3141;
  double t3147;
  double t2920;
  double t2923;
  double t2934;
  double t2935;
  double t2949;
  double t3732;
  double t3735;
  double t3744;
  double t3745;
  double t3758;
  double t3325;
  double t3327;
  double t3333;
  double t3334;
  double t3336;
  double t4417;
  double t4427;
  double t4431;
  double t4217;
  double t4229;
  double t350;
  double t449;
  double t452;
  double t3967;
  double t3970;
  double t3126;
  double t3127;
  double t3136;
  double t2895;
  double t2899;
  double t2912;
  double t3706;
  double t3707;
  double t3315;
  double t3317;
  t184 = Cos(var1[8]);
  t191 = Sin(var1[7]);
  t194 = -1.*t184*t191;
  t205 = Cos(var1[7]);
  t220 = Sin(var1[8]);
  t223 = -1.*t205*t220;
  t235 = t194 + t223;
  t83 = Cos(var1[6]);
  t97 = Sin(var1[4]);
  t251 = Cos(var1[4]);
  t273 = Cos(var1[5]);
  t252 = Sin(var1[5]);
  t258 = Sin(var1[6]);
  t358 = -1.*t205*t184;
  t373 = t191*t220;
  t384 = t358 + t373;
  t462 = -1.*t184;
  t472 = 1. + t462;
  t239 = t83*t97*t235;
  t260 = t252*t258*t235;
  t278 = t205*t184;
  t285 = -1.*t191*t220;
  t288 = t278 + t285;
  t289 = t273*t288;
  t306 = t260 + t289;
  t319 = t251*t306;
  t328 = t239 + t319;
  t484 = 0.1881*t472;
  t485 = 0.194386*t184;
  t493 = -0.12226899999999999*t220;
  t500 = t484 + t485 + t493;
  t513 = -0.213*t472;
  t531 = -0.335269*t184;
  t535 = -0.006286*t220;
  t536 = t513 + t531 + t535;
  t580 = -0.12226899999999999*t184;
  t586 = t580 + t535;
  t560 = -0.006286*t184;
  t564 = 0.12226899999999999*t220;
  t565 = t560 + t564;
  t611 = t184*t536;
  t623 = -0.1881*t220;
  t629 = t500*t220;
  t386 = t83*t97*t384;
  t390 = t273*t235;
  t407 = t252*t258*t384;
  t413 = t390 + t407;
  t422 = t251*t413;
  t439 = t386 + t422;
  t632 = t83*t97*t288;
  t633 = t184*t191;
  t637 = t205*t220;
  t675 = t633 + t637;
  t678 = t273*t675;
  t699 = t252*t258*t288;
  t711 = t678 + t699;
  t752 = t251*t711;
  t783 = t632 + t752;
  t906 = 0.1881*t191;
  t916 = -1.*t191*t500;
  t923 = t205*t536;
  t929 = 0. + t906 + t916 + t923;
  t905 = -0.078693*t258;
  t930 = t83*t929;
  t939 = t905 + t930;
  t949 = -1.*t83;
  t956 = 1. + t949;
  t960 = -0.04675*t956;
  t961 = -0.125443*t83;
  t962 = -1.*t258*t929;
  t973 = t960 + t961 + t962;
  t1025 = -1.*t205;
  t1035 = 1. + t1025;
  t1072 = 0.1881*t1035;
  t1077 = t205*t500;
  t1081 = t191*t536;
  t1083 = 0. + t1072 + t1077 + t1081;
  t1183 = -1.*t191*t586;
  t1184 = t205*t565;
  t1187 = t1183 + t1184;
  t1130 = -1.*t258*t939;
  t1138 = -1.*t83*t973;
  t1142 = t1130 + t1138;
  t1154 = t83*t939*t235;
  t1155 = -1.*t258*t973*t235;
  t1170 = t1083*t288;
  t999 = -1.*t83*t939*t235;
  t1006 = t258*t973*t235;
  t1158 = t205*t586;
  t1161 = t191*t565;
  t1164 = t1158 + t1161;
  t1089 = -1.*t1083*t288;
  t1173 = Power(t83,2);
  t1195 = Power(t258,2);
  t943 = t258*t939;
  t975 = t83*t973;
  t980 = t943 + t975;
  t1270 = -1.*t251*t83*t252;
  t1271 = t97*t258;
  t1285 = t1270 + t1271;
  t1286 = -1.*t1083*t675;
  t1345 = -1.*t1164*t675;
  t1381 = t1083*t235;
  t1404 = t1164*t288;
  t1663 = Sin(var1[3]);
  t1667 = -1.*t273*t258*t235;
  t1671 = t252*t288;
  t1672 = t1667 + t1671;
  t1687 = t1663*t1672;
  t1697 = Cos(var1[3]);
  t1700 = t251*t83*t235;
  t1710 = -1.*t97*t306;
  t1720 = t1700 + t1710;
  t1723 = t1697*t1720;
  t1726 = t1687 + t1723;
  t1911 = t1697*t1672;
  t1918 = -1.*t1663*t1720;
  t1927 = t1911 + t1918;
  t1738 = t252*t675;
  t1744 = -1.*t273*t258*t288;
  t1748 = t1738 + t1744;
  t1762 = t251*t83*t288;
  t1775 = -1.*t97*t711;
  t1787 = t1762 + t1775;
  t1815 = t252*t235;
  t1827 = -1.*t273*t258*t384;
  t1832 = t1815 + t1827;
  t1838 = t251*t83*t384;
  t1856 = -1.*t97*t413;
  t1857 = t1838 + t1856;
  t2024 = 0. + t905 + t930;
  t2027 = -1.*t252*t973;
  t2028 = t273*t1083;
  t2033 = 0. + t2027 + t2028;
  t2054 = t273*t973;
  t2064 = t252*t1083;
  t2065 = 0. + t2054 + t2064;
  t2136 = -1.*t258*t2024;
  t2141 = t83*t252*t2033;
  t2158 = -1.*t273*t83*t2065;
  t2162 = t2136 + t2141 + t2158;
  t1193 = t1173*t1187*t288;
  t2305 = -1.*t273*t258*t1187;
  t2306 = t252*t1164;
  t2308 = t2305 + t2306;
  t2274 = t252*t258*t1187;
  t2279 = t273*t1164;
  t2281 = t2274 + t2279;
  t2026 = t258*t2024;
  t2042 = -1.*t83*t252*t2033;
  t2066 = t273*t83*t2065;
  t2069 = t2026 + t2042 + t2066;
  t1441 = -1.*t1173*t1187*t235;
  t2336 = t83*t2024*t235;
  t2340 = t2033*t306;
  t2346 = t2065*t1672;
  t2098 = -1.*t83*t2024*t235;
  t1361 = -1.*t1173*t1187*t288;
  t2099 = -1.*t2033*t306;
  t2107 = -1.*t2065*t1672;
  t1384 = t1173*t1187*t235;
  t2544 = t97*t2024;
  t2545 = t251*t2033;
  t2547 = 0. + t2544 + t2545;
  t2561 = t251*t2024;
  t2580 = -1.*t97*t2033;
  t2583 = 0. + t2561 + t2580;
  t2552 = t83*t97*t252;
  t2555 = t251*t258;
  t2560 = t2552 + t2555;
  t2208 = t2065*t1748;
  t2614 = -1.*t1285*t2547;
  t2615 = -1.*t2560*t2583;
  t2617 = t2614 + t2615 + t2158;
  t2315 = -1.*t273*t83*t2308;
  t2358 = t2308*t1748;
  t2667 = t251*t2281;
  t2674 = t83*t97*t1187;
  t2675 = t2667 + t2674;
  t2646 = -1.*t97*t2281;
  t2648 = t251*t83*t1187;
  t2658 = t2646 + t2648;
  t2393 = t273*t83*t2308;
  t2551 = t1285*t2547;
  t2584 = t2560*t2583;
  t2586 = t2551 + t2584 + t2066;
  t2418 = -1.*t2308*t1672;
  t2419 = -1.*t2065*t1832;
  t2695 = t2547*t328;
  t2706 = t2583*t1720;
  t2447 = -1.*t2065*t1748;
  t2457 = -1.*t2308*t1748;
  t2590 = -1.*t2547*t328;
  t2594 = -1.*t2583*t1720;
  t2505 = t2308*t1672;
  t2508 = t2065*t1832;
  t1977 = t1697*t1832;
  t1984 = -1.*t1663*t1857;
  t1991 = t1977 + t1984;
  t460 = 0.1881*t184;
  t509 = -1.*t184*t500;
  t537 = t536*t220;
  t539 = 0. + t460 + t509 + t537;
  t552 = -0.1881*t184;
  t553 = t184*t500;
  t569 = t184*t565;
  t576 = -1.*t536*t220;
  t591 = t586*t220;
  t598 = t552 + t553 + t569 + t576 + t591;
  t618 = -1.*t184*t586;
  t630 = t565*t220;
  t631 = t611 + t618 + t623 + t629 + t630;
  t1944 = t1697*t1748;
  t1953 = -1.*t1663*t1787;
  t1961 = t1944 + t1953;
  t824 = 0. + t611 + t623 + t629;
  t1547 = -1.*t929*t288;
  t1548 = 0. + t1286 + t1547;
  t1551 = t235*t1548;
  t1559 = t929*t235;
  t1560 = 0. + t1559 + t1170;
  t1562 = t288*t1560;
  t1573 = -1.*t929*t235;
  t1584 = -1.*t1187*t288;
  t1585 = t1573 + t1345 + t1089 + t1584;
  t1598 = t288*t1585;
  t1599 = t1187*t235;
  t1610 = t929*t384;
  t1612 = t1381 + t1599 + t1404 + t1610;
  t1614 = t675*t1612;
  t1629 = t1551 + t1562 + t1598 + t1614;
  t1495 = -0.078693*t288;
  t1504 = 0. + t1495;
  t1509 = 0.125443*t288;
  t1515 = 0.04675*t384;
  t1520 = t1509 + t1515;
  t1525 = 0.04675*t235;
  t1534 = 0.125443*t675;
  t1539 = 0. + t1525 + t1534;
  t1933 = 0.158015*t783*t1927;
  t1939 = 0.158015*t439*t1927;
  t1975 = 0.158015*t328*t1961;
  t1999 = 0.158015*t328*t1991;
  t2003 = t1933 + t1939 + t1975 + t1999;
  t2953 = t1697*t273*t83;
  t2960 = -1.*t1663*t2560;
  t2961 = t2953 + t2960;
  t1287 = -1.*t83*t939*t288;
  t1290 = t258*t973*t288;
  t1303 = t1286 + t1287 + t1290;
  t1304 = t83*t384*t1303;
  t1305 = t1154 + t1155 + t1170;
  t1340 = t83*t235*t1305;
  t1365 = -1.*t1195*t1187*t288;
  t1371 = t999 + t1006 + t1345 + t1089 + t1361 + t1365;
  t1380 = t83*t235*t1371;
  t1387 = t1195*t1187*t235;
  t1409 = t83*t939*t384;
  t1415 = -1.*t258*t973*t384;
  t1417 = t1381 + t1384 + t1387 + t1404 + t1409 + t1415;
  t1418 = t83*t288*t1417;
  t1420 = t1304 + t1340 + t1380 + t1418;
  t997 = t83*t980*t235;
  t1097 = t999 + t1006 + t1089;
  t1105 = t258*t1097;
  t1107 = t997 + t1105;
  t1151 = t83*t1142*t235;
  t1168 = t1164*t675;
  t1201 = t1195*t1187*t288;
  t1205 = t1154 + t1155 + t1168 + t1170 + t1193 + t1201;
  t1213 = t258*t1205;
  t1218 = t1151 + t1213;
  t1435 = t83*t980*t384;
  t1438 = -1.*t1083*t235;
  t1442 = -1.*t1195*t1187*t235;
  t1448 = -1.*t1164*t288;
  t1454 = -1.*t83*t939*t384;
  t1467 = t258*t973*t384;
  t1468 = t1438 + t1441 + t1442 + t1448 + t1454 + t1467;
  t1474 = t258*t1468;
  t1478 = t1435 + t1474;
  t1228 = t83*t1142*t288;
  t1240 = t1083*t675;
  t1248 = t83*t939*t288;
  t1250 = -1.*t258*t973*t288;
  t1251 = t1240 + t1248 + t1250;
  t1260 = t258*t1251;
  t1264 = t1228 + t1260;
  t1753 = t1663*t1748;
  t1790 = t1697*t1787;
  t1810 = t1753 + t1790;
  t1833 = t1663*t1832;
  t1868 = t1697*t1857;
  t1880 = t1833 + t1868;
  t2089 = t2069*t1672;
  t2109 = t2098 + t2099 + t2107;
  t2114 = t273*t83*t2109;
  t2127 = t2089 + t2114;
  t2271 = t2162*t1672;
  t2286 = t83*t252*t2281;
  t2316 = -1.*t83*t258*t1187;
  t2318 = t2286 + t2315 + t2316;
  t2320 = t2318*t1748;
  t2363 = t2281*t711;
  t2373 = t2336 + t1193 + t2340 + t2346 + t2358 + t2363;
  t2383 = t273*t83*t2373;
  t2385 = t2271 + t2320 + t2383;
  t2174 = t2162*t1748;
  t2196 = t83*t2024*t288;
  t2212 = t2033*t711;
  t2231 = t2196 + t2208 + t2212;
  t2241 = t273*t83*t2231;
  t2263 = t2174 + t2241;
  t2390 = -1.*t83*t252*t2281;
  t2398 = t83*t258*t1187;
  t2405 = t2390 + t2393 + t2398;
  t2406 = t2405*t1672;
  t2407 = t2069*t1832;
  t2408 = -1.*t83*t2024*t384;
  t2415 = -1.*t2281*t306;
  t2421 = -1.*t2033*t413;
  t2423 = t1441 + t2408 + t2415 + t2418 + t2419 + t2421;
  t2424 = t273*t83*t2423;
  t2431 = t2406 + t2407 + t2424;
  t2437 = t2336 + t2340 + t2346;
  t2440 = t1672*t2437;
  t2444 = -1.*t83*t2024*t288;
  t2448 = -1.*t2033*t711;
  t2451 = t2444 + t2447 + t2448;
  t2452 = t1832*t2451;
  t2458 = -1.*t2281*t711;
  t2463 = t2098 + t1361 + t2099 + t2107 + t2457 + t2458;
  t2478 = t1672*t2463;
  t2482 = t83*t2024*t384;
  t2490 = t2281*t306;
  t2509 = t2033*t413;
  t2520 = t1384 + t2482 + t2490 + t2505 + t2508 + t2509;
  t2523 = t1748*t2520;
  t2524 = t2440 + t2452 + t2478 + t2523;
  t2588 = t2586*t328;
  t2596 = t2107 + t2590 + t2594;
  t2602 = t1285*t2596;
  t2609 = t2588 + t2602;
  t2621 = t2617*t783;
  t2622 = t2547*t783;
  t2625 = t2583*t1787;
  t2629 = t2208 + t2622 + t2625;
  t2634 = t1285*t2629;
  t2635 = t2621 + t2634;
  t2643 = t2617*t328;
  t2666 = -1.*t2560*t2658;
  t2676 = -1.*t1285*t2675;
  t2683 = t2666 + t2676 + t2315;
  t2691 = t2683*t783;
  t2711 = t2675*t783;
  t2714 = t2658*t1787;
  t2719 = t2346 + t2358 + t2695 + t2706 + t2711 + t2714;
  t2723 = t1285*t2719;
  t2725 = t2643 + t2691 + t2723;
  t2731 = t2560*t2658;
  t2739 = t1285*t2675;
  t2742 = t2731 + t2739 + t2393;
  t2744 = t2742*t328;
  t2745 = t2586*t439;
  t2747 = -1.*t2675*t328;
  t2749 = -1.*t2658*t1720;
  t2753 = -1.*t2547*t439;
  t2757 = -1.*t2583*t1857;
  t2763 = t2418 + t2419 + t2747 + t2749 + t2753 + t2757;
  t2766 = t1285*t2763;
  t2773 = t2744 + t2745 + t2766;
  t2785 = t2346 + t2695 + t2706;
  t2791 = t328*t2785;
  t2793 = -1.*t2547*t783;
  t2799 = -1.*t2583*t1787;
  t2803 = t2447 + t2793 + t2799;
  t2806 = t439*t2803;
  t2807 = -1.*t2675*t783;
  t2809 = -1.*t2658*t1787;
  t2815 = t2107 + t2457 + t2590 + t2594 + t2807 + t2809;
  t2817 = t328*t2815;
  t2830 = t2675*t328;
  t2833 = t2658*t1720;
  t2834 = t2547*t439;
  t2839 = t2583*t1857;
  t2850 = t2505 + t2508 + t2830 + t2833 + t2834 + t2839;
  t2859 = t783*t2850;
  t2861 = t2791 + t2806 + t2817 + t2859;
  t1727 = 0.158015*t783*t1726;
  t1729 = 0.158015*t439*t1726;
  t1811 = 0.158015*t328*t1810;
  t1882 = 0.158015*t328*t1880;
  t1896 = t1727 + t1729 + t1811 + t1882;
  t3161 = t273*t83*t1663;
  t3169 = t1697*t2560;
  t3171 = t3161 + t3169;
  t3030 = 0.158015*t1927*t1810;
  t3032 = 0.158015*t1726*t1961;
  t3033 = 0.158015*t1927*t1880;
  t3039 = 0.158015*t1726*t1991;
  t3040 = t3030 + t3032 + t3033 + t3039;
  t3303 = -0.000029*t328;
  t3306 = 1.e-6*t439;
  t2613 = 0.158015*t328*t2609;
  t2639 = 0.158015*t439*t2635;
  t2726 = 0.158015*t328*t2725;
  t2778 = 0.158015*t783*t2773;
  t2862 = 0.158015*t1285*t2861;
  t2864 = t2613 + t2639 + t2726 + t2778 + t2862;
  t3278 = 0.158015*t1726*t2609;
  t3280 = 0.158015*t1880*t2635;
  t3284 = 0.158015*t1726*t2725;
  t3285 = 0.158015*t1810*t2773;
  t3291 = 0.158015*t3171*t2861;
  t3294 = t3278 + t3280 + t3284 + t3285 + t3291;
  t3079 = 0.158015*t1927*t2609;
  t3084 = 0.158015*t1991*t2635;
  t3089 = 0.158015*t1927*t2725;
  t3093 = 0.158015*t1961*t2773;
  t3095 = 0.158015*t2961*t2861;
  t3101 = t3079 + t3084 + t3089 + t3093 + t3095;
  t3378 = -0.000133*t328;
  t3357 = 1.e-6*t1285;
  t3367 = 0.003608*t328;
  t3368 = -0.000133*t783;
  t3371 = t3357 + t3367 + t3368;
  t3375 = -0.000029*t1285;
  t3385 = 0.000035*t783;
  t3386 = t3375 + t3378 + t3385;
  t3390 = 0.000035*t328;
  t3394 = -0.000133*t439;
  t3408 = t3390 + t3394;
  t3423 = 0.003608*t439;
  t3448 = t3378 + t3423;
  t3470 = t783*t2785;
  t3476 = t328*t2803;
  t3480 = t3470 + t3476;
  t3414 = t3303 + t3306;
  t3703 = -0.000029*t1672;
  t3704 = 1.e-6*t1832;
  t2134 = 0.158015*t328*t2127;
  t2267 = 0.158015*t439*t2263;
  t2386 = 0.158015*t328*t2385;
  t2435 = 0.158015*t783*t2431;
  t2531 = 0.158015*t1285*t2524;
  t2541 = t2134 + t2267 + t2386 + t2435 + t2531;
  t3254 = 0.158015*t1726*t2127;
  t3267 = 0.158015*t1726*t2385;
  t3268 = 0.158015*t2263*t1880;
  t3269 = 0.158015*t1810*t2431;
  t3270 = 0.158015*t3171*t2524;
  t3271 = t3254 + t3267 + t3268 + t3269 + t3270;
  t3058 = 0.158015*t1927*t2127;
  t3065 = 0.158015*t1927*t2385;
  t3066 = 0.158015*t2263*t1991;
  t3067 = 0.158015*t1961*t2431;
  t3071 = 0.158015*t2961*t2524;
  t3072 = t3058 + t3065 + t3066 + t3067 + t3071;
  t3784 = -0.000133*t1672;
  t3639 = t1748*t2437;
  t3644 = t1672*t2451;
  t3646 = t3639 + t3644;
  t3510 = t83*t235*t1303;
  t3511 = t83*t288*t1305;
  t3515 = t3510 + t3511;
  t3770 = 1.e-6*t273*t83;
  t3771 = 0.003608*t1672;
  t3773 = -0.000133*t1748;
  t3776 = t3770 + t3771 + t3773;
  t3783 = -0.000029*t273*t83;
  t3786 = 0.000035*t1748;
  t3788 = t3783 + t3784 + t3786;
  t3794 = 0.000035*t1672;
  t3796 = -0.000133*t1832;
  t3797 = t3794 + t3796;
  t3826 = 0.003608*t1832;
  t3827 = t3784 + t3826;
  t3560 = t288*t1548;
  t3562 = t675*t1560;
  t3566 = t3560 + t3562;
  t3802 = t3703 + t3704;
  t3626 = 0.158015*t2431*t2609;
  t3631 = 0.158015*t2524*t3480;
  t3632 = 0.158015*t2385*t2635;
  t3633 = 0.158015*t2263*t2725;
  t3635 = 0.158015*t2127*t2773;
  t3648 = 0.158015*t3646*t2861;
  t3963 = -0.000029*t83*t235;
  t3964 = 1.e-6*t83*t384;
  t1109 = 0.158015*t328*t1107;
  t1222 = 0.158015*t328*t1218;
  t1268 = 0.158015*t1264*t439;
  t1434 = 0.158015*t1285*t1420;
  t1483 = 0.158015*t783*t1478;
  t1484 = t1109 + t1222 + t1268 + t1434 + t1483;
  t4022 = -0.000133*t83*t235;
  t4005 = 1.e-6*t258;
  t4009 = 0.003608*t83*t235;
  t4011 = -0.000133*t83*t288;
  t4019 = t4005 + t4009 + t4011;
  t4021 = -0.000029*t258;
  t4025 = 0.000035*t83*t288;
  t4026 = t4021 + t4022 + t4025;
  t4029 = 0.000035*t83*t235;
  t4030 = -0.000133*t83*t384;
  t4031 = t4029 + t4030;
  t4036 = 0.003608*t83*t384;
  t4040 = t4022 + t4036;
  t3212 = 0.158015*t3171*t1420;
  t3220 = 0.158015*t1107*t1726;
  t3230 = 0.158015*t1218*t1726;
  t3232 = 0.158015*t1478*t1810;
  t3237 = 0.158015*t1264*t1880;
  t3239 = t3212 + t3220 + t3230 + t3232 + t3237;
  t3010 = 0.158015*t2961*t1420;
  t3011 = 0.158015*t1107*t1927;
  t3018 = 0.158015*t1218*t1927;
  t3019 = 0.158015*t1478*t1961;
  t3021 = 0.158015*t1264*t1991;
  t3026 = t3010 + t3011 + t3018 + t3019 + t3021;
  t4033 = t3963 + t3964;
  t3829 = 0.158015*t1478*t2127;
  t3831 = 0.158015*t1420*t3646;
  t3832 = 0.158015*t1218*t2263;
  t3833 = 0.158015*t1264*t2385;
  t3842 = 0.158015*t1107*t2431;
  t3843 = 0.158015*t3515*t2524;
  t3469 = 0.158015*t1478*t2609;
  t3481 = 0.158015*t1420*t3480;
  t3495 = 0.158015*t1218*t2635;
  t3505 = 0.158015*t1264*t2725;
  t3507 = 0.158015*t1107*t2773;
  t3516 = 0.158015*t3515*t2861;
  t4225 = -0.000029*t288;
  t1506 = 0.158015*t1504*t328;
  t1521 = 0.158015*t1520*t328;
  t1522 = -0.012434674395*t235*t783;
  t1544 = 0.158015*t1539*t439;
  t1634 = 0.158015*t1285*t1629;
  t1640 = t1506 + t1521 + t1522 + t1544 + t1634;
  t4253 = -0.000133*t288;
  t4235 = 1.e-6*t235;
  t4088 = 0.158015*t1520*t1264;
  t4090 = -0.012434674395*t235*t1107;
  t4094 = 0.158015*t1539*t1218;
  t4099 = 0.158015*t3566*t1420;
  t4100 = 0.158015*t1504*t1478;
  t4101 = 0.158015*t3515*t1629;
  t4252 = 0.003608*t235;
  t4254 = t4252 + t4253;
  t4260 = 0.000035*t675;
  t4261 = t4260 + t4253;
  t4275 = -0.000133*t235;
  t4281 = 0.000035*t288;
  t4284 = t4275 + t4281;
  t4294 = -0.000133*t675;
  t4304 = 0.003608*t288;
  t4305 = t4294 + t4304;
  t3175 = 0.158015*t3171*t1629;
  t3178 = 0.158015*t1504*t1726;
  t3179 = 0.158015*t1520*t1726;
  t3182 = -0.012434674395*t235*t1810;
  t3188 = 0.158015*t1539*t1880;
  t3200 = t3175 + t3178 + t3179 + t3182 + t3188;
  t2963 = 0.158015*t2961*t1629;
  t2973 = 0.158015*t1504*t1927;
  t2977 = 0.158015*t1520*t1927;
  t2987 = -0.012434674395*t235*t1961;
  t2988 = 0.158015*t1539*t1991;
  t2990 = t2963 + t2973 + t2977 + t2987 + t2988;
  t4263 = t4235 + t4225;
  t3865 = -0.012434674395*t235*t2127;
  t3871 = 0.158015*t1629*t3646;
  t3873 = 0.158015*t1520*t2263;
  t3874 = 0.158015*t1539*t2385;
  t3885 = 0.158015*t1504*t2431;
  t3886 = 0.158015*t3566*t2524;
  t3553 = -0.012434674395*t235*t2609;
  t3554 = 0.158015*t1629*t3480;
  t3555 = 0.158015*t1520*t2635;
  t3558 = 0.158015*t1539*t2725;
  t3559 = 0.158015*t1504*t2773;
  t3571 = 0.158015*t3566*t2861;
  t4240 = -0.012434674395*t235*t539;
  t4242 = 0.158015*t598*t1539;
  t4244 = 0.158015*t631*t1504;
  t4245 = 0.158015*t824*t1520;
  t4246 = t4235 + t4225 + t4240 + t4242 + t4244 + t4245;
  t549 = 0.158015*t539*t328;
  t608 = 0.158015*t598*t328;
  t818 = 0.158015*t631*t783;
  t838 = 0.158015*t824*t439;
  t841 = t549 + t608 + t818 + t838;
  t3973 = 0.158015*t598*t1264;
  t3974 = 0.158015*t631*t1107;
  t3986 = 0.158015*t824*t1218;
  t3988 = 0.158015*t539*t1478;
  t4001 = t3963 + t3964 + t3973 + t3974 + t3986 + t3988;
  t3138 = 0.158015*t539*t1726;
  t3139 = 0.158015*t598*t1726;
  t3140 = 0.158015*t631*t1810;
  t3141 = 0.158015*t824*t1880;
  t3147 = t3138 + t3139 + t3140 + t3141;
  t2920 = 0.158015*t539*t1927;
  t2923 = 0.158015*t598*t1927;
  t2934 = 0.158015*t631*t1961;
  t2935 = 0.158015*t824*t1991;
  t2949 = t2920 + t2923 + t2934 + t2935;
  t3732 = 0.158015*t631*t2127;
  t3735 = 0.158015*t598*t2263;
  t3744 = 0.158015*t824*t2385;
  t3745 = 0.158015*t539*t2431;
  t3758 = t3703 + t3704 + t3732 + t3735 + t3744 + t3745;
  t3325 = 0.158015*t631*t2609;
  t3327 = 0.158015*t598*t2635;
  t3333 = 0.158015*t824*t2725;
  t3334 = 0.158015*t539*t2773;
  t3336 = t3303 + t3306 + t3325 + t3327 + t3333 + t3334;
  t4417 = -0.019320336034999996*t598;
  t4427 = -0.0009932822900000022*t631;
  t4431 = t4417 + t4427;
  t4217 = 0.00007916436324697017*t235;
  t4229 = -0.019320336034999996*t1520;
  t350 = -0.0009932822900000022*t328;
  t449 = -0.019320336034999996*t439;
  t452 = t350 + t449;
  t3967 = -0.019320336034999996*t1218;
  t3970 = -0.0009932822900000022*t1478;
  t3126 = -0.0009932822900000022*t1726;
  t3127 = -0.019320336034999996*t1880;
  t3136 = t3126 + t3127;
  t2895 = -0.0009932822900000022*t1927;
  t2899 = -0.019320336034999996*t1991;
  t2912 = t2895 + t2899;
  t3706 = -0.019320336034999996*t2385;
  t3707 = -0.0009932822900000022*t2431;
  t3315 = -0.019320336034999996*t2725;
  t3317 = -0.0009932822900000022*t2773;
  p_output1[0]=var2[8]*(-0.5*(0.31603*t328*t439 + 0.31603*t328*t783)*var2[0] - 0.5*t2003*var2[1] - 0.5*t1896*var2[2] - 0.5*t2864*var2[3] - 0.5*t2541*var2[4] - 0.5*t1484*var2[5] - 0.5*t1640*var2[6] - 0.5*t841*var2[7] - 0.5*t452*var2[8]);
  p_output1[1]=var2[8]*(-0.5*t2003*var2[0] - 0.5*(0.31603*t1927*t1961 + 0.31603*t1927*t1991)*var2[1] - 0.5*t3040*var2[2] - 0.5*t3101*var2[3] - 0.5*t3072*var2[4] - 0.5*t3026*var2[5] - 0.5*t2990*var2[6] - 0.5*t2949*var2[7] - 0.5*t2912*var2[8]);
  p_output1[2]=var2[8]*(-0.5*t1896*var2[0] - 0.5*t3040*var2[1] - 0.5*(0.31603*t1726*t1810 + 0.31603*t1726*t1880)*var2[2] - 0.5*t3294*var2[3] - 0.5*t3271*var2[4] - 0.5*t3239*var2[5] - 0.5*t3200*var2[6] - 0.5*t3147*var2[7] - 0.5*t3136*var2[8]);
  p_output1[3]=var2[8]*(-0.5*t2864*var2[0] - 0.5*t3101*var2[1] - 0.5*t3294*var2[2] - 0.5*(0.31603*t2635*t2725 + 0.31603*t2609*t2773 + t328*t3386 + t1285*t3414 + t328*t3448 + 0.31603*t2861*t3480 + t3371*t439 + t3408*t783)*var2[3] - 0.5*(t1832*t3371 + t1672*t3386 + t1748*t3408 + t1672*t3448 + t3626 + t3631 + t3632 + t3633 + t3635 + t3648 + t273*t3414*t83)*var2[4] - 0.5*(t258*t3414 + t3469 + t3481 + t3495 + t3505 + t3507 + t3516 + t235*t3386*t83 + t288*t3408*t83 + t235*t3448*t83 + t3371*t384*t83)*var2[5] - 0.5*(t235*t3371 + t288*t3386 + t288*t3448 + t3553 + t3554 + t3555 + t3558 + t3559 + t3571 + t3408*t675)*var2[6] - 0.5*t3336*var2[7] - 0.5*(t3303 + t3306 + t3315 + t3317)*var2[8]);
  p_output1[4]=var2[8]*(-0.5*t2541*var2[0] - 0.5*t3072*var2[1] - 0.5*t3271*var2[2] - 0.5*(t3626 + t3631 + t3632 + t3633 + t3635 + t3648 + t328*t3788 + t1285*t3802 + t328*t3827 + t3776*t439 + t3797*t783)*var2[3] - 0.5*(0.31603*t2263*t2385 + 0.31603*t2127*t2431 + 0.31603*t2524*t3646 + t1832*t3776 + t1672*t3788 + t1748*t3797 + t1672*t3827 + t273*t3802*t83)*var2[4] - 0.5*(t258*t3802 + t3829 + t3831 + t3832 + t3833 + t3842 + t3843 + t235*t3788*t83 + t288*t3797*t83 + t235*t3827*t83 + t3776*t384*t83)*var2[5] - 0.5*(t235*t3776 + t288*t3788 + t288*t3827 + t3865 + t3871 + t3873 + t3874 + t3885 + t3886 + t3797*t675)*var2[6] - 0.5*t3758*var2[7] - 0.5*(t3703 + t3704 + t3706 + t3707)*var2[8]);
  p_output1[5]=var2[8]*(-0.5*t1484*var2[0] - 0.5*t3026*var2[1] - 0.5*t3239*var2[2] - 0.5*(t3469 + t3481 + t3495 + t3505 + t3507 + t3516 + t328*t4026 + t1285*t4033 + t328*t4040 + t4019*t439 + t4031*t783)*var2[3] - 0.5*(t3829 + t3831 + t3832 + t3833 + t3842 + t3843 + t1832*t4019 + t1672*t4026 + t1748*t4031 + t1672*t4040 + t273*t4033*t83)*var2[4] - 0.5*(0.31603*t1218*t1264 + 0.31603*t1107*t1478 + 0.31603*t1420*t3515 + t258*t4033 + t384*t4019*t83 + t235*t4026*t83 + t288*t4031*t83 + t235*t4040*t83)*var2[5] - 0.5*(t235*t4019 + t288*t4026 + t288*t4040 + t4088 + t4090 + t4094 + t4099 + t4100 + t4101 + t4031*t675)*var2[6] - 0.5*t4001*var2[7] - 0.5*(t3963 + t3964 + t3967 + t3970)*var2[8]);
  p_output1[6]=var2[8]*(-0.5*t1640*var2[0] - 0.5*t2990*var2[1] - 0.5*t3200*var2[2] - 0.5*(t3553 + t3554 + t3555 + t3558 + t3559 + t3571 + t328*t4254 + t328*t4261 + t1285*t4263 + t4305*t439 + t4284*t783)*var2[3] - 0.5*(t3865 + t3871 + t3873 + t3874 + t3885 + t3886 + t1672*t4254 + t1672*t4261 + t1748*t4284 + t1832*t4305 + t273*t4263*t83)*var2[4] - 0.5*(t4088 + t4090 + t4094 + t4099 + t4100 + t4101 + t258*t4263 + t235*t4254*t83 + t235*t4261*t83 + t288*t4284*t83 + t384*t4305*t83)*var2[5] - 0.5*(0.31603*t1520*t1539 - 0.02486934879*t1504*t235 + 0.31603*t1629*t3566 + t288*t4254 + t288*t4261 + t235*t4305 + t4284*t675)*var2[6] - 0.5*t4246*var2[7] - 0.5*(t4217 + t4225 + t4229)*var2[8]);
  p_output1[7]=var2[8]*(-0.5*t841*var2[0] - 0.5*t2949*var2[1] - 0.5*t3147*var2[2] - 0.5*t3336*var2[3] - 0.5*t3758*var2[4] - 0.5*t4001*var2[5] - 0.5*t4246*var2[6] - 0.5*(0.31603*t539*t631 + 0.31603*t598*t824)*var2[7] - 0.5*t4431*var2[8]);
  p_output1[8]=(-0.5*t452*var2[0] - 0.5*t2912*var2[1] - 0.5*t3136*var2[2] - 0.5*(-0.000029*t328 + t3315 + t3317 + 1.e-6*t439)*var2[3] - 0.5*(-0.000029*t1672 + 1.e-6*t1832 + t3706 + t3707)*var2[4] - 0.5*(t3967 + t3970 - 0.000029*t235*t83 + 1.e-6*t384*t83)*var2[5] - 0.5*(-0.000029*t288 + t4217 + t4229)*var2[6] - 0.5*t4431*var2[7])*var2[8];
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

#include "Ce2_vec9_go1_description.hh"

namespace SymFunction
{

void Ce2_vec9_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE