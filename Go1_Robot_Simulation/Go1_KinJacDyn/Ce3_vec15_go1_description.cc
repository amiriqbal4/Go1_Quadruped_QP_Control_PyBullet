/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:29:54 GMT-05:00
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
  double t141;
  double t75;
  double t91;
  double t189;
  double t114;
  double t213;
  double t216;
  double t34;
  double t280;
  double t287;
  double t288;
  double t57;
  double t312;
  double t31;
  double t351;
  double t354;
  double t360;
  double t372;
  double t452;
  double t457;
  double t459;
  double t268;
  double t323;
  double t335;
  double t369;
  double t377;
  double t392;
  double t399;
  double t400;
  double t405;
  double t448;
  double t467;
  double t487;
  double t500;
  double t514;
  double t515;
  double t527;
  double t532;
  double t537;
  double t792;
  double t800;
  double t806;
  double t841;
  double t853;
  double t875;
  double t1009;
  double t1014;
  double t1028;
  double t1107;
  double t1141;
  double t1158;
  double t1163;
  double t1166;
  double t1184;
  double t1189;
  double t1192;
  double t1193;
  double t1196;
  double t1104;
  double t1188;
  double t1197;
  double t1206;
  double t1097;
  double t1207;
  double t1220;
  double t1240;
  double t1244;
  double t1249;
  double t1250;
  double t1266;
  double t1272;
  double t1274;
  double t1278;
  double t1297;
  double t1299;
  double t1301;
  double t1304;
  double t1309;
  double t1314;
  double t1321;
  double t1403;
  double t1405;
  double t1382;
  double t1396;
  double t1398;
  double t1367;
  double t1368;
  double t1369;
  double t1451;
  double t1409;
  double t1076;
  double t1089;
  double t1091;
  double t1226;
  double t1335;
  double t1346;
  double t1472;
  double t1479;
  double t1483;
  double t1423;
  double t1426;
  double t1438;
  double t1626;
  double t1655;
  double t1675;
  double t2058;
  double t2072;
  double t2074;
  double t2034;
  double t2051;
  double t2054;
  double t1499;
  double t2280;
  double t2295;
  double t2308;
  double t2273;
  double t1571;
  double t1747;
  double t1927;
  double t2276;
  double t2349;
  double t1511;
  double t1515;
  double t1517;
  double t2382;
  double t2390;
  double t1575;
  double t1576;
  double t1580;
  double t2474;
  double t2493;
  double t1759;
  double t1783;
  double t1790;
  double t2578;
  double t2588;
  double t1947;
  double t1968;
  double t1969;
  double t2909;
  double t2940;
  double t2946;
  double t2957;
  double t2984;
  double t2991;
  double t3316;
  double t3318;
  double t3319;
  double t3331;
  double t3335;
  double t3339;
  double t2255;
  double t2258;
  double t2259;
  double t3198;
  double t3230;
  double t2405;
  double t2420;
  double t2425;
  double t2439;
  double t2464;
  double t2466;
  double t3478;
  double t3004;
  double t3492;
  double t3150;
  double t2501;
  double t2518;
  double t2521;
  double t3277;
  double t3282;
  double t3290;
  double t3299;
  double t3302;
  double t3304;
  double t3484;
  double t3518;
  double t3733;
  double t3737;
  double t3738;
  double t3551;
  double t3562;
  double t3779;
  double t3797;
  double t3798;
  double t3808;
  double t3813;
  double t3818;
  double t3607;
  double t3644;
  double t3837;
  double t3845;
  double t3853;
  double t3669;
  double t3676;
  double t4007;
  double t4013;
  double t4020;
  double t2919;
  double t2921;
  double t2922;
  double t4092;
  double t4093;
  double t4095;
  double t4103;
  double t3170;
  double t3171;
  double t3172;
  double t4089;
  double t4115;
  double t4072;
  double t4235;
  double t4237;
  double t4246;
  double t599;
  double t615;
  double t649;
  double t4316;
  double t4323;
  double t4325;
  double t4328;
  double t4333;
  double t4338;
  double t4109;
  double t4418;
  double t4422;
  double t4426;
  double t4436;
  double t4442;
  double t4446;
  double t4141;
  double t4228;
  double t4258;
  double t4266;
  double t4434;
  double t4493;
  double t4497;
  double t4664;
  double t4668;
  double t4678;
  double t4695;
  double t4698;
  double t4707;
  double t4537;
  double t4578;
  double t4593;
  double t4906;
  double t4909;
  double t4893;
  double t4894;
  double t4895;
  double t3977;
  double t3979;
  double t4000;
  double t4029;
  double t4032;
  double t4034;
  double t4036;
  double t4044;
  double t4045;
  double t4055;
  double t4061;
  double t4062;
  double t4063;
  double t4119;
  double t4983;
  double t4992;
  double t4996;
  double t4139;
  double t4149;
  double t4965;
  double t4978;
  double t4979;
  double t4189;
  double t4190;
  double t4225;
  double t4274;
  double t4280;
  double t4285;
  double t4286;
  double t4297;
  double t4306;
  double t4311;
  double t4326;
  double t4342;
  double t4347;
  double t4349;
  double t4364;
  double t4365;
  double t4380;
  double t4381;
  double t4385;
  double t4387;
  double t4389;
  double t4394;
  double t4396;
  double t4399;
  double t4401;
  double t4463;
  double t4472;
  double t4999;
  double t4473;
  double t5129;
  double t5135;
  double t5148;
  double t5123;
  double t5126;
  double t5127;
  double t4550;
  double t5049;
  double t4570;
  double t4595;
  double t4631;
  double t4632;
  double t4643;
  double t5150;
  double t5161;
  double t4718;
  double t4721;
  double t5233;
  double t5234;
  double t5237;
  double t5244;
  double t5249;
  double t5250;
  double t4775;
  double t5191;
  double t5214;
  double t4790;
  double t4803;
  t141 = Cos(var1[13]);
  t75 = Cos(var1[14]);
  t91 = Sin(var1[13]);
  t189 = Sin(var1[14]);
  t114 = -1.*t75*t91;
  t213 = -1.*t141*t189;
  t216 = t114 + t213;
  t34 = Cos(var1[5]);
  t280 = t141*t75;
  t287 = -1.*t91*t189;
  t288 = t280 + t287;
  t57 = Sin(var1[12]);
  t312 = Sin(var1[5]);
  t31 = Sin(var1[3]);
  t351 = Cos(var1[3]);
  t354 = Cos(var1[12]);
  t360 = Cos(var1[4]);
  t372 = Sin(var1[4]);
  t452 = t75*t91;
  t457 = t141*t189;
  t459 = t452 + t457;
  t268 = -1.*t34*t57*t216;
  t323 = t288*t312;
  t335 = t268 + t323;
  t369 = t354*t360*t216;
  t377 = t34*t288;
  t392 = t57*t216*t312;
  t399 = t377 + t392;
  t400 = -1.*t372*t399;
  t405 = t369 + t400;
  t448 = -1.*t34*t57*t288;
  t467 = t459*t312;
  t487 = t448 + t467;
  t500 = t354*t360*t288;
  t514 = t34*t459;
  t515 = t57*t288*t312;
  t527 = t514 + t515;
  t532 = -1.*t372*t527;
  t537 = t500 + t532;
  t792 = -1.*t354*t216*t372;
  t800 = -1.*t360*t399;
  t806 = t792 + t800;
  t841 = -1.*t354*t288*t372;
  t853 = -1.*t360*t527;
  t875 = t841 + t853;
  t1009 = t360*t57;
  t1014 = t354*t372*t312;
  t1028 = t1009 + t1014;
  t1107 = -1.*t75;
  t1141 = 1. + t1107;
  t1158 = -0.1881*t1141;
  t1163 = -0.181814*t75;
  t1166 = -0.12226899999999999*t189;
  t1184 = t1158 + t1163 + t1166;
  t1189 = -0.213*t1141;
  t1192 = -0.335269*t75;
  t1193 = -0.006286*t189;
  t1196 = t1189 + t1192 + t1193;
  t1104 = -0.1881*t91;
  t1188 = -1.*t91*t1184;
  t1197 = t141*t1196;
  t1206 = 0. + t1104 + t1188 + t1197;
  t1097 = -0.078693*t57;
  t1207 = t354*t1206;
  t1220 = 0. + t1097 + t1207;
  t1240 = -1.*t141;
  t1244 = 1. + t1240;
  t1249 = -0.1881*t1244;
  t1250 = t141*t1184;
  t1266 = t91*t1196;
  t1272 = 0. + t1249 + t1250 + t1266;
  t1274 = t34*t1272;
  t1278 = -1.*t354;
  t1297 = 1. + t1278;
  t1299 = -0.04675*t1297;
  t1301 = -0.125443*t354;
  t1304 = -1.*t57*t1206;
  t1309 = t1299 + t1301 + t1304;
  t1314 = -1.*t1309*t312;
  t1321 = 0. + t1274 + t1314;
  t1403 = t360*t1220;
  t1405 = -1.*t372*t1321;
  t1382 = t57*t372;
  t1396 = -1.*t354*t360*t312;
  t1398 = t1382 + t1396;
  t1367 = t1220*t372;
  t1368 = t360*t1321;
  t1369 = 0. + t1367 + t1368;
  t1451 = 0. + t1403 + t1405;
  t1409 = t1403 + t1405;
  t1076 = t354*t216*t372;
  t1089 = t360*t399;
  t1091 = t1076 + t1089;
  t1226 = -1.*t1220*t372;
  t1335 = -1.*t360*t1321;
  t1346 = t1226 + t1335;
  t1472 = t34*t1309;
  t1479 = t1272*t312;
  t1483 = 0. + t1472 + t1479;
  t1423 = -1.*t57*t372;
  t1426 = t354*t360*t312;
  t1438 = t1423 + t1426;
  t1626 = t354*t288*t372;
  t1655 = t360*t527;
  t1675 = t1626 + t1655;
  t2058 = t34*t57*t216;
  t2072 = -1.*t288*t312;
  t2074 = t2058 + t2072;
  t2034 = t34*t57*t288;
  t2051 = -1.*t459*t312;
  t2054 = t2034 + t2051;
  t1499 = t354*t34*t1483;
  t2280 = -1.*t34*t1309;
  t2295 = -1.*t1272*t312;
  t2308 = t2280 + t2295;
  t2273 = t1274 + t1314;
  t1571 = -1.*t1483*t335;
  t1747 = -1.*t354*t34*t1483;
  t1927 = t1483*t487;
  t2276 = t354*t34*t2273;
  t2349 = -1.*t354*t312*t1483;
  t1511 = t1398*t1369;
  t1515 = t1028*t1451;
  t1517 = t1499 + t1511 + t1515;
  t2382 = -1.*t1483*t399;
  t2390 = -1.*t2273*t335;
  t1575 = -1.*t1369*t1091;
  t1576 = -1.*t1451*t405;
  t1580 = t1571 + t1575 + t1576;
  t2474 = -1.*t354*t34*t2273;
  t2493 = t354*t312*t1483;
  t1759 = -1.*t1398*t1369;
  t1783 = -1.*t1028*t1451;
  t1790 = t1747 + t1759 + t1783;
  t2578 = t2273*t487;
  t2588 = t1483*t527;
  t1947 = t1369*t1675;
  t1968 = t1451*t537;
  t1969 = t1927 + t1947 + t1968;
  t2909 = t1097 + t1207;
  t2940 = 0.078693*t57;
  t2946 = -1.*t354*t1206;
  t2957 = t2940 + t2946;
  t2984 = -0.078693*t354;
  t2991 = t2984 + t1304;
  t3316 = -1.*t360*t57*t216;
  t3318 = -1.*t354*t216*t372*t312;
  t3319 = t3316 + t3318;
  t3331 = -1.*t360*t57*t288;
  t3335 = -1.*t354*t288*t372*t312;
  t3339 = t3331 + t3335;
  t2255 = t57*t1220;
  t2258 = -1.*t354*t312*t1321;
  t2259 = t2255 + t2258 + t1499;
  t3198 = t57*t2991;
  t3230 = -1.*t354*t2991*t216;
  t2405 = -1.*t354*t1220*t216;
  t2420 = -1.*t1321*t399;
  t2425 = t2405 + t2420 + t1571;
  t2439 = -1.*t57*t1220;
  t2464 = t354*t312*t1321;
  t2466 = t2439 + t2464 + t1747;
  t3478 = Power(t34,2);
  t3004 = -1.*t57*t2991;
  t3492 = Power(t312,2);
  t3150 = t354*t2991*t288;
  t2501 = t354*t1220*t288;
  t2518 = t1321*t527;
  t2521 = t2501 + t1927 + t2518;
  t3277 = -1.*t57*t216*t372;
  t3282 = t354*t360*t216*t312;
  t3290 = t3277 + t3282;
  t3299 = -1.*t57*t288*t372;
  t3302 = t354*t360*t288*t312;
  t3304 = t3299 + t3302;
  t3484 = t354*t3478*t2957;
  t3518 = -1.*t34*t57*t1483;
  t3733 = t354*t372;
  t3737 = t360*t57*t312;
  t3738 = t3733 + t3737;
  t3551 = t354*t34*t216*t1483;
  t3562 = -1.*t34*t2957*t335;
  t3779 = t2991*t372;
  t3797 = -1.*t360*t2957*t312;
  t3798 = t3779 + t3797;
  t3808 = t360*t2991;
  t3813 = t2957*t372*t312;
  t3818 = t3808 + t3813;
  t3607 = -1.*t354*t3478*t2957;
  t3644 = t34*t57*t1483;
  t3837 = t354*t360;
  t3845 = -1.*t57*t372*t312;
  t3853 = t3837 + t3845;
  t3669 = -1.*t354*t34*t288*t1483;
  t3676 = t34*t2957*t487;
  t4007 = -1.*t141*t75;
  t4013 = t91*t189;
  t4020 = t4007 + t4013;
  t2919 = -1.*t57*t2909;
  t2921 = -1.*t354*t1309;
  t2922 = t2919 + t2921;
  t4092 = -0.1881*t141;
  t4093 = -1.*t141*t1184;
  t4095 = -1.*t91*t1196;
  t4103 = t4092 + t4093 + t4095;
  t3170 = t57*t2909;
  t3171 = t354*t1309;
  t3172 = t3170 + t3171;
  t4089 = Power(t354,2);
  t4115 = Power(t57,2);
  t4072 = t1104 + t1188 + t1197;
  t4235 = t34*t216;
  t4237 = t57*t4020*t312;
  t4246 = t4235 + t4237;
  t599 = t351*t335;
  t615 = -1.*t31*t405;
  t649 = t599 + t615;
  t4316 = -1.*t34*t57*t4020;
  t4323 = t216*t312;
  t4325 = t4316 + t4323;
  t4328 = t354*t360*t4020;
  t4333 = -1.*t372*t4246;
  t4338 = t4328 + t4333;
  t4109 = t4089*t4103*t288;
  t4418 = -1.*t34*t57*t4103;
  t4422 = t4072*t312;
  t4426 = t4418 + t4422;
  t4436 = t34*t4072;
  t4442 = t57*t4103*t312;
  t4446 = t4436 + t4442;
  t4141 = -1.*t4089*t4103*t216;
  t4228 = t354*t4020*t372;
  t4258 = t360*t4246;
  t4266 = t4228 + t4258;
  t4434 = -1.*t354*t34*t4426;
  t4493 = t4426*t487;
  t4497 = t1483*t335;
  t4664 = t354*t4103*t372;
  t4668 = t360*t4446;
  t4678 = t4664 + t4668;
  t4695 = t354*t360*t4103;
  t4698 = -1.*t372*t4446;
  t4707 = t4695 + t4698;
  t4537 = t354*t34*t4426;
  t4578 = -1.*t1483*t4325;
  t4593 = -1.*t4426*t335;
  t4906 = -0.12226899999999999*t75;
  t4909 = t4906 + t1193;
  t4893 = -0.006286*t75;
  t4894 = 0.12226899999999999*t189;
  t4895 = t4893 + t4894;
  t3977 = -0.00007916436324696982*t216;
  t3979 = 0.000029*t288;
  t4000 = 0.125443*t288;
  t4029 = 0.04675*t4020;
  t4032 = t4000 + t4029;
  t4034 = 0.019320336034999996*t4032;
  t4036 = t3977 + t3979 + t4034;
  t4044 = -0.5*var2[12]*t4036;
  t4045 = 0.000029*t354*t216;
  t4055 = -1.e-6*t354*t4020;
  t4061 = t354*t2922*t216;
  t4062 = t354*t2909*t216;
  t4063 = -1.*t57*t1309*t216;
  t4119 = t1272*t288;
  t4983 = -1.*t91*t4909;
  t4992 = t141*t4895;
  t4996 = t4983 + t4992;
  t4139 = t354*t3172*t4020;
  t4149 = -1.*t1272*t216;
  t4965 = t141*t4909;
  t4978 = t91*t4895;
  t4979 = t4965 + t4978;
  t4189 = -1.*t354*t2909*t4020;
  t4190 = t57*t1309*t4020;
  t4225 = 0.0009932822899999978*t1091;
  t4274 = 0.019320336034999996*t4266;
  t4280 = t4225 + t4274;
  t4285 = -0.5*var2[0]*t4280;
  t4286 = t31*t335;
  t4297 = t351*t405;
  t4306 = t4286 + t4297;
  t4311 = 0.0009932822899999978*t4306;
  t4326 = t31*t4325;
  t4342 = t351*t4338;
  t4347 = t4326 + t4342;
  t4349 = 0.019320336034999996*t4347;
  t4364 = t4311 + t4349;
  t4365 = -0.5*var2[2]*t4364;
  t4380 = 0.0009932822899999978*t649;
  t4381 = t351*t4325;
  t4385 = -1.*t31*t4338;
  t4387 = t4381 + t4385;
  t4389 = 0.019320336034999996*t4387;
  t4394 = t4380 + t4389;
  t4396 = -0.5*var2[1]*t4394;
  t4399 = -1.e-6*t4325;
  t4401 = 0.000029*t335;
  t4463 = t335*t2466;
  t4472 = t354*t1220*t216;
  t4999 = t4089*t4996*t288;
  t4473 = t1321*t399;
  t5129 = -1.*t34*t57*t4996;
  t5135 = t4979*t312;
  t5148 = t5129 + t5135;
  t5123 = t34*t4979;
  t5126 = t57*t4996*t312;
  t5127 = t5123 + t5126;
  t4550 = t4325*t2259;
  t5049 = -1.*t4089*t4996*t216;
  t4570 = -1.*t354*t1220*t4020;
  t4595 = -1.*t1321*t4246;
  t4631 = 0.000029*t1091;
  t4632 = -1.e-6*t4266;
  t4643 = t1091*t1790;
  t5150 = -1.*t354*t34*t5148;
  t5161 = t5148*t487;
  t4718 = t1369*t1091;
  t4721 = t1451*t405;
  t5233 = t354*t4996*t372;
  t5234 = t360*t5127;
  t5237 = t5233 + t5234;
  t5244 = t354*t360*t4996;
  t5249 = -1.*t372*t5127;
  t5250 = t5244 + t5249;
  t4775 = t4266*t1517;
  t5191 = t354*t34*t5148;
  t5214 = -1.*t5148*t335;
  t4790 = -1.*t1369*t4266;
  t4803 = -1.*t1451*t4338;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(0.019320336034999996*(-1.*t31*t335 - 1.*t351*t405) + 0.0009932822899999978*(-1.*t31*t487 - 1.*t351*t537))*var2[1] - 0.5*(0.0009932822899999978*(t351*t487 - 1.*t31*t537) + 0.019320336034999996*t649)*var2[2])*var2[14];
  p_output1[4]=(-0.5*(0.019320336034999996*t405 + 0.0009932822899999978*t537)*var2[0] - 0.5*(-0.019320336034999996*t31*t806 - 0.0009932822899999978*t31*t875)*var2[1] - 0.5*(0.019320336034999996*t351*t806 + 0.0009932822899999978*t351*t875)*var2[2] - 0.5*(-0.003627*t1028 - 1.e-6*t405 + 0.000029*t537 + 0.0009932822899999978*(t1091*(t1028*t1346 + t1028*t1369 + t1398*t1409 + t1438*t1451) + t1028*t1580 + t1517*t405 + t1398*(-1.*t1091*t1409 - 1.*t1346*t405 - 1.*t1369*t405 - 1.*t1451*t806)) + 0.019320336034999996*((-1.*t1028*t1346 - 1.*t1028*t1369 - 1.*t1398*t1409 - 1.*t1438*t1451)*t1675 + t1028*t1969 + t1790*t537 + t1398*(t1409*t1675 + t1346*t537 + t1369*t537 + t1451*t875)))*var2[3])*var2[14];
  p_output1[5]=(-0.5*(0.0009932822899999978*t2054*t360 + 0.019320336034999996*t2074*t360)*var2[0] - 0.5*(0.019320336034999996*(t2074*t31*t372 + t351*t399) + 0.0009932822899999978*(t2054*t31*t372 + t351*t527))*var2[1] - 0.5*(0.019320336034999996*(-1.*t2074*t351*t372 + t31*t399) + 0.0009932822899999978*(-1.*t2054*t351*t372 + t31*t527))*var2[2] - 0.5*(0.000029*t2054*t360 - 1.e-6*t2074*t360 + 0.003627*t34*t354*t360 + 0.0009932822899999978*(t1517*t2074*t360 - 1.*t1580*t34*t354*t360 + t1091*(t2276 + t2349 + t1398*t2308*t360 - 1.*t1369*t34*t354*t360 - 1.*t1028*t2308*t372 + t1451*t34*t354*t372) + t1398*(t2382 + t2390 - 1.*t1369*t2074*t360 - 1.*t1091*t2308*t360 + t1451*t2074*t372 + t2308*t372*t405)) + 0.019320336034999996*(t1790*t2054*t360 - 1.*t1969*t34*t354*t360 + t1675*(t2474 + t2493 - 1.*t1398*t2308*t360 + t1369*t34*t354*t360 + t1028*t2308*t372 - 1.*t1451*t34*t354*t372) + t1398*(t2578 + t2588 + t1369*t2054*t360 + t1675*t2308*t360 - 1.*t1451*t2054*t372 - 1.*t2308*t372*t537)))*var2[3] - 0.5*(0.003627*t312*t354 - 1.e-6*t399 + 0.0009932822899999978*(-1.*t2425*t312*t354 + t335*(t2276 + t2349 - 1.*t2308*t312*t354 - 1.*t1321*t34*t354) + t2259*t399 + t34*t354*(-1.*t1321*t2074 + t2382 + t2390 - 1.*t2308*t399)) + 0.000029*t527 + 0.019320336034999996*(-1.*t2521*t312*t354 + (t2474 + t2493 + t2308*t312*t354 + t1321*t34*t354)*t487 + t2466*t527 + t34*t354*(t1321*t2054 + t2578 + t2588 + t2308*t527)))*var2[4])*var2[14];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.5*(0.019320336034999996*t3290 + 0.0009932822899999978*t3304)*var2[0] - 0.5*(0.019320336034999996*(-1.*t31*t3319 - 1.*t216*t34*t351*t354) + 0.0009932822899999978*(-1.*t31*t3339 - 1.*t288*t34*t351*t354))*var2[1] - 0.5*(0.019320336034999996*(t3319*t351 - 1.*t216*t31*t34*t354) + 0.0009932822899999978*(t3339*t351 - 1.*t288*t31*t34*t354))*var2[2] - 0.5*(-1.e-6*t3290 + 0.000029*t3304 - 0.003627*t3738 + 0.0009932822899999978*(t1517*t3290 + t1580*t3738 + t1091*(t3484 + t3518 + t1369*t3738 + t1398*t3798 + t1028*t3818 + t1451*t3853) + t1398*(-1.*t1369*t3290 - 1.*t1451*t3319 + t3551 + t3562 - 1.*t1091*t3798 - 1.*t3818*t405)) + 0.019320336034999996*(t1790*t3304 + t1969*t3738 + t1675*(t3607 + t3644 - 1.*t1369*t3738 - 1.*t1398*t3798 - 1.*t1028*t3818 - 1.*t1451*t3853) + t1398*(t1369*t3304 + t1451*t3339 + t3669 + t3676 + t1675*t3798 + t3818*t537)))*var2[3] - 0.5*(1.e-6*t216*t34*t354 - 0.000029*t288*t34*t354 + 0.003627*t34*t57 + 0.019320336034999996*(-1.*t2466*t288*t34*t354 - 1.*t2521*t34*t57 + t34*t354*(t3150 + t1321*t288*t312*t354 + t3669 + t3676 - 1.*t2957*t312*t527 - 1.*t1220*t288*t57) + t487*(t3004 - 1.*t1220*t354 - 1.*t2957*t3492*t354 + t3607 + t3644 - 1.*t1321*t312*t57)) + 0.0009932822899999978*(-1.*t216*t2259*t34*t354 - 1.*t2425*t34*t57 + t34*t354*(t3230 - 1.*t1321*t216*t312*t354 + t3551 + t3562 + t2957*t312*t399 + t1220*t216*t57) + t335*(t3198 + t3484 + t3518 + t1220*t354 + t2957*t3492*t354 + t1321*t312*t57)))*var2[4] - 0.5*(-0.003627*t354 + 1.e-6*t216*t57 - 0.000029*t288*t57 + 0.0009932822899999978*(-1.*t216*t3172*t57 + t216*t354*(t3198 + t2909*t354 + t2957*t354 - 1.*t1309*t57) + t354*(-1.*t1272*t288 - 1.*t216*t2909*t354 + t1309*t216*t57) + t57*(t3230 + t1309*t216*t354 + t216*t2909*t57 + t216*t2957*t57)) + 0.019320336034999996*(-1.*t288*t2922*t57 + t288*t354*(t3004 - 1.*t2909*t354 - 1.*t2957*t354 + t1309*t57) + t354*(t288*t2909*t354 + t1272*t459 - 1.*t1309*t288*t57) + t57*(t3150 - 1.*t1309*t288*t354 - 1.*t288*t2909*t57 - 1.*t288*t2957*t57)))*var2[5])*var2[14];
  p_output1[13]=(t4044 + t4285 + t4365 + t4396 - 0.5*(t4631 + t4632 + 0.0009932822899999978*(t1091*(t4537 + t1398*t4678 + t1028*t4707) + t4775 + t1398*(t4578 + t4593 - 1.*t1091*t4678 - 1.*t405*t4707 + t4790 + t4803)) + 0.019320336034999996*(t4643 + t1675*(t4434 - 1.*t1398*t4678 - 1.*t1028*t4707) + t1398*(t4493 + t4497 + t1675*t4678 + t4718 + t4721 + t4707*t537)))*var2[3] - 0.5*(t4399 + t4401 + 0.019320336034999996*(t4463 + t34*t354*(t4109 + t4472 + t4473 + t4493 + t4497 + t4446*t527) + t487*(t4434 + t312*t354*t4446 - 1.*t354*t4103*t57)) + 0.0009932822899999978*(t4550 + t34*t354*(t4141 - 1.*t399*t4446 + t4570 + t4578 + t4593 + t4595) + t335*(-1.*t312*t354*t4446 + t4537 + t354*t4103*t57)))*var2[4] - 0.5*(t4045 + t4055 + 0.0009932822899999978*(t4139 + (-1.*t288*t4072 - 1.*t216*t4103*t4115 + t4141 + t4149 + t4189 + t4190)*t57) + 0.019320336034999996*(t4061 + (t4062 + t4063 + t4109 + t288*t4103*t4115 + t4119 + t4072*t459)*t57))*var2[5])*var2[14];
  p_output1[14]=(t4044 + t4285 + t4365 + t4396 - 0.5*(t4631 + t4632 + 0.0009932822899999978*(t4775 + t1091*(t5191 + t1398*t5237 + t1028*t5250) + t1398*(t4578 + t4790 + t4803 + t5214 - 1.*t1091*t5237 - 1.*t405*t5250)) + 0.019320336034999996*(t4643 + t1675*(t5150 - 1.*t1398*t5237 - 1.*t1028*t5250) + t1398*(t4497 + t4718 + t4721 + t5161 + t1675*t5237 + t5250*t537)))*var2[3] - 0.5*(t4399 + t4401 + 0.019320336034999996*(t4463 + t34*t354*(t4472 + t4473 + t4497 + t4999 + t5161 + t5127*t527) + t487*(t312*t354*t5127 + t5150 - 1.*t354*t4996*t57)) + 0.0009932822899999978*(t4550 + t34*t354*(t4570 + t4578 + t4595 + t5049 - 1.*t399*t5127 + t5214) + t335*(-1.*t312*t354*t5127 + t5191 + t354*t4996*t57)))*var2[4] - 0.5*(t4045 + t4055 + 0.019320336034999996*(t4061 + (t4062 + t4063 + t4119 + t459*t4979 + t288*t4115*t4996 + t4999)*t57) + 0.0009932822899999978*(t4139 + (t4149 + t4189 + t4190 - 1.*t288*t4979 - 1.*t216*t4115*t4996 + t5049)*t57))*var2[5] - 0.5*(0.019320336034999996*(-1.*t1196*t189 + t189*t4909 + 0.1881*t75 + t1184*t75 + t4895*t75) + 0.0009932822899999978*(0.1881*t189 + t1184*t189 + t189*t4895 + t1196*t75 - 1.*t4909*t75))*var2[13])*var2[14];
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

#include "Ce3_vec15_go1_description.hh"

namespace SymFunction
{

void Ce3_vec15_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
