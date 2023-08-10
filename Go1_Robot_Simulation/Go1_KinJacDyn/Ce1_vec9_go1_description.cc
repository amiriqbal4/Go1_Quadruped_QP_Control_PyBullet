/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:27:09 GMT-05:00
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
  double t350;
  double t236;
  double t275;
  double t367;
  double t107;
  double t445;
  double t126;
  double t163;
  double t449;
  double t461;
  double t482;
  double t309;
  double t386;
  double t421;
  double t628;
  double t636;
  double t525;
  double t559;
  double t567;
  double t771;
  double t783;
  double t784;
  double t939;
  double t941;
  double t945;
  double t908;
  double t915;
  double t916;
  double t921;
  double t951;
  double t976;
  double t983;
  double t987;
  double t992;
  double t1005;
  double t1017;
  double t1020;
  double t1070;
  double t1095;
  double t438;
  double t488;
  double t521;
  double t571;
  double t577;
  double t591;
  double t830;
  double t832;
  double t833;
  double t761;
  double t794;
  double t800;
  double t824;
  double t836;
  double t850;
  double t1429;
  double t1444;
  double t1449;
  double t1544;
  double t1546;
  double t1547;
  double t1552;
  double t1569;
  double t1571;
  double t1574;
  double t1583;
  double t1586;
  double t1597;
  double t1608;
  double t1614;
  double t1619;
  double t1623;
  double t1626;
  double t1105;
  double t1109;
  double t1111;
  double t1172;
  double t1176;
  double t1178;
  double t1355;
  double t1361;
  double t1365;
  double t1382;
  double t1391;
  double t1392;
  double t1470;
  double t1487;
  double t1493;
  double t1888;
  double t1902;
  double t1905;
  double t1908;
  double t1909;
  double t1914;
  double t1916;
  double t1918;
  double t1925;
  double t1945;
  double t1946;
  double t1947;
  double t1970;
  double t1971;
  double t1966;
  double t1976;
  double t1980;
  double t1981;
  double t1994;
  double t2001;
  double t2006;
  double t2007;
  double t2031;
  double t2032;
  double t2035;
  double t2039;
  double t1965;
  double t2050;
  double t2053;
  double t2058;
  double t2061;
  double t2064;
  double t2077;
  double t2085;
  double t2086;
  double t2091;
  double t2099;
  double t2100;
  double t2101;
  double t2104;
  double t2107;
  double t2110;
  double t2116;
  double t2117;
  double t2161;
  double t2162;
  double t2146;
  double t2152;
  double t2154;
  double t2133;
  double t2134;
  double t2138;
  double t2183;
  double t2164;
  double t2055;
  double t2118;
  double t2127;
  double t2197;
  double t2198;
  double t2202;
  double t2170;
  double t2171;
  double t2174;
  double t2271;
  double t2286;
  double t2303;
  double t630;
  double t640;
  double t644;
  double t673;
  double t716;
  double t722;
  double t2194;
  double t2195;
  double t2206;
  double t2208;
  double t2411;
  double t2415;
  double t2420;
  double t2502;
  double t2510;
  double t2398;
  double t2399;
  double t2400;
  double t2558;
  double t2560;
  double t2563;
  double t2483;
  double t2516;
  double t2527;
  double t2229;
  double t2233;
  double t2236;
  double t2240;
  double t2308;
  double t2309;
  double t2311;
  double t2313;
  double t2571;
  double t2572;
  double t2573;
  double t2587;
  double t2342;
  double t2347;
  double t2366;
  double t2372;
  double t2859;
  double t2866;
  double t2867;
  double t2850;
  double t3146;
  double t3147;
  double t3163;
  double t3165;
  double t3144;
  double t3145;
  double t3173;
  double t3175;
  double t3243;
  double t3249;
  double t3251;
  double t3204;
  double t3205;
  double t3207;
  double t3194;
  double t3198;
  double t3199;
  double t3131;
  double t3138;
  double t3143;
  double t3409;
  double t3418;
  double t3456;
  double t3458;
  double t3460;
  double t3432;
  double t3464;
  double t3468;
  double t3478;
  double t3479;
  double t3480;
  double t3481;
  double t3482;
  double t3487;
  double t3273;
  double t3526;
  double t3530;
  double t3531;
  double t3281;
  double t3282;
  double t3507;
  double t3508;
  double t3509;
  double t3489;
  double t3490;
  double t3491;
  double t3321;
  double t3327;
  double t3337;
  double t3340;
  double t2592;
  double t2595;
  double t2604;
  double t2631;
  double t2752;
  double t3684;
  double t2755;
  double t2761;
  double t2764;
  double t3674;
  double t3679;
  double t3680;
  double t2852;
  double t2875;
  double t2904;
  double t2921;
  double t3746;
  double t3748;
  double t3759;
  double t2996;
  double t3018;
  double t3766;
  double t3769;
  double t3770;
  double t3827;
  double t3830;
  double t3834;
  double t3053;
  double t3084;
  double t3254;
  double t3277;
  double t3315;
  double t4026;
  double t3323;
  double t3996;
  double t4000;
  double t4001;
  double t3536;
  double t4019;
  double t4030;
  double t3556;
  double t3586;
  double t4053;
  double t4060;
  double t3594;
  double t4071;
  double t4195;
  double t3782;
  double t3810;
  double t3699;
  double t3729;
  double t4196;
  double t4200;
  double t4201;
  double t4027;
  double t4289;
  double t4297;
  double t4315;
  double t4055;
  double t4407;
  double t4397;
  double t4399;
  double t4400;
  double t4401;
  double t4404;
  double t4417;
  double t4138;
  double t4447;
  double t4453;
  double t4168;
  double t4461;
  double t4463;
  double t4532;
  double t4535;
  double t4539;
  double t4543;
  double t4547;
  double t4548;
  double t4558;
  t350 = Cos(var1[7]);
  t236 = Cos(var1[8]);
  t275 = Sin(var1[7]);
  t367 = Sin(var1[8]);
  t107 = Cos(var1[4]);
  t445 = Sin(var1[5]);
  t126 = Cos(var1[5]);
  t163 = Sin(var1[6]);
  t449 = t350*t236;
  t461 = -1.*t275*t367;
  t482 = t449 + t461;
  t309 = -1.*t236*t275;
  t386 = -1.*t350*t367;
  t421 = t309 + t386;
  t628 = Cos(var1[6]);
  t636 = Sin(var1[4]);
  t525 = t236*t275;
  t559 = t350*t367;
  t567 = t525 + t559;
  t771 = t445*t163*t421;
  t783 = t126*t482;
  t784 = t771 + t783;
  t939 = -1.*t350*t236;
  t941 = t275*t367;
  t945 = t939 + t941;
  t908 = t628*t636*t421;
  t915 = t107*t784;
  t916 = t908 + t915;
  t921 = -0.0009932822900000022*t916;
  t951 = t628*t636*t945;
  t976 = t126*t421;
  t983 = t445*t163*t945;
  t987 = t976 + t983;
  t992 = t107*t987;
  t1005 = t951 + t992;
  t1017 = -0.019320336034999996*t1005;
  t1020 = t921 + t1017;
  t1070 = Cos(var1[3]);
  t1095 = Sin(var1[3]);
  t438 = t126*t163*t421;
  t488 = -1.*t445*t482;
  t521 = t438 + t488;
  t571 = -1.*t445*t567;
  t577 = t126*t163*t482;
  t591 = t571 + t577;
  t830 = t126*t567;
  t832 = t445*t163*t482;
  t833 = t830 + t832;
  t761 = t107*t628*t421;
  t794 = -1.*t636*t784;
  t800 = t761 + t794;
  t824 = t107*t628*t482;
  t836 = -1.*t636*t833;
  t850 = t824 + t836;
  t1429 = -1.*t126*t163*t421;
  t1444 = t445*t482;
  t1449 = t1429 + t1444;
  t1544 = t1070*t1449;
  t1546 = -1.*t1095*t800;
  t1547 = t1544 + t1546;
  t1552 = -0.0009932822900000022*t1547;
  t1569 = t445*t421;
  t1571 = -1.*t126*t163*t945;
  t1574 = t1569 + t1571;
  t1583 = t1070*t1574;
  t1586 = t107*t628*t945;
  t1597 = -1.*t636*t987;
  t1608 = t1586 + t1597;
  t1614 = -1.*t1095*t1608;
  t1619 = t1583 + t1614;
  t1623 = -0.019320336034999996*t1619;
  t1626 = t1552 + t1623;
  t1105 = -1.*t628*t636*t445*t421;
  t1109 = -1.*t107*t163*t421;
  t1111 = t1105 + t1109;
  t1172 = -1.*t628*t636*t445*t482;
  t1176 = -1.*t107*t163*t482;
  t1178 = t1172 + t1176;
  t1355 = -1.*t628*t636*t421;
  t1361 = -1.*t107*t784;
  t1365 = t1355 + t1361;
  t1382 = -1.*t628*t636*t482;
  t1391 = -1.*t107*t833;
  t1392 = t1382 + t1391;
  t1470 = t445*t567;
  t1487 = -1.*t126*t163*t482;
  t1493 = t1470 + t1487;
  t1888 = t1095*t1449;
  t1902 = t1070*t800;
  t1905 = t1888 + t1902;
  t1908 = -0.0009932822900000022*t1905;
  t1909 = t1095*t1574;
  t1914 = t1070*t1608;
  t1916 = t1909 + t1914;
  t1918 = -0.019320336034999996*t1916;
  t1925 = t1908 + t1918;
  t1945 = t628*t636*t445;
  t1946 = t107*t163;
  t1947 = t1945 + t1946;
  t1970 = -1.*t236;
  t1971 = 1. + t1970;
  t1966 = 0.1881*t275;
  t1976 = 0.1881*t1971;
  t1980 = 0.194386*t236;
  t1981 = -0.12226899999999999*t367;
  t1994 = t1976 + t1980 + t1981;
  t2001 = -1.*t275*t1994;
  t2006 = -0.213*t1971;
  t2007 = -0.335269*t236;
  t2031 = -0.006286*t367;
  t2032 = t2006 + t2007 + t2031;
  t2035 = t350*t2032;
  t2039 = 0. + t1966 + t2001 + t2035;
  t1965 = -0.078693*t163;
  t2050 = t628*t2039;
  t2053 = 0. + t1965 + t2050;
  t2058 = -1.*t628;
  t2061 = 1. + t2058;
  t2064 = -0.04675*t2061;
  t2077 = -0.125443*t628;
  t2085 = -1.*t163*t2039;
  t2086 = t2064 + t2077 + t2085;
  t2091 = -1.*t445*t2086;
  t2099 = -1.*t350;
  t2100 = 1. + t2099;
  t2101 = 0.1881*t2100;
  t2104 = t350*t1994;
  t2107 = t275*t2032;
  t2110 = 0. + t2101 + t2104 + t2107;
  t2116 = t126*t2110;
  t2117 = 0. + t2091 + t2116;
  t2161 = t107*t2053;
  t2162 = -1.*t636*t2117;
  t2146 = -1.*t107*t628*t445;
  t2152 = t636*t163;
  t2154 = t2146 + t2152;
  t2133 = t636*t2053;
  t2134 = t107*t2117;
  t2138 = 0. + t2133 + t2134;
  t2183 = 0. + t2161 + t2162;
  t2164 = t2161 + t2162;
  t2055 = -1.*t636*t2053;
  t2118 = -1.*t107*t2117;
  t2127 = t2055 + t2118;
  t2197 = t126*t2086;
  t2198 = t445*t2110;
  t2202 = 0. + t2197 + t2198;
  t2170 = t107*t628*t445;
  t2171 = -1.*t636*t163;
  t2174 = t2170 + t2171;
  t2271 = t628*t636*t482;
  t2286 = t107*t833;
  t2303 = t2271 + t2286;
  t630 = t107*t628*t445*t421;
  t640 = -1.*t636*t163*t421;
  t644 = t630 + t640;
  t673 = t107*t628*t445*t482;
  t716 = -1.*t636*t163*t482;
  t722 = t673 + t716;
  t2194 = t2154*t2138;
  t2195 = t1947*t2183;
  t2206 = t126*t628*t2202;
  t2208 = t2194 + t2195 + t2206;
  t2411 = 0.078693*t163;
  t2415 = -1.*t628*t2039;
  t2420 = t2411 + t2415;
  t2502 = -0.078693*t628;
  t2510 = t2502 + t2085;
  t2398 = t628*t636;
  t2399 = t107*t445*t163;
  t2400 = t2398 + t2399;
  t2558 = -1.*t107*t445*t2420;
  t2560 = t636*t2510;
  t2563 = t2558 + t2560;
  t2483 = t636*t445*t2420;
  t2516 = t107*t2510;
  t2527 = t2483 + t2516;
  t2229 = -1.*t2202*t1449;
  t2233 = -1.*t2138*t916;
  t2236 = -1.*t2183*t800;
  t2240 = t2229 + t2233 + t2236;
  t2308 = -1.*t2154*t2138;
  t2309 = -1.*t1947*t2183;
  t2311 = -1.*t126*t628*t2202;
  t2313 = t2308 + t2309 + t2311;
  t2571 = t107*t628;
  t2572 = -1.*t636*t445*t163;
  t2573 = t2571 + t2572;
  t2587 = Power(t126,2);
  t2342 = t2202*t1493;
  t2347 = t2138*t2303;
  t2366 = t2183*t850;
  t2372 = t2342 + t2347 + t2366;
  t2859 = -1.*t126*t2086;
  t2866 = -1.*t445*t2110;
  t2867 = t2859 + t2866;
  t2850 = t2091 + t2116;
  t3146 = 0.1881*t350;
  t3147 = -1.*t350*t1994;
  t3163 = -1.*t275*t2032;
  t3165 = t3146 + t3147 + t3163;
  t3144 = t1966 + t2001 + t2035;
  t3145 = t126*t3144;
  t3173 = t445*t163*t3165;
  t3175 = t3145 + t3173;
  t3243 = t445*t3144;
  t3249 = -1.*t126*t163*t3165;
  t3251 = t3243 + t3249;
  t3204 = t107*t3175;
  t3205 = t628*t636*t3165;
  t3207 = t3204 + t3205;
  t3194 = -1.*t636*t3175;
  t3198 = t107*t628*t3165;
  t3199 = t3194 + t3198;
  t3131 = -0.000029*t916;
  t3138 = 1.e-6*t1005;
  t3143 = t2313*t916;
  t3409 = -0.12226899999999999*t236;
  t3418 = t3409 + t2031;
  t3456 = -0.006286*t236;
  t3458 = 0.12226899999999999*t367;
  t3460 = t3456 + t3458;
  t3432 = -1.*t275*t3418;
  t3464 = t350*t3460;
  t3468 = t3432 + t3464;
  t3478 = t445*t163*t3468;
  t3479 = t350*t3418;
  t3480 = t275*t3460;
  t3481 = t3479 + t3480;
  t3482 = t126*t3481;
  t3487 = t3478 + t3482;
  t3273 = t2202*t1449;
  t3526 = -1.*t126*t163*t3468;
  t3530 = t445*t3481;
  t3531 = t3526 + t3530;
  t3281 = t2138*t916;
  t3282 = t2183*t800;
  t3507 = t107*t3487;
  t3508 = t628*t636*t3468;
  t3509 = t3507 + t3508;
  t3489 = -1.*t636*t3487;
  t3490 = t107*t628*t3468;
  t3491 = t3489 + t3490;
  t3321 = t2208*t1005;
  t3327 = -1.*t2202*t1574;
  t3337 = -1.*t2138*t1005;
  t3340 = -1.*t2183*t1608;
  t2592 = t2587*t628*t2420;
  t2595 = -1.*t126*t163*t2202;
  t2604 = t126*t628*t2202*t421;
  t2631 = -1.*t126*t2420*t1449;
  t2752 = -1.*t2587*t628*t2420;
  t3684 = Power(t445,2);
  t2755 = t126*t163*t2202;
  t2761 = -1.*t126*t628*t2202*t482;
  t2764 = t126*t2420*t1493;
  t3674 = t163*t2053;
  t3679 = -1.*t628*t445*t2117;
  t3680 = t3674 + t3679 + t2206;
  t2852 = t126*t628*t2850;
  t2875 = -1.*t628*t445*t2202;
  t2904 = -1.*t2202*t784;
  t2921 = -1.*t2850*t1449;
  t3746 = -1.*t628*t2053*t421;
  t3748 = -1.*t2117*t784;
  t3759 = t3746 + t3748 + t2229;
  t2996 = -1.*t126*t628*t2850;
  t3018 = t628*t445*t2202;
  t3766 = -1.*t163*t2053;
  t3769 = t628*t445*t2117;
  t3770 = t3766 + t3769 + t2311;
  t3827 = t628*t2053*t482;
  t3830 = t2117*t833;
  t3834 = t3827 + t2342 + t3830;
  t3053 = t2850*t1493;
  t3084 = t2202*t833;
  t3254 = -1.*t126*t628*t3251;
  t3277 = t3251*t1493;
  t3315 = t126*t628*t3251;
  t4026 = Power(t628,2);
  t3323 = -1.*t3251*t1449;
  t3996 = -0.000029*t1449;
  t4000 = 1.e-6*t1574;
  t4001 = t3770*t1449;
  t3536 = -1.*t126*t628*t3531;
  t4019 = t628*t2053*t421;
  t4030 = t2117*t784;
  t3556 = t3531*t1493;
  t3586 = t126*t628*t3531;
  t4053 = t3680*t1574;
  t4060 = -1.*t628*t2053*t945;
  t3594 = -1.*t3531*t1449;
  t4071 = -1.*t2117*t987;
  t4195 = t1965 + t2050;
  t3782 = -1.*t163*t2510;
  t3810 = t628*t2510*t482;
  t3699 = t163*t2510;
  t3729 = -1.*t628*t2510*t421;
  t4196 = -1.*t163*t4195;
  t4200 = -1.*t628*t2086;
  t4201 = t4196 + t4200;
  t4027 = t4026*t3165*t482;
  t4289 = t163*t4195;
  t4297 = t628*t2086;
  t4315 = t4289 + t4297;
  t4055 = -1.*t4026*t3165*t421;
  t4407 = Power(t163,2);
  t4397 = -0.000029*t628*t421;
  t4399 = 1.e-6*t628*t945;
  t4400 = t628*t4201*t421;
  t4401 = t628*t4195*t421;
  t4404 = -1.*t163*t2086*t421;
  t4417 = t2110*t482;
  t4138 = t4026*t3468*t482;
  t4447 = t628*t4315*t945;
  t4453 = -1.*t2110*t421;
  t4168 = -1.*t4026*t3468*t421;
  t4461 = -1.*t628*t4195*t945;
  t4463 = t163*t2086*t945;
  t4532 = 0.00007916436324697017*t421;
  t4535 = -0.000029*t482;
  t4539 = 0.125443*t482;
  t4543 = 0.04675*t945;
  t4547 = t4539 + t4543;
  t4548 = -0.019320336034999996*t4547;
  t4558 = t4532 + t4535 + t4548;
  p_output1[0]=var2[8]*(-0.5*(-0.019320336034999996*t800 - 0.0009932822900000022*t850)*var2[4] - 0.5*(-0.019320336034999996*t107*t521 - 0.0009932822900000022*t107*t591)*var2[5] - 0.5*(-0.019320336034999996*t644 - 0.0009932822900000022*t722)*var2[6] - 0.5*t1020*var2[7] - 0.5*t1020*var2[8]);
  p_output1[1]=var2[8]*(-0.5*(-0.019320336034999996*(-1.*t1095*t1449 - 1.*t1070*t800) - 0.0009932822900000022*(-1.*t1095*t1493 - 1.*t1070*t850))*var2[3] - 0.5*(0.019320336034999996*t1095*t1365 + 0.0009932822900000022*t1095*t1392)*var2[4] - 0.5*(-0.019320336034999996*(t1095*t521*t636 + t1070*t784) - 0.0009932822900000022*(t1095*t591*t636 + t1070*t833))*var2[5] - 0.5*(-0.019320336034999996*(-1.*t1095*t1111 - 1.*t1070*t126*t421*t628) - 0.0009932822900000022*(-1.*t1095*t1178 - 1.*t1070*t126*t482*t628))*var2[6] - 0.5*t1626*var2[7] - 0.5*t1626*var2[8]);
  p_output1[2]=var2[8]*(-0.5*(-0.019320336034999996*t1547 - 0.0009932822900000022*(t1070*t1493 - 1.*t1095*t850))*var2[3] - 0.5*(-0.019320336034999996*t1070*t1365 - 0.0009932822900000022*t1070*t1392)*var2[4] - 0.5*(-0.019320336034999996*(-1.*t1070*t521*t636 + t1095*t784) - 0.0009932822900000022*(-1.*t1070*t591*t636 + t1095*t833))*var2[5] - 0.5*(-0.019320336034999996*(t1070*t1111 - 1.*t1095*t126*t421*t628) - 0.0009932822900000022*(t1070*t1178 - 1.*t1095*t126*t482*t628))*var2[6] - 0.5*t1925*var2[7] - 0.5*t1925*var2[8]);
  p_output1[3]=var2[8]*(-0.5*(0.003627*t1947 + 1.e-6*t800 - 0.000029*t850 - 0.019320336034999996*((-1.*t1947*t2127 - 1.*t1947*t2138 - 1.*t2154*t2164 - 1.*t2174*t2183)*t2303 + t1947*t2372 + t2313*t850 + t2154*(t1392*t2183 + t2164*t2303 + t2127*t850 + t2138*t850)) - 0.0009932822900000022*(t1947*t2240 + t2208*t800 + (t1947*t2127 + t1947*t2138 + t2154*t2164 + t2174*t2183)*t916 + t2154*(-1.*t1365*t2183 - 1.*t2127*t800 - 1.*t2138*t800 - 1.*t2164*t916)))*var2[4] - 0.5*(1.e-6*t107*t521 - 0.000029*t107*t591 - 0.003627*t107*t126*t628 - 0.019320336034999996*(t107*t2313*t591 - 1.*t107*t126*t2372*t628 + t2303*(-1.*t107*t2154*t2867 + t2996 + t3018 + t107*t126*t2138*t628 + t1947*t2867*t636 - 1.*t126*t2183*t628*t636) + t2154*(t107*t2303*t2867 + t3053 + t3084 + t107*t2138*t591 - 1.*t2183*t591*t636 - 1.*t2867*t636*t850)) - 0.0009932822900000022*(t107*t2208*t521 - 1.*t107*t126*t2240*t628 + (t2852 + t107*t2154*t2867 + t2875 - 1.*t107*t126*t2138*t628 - 1.*t1947*t2867*t636 + t126*t2183*t628*t636)*t916 + t2154*(t2904 + t2921 - 1.*t107*t2138*t521 + t2183*t521*t636 + t2867*t636*t800 - 1.*t107*t2867*t916)))*var2[5] - 0.5*(0.003627*t2400 + 1.e-6*t644 - 0.000029*t722 - 0.019320336034999996*(t2372*t2400 + t2303*(-1.*t2138*t2400 - 1.*t1947*t2527 - 1.*t2154*t2563 - 1.*t2183*t2573 + t2752 + t2755) + t2313*t722 + t2154*(t1178*t2183 + t2303*t2563 + t2761 + t2764 + t2138*t722 + t2527*t850)) - 0.0009932822900000022*(t2240*t2400 + t2208*t644 + (t2138*t2400 + t1947*t2527 + t2154*t2563 + t2183*t2573 + t2592 + t2595)*t916 + t2154*(-1.*t1111*t2183 + t2604 + t2631 - 1.*t2138*t644 - 1.*t2527*t800 - 1.*t2563*t916)))*var2[6] - 0.5*(t3131 + t3138 - 0.019320336034999996*(t3143 + t2303*(-1.*t1947*t3199 - 1.*t2154*t3207 + t3254) + t2154*(t2303*t3207 + t3273 + t3277 + t3281 + t3282 + t3199*t850)) - 0.0009932822900000022*(t3321 + (t1947*t3199 + t2154*t3207 + t3315)*t916 + t2154*(t3323 + t3327 + t3337 + t3340 - 1.*t3199*t800 - 1.*t3207*t916)))*var2[7] - 0.5*(t3131 + t3138 - 0.019320336034999996*(t3143 + t2303*(-1.*t1947*t3491 - 1.*t2154*t3509 + t3536) + t2154*(t3273 + t3281 + t3282 + t2303*t3509 + t3556 + t3491*t850)) - 0.0009932822900000022*(t3321 + (t1947*t3491 + t2154*t3509 + t3586)*t916 + t2154*(t3327 + t3337 + t3340 + t3594 - 1.*t3491*t800 - 1.*t3509*t916)))*var2[8]);
  p_output1[4]=var2[8]*(-0.5*(-0.003627*t445*t628 + 1.e-6*t784 - 0.0009932822900000022*(-1.*t3759*t445*t628 + t1449*(t2852 + t2875 - 1.*t126*t2117*t628 - 1.*t2867*t445*t628) + t3680*t784 + t126*t628*(t2904 + t2921 - 1.*t2117*t521 - 1.*t2867*t784)) - 0.000029*t833 - 0.019320336034999996*(-1.*t3834*t445*t628 + t1493*(t2996 + t3018 + t126*t2117*t628 + t2867*t445*t628) + t3770*t833 + t126*t628*(t3053 + t3084 + t2117*t591 + t2867*t833)))*var2[5] - 0.5*(-0.003627*t126*t163 - 1.e-6*t126*t421*t628 + 0.000029*t126*t482*t628 - 0.0009932822900000022*(-1.*t126*t163*t3759 - 1.*t126*t3680*t421*t628 + t1449*(t2592 + t2595 + t3699 + t163*t2117*t445 + t2053*t628 + t2420*t3684*t628) + t126*t628*(t2604 + t2631 + t3729 + t163*t2053*t421 - 1.*t2117*t421*t445*t628 + t2420*t445*t784)) - 0.019320336034999996*(-1.*t126*t163*t3834 - 1.*t126*t3770*t482*t628 + t1493*(t2752 + t2755 + t3782 - 1.*t163*t2117*t445 - 1.*t2053*t628 - 1.*t2420*t3684*t628) + t126*t628*(t2761 + t2764 + t3810 - 1.*t163*t2053*t482 + t2117*t445*t482*t628 - 1.*t2420*t445*t833)))*var2[6] - 0.5*(t3996 + t4000 - 0.0009932822900000022*(t4053 + t1449*(t3315 + t163*t3165*t628 - 1.*t3175*t445*t628) + t126*t628*(t3323 + t3327 + t4055 + t4060 + t4071 - 1.*t3175*t784)) - 0.019320336034999996*(t4001 + t1493*(t3254 - 1.*t163*t3165*t628 + t3175*t445*t628) + t126*t628*(t3273 + t3277 + t4019 + t4027 + t4030 + t3175*t833)))*var2[7] - 0.5*(t3996 + t4000 - 0.0009932822900000022*(t4053 + t1449*(t3586 + t163*t3468*t628 - 1.*t3487*t445*t628) + t126*t628*(t3327 + t3594 + t4060 + t4071 + t4168 - 1.*t3487*t784)) - 0.019320336034999996*(t4001 + t1493*(t3536 - 1.*t163*t3468*t628 + t3487*t445*t628) + t126*t628*(t3273 + t3556 + t4019 + t4030 + t4138 + t3487*t833)))*var2[8]);
  p_output1[5]=var2[8]*(-0.5*(-1.e-6*t163*t421 + 0.000029*t163*t482 + 0.003627*t628 - 0.0009932822900000022*(-1.*t163*t421*t4315 + t421*t628*(-1.*t163*t2086 + t3699 + t2420*t628 + t4195*t628) + t163*(t3729 + t163*t2420*t421 + t163*t4195*t421 + t2086*t421*t628) + t628*(t163*t2086*t421 - 1.*t2110*t482 - 1.*t4195*t421*t628)) - 0.019320336034999996*(-1.*t163*t4201*t482 + t482*t628*(t163*t2086 + t3782 - 1.*t2420*t628 - 1.*t4195*t628) + t163*(t3810 - 1.*t163*t2420*t482 - 1.*t163*t4195*t482 - 1.*t2086*t482*t628) + t628*(-1.*t163*t2086*t482 + t2110*t567 + t4195*t482*t628)))*var2[6] - 0.5*(t4397 + t4399 - 0.0009932822900000022*(t4447 + t163*(t4055 - 1.*t3165*t421*t4407 + t4453 + t4461 + t4463 - 1.*t3144*t482)) - 0.019320336034999996*(t4400 + t163*(t4027 + t4401 + t4404 + t4417 + t3165*t4407*t482 + t3144*t567)))*var2[7] - 0.5*(t4397 + t4399 - 0.0009932822900000022*(t4447 + t163*(t4168 - 1.*t3468*t421*t4407 + t4453 + t4461 + t4463 - 1.*t3481*t482)) - 0.019320336034999996*(t4400 + t163*(t4138 + t4401 + t4404 + t4417 + t3468*t4407*t482 + t3481*t567)))*var2[8]);
  p_output1[6]=var2[8]*(-0.5*t4558*var2[7] - 0.5*t4558*var2[8]);
  p_output1[7]=-0.5*(-0.019320336034999996*(-0.1881*t236 + t1994*t236 + t236*t3460 - 1.*t2032*t367 + t3418*t367) - 0.0009932822900000022*(t2032*t236 - 1.*t236*t3418 - 0.1881*t367 + t1994*t367 + t3460*t367))*Power(var2[8],2);
  p_output1[8]=0;
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

#include "Ce1_vec9_go1_description.hh"

namespace SymFunction
{

void Ce1_vec9_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
