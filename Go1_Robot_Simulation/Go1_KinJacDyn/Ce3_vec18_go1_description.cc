/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:30:06 GMT-05:00
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
  double t123;
  double t69;
  double t71;
  double t133;
  double t94;
  double t134;
  double t144;
  double t33;
  double t183;
  double t219;
  double t223;
  double t59;
  double t246;
  double t15;
  double t326;
  double t334;
  double t342;
  double t361;
  double t458;
  double t474;
  double t484;
  double t167;
  double t265;
  double t269;
  double t356;
  double t377;
  double t381;
  double t383;
  double t387;
  double t401;
  double t437;
  double t486;
  double t496;
  double t524;
  double t543;
  double t565;
  double t583;
  double t585;
  double t594;
  double t752;
  double t759;
  double t760;
  double t791;
  double t799;
  double t801;
  double t925;
  double t926;
  double t928;
  double t1006;
  double t1008;
  double t1010;
  double t1014;
  double t1025;
  double t1029;
  double t1047;
  double t1049;
  double t1051;
  double t1055;
  double t987;
  double t1037;
  double t1059;
  double t1072;
  double t983;
  double t1078;
  double t1080;
  double t1084;
  double t1085;
  double t1089;
  double t1104;
  double t1105;
  double t1119;
  double t1130;
  double t1148;
  double t1167;
  double t1173;
  double t1181;
  double t1191;
  double t1197;
  double t1203;
  double t1204;
  double t1290;
  double t1298;
  double t1279;
  double t1287;
  double t1289;
  double t1241;
  double t1262;
  double t1266;
  double t1334;
  double t1299;
  double t965;
  double t971;
  double t973;
  double t1081;
  double t1207;
  double t1218;
  double t1383;
  double t1384;
  double t1385;
  double t1306;
  double t1317;
  double t1328;
  double t1543;
  double t1546;
  double t1562;
  double t1732;
  double t1733;
  double t1736;
  double t1714;
  double t1716;
  double t1725;
  double t1392;
  double t1935;
  double t1942;
  double t1944;
  double t1886;
  double t1480;
  double t1602;
  double t1658;
  double t1887;
  double t1948;
  double t1393;
  double t1402;
  double t1403;
  double t1957;
  double t1963;
  double t1490;
  double t1510;
  double t1514;
  double t2081;
  double t2093;
  double t1603;
  double t1617;
  double t1626;
  double t2135;
  double t2144;
  double t1666;
  double t1668;
  double t1670;
  double t2409;
  double t2428;
  double t2433;
  double t2435;
  double t2456;
  double t2458;
  double t2797;
  double t2802;
  double t2805;
  double t2831;
  double t2832;
  double t2837;
  double t1877;
  double t1881;
  double t1884;
  double t2640;
  double t2672;
  double t1991;
  double t2022;
  double t2028;
  double t2057;
  double t2058;
  double t2060;
  double t2959;
  double t2464;
  double t2978;
  double t2484;
  double t2112;
  double t2123;
  double t2127;
  double t2728;
  double t2740;
  double t2743;
  double t2751;
  double t2758;
  double t2772;
  double t2963;
  double t3011;
  double t3229;
  double t3233;
  double t3247;
  double t3049;
  double t3053;
  double t3274;
  double t3278;
  double t3285;
  double t3295;
  double t3303;
  double t3305;
  double t3083;
  double t3116;
  double t3317;
  double t3323;
  double t3330;
  double t3146;
  double t3149;
  double t3499;
  double t3500;
  double t3502;
  double t2416;
  double t2419;
  double t2424;
  double t3543;
  double t3547;
  double t3548;
  double t3550;
  double t2605;
  double t2611;
  double t2620;
  double t3538;
  double t3557;
  double t3532;
  double t3614;
  double t3623;
  double t3624;
  double t662;
  double t664;
  double t683;
  double t3663;
  double t3673;
  double t3681;
  double t3696;
  double t3698;
  double t3700;
  double t3556;
  double t3746;
  double t3751;
  double t3753;
  double t3763;
  double t3779;
  double t3799;
  double t3579;
  double t3612;
  double t3628;
  double t3632;
  double t3757;
  double t3822;
  double t3823;
  double t3961;
  double t3964;
  double t3969;
  double t3973;
  double t3979;
  double t3980;
  double t3846;
  double t3902;
  double t3918;
  double t4185;
  double t4188;
  double t4166;
  double t4172;
  double t4178;
  double t3493;
  double t3494;
  double t3496;
  double t3503;
  double t3504;
  double t3510;
  double t3511;
  double t3515;
  double t3519;
  double t3525;
  double t3528;
  double t3530;
  double t3531;
  double t3567;
  double t4276;
  double t4282;
  double t4285;
  double t3578;
  double t3582;
  double t4265;
  double t4269;
  double t4271;
  double t3586;
  double t3591;
  double t3610;
  double t3634;
  double t3637;
  double t3640;
  double t3646;
  double t3652;
  double t3655;
  double t3657;
  double t3692;
  double t3701;
  double t3703;
  double t3705;
  double t3711;
  double t3714;
  double t3717;
  double t3719;
  double t3722;
  double t3725;
  double t3729;
  double t3731;
  double t3732;
  double t3733;
  double t3737;
  double t3813;
  double t3815;
  double t4286;
  double t3816;
  double t4368;
  double t4371;
  double t4381;
  double t4352;
  double t4353;
  double t4354;
  double t3896;
  double t4318;
  double t3899;
  double t3920;
  double t3945;
  double t3950;
  double t3954;
  double t4383;
  double t4395;
  double t4005;
  double t4008;
  double t4455;
  double t4456;
  double t4457;
  double t4471;
  double t4476;
  double t4478;
  double t4061;
  double t4428;
  double t4435;
  double t4117;
  double t4126;
  t123 = Cos(var1[16]);
  t69 = Cos(var1[17]);
  t71 = Sin(var1[16]);
  t133 = Sin(var1[17]);
  t94 = -1.*t69*t71;
  t134 = -1.*t123*t133;
  t144 = t94 + t134;
  t33 = Cos(var1[5]);
  t183 = t123*t69;
  t219 = -1.*t71*t133;
  t223 = t183 + t219;
  t59 = Sin(var1[15]);
  t246 = Sin(var1[5]);
  t15 = Sin(var1[3]);
  t326 = Cos(var1[3]);
  t334 = Cos(var1[15]);
  t342 = Cos(var1[4]);
  t361 = Sin(var1[4]);
  t458 = t69*t71;
  t474 = t123*t133;
  t484 = t458 + t474;
  t167 = -1.*t33*t59*t144;
  t265 = t223*t246;
  t269 = t167 + t265;
  t356 = t334*t342*t144;
  t377 = t33*t223;
  t381 = t59*t144*t246;
  t383 = t377 + t381;
  t387 = -1.*t361*t383;
  t401 = t356 + t387;
  t437 = -1.*t33*t59*t223;
  t486 = t484*t246;
  t496 = t437 + t486;
  t524 = t334*t342*t223;
  t543 = t33*t484;
  t565 = t59*t223*t246;
  t583 = t543 + t565;
  t585 = -1.*t361*t583;
  t594 = t524 + t585;
  t752 = -1.*t334*t144*t361;
  t759 = -1.*t342*t383;
  t760 = t752 + t759;
  t791 = -1.*t334*t223*t361;
  t799 = -1.*t342*t583;
  t801 = t791 + t799;
  t925 = t342*t59;
  t926 = t334*t361*t246;
  t928 = t925 + t926;
  t1006 = -1.*t69;
  t1008 = 1. + t1006;
  t1010 = -0.1881*t1008;
  t1014 = -0.181814*t69;
  t1025 = -0.12226899999999999*t133;
  t1029 = t1010 + t1014 + t1025;
  t1047 = -0.213*t1008;
  t1049 = -0.335269*t69;
  t1051 = -0.006286*t133;
  t1055 = t1047 + t1049 + t1051;
  t987 = -0.1881*t71;
  t1037 = -1.*t71*t1029;
  t1059 = t123*t1055;
  t1072 = 0. + t987 + t1037 + t1059;
  t983 = 0.081307*t59;
  t1078 = t334*t1072;
  t1080 = 0. + t983 + t1078;
  t1084 = -1.*t123;
  t1085 = 1. + t1084;
  t1089 = -0.1881*t1085;
  t1104 = t123*t1029;
  t1105 = t71*t1055;
  t1119 = 0. + t1089 + t1104 + t1105;
  t1130 = t33*t1119;
  t1148 = -1.*t334;
  t1167 = 1. + t1148;
  t1173 = 0.04675*t1167;
  t1181 = 0.128057*t334;
  t1191 = -1.*t59*t1072;
  t1197 = t1173 + t1181 + t1191;
  t1203 = -1.*t1197*t246;
  t1204 = 0. + t1130 + t1203;
  t1290 = t342*t1080;
  t1298 = -1.*t361*t1204;
  t1279 = t59*t361;
  t1287 = -1.*t334*t342*t246;
  t1289 = t1279 + t1287;
  t1241 = t1080*t361;
  t1262 = t342*t1204;
  t1266 = 0. + t1241 + t1262;
  t1334 = 0. + t1290 + t1298;
  t1299 = t1290 + t1298;
  t965 = t334*t144*t361;
  t971 = t342*t383;
  t973 = t965 + t971;
  t1081 = -1.*t1080*t361;
  t1207 = -1.*t342*t1204;
  t1218 = t1081 + t1207;
  t1383 = t33*t1197;
  t1384 = t1119*t246;
  t1385 = 0. + t1383 + t1384;
  t1306 = -1.*t59*t361;
  t1317 = t334*t342*t246;
  t1328 = t1306 + t1317;
  t1543 = t334*t223*t361;
  t1546 = t342*t583;
  t1562 = t1543 + t1546;
  t1732 = t33*t59*t144;
  t1733 = -1.*t223*t246;
  t1736 = t1732 + t1733;
  t1714 = t33*t59*t223;
  t1716 = -1.*t484*t246;
  t1725 = t1714 + t1716;
  t1392 = t334*t33*t1385;
  t1935 = -1.*t33*t1197;
  t1942 = -1.*t1119*t246;
  t1944 = t1935 + t1942;
  t1886 = t1130 + t1203;
  t1480 = -1.*t1385*t269;
  t1602 = -1.*t334*t33*t1385;
  t1658 = t1385*t496;
  t1887 = t334*t33*t1886;
  t1948 = -1.*t334*t246*t1385;
  t1393 = t1289*t1266;
  t1402 = t928*t1334;
  t1403 = t1392 + t1393 + t1402;
  t1957 = -1.*t1385*t383;
  t1963 = -1.*t1886*t269;
  t1490 = -1.*t1266*t973;
  t1510 = -1.*t1334*t401;
  t1514 = t1480 + t1490 + t1510;
  t2081 = -1.*t334*t33*t1886;
  t2093 = t334*t246*t1385;
  t1603 = -1.*t1289*t1266;
  t1617 = -1.*t928*t1334;
  t1626 = t1602 + t1603 + t1617;
  t2135 = t1886*t496;
  t2144 = t1385*t583;
  t1666 = t1266*t1562;
  t1668 = t1334*t594;
  t1670 = t1658 + t1666 + t1668;
  t2409 = t983 + t1078;
  t2428 = -0.081307*t59;
  t2433 = -1.*t334*t1072;
  t2435 = t2428 + t2433;
  t2456 = 0.081307*t334;
  t2458 = t2456 + t1191;
  t2797 = -1.*t342*t59*t144;
  t2802 = -1.*t334*t144*t361*t246;
  t2805 = t2797 + t2802;
  t2831 = -1.*t342*t59*t223;
  t2832 = -1.*t334*t223*t361*t246;
  t2837 = t2831 + t2832;
  t1877 = t59*t1080;
  t1881 = -1.*t334*t246*t1204;
  t1884 = t1877 + t1881 + t1392;
  t2640 = t59*t2458;
  t2672 = -1.*t334*t2458*t144;
  t1991 = -1.*t334*t1080*t144;
  t2022 = -1.*t1204*t383;
  t2028 = t1991 + t2022 + t1480;
  t2057 = -1.*t59*t1080;
  t2058 = t334*t246*t1204;
  t2060 = t2057 + t2058 + t1602;
  t2959 = Power(t33,2);
  t2464 = -1.*t59*t2458;
  t2978 = Power(t246,2);
  t2484 = t334*t2458*t223;
  t2112 = t334*t1080*t223;
  t2123 = t1204*t583;
  t2127 = t2112 + t1658 + t2123;
  t2728 = -1.*t59*t144*t361;
  t2740 = t334*t342*t144*t246;
  t2743 = t2728 + t2740;
  t2751 = -1.*t59*t223*t361;
  t2758 = t334*t342*t223*t246;
  t2772 = t2751 + t2758;
  t2963 = t334*t2959*t2435;
  t3011 = -1.*t33*t59*t1385;
  t3229 = t334*t361;
  t3233 = t342*t59*t246;
  t3247 = t3229 + t3233;
  t3049 = t334*t33*t144*t1385;
  t3053 = -1.*t33*t2435*t269;
  t3274 = t2458*t361;
  t3278 = -1.*t342*t2435*t246;
  t3285 = t3274 + t3278;
  t3295 = t342*t2458;
  t3303 = t2435*t361*t246;
  t3305 = t3295 + t3303;
  t3083 = -1.*t334*t2959*t2435;
  t3116 = t33*t59*t1385;
  t3317 = t334*t342;
  t3323 = -1.*t59*t361*t246;
  t3330 = t3317 + t3323;
  t3146 = -1.*t334*t33*t223*t1385;
  t3149 = t33*t2435*t496;
  t3499 = -1.*t123*t69;
  t3500 = t71*t133;
  t3502 = t3499 + t3500;
  t2416 = -1.*t59*t2409;
  t2419 = -1.*t334*t1197;
  t2424 = t2416 + t2419;
  t3543 = -0.1881*t123;
  t3547 = -1.*t123*t1029;
  t3548 = -1.*t71*t1055;
  t3550 = t3543 + t3547 + t3548;
  t2605 = t59*t2409;
  t2611 = t334*t1197;
  t2620 = t2605 + t2611;
  t3538 = Power(t334,2);
  t3557 = Power(t59,2);
  t3532 = t987 + t1037 + t1059;
  t3614 = t33*t144;
  t3623 = t59*t3502*t246;
  t3624 = t3614 + t3623;
  t662 = t326*t269;
  t664 = -1.*t15*t401;
  t683 = t662 + t664;
  t3663 = -1.*t33*t59*t3502;
  t3673 = t144*t246;
  t3681 = t3663 + t3673;
  t3696 = t334*t342*t3502;
  t3698 = -1.*t361*t3624;
  t3700 = t3696 + t3698;
  t3556 = t3538*t3550*t223;
  t3746 = -1.*t33*t59*t3550;
  t3751 = t3532*t246;
  t3753 = t3746 + t3751;
  t3763 = t33*t3532;
  t3779 = t59*t3550*t246;
  t3799 = t3763 + t3779;
  t3579 = -1.*t3538*t3550*t144;
  t3612 = t334*t3502*t361;
  t3628 = t342*t3624;
  t3632 = t3612 + t3628;
  t3757 = -1.*t334*t33*t3753;
  t3822 = t3753*t496;
  t3823 = t1385*t269;
  t3961 = t334*t3550*t361;
  t3964 = t342*t3799;
  t3969 = t3961 + t3964;
  t3973 = t334*t342*t3550;
  t3979 = -1.*t361*t3799;
  t3980 = t3973 + t3979;
  t3846 = t334*t33*t3753;
  t3902 = -1.*t1385*t3681;
  t3918 = -1.*t3753*t269;
  t4185 = -0.12226899999999999*t69;
  t4188 = t4185 + t1051;
  t4166 = -0.006286*t69;
  t4172 = 0.12226899999999999*t133;
  t4178 = t4166 + t4172;
  t3493 = 0.00007976080315302984*t144;
  t3494 = 0.000029*t223;
  t3496 = -0.128057*t223;
  t3503 = -0.04675*t3502;
  t3504 = t3496 + t3503;
  t3510 = 0.019320336034999996*t3504;
  t3511 = t3493 + t3494 + t3510;
  t3515 = -0.5*var2[15]*t3511;
  t3519 = 0.000029*t334*t144;
  t3525 = -1.e-6*t334*t3502;
  t3528 = t334*t2424*t144;
  t3530 = t334*t2409*t144;
  t3531 = -1.*t59*t1197*t144;
  t3567 = t1119*t223;
  t4276 = -1.*t71*t4188;
  t4282 = t123*t4178;
  t4285 = t4276 + t4282;
  t3578 = t334*t2620*t3502;
  t3582 = -1.*t1119*t144;
  t4265 = t123*t4188;
  t4269 = t71*t4178;
  t4271 = t4265 + t4269;
  t3586 = -1.*t334*t2409*t3502;
  t3591 = t59*t1197*t3502;
  t3610 = 0.0009932822899999978*t973;
  t3634 = 0.019320336034999996*t3632;
  t3637 = t3610 + t3634;
  t3640 = -0.5*var2[0]*t3637;
  t3646 = t15*t269;
  t3652 = t326*t401;
  t3655 = t3646 + t3652;
  t3657 = 0.0009932822899999978*t3655;
  t3692 = t15*t3681;
  t3701 = t326*t3700;
  t3703 = t3692 + t3701;
  t3705 = 0.019320336034999996*t3703;
  t3711 = t3657 + t3705;
  t3714 = -0.5*var2[2]*t3711;
  t3717 = 0.0009932822899999978*t683;
  t3719 = t326*t3681;
  t3722 = -1.*t15*t3700;
  t3725 = t3719 + t3722;
  t3729 = 0.019320336034999996*t3725;
  t3731 = t3717 + t3729;
  t3732 = -0.5*var2[1]*t3731;
  t3733 = -1.e-6*t3681;
  t3737 = 0.000029*t269;
  t3813 = t269*t2060;
  t3815 = t334*t1080*t144;
  t4286 = t3538*t4285*t223;
  t3816 = t1204*t383;
  t4368 = -1.*t33*t59*t4285;
  t4371 = t4271*t246;
  t4381 = t4368 + t4371;
  t4352 = t33*t4271;
  t4353 = t59*t4285*t246;
  t4354 = t4352 + t4353;
  t3896 = t3681*t1884;
  t4318 = -1.*t3538*t4285*t144;
  t3899 = -1.*t334*t1080*t3502;
  t3920 = -1.*t1204*t3624;
  t3945 = 0.000029*t973;
  t3950 = -1.e-6*t3632;
  t3954 = t973*t1626;
  t4383 = -1.*t334*t33*t4381;
  t4395 = t4381*t496;
  t4005 = t1266*t973;
  t4008 = t1334*t401;
  t4455 = t334*t4285*t361;
  t4456 = t342*t4354;
  t4457 = t4455 + t4456;
  t4471 = t334*t342*t4285;
  t4476 = -1.*t361*t4354;
  t4478 = t4471 + t4476;
  t4061 = t3632*t1403;
  t4428 = t334*t33*t4381;
  t4435 = -1.*t4381*t269;
  t4117 = -1.*t1266*t3632;
  t4126 = -1.*t1334*t3700;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.019320336034999996*(-1.*t15*t269 - 1.*t326*t401) + 0.0009932822899999978*(-1.*t15*t496 - 1.*t326*t594))*var2[1] - 0.5*(0.0009932822899999978*(t326*t496 - 1.*t15*t594) + 0.019320336034999996*t683)*var2[2])*var2[17];
  p_output1[4]=(-0.5*(0.019320336034999996*t401 + 0.0009932822899999978*t594)*var2[0] - 0.5*(-0.019320336034999996*t15*t760 - 0.0009932822899999978*t15*t801)*var2[1] - 0.5*(0.019320336034999996*t326*t760 + 0.0009932822899999978*t326*t801)*var2[2] - 0.5*(-1.e-6*t401 + 0.000029*t594 - 0.003627*t928 + 0.019320336034999996*(t1626*t594 + t1289*(t1299*t1562 + t1218*t594 + t1266*t594 + t1334*t801) + t1670*t928 + t1562*(-1.*t1289*t1299 - 1.*t1328*t1334 - 1.*t1218*t928 - 1.*t1266*t928)) + 0.0009932822899999978*(t1403*t401 + t1514*t928 + (t1289*t1299 + t1328*t1334 + t1218*t928 + t1266*t928)*t973 + t1289*(-1.*t1218*t401 - 1.*t1266*t401 - 1.*t1334*t760 - 1.*t1299*t973)))*var2[3])*var2[17];
  p_output1[5]=(-0.5*(0.0009932822899999978*t1725*t342 + 0.019320336034999996*t1736*t342)*var2[0] - 0.5*(0.019320336034999996*(t15*t1736*t361 + t326*t383) + 0.0009932822899999978*(t15*t1725*t361 + t326*t583))*var2[1] - 0.5*(0.019320336034999996*(-1.*t1736*t326*t361 + t15*t383) + 0.0009932822899999978*(-1.*t1725*t326*t361 + t15*t583))*var2[2] - 0.5*(0.000029*t1725*t342 - 1.e-6*t1736*t342 + 0.003627*t33*t334*t342 + 0.019320336034999996*(t1626*t1725*t342 - 1.*t1670*t33*t334*t342 + t1289*(t2135 + t2144 + t1266*t1725*t342 + t1562*t1944*t342 - 1.*t1334*t1725*t361 - 1.*t1944*t361*t594) + t1562*(t2081 + t2093 - 1.*t1289*t1944*t342 + t1266*t33*t334*t342 - 1.*t1334*t33*t334*t361 + t1944*t361*t928)) + 0.0009932822899999978*(t1403*t1736*t342 - 1.*t1514*t33*t334*t342 + (t1887 + t1948 + t1289*t1944*t342 - 1.*t1266*t33*t334*t342 + t1334*t33*t334*t361 - 1.*t1944*t361*t928)*t973 + t1289*(t1957 + t1963 - 1.*t1266*t1736*t342 + t1334*t1736*t361 + t1944*t361*t401 - 1.*t1944*t342*t973)))*var2[3] - 0.5*(0.003627*t246*t334 - 1.e-6*t383 + 0.0009932822899999978*(-1.*t2028*t246*t334 + t269*(t1887 + t1948 - 1.*t1944*t246*t334 - 1.*t1204*t33*t334) + t1884*t383 + t33*t334*(-1.*t1204*t1736 + t1957 + t1963 - 1.*t1944*t383)) + 0.000029*t583 + 0.019320336034999996*(-1.*t2127*t246*t334 + (t2081 + t2093 + t1944*t246*t334 + t1204*t33*t334)*t496 + t2060*t583 + t33*t334*(t1204*t1725 + t2135 + t2144 + t1944*t583)))*var2[4])*var2[17];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.5*(0.019320336034999996*t2743 + 0.0009932822899999978*t2772)*var2[0] - 0.5*(0.019320336034999996*(-1.*t15*t2805 - 1.*t144*t326*t33*t334) + 0.0009932822899999978*(-1.*t15*t2837 - 1.*t223*t326*t33*t334))*var2[1] - 0.5*(0.019320336034999996*(t2805*t326 - 1.*t144*t15*t33*t334) + 0.0009932822899999978*(t2837*t326 - 1.*t15*t223*t33*t334))*var2[2] - 0.5*(-1.e-6*t2743 + 0.000029*t2772 - 0.003627*t3247 + 0.019320336034999996*(t1626*t2772 + t1670*t3247 + t1289*(t1266*t2772 + t1334*t2837 + t3146 + t3149 + t1562*t3285 + t3305*t594) + t1562*(t3083 + t3116 - 1.*t1266*t3247 - 1.*t1289*t3285 - 1.*t1334*t3330 - 1.*t3305*t928)) + 0.0009932822899999978*(t1403*t2743 + t1514*t3247 + (t2963 + t3011 + t1266*t3247 + t1289*t3285 + t1334*t3330 + t3305*t928)*t973 + t1289*(-1.*t1266*t2743 - 1.*t1334*t2805 + t3049 + t3053 - 1.*t3305*t401 - 1.*t3285*t973)))*var2[3] - 0.5*(1.e-6*t144*t33*t334 - 0.000029*t223*t33*t334 + 0.003627*t33*t59 + 0.019320336034999996*(-1.*t2060*t223*t33*t334 - 1.*t2127*t33*t59 + t33*t334*(t2484 + t3146 + t3149 + t1204*t223*t246*t334 - 1.*t2435*t246*t583 - 1.*t1080*t223*t59) + t496*(t2464 + t3083 + t3116 - 1.*t1080*t334 - 1.*t2435*t2978*t334 - 1.*t1204*t246*t59)) + 0.0009932822899999978*(-1.*t144*t1884*t33*t334 - 1.*t2028*t33*t59 + t33*t334*(t2672 + t3049 + t3053 - 1.*t1204*t144*t246*t334 + t2435*t246*t383 + t1080*t144*t59) + t269*(t2640 + t2963 + t3011 + t1080*t334 + t2435*t2978*t334 + t1204*t246*t59)))*var2[4] - 0.5*(-0.003627*t334 + 1.e-6*t144*t59 - 0.000029*t223*t59 + 0.0009932822899999978*(-1.*t144*t2620*t59 + t144*t334*(t2640 + t2409*t334 + t2435*t334 - 1.*t1197*t59) + t334*(-1.*t1119*t223 - 1.*t144*t2409*t334 + t1197*t144*t59) + t59*(t2672 + t1197*t144*t334 + t144*t2409*t59 + t144*t2435*t59)) + 0.019320336034999996*(-1.*t223*t2424*t59 + t223*t334*(t2464 - 1.*t2409*t334 - 1.*t2435*t334 + t1197*t59) + t334*(t223*t2409*t334 + t1119*t484 - 1.*t1197*t223*t59) + t59*(t2484 - 1.*t1197*t223*t334 - 1.*t223*t2409*t59 - 1.*t223*t2435*t59)))*var2[5])*var2[17];
  p_output1[16]=(t3515 + t3640 + t3714 + t3732 - 0.5*(t3945 + t3950 + 0.019320336034999996*(t3954 + t1289*(t3822 + t3823 + t1562*t3969 + t4005 + t4008 + t3980*t594) + t1562*(t3757 - 1.*t1289*t3969 - 1.*t3980*t928)) + 0.0009932822899999978*(t4061 + (t3846 + t1289*t3969 + t3980*t928)*t973 + t1289*(t3902 + t3918 - 1.*t3980*t401 + t4117 + t4126 - 1.*t3969*t973)))*var2[3] - 0.5*(t3733 + t3737 + 0.019320336034999996*(t3813 + t33*t334*(t3556 + t3815 + t3816 + t3822 + t3823 + t3799*t583) + t496*(t3757 + t246*t334*t3799 - 1.*t334*t3550*t59)) + 0.0009932822899999978*(t3896 + t33*t334*(t3579 - 1.*t3799*t383 + t3899 + t3902 + t3918 + t3920) + t269*(-1.*t246*t334*t3799 + t3846 + t334*t3550*t59)))*var2[4] - 0.5*(t3519 + t3525 + 0.0009932822899999978*(t3578 + (-1.*t223*t3532 - 1.*t144*t3550*t3557 + t3579 + t3582 + t3586 + t3591)*t59) + 0.019320336034999996*(t3528 + (t3530 + t3531 + t3556 + t223*t3550*t3557 + t3567 + t3532*t484)*t59))*var2[5])*var2[17];
  p_output1[17]=(t3515 + t3640 + t3714 + t3732 - 0.5*(t3945 + t3950 + 0.019320336034999996*(t3954 + t1289*(t3823 + t4005 + t4008 + t4395 + t1562*t4457 + t4478*t594) + t1562*(t4383 - 1.*t1289*t4457 - 1.*t4478*t928)) + 0.0009932822899999978*(t4061 + (t4428 + t1289*t4457 + t4478*t928)*t973 + t1289*(t3902 + t4117 + t4126 + t4435 - 1.*t401*t4478 - 1.*t4457*t973)))*var2[3] - 0.5*(t3733 + t3737 + 0.019320336034999996*(t3813 + t33*t334*(t3815 + t3816 + t3823 + t4286 + t4395 + t4354*t583) + t496*(t246*t334*t4354 + t4383 - 1.*t334*t4285*t59)) + 0.0009932822899999978*(t3896 + t33*t334*(t3899 + t3902 + t3920 + t4318 - 1.*t383*t4354 + t4435) + t269*(-1.*t246*t334*t4354 + t4428 + t334*t4285*t59)))*var2[4] - 0.5*(t3519 + t3525 + 0.0009932822899999978*(t3578 + (t3582 + t3586 + t3591 - 1.*t223*t4271 - 1.*t144*t3557*t4285 + t4318)*t59) + 0.019320336034999996*(t3528 + (t3530 + t3531 + t3567 + t223*t3557*t4285 + t4286 + t4271*t484)*t59))*var2[5] - 0.5*(0.019320336034999996*(-1.*t1055*t133 + t133*t4188 + 0.1881*t69 + t1029*t69 + t4178*t69) + 0.0009932822899999978*(0.1881*t133 + t1029*t133 + t133*t4178 + t1055*t69 - 1.*t4188*t69))*var2[16])*var2[17];
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

#include "Ce3_vec18_go1_description.hh"

namespace SymFunction
{

void Ce3_vec18_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
