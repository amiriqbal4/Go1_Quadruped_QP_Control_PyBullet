/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:29:40 GMT-05:00
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
  double t163;
  double t175;
  double t197;
  double t182;
  double t250;
  double t145;
  double t390;
  double t395;
  double t398;
  double t460;
  double t845;
  double t919;
  double t870;
  double t888;
  double t1002;
  double t1036;
  double t1039;
  double t1044;
  double t1057;
  double t1063;
  double t968;
  double t972;
  double t987;
  double t991;
  double t909;
  double t918;
  double t936;
  double t939;
  double t1294;
  double t1297;
  double t1307;
  double t192;
  double t311;
  double t325;
  double t414;
  double t478;
  double t480;
  double t501;
  double t504;
  double t505;
  double t556;
  double t559;
  double t576;
  double t606;
  double t607;
  double t651;
  double t675;
  double t706;
  double t716;
  double t947;
  double t948;
  double t998;
  double t1000;
  double t1041;
  double t1065;
  double t1068;
  double t1099;
  double t1101;
  double t1112;
  double t1116;
  double t1118;
  double t1143;
  double t1187;
  double t1202;
  double t1215;
  double t1219;
  double t1281;
  double t1309;
  double t1310;
  double t1324;
  double t1326;
  double t1327;
  double t1330;
  double t1353;
  double t1354;
  double t1671;
  double t1683;
  double t1707;
  double t1718;
  double t1724;
  double t1742;
  double t1774;
  double t1793;
  double t1816;
  double t1819;
  double t1822;
  double t1842;
  double t2008;
  double t2026;
  double t2030;
  double t2103;
  double t2105;
  double t2118;
  double t2102;
  double t2119;
  double t2121;
  double t2145;
  double t2151;
  double t2153;
  double t2154;
  double t2156;
  double t2168;
  double t2169;
  double t2173;
  double t2177;
  double t2181;
  double t2188;
  double t2190;
  double t2191;
  double t2197;
  double t2199;
  double t2295;
  double t2346;
  double t2347;
  double t2264;
  double t2265;
  double t2266;
  double t2214;
  double t2222;
  double t2228;
  double t2132;
  double t2201;
  double t2205;
  double t2080;
  double t2098;
  double t2100;
  double t2397;
  double t2405;
  double t2415;
  double t2356;
  double t2359;
  double t2360;
  double t2557;
  double t2570;
  double t2574;
  double t2796;
  double t2797;
  double t2799;
  double t2804;
  double t2795;
  double t2806;
  double t2807;
  double t2815;
  double t2817;
  double t2818;
  double t2819;
  double t2820;
  double t2825;
  double t2830;
  double t2833;
  double t2836;
  double t2840;
  double t2861;
  double t2899;
  double t2907;
  double t2878;
  double t2881;
  double t2885;
  double t2932;
  double t2920;
  double t2785;
  double t2791;
  double t2794;
  double t2810;
  double t2862;
  double t2866;
  double t2960;
  double t2961;
  double t2972;
  double t3194;
  double t3206;
  double t3208;
  double t3428;
  double t3432;
  double t3434;
  double t3408;
  double t3410;
  double t3412;
  double t3481;
  double t3482;
  double t3491;
  double t3458;
  double t3461;
  double t3466;
  double t2444;
  double t3854;
  double t3861;
  double t3866;
  double t2491;
  double t2651;
  double t2756;
  double t3020;
  double t4125;
  double t4127;
  double t4128;
  double t4090;
  double t3128;
  double t3223;
  double t3323;
  double t3885;
  double t3900;
  double t3907;
  double t2447;
  double t2451;
  double t2462;
  double t2495;
  double t2498;
  double t2499;
  double t3978;
  double t2653;
  double t2660;
  double t2696;
  double t4025;
  double t4033;
  double t2764;
  double t2766;
  double t2767;
  double t4100;
  double t4140;
  double t3035;
  double t3040;
  double t3062;
  double t4158;
  double t4164;
  double t3132;
  double t3151;
  double t3154;
  double t4227;
  double t4255;
  double t3228;
  double t3251;
  double t3257;
  double t4300;
  double t4324;
  double t3325;
  double t3331;
  double t3343;
  double t3941;
  double t4834;
  double t4849;
  double t4857;
  double t4876;
  double t4887;
  double t4002;
  double t3833;
  double t3923;
  double t5082;
  double t5092;
  double t5100;
  double t5102;
  double t5115;
  double t5118;
  double t5447;
  double t5449;
  double t5456;
  double t5492;
  double t5496;
  double t5510;
  double t5557;
  double t5564;
  double t5577;
  double t5600;
  double t5605;
  double t5614;
  double t3836;
  double t3839;
  double t5021;
  double t5026;
  double t5004;
  double t5006;
  double t3924;
  double t3928;
  double t3943;
  double t3944;
  double t5746;
  double t4870;
  double t4891;
  double t5756;
  double t4936;
  double t4948;
  double t4004;
  double t4009;
  double t4077;
  double t4078;
  double t4088;
  double t5194;
  double t5242;
  double t4181;
  double t4186;
  double t4195;
  double t4204;
  double t4212;
  double t4214;
  double t5119;
  double t5134;
  double t4280;
  double t4287;
  double t4296;
  double t5337;
  double t5338;
  double t5348;
  double t5405;
  double t5407;
  double t5410;
  double t5812;
  double t5818;
  double t5752;
  double t6182;
  double t6184;
  double t6186;
  double t5791;
  double t6201;
  double t6204;
  double t6206;
  double t6132;
  double t6137;
  double t6138;
  double t5355;
  double t5362;
  double t5377;
  double t5848;
  double t5883;
  double t6261;
  double t6262;
  double t6265;
  double t5899;
  double t5905;
  double t5383;
  double t5390;
  double t5392;
  double t5967;
  double t5980;
  double t6026;
  double t6033;
  double t6378;
  double t6387;
  double t6388;
  double t6396;
  double t6399;
  double t6401;
  double t6072;
  double t6090;
  double t6101;
  double t6103;
  double t4977;
  double t4984;
  double t6551;
  double t6559;
  double t6561;
  double t4802;
  double t4811;
  double t5048;
  double t5050;
  double t6545;
  double t6565;
  double t6510;
  double t6511;
  double t6512;
  double t5084;
  double t5086;
  double t5088;
  double t6660;
  double t6661;
  double t6668;
  double t6669;
  double t5181;
  double t5182;
  double t5183;
  double t6655;
  double t6753;
  double t6756;
  double t6759;
  double t6782;
  double t6787;
  double t6791;
  double t6838;
  double t6852;
  double t6858;
  double t1490;
  double t1493;
  double t1496;
  double t1523;
  double t1535;
  double t1545;
  double t6924;
  double t6927;
  double t6930;
  double t6946;
  double t6948;
  double t6952;
  double t6562;
  double t6568;
  double t7085;
  double t7086;
  double t7087;
  double t7069;
  double t7073;
  double t7075;
  double t6615;
  double t6672;
  double t7196;
  double t7204;
  double t7205;
  double t7207;
  double t7211;
  double t7215;
  double t6713;
  double t7077;
  double t7098;
  double t7102;
  double t7368;
  double t7372;
  double t7380;
  double t7390;
  double t7392;
  double t7394;
  double t6760;
  double t6761;
  double t7137;
  double t7168;
  double t7169;
  double t7206;
  double t7253;
  double t7258;
  double t7447;
  double t7451;
  double t7461;
  double t7463;
  double t7470;
  double t7473;
  double t6779;
  double t6792;
  double t6803;
  double t7290;
  double t7303;
  double t7306;
  double t7565;
  double t7566;
  double t7549;
  double t7554;
  double t7556;
  double t7546;
  double t7547;
  double t7562;
  double t7564;
  double t7572;
  double t7579;
  double t7588;
  double t7590;
  double t7591;
  double t6502;
  double t6504;
  double t6507;
  double t6508;
  double t6515;
  double t6517;
  double t6520;
  double t6634;
  double t6635;
  double t5151;
  double t5154;
  double t5155;
  double t5165;
  double t5275;
  double t5276;
  double t5284;
  double t5297;
  double t6638;
  double t6646;
  double t6651;
  double t6688;
  double t7681;
  double t7682;
  double t7683;
  double t6704;
  double t6720;
  double t7676;
  double t7677;
  double t7679;
  double t6729;
  double t6733;
  double t6775;
  double t6810;
  double t6889;
  double t6901;
  double t6913;
  double t6914;
  double t6943;
  double t6963;
  double t6964;
  double t6967;
  double t7006;
  double t1552;
  double t1566;
  double t1621;
  double t7008;
  double t7013;
  double t7014;
  double t7015;
  double t7036;
  double t7037;
  double t7039;
  double t7040;
  double t7048;
  double t7242;
  double t7247;
  double t7690;
  double t7250;
  double t7800;
  double t7801;
  double t7802;
  double t7785;
  double t7792;
  double t7794;
  double t7298;
  double t7703;
  double t7302;
  double t7307;
  double t7346;
  double t7356;
  double t7357;
  double t7358;
  double t7361;
  double t7446;
  double t7806;
  double t7813;
  double t7481;
  double t7482;
  double t7871;
  double t7872;
  double t7873;
  double t7876;
  double t7879;
  double t7880;
  double t7503;
  double t7834;
  double t7843;
  double t7522;
  double t7524;
  t163 = Cos(var1[10]);
  t175 = Cos(var1[5]);
  t197 = Sin(var1[10]);
  t182 = Sin(var1[9]);
  t250 = Sin(var1[5]);
  t145 = Sin(var1[3]);
  t390 = Cos(var1[3]);
  t395 = Cos(var1[9]);
  t398 = Cos(var1[4]);
  t460 = Sin(var1[4]);
  t845 = Cos(var1[11]);
  t919 = Sin(var1[11]);
  t870 = -1.*t845;
  t888 = 1. + t870;
  t1002 = -1.*t845*t197;
  t1036 = -1.*t163*t919;
  t1039 = t1002 + t1036;
  t1044 = t163*t845;
  t1057 = -1.*t197*t919;
  t1063 = t1044 + t1057;
  t968 = 0.1881*t888;
  t972 = 0.194386*t845;
  t987 = -0.12226899999999999*t919;
  t991 = t968 + t972 + t987;
  t909 = -0.213*t888;
  t918 = -0.335269*t845;
  t936 = -0.006286*t919;
  t939 = t909 + t918 + t936;
  t1294 = t845*t197;
  t1297 = t163*t919;
  t1307 = t1294 + t1297;
  t192 = -1.*t163*t175*t182;
  t311 = t197*t250;
  t325 = t192 + t311;
  t414 = t395*t163*t398;
  t478 = t175*t197;
  t480 = t163*t182*t250;
  t501 = t478 + t480;
  t504 = -1.*t460*t501;
  t505 = t414 + t504;
  t556 = t175*t182*t197;
  t559 = t163*t250;
  t576 = t556 + t559;
  t606 = -1.*t395*t398*t197;
  t607 = t163*t175;
  t651 = -1.*t182*t197*t250;
  t675 = t607 + t651;
  t706 = -1.*t460*t675;
  t716 = t606 + t706;
  t947 = t845*t939;
  t948 = -0.1881*t919;
  t998 = t991*t919;
  t1000 = 0. + t947 + t948 + t998;
  t1041 = -1.*t175*t182*t1039;
  t1065 = t1063*t250;
  t1068 = t1041 + t1065;
  t1099 = t395*t398*t1039;
  t1101 = t175*t1063;
  t1112 = t182*t1039*t250;
  t1116 = t1101 + t1112;
  t1118 = -1.*t460*t1116;
  t1143 = t1099 + t1118;
  t1187 = 0.1881*t845;
  t1202 = -1.*t845*t991;
  t1215 = t939*t919;
  t1219 = 0. + t1187 + t1202 + t1215;
  t1281 = -1.*t175*t182*t1063;
  t1309 = t1307*t250;
  t1310 = t1281 + t1309;
  t1324 = t395*t398*t1063;
  t1326 = t175*t1307;
  t1327 = t182*t1063*t250;
  t1330 = t1326 + t1327;
  t1353 = -1.*t460*t1330;
  t1354 = t1324 + t1353;
  t1671 = -1.*t395*t163*t460;
  t1683 = -1.*t398*t501;
  t1707 = t1671 + t1683;
  t1718 = t395*t197*t460;
  t1724 = -1.*t398*t675;
  t1742 = t1718 + t1724;
  t1774 = -1.*t395*t1039*t460;
  t1793 = -1.*t398*t1116;
  t1816 = t1774 + t1793;
  t1819 = -1.*t395*t1063*t460;
  t1822 = -1.*t398*t1330;
  t1842 = t1819 + t1822;
  t2008 = t398*t182;
  t2026 = t395*t460*t250;
  t2030 = t2008 + t2026;
  t2103 = -0.032736*t163;
  t2105 = 0.003468*t197;
  t2118 = t2103 + t2105;
  t2102 = 0.061053*t182;
  t2119 = t395*t2118;
  t2121 = t2102 + t2119;
  t2145 = -1.*t163;
  t2151 = 1. + t2145;
  t2153 = 0.1881*t2151;
  t2154 = 0.184632*t163;
  t2156 = -0.032736*t197;
  t2168 = t2153 + t2154 + t2156;
  t2169 = t175*t2168;
  t2173 = -1.*t395;
  t2177 = 1. + t2173;
  t2181 = 0.04675*t2177;
  t2188 = 0.107803*t395;
  t2190 = -1.*t182*t2118;
  t2191 = t2181 + t2188 + t2190;
  t2197 = -1.*t2191*t250;
  t2199 = t2169 + t2197;
  t2295 = t398*t2121;
  t2346 = -1.*t460*t2199;
  t2347 = t2295 + t2346;
  t2264 = t182*t460;
  t2265 = -1.*t395*t398*t250;
  t2266 = t2264 + t2265;
  t2214 = t2121*t460;
  t2222 = t398*t2199;
  t2228 = t2214 + t2222;
  t2132 = -1.*t2121*t460;
  t2201 = -1.*t398*t2199;
  t2205 = t2132 + t2201;
  t2080 = t395*t163*t460;
  t2098 = t398*t501;
  t2100 = t2080 + t2098;
  t2397 = t175*t2191;
  t2405 = t2168*t250;
  t2415 = t2397 + t2405;
  t2356 = -1.*t182*t460;
  t2359 = t395*t398*t250;
  t2360 = t2356 + t2359;
  t2557 = -1.*t395*t197*t460;
  t2570 = t398*t675;
  t2574 = t2557 + t2570;
  t2796 = 0.1881*t197;
  t2797 = -1.*t197*t991;
  t2799 = t163*t939;
  t2804 = 0. + t2796 + t2797 + t2799;
  t2795 = 0.081307*t182;
  t2806 = t395*t2804;
  t2807 = 0. + t2795 + t2806;
  t2815 = 0.1881*t2151;
  t2817 = t163*t991;
  t2818 = t197*t939;
  t2819 = 0. + t2815 + t2817 + t2818;
  t2820 = t175*t2819;
  t2825 = 0.04675*t2177;
  t2830 = 0.128057*t395;
  t2833 = -1.*t182*t2804;
  t2836 = t2825 + t2830 + t2833;
  t2840 = -1.*t2836*t250;
  t2861 = 0. + t2820 + t2840;
  t2899 = t398*t2807;
  t2907 = -1.*t460*t2861;
  t2878 = t2807*t460;
  t2881 = t398*t2861;
  t2885 = 0. + t2878 + t2881;
  t2932 = 0. + t2899 + t2907;
  t2920 = t2899 + t2907;
  t2785 = t395*t1039*t460;
  t2791 = t398*t1116;
  t2794 = t2785 + t2791;
  t2810 = -1.*t2807*t460;
  t2862 = -1.*t398*t2861;
  t2866 = t2810 + t2862;
  t2960 = t175*t2836;
  t2961 = t2819*t250;
  t2972 = 0. + t2960 + t2961;
  t3194 = t395*t1063*t460;
  t3206 = t398*t1330;
  t3208 = t3194 + t3206;
  t3428 = t163*t175*t182;
  t3432 = -1.*t197*t250;
  t3434 = t3428 + t3432;
  t3408 = -1.*t175*t182*t197;
  t3410 = -1.*t163*t250;
  t3412 = t3408 + t3410;
  t3481 = t175*t182*t1039;
  t3482 = -1.*t1063*t250;
  t3491 = t3481 + t3482;
  t3458 = t175*t182*t1063;
  t3461 = -1.*t1307*t250;
  t3466 = t3458 + t3461;
  t2444 = -1.*t395*t175*t2415;
  t3854 = -1.*t175*t2191;
  t3861 = -1.*t2168*t250;
  t3866 = t3854 + t3861;
  t2491 = t2415*t325;
  t2651 = t395*t175*t2415;
  t2756 = -1.*t576*t2415;
  t3020 = t395*t175*t2972;
  t4125 = -1.*t175*t2836;
  t4127 = -1.*t2819*t250;
  t4128 = t4125 + t4127;
  t4090 = t2820 + t2840;
  t3128 = -1.*t2972*t1068;
  t3223 = -1.*t395*t175*t2972;
  t3323 = t2972*t1310;
  t3885 = t395*t250*t2415;
  t3900 = t501*t2415;
  t3907 = t2199*t325;
  t2447 = -1.*t2266*t2228;
  t2451 = -1.*t2030*t2347;
  t2462 = t2444 + t2447 + t2451;
  t2495 = t2100*t2228;
  t2498 = t505*t2347;
  t2499 = t2491 + t2495 + t2498;
  t3978 = -1.*t395*t250*t2415;
  t2653 = t2266*t2228;
  t2660 = t2030*t2347;
  t2696 = t2651 + t2653 + t2660;
  t4025 = -1.*t576*t2199;
  t4033 = -1.*t2415*t675;
  t2764 = -1.*t2228*t2574;
  t2766 = -1.*t2347*t716;
  t2767 = t2756 + t2764 + t2766;
  t4100 = t395*t175*t4090;
  t4140 = -1.*t395*t250*t2972;
  t3035 = t2266*t2885;
  t3040 = t2030*t2932;
  t3062 = t3020 + t3035 + t3040;
  t4158 = -1.*t2972*t1116;
  t4164 = -1.*t4090*t1068;
  t3132 = -1.*t2885*t2794;
  t3151 = -1.*t2932*t1143;
  t3154 = t3128 + t3132 + t3151;
  t4227 = -1.*t395*t175*t4090;
  t4255 = t395*t250*t2972;
  t3228 = -1.*t2266*t2885;
  t3251 = -1.*t2030*t2932;
  t3257 = t3223 + t3228 + t3251;
  t4300 = t4090*t1310;
  t4324 = t2972*t1330;
  t3325 = t2885*t3208;
  t3331 = t2932*t1354;
  t3343 = t3323 + t3325 + t3331;
  t3941 = t182*t2121;
  t4834 = -0.061053*t182;
  t4849 = -1.*t395*t2118;
  t4857 = t4834 + t4849;
  t4876 = 0.061053*t395;
  t4887 = t4876 + t2190;
  t4002 = t395*t2121*t197;
  t3833 = -1.*t182*t2121;
  t3923 = t395*t163*t2121;
  t5082 = t2795 + t2806;
  t5092 = -0.081307*t182;
  t5100 = -1.*t395*t2804;
  t5102 = t5092 + t5100;
  t5115 = 0.081307*t395;
  t5118 = t5115 + t2833;
  t5447 = -1.*t163*t398*t182;
  t5449 = -1.*t395*t163*t460*t250;
  t5456 = t5447 + t5449;
  t5492 = t398*t182*t197;
  t5496 = t395*t197*t460*t250;
  t5510 = t5492 + t5496;
  t5557 = -1.*t398*t182*t1039;
  t5564 = -1.*t395*t1039*t460*t250;
  t5577 = t5557 + t5564;
  t5600 = -1.*t398*t182*t1063;
  t5605 = -1.*t395*t1063*t460*t250;
  t5614 = t5600 + t5605;
  t3836 = t395*t250*t2199;
  t3839 = t3833 + t3836 + t2444;
  t5021 = -1.*t395*t2121;
  t5026 = -1.*t182*t4887;
  t5004 = -1.*t163*t182*t2121;
  t5006 = t395*t163*t4887;
  t3924 = t501*t2199;
  t3928 = t3923 + t3924 + t2491;
  t3943 = -1.*t395*t250*t2199;
  t3944 = t3941 + t3943 + t2651;
  t5746 = Power(t175,2);
  t4870 = t395*t2121;
  t4891 = t182*t4887;
  t5756 = Power(t250,2);
  t4936 = -1.*t182*t2121*t197;
  t4948 = t395*t4887*t197;
  t4004 = -1.*t2199*t675;
  t4009 = t4002 + t2756 + t4004;
  t4077 = t182*t2807;
  t4078 = -1.*t395*t250*t2861;
  t4088 = t4077 + t4078 + t3020;
  t5194 = t182*t5118;
  t5242 = -1.*t395*t5118*t1039;
  t4181 = -1.*t395*t2807*t1039;
  t4186 = -1.*t2861*t1116;
  t4195 = t4181 + t4186 + t3128;
  t4204 = -1.*t182*t2807;
  t4212 = t395*t250*t2861;
  t4214 = t4204 + t4212 + t3223;
  t5119 = -1.*t182*t5118;
  t5134 = t395*t5118*t1063;
  t4280 = t395*t2807*t1063;
  t4287 = t2861*t1330;
  t4296 = t4280 + t3323 + t4287;
  t5337 = -1.*t163*t182*t460;
  t5338 = t395*t163*t398*t250;
  t5348 = t5337 + t5338;
  t5405 = -1.*t182*t1063*t460;
  t5407 = t395*t398*t1063*t250;
  t5410 = t5405 + t5407;
  t5812 = -1.*t395*t163*t175*t2415;
  t5818 = t175*t4857*t325;
  t5752 = -1.*t395*t5746*t4857;
  t6182 = t4887*t460;
  t6184 = -1.*t398*t4857*t250;
  t6186 = t6182 + t6184;
  t5791 = t175*t182*t2415;
  t6201 = t398*t4887;
  t6204 = t4857*t460*t250;
  t6206 = t6201 + t6204;
  t6132 = t395*t460;
  t6137 = t398*t182*t250;
  t6138 = t6132 + t6137;
  t5355 = t182*t197*t460;
  t5362 = -1.*t395*t398*t197*t250;
  t5377 = t5355 + t5362;
  t5848 = t395*t5746*t4857;
  t5883 = -1.*t175*t182*t2415;
  t6261 = t395*t398;
  t6262 = -1.*t182*t460*t250;
  t6265 = t6261 + t6262;
  t5899 = -1.*t175*t4857*t576;
  t5905 = -1.*t395*t175*t197*t2415;
  t5383 = -1.*t182*t1039*t460;
  t5390 = t395*t398*t1039*t250;
  t5392 = t5383 + t5390;
  t5967 = t395*t5746*t5102;
  t5980 = -1.*t175*t182*t2972;
  t6026 = t395*t175*t1039*t2972;
  t6033 = -1.*t175*t5102*t1068;
  t6378 = t5118*t460;
  t6387 = -1.*t398*t5102*t250;
  t6388 = t6378 + t6387;
  t6396 = t398*t5118;
  t6399 = t5102*t460*t250;
  t6401 = t6396 + t6399;
  t6072 = -1.*t395*t5746*t5102;
  t6090 = t175*t182*t2972;
  t6101 = -1.*t395*t175*t1063*t2972;
  t6103 = t175*t5102*t1310;
  t4977 = -1.*t395*t2191;
  t4984 = t3833 + t4977;
  t6551 = 0.003468*t163;
  t6559 = 0.032736*t197;
  t6561 = t6551 + t6559;
  t4802 = t395*t2191;
  t4811 = t3941 + t4802;
  t5048 = -1.*t163*t182*t2191;
  t5050 = t2168*t197;
  t6545 = Power(t395,2);
  t6565 = Power(t182,2);
  t6510 = -1.*t163*t845;
  t6511 = t197*t919;
  t6512 = t6510 + t6511;
  t5084 = -1.*t182*t5082;
  t5086 = -1.*t395*t2836;
  t5088 = t5084 + t5086;
  t6660 = 0.1881*t163;
  t6661 = -1.*t163*t991;
  t6668 = -1.*t197*t939;
  t6669 = t6660 + t6661 + t6668;
  t5181 = t182*t5082;
  t5182 = t395*t2836;
  t5183 = t5181 + t5182;
  t6655 = t2796 + t2797 + t2799;
  t6753 = -1.*t175*t197;
  t6756 = -1.*t163*t182*t250;
  t6759 = t6753 + t6756;
  t6782 = t175*t1039;
  t6787 = t182*t6512*t250;
  t6791 = t6782 + t6787;
  t6838 = -1.*t395*t163*t398;
  t6852 = -1.*t460*t6759;
  t6858 = t6838 + t6852;
  t1490 = t390*t576;
  t1493 = -1.*t145*t716;
  t1496 = t1490 + t1493;
  t1523 = t390*t1068;
  t1535 = -1.*t145*t1143;
  t1545 = t1523 + t1535;
  t6924 = -1.*t175*t182*t6512;
  t6927 = t1039*t250;
  t6930 = t6924 + t6927;
  t6946 = t395*t398*t6512;
  t6948 = -1.*t460*t6791;
  t6952 = t6946 + t6948;
  t6562 = t6545*t163*t6561;
  t6568 = -1.*t395*t2121*t197;
  t7085 = t175*t2118;
  t7086 = t182*t6561*t250;
  t7087 = t7085 + t7086;
  t7069 = -1.*t175*t182*t6561;
  t7073 = t2118*t250;
  t7075 = t7069 + t7073;
  t6615 = t6545*t6561*t197;
  t6672 = t6545*t6669*t1063;
  t7196 = -1.*t175*t182*t6669;
  t7204 = t6655*t250;
  t7205 = t7196 + t7204;
  t7207 = t175*t6655;
  t7211 = t182*t6669*t250;
  t7215 = t7207 + t7211;
  t6713 = -1.*t6545*t6669*t1039;
  t7077 = -1.*t395*t175*t7075;
  t7098 = t576*t2415;
  t7102 = t7075*t325;
  t7368 = t395*t6561*t460;
  t7372 = t398*t7087;
  t7380 = t7368 + t7372;
  t7390 = t395*t398*t6561;
  t7392 = -1.*t460*t7087;
  t7394 = t7390 + t7392;
  t6760 = t398*t6759;
  t6761 = t1671 + t6760;
  t7137 = t395*t175*t7075;
  t7168 = -1.*t576*t7075;
  t7169 = -1.*t2415*t3434;
  t7206 = -1.*t395*t175*t7205;
  t7253 = t7205*t1310;
  t7258 = t2972*t1068;
  t7447 = t395*t6669*t460;
  t7451 = t398*t7215;
  t7461 = t7447 + t7451;
  t7463 = t395*t398*t6669;
  t7470 = -1.*t460*t7215;
  t7473 = t7463 + t7470;
  t6779 = t395*t6512*t460;
  t6792 = t398*t6791;
  t6803 = t6779 + t6792;
  t7290 = t395*t175*t7205;
  t7303 = -1.*t2972*t6930;
  t7306 = -1.*t7205*t1068;
  t7565 = -0.12226899999999999*t845;
  t7566 = t7565 + t936;
  t7549 = -0.006286*t845;
  t7554 = 0.12226899999999999*t919;
  t7556 = t7549 + t7554;
  t7546 = -0.1881*t845;
  t7547 = t845*t991;
  t7562 = t845*t7556;
  t7564 = -1.*t939*t919;
  t7572 = t7566*t919;
  t7579 = t7546 + t7547 + t7562 + t7564 + t7572;
  t7588 = -1.*t845*t7566;
  t7590 = t7556*t919;
  t7591 = t947 + t7588 + t948 + t998 + t7590;
  t6502 = 1.e-6*t1307;
  t6504 = 0.000029*t1063;
  t6507 = -0.012847725605*t1039*t1219;
  t6508 = -0.128057*t1063;
  t6515 = -0.04675*t6512;
  t6517 = t6508 + t6515;
  t6520 = -0.158015*t1000*t6517;
  t6634 = 0.000029*t395*t1039;
  t6635 = -1.e-6*t395*t6512;
  t5151 = t2819*t1307;
  t5154 = t395*t5082*t1063;
  t5155 = -1.*t182*t2836*t1063;
  t5165 = t5151 + t5154 + t5155;
  t5275 = -1.*t395*t5082*t1039;
  t5276 = t182*t2836*t1039;
  t5284 = -1.*t2819*t1063;
  t5297 = t5275 + t5276 + t5284;
  t6638 = t395*t5088*t1039;
  t6646 = t395*t5082*t1039;
  t6651 = -1.*t182*t2836*t1039;
  t6688 = t2819*t1063;
  t7681 = -1.*t197*t7566;
  t7682 = t163*t7556;
  t7683 = t7681 + t7682;
  t6704 = t395*t5183*t6512;
  t6720 = -1.*t2819*t1039;
  t7676 = t163*t7566;
  t7677 = t197*t7556;
  t7679 = t7676 + t7677;
  t6729 = -1.*t395*t5082*t6512;
  t6733 = t182*t2836*t6512;
  t6775 = -0.158015*t1219*t2794;
  t6810 = -0.158015*t1000*t6803;
  t6889 = t145*t1068;
  t6901 = t390*t1143;
  t6913 = t6889 + t6901;
  t6914 = -0.158015*t1219*t6913;
  t6943 = t145*t6930;
  t6963 = t390*t6952;
  t6964 = t6943 + t6963;
  t6967 = -0.158015*t1000*t6964;
  t7006 = -0.158015*t1219*t1545;
  t1552 = t390*t1310;
  t1566 = -1.*t145*t1354;
  t1621 = t1552 + t1566;
  t7008 = t390*t6930;
  t7013 = -1.*t145*t6952;
  t7014 = t7008 + t7013;
  t7015 = -0.158015*t1000*t7014;
  t7036 = t175*t182*t6512;
  t7037 = -1.*t1039*t250;
  t7039 = t7036 + t7037;
  t7040 = 1.e-6*t7039;
  t7048 = 0.000029*t1068;
  t7242 = t1068*t4214;
  t7247 = t395*t2807*t1039;
  t7690 = t6545*t7683*t1063;
  t7250 = t2861*t1116;
  t7800 = -1.*t175*t182*t7683;
  t7801 = t7679*t250;
  t7802 = t7800 + t7801;
  t7785 = t175*t7679;
  t7792 = t182*t7683*t250;
  t7794 = t7785 + t7792;
  t7298 = t6930*t4088;
  t7703 = -1.*t6545*t7683*t1039;
  t7302 = -1.*t395*t2807*t6512;
  t7307 = -1.*t2861*t6791;
  t7346 = 0.000029*t2794;
  t7356 = -1.*t395*t6512*t460;
  t7357 = -1.*t398*t6791;
  t7358 = t7356 + t7357;
  t7361 = 1.e-6*t7358;
  t7446 = t2794*t3257;
  t7806 = -1.*t395*t175*t7802;
  t7813 = t7802*t1310;
  t7481 = t2885*t2794;
  t7482 = t2932*t1143;
  t7871 = t395*t7683*t460;
  t7872 = t398*t7794;
  t7873 = t7871 + t7872;
  t7876 = t395*t398*t7683;
  t7879 = -1.*t460*t7794;
  t7880 = t7876 + t7879;
  t7503 = t6803*t3062;
  t7834 = t395*t175*t7802;
  t7843 = -1.*t7802*t1068;
  t7522 = -1.*t2885*t6803;
  t7524 = -1.*t2932*t6952;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.158015*t1000*(-1.*t1068*t145 - 1.*t1143*t390) - 0.158015*t1219*(-1.*t1310*t145 - 1.*t1354*t390) - 0.0031174510920000003*(-1.*t145*t325 - 1.*t390*t505) + 0.029427012384*(-1.*t145*t576 - 1.*t390*t716))*var2[1] - 0.5*(0.029427012384*t1496 - 0.158015*t1000*t1545 - 0.158015*t1219*t1621 - 0.0031174510920000003*(t325*t390 - 1.*t145*t505))*var2[2])*var2[10];
  p_output1[4]=(-0.5*(-0.158015*t1000*t1143 - 0.158015*t1219*t1354 - 0.0031174510920000003*t505 + 0.029427012384*t716)*var2[0] - 0.5*(0.0031174510920000003*t145*t1707 - 0.029427012384*t145*t1742 + 0.158015*t1000*t145*t1816 + 0.158015*t1219*t145*t1842)*var2[1] - 0.5*(-0.0031174510920000003*t1707*t390 + 0.029427012384*t1742*t390 - 0.158015*t1000*t1816*t390 - 0.158015*t1219*t1842*t390)*var2[2] - 0.5*(0.000029*t1354 - 0.008769*t2030 - 0.158015*t1219*(t2266*(-1.*t1143*t2866 - 1.*t1143*t2885 - 1.*t2794*t2920 - 1.*t1816*t2932) + t2794*(t2030*t2866 + t2030*t2885 + t2266*t2920 + t2360*t2932) + t1143*t3062 + t2030*t3154) - 0.158015*t1000*((-1.*t2030*t2866 - 1.*t2030*t2885 - 1.*t2266*t2920 - 1.*t2360*t2932)*t3208 + t2266*(t1354*t2866 + t1354*t2885 + t1842*t2932 + t2920*t3208) + t1354*t3257 + t2030*t3343) + 1.e-6*(-1.*t1039*t395*t398 + t1116*t460) + 6.e-6*t505 + 0.029427012384*(t2100*(-1.*t2030*t2205 - 1.*t2030*t2228 - 1.*t2266*t2347 - 1.*t2347*t2360) + t2030*t2499 + t2462*t505 + t2266*(t1707*t2347 + t2100*t2347 + t2205*t505 + t2228*t505)) - 0.0031174510920000003*((t2030*t2205 + t2030*t2228 + t2266*t2347 + t2347*t2360)*t2574 + t2030*t2767 + t2696*t716 + t2266*(-1.*t1742*t2347 - 1.*t2347*t2574 - 1.*t2205*t716 - 1.*t2228*t716)))*var2[3])*var2[10];
  p_output1[5]=(-0.5*(0.029427012384*t3412*t398 - 0.0031174510920000003*t3434*t398 - 0.158015*t1219*t3466*t398 - 0.158015*t1000*t3491*t398)*var2[0] - 0.5*(-0.158015*t1219*(t1330*t390 + t145*t3466*t460) - 0.158015*t1000*(t1116*t390 + t145*t3491*t460) - 0.0031174510920000003*(t145*t3434*t460 + t390*t501) + 0.029427012384*(t145*t3412*t460 + t390*t675))*var2[1] - 0.5*(-0.158015*t1219*(t1330*t145 - 1.*t3466*t390*t460) - 0.158015*t1000*(t1116*t145 - 1.*t3491*t390*t460) - 0.0031174510920000003*(-1.*t3434*t390*t460 + t145*t501) + 0.029427012384*(-1.*t3412*t390*t460 + t145*t675))*var2[2] - 0.5*(6.e-6*t3434*t398 + 0.000029*t3466*t398 - 1.e-6*t3491*t398 + 0.008769*t175*t395*t398 - 0.158015*t1219*(t3062*t3491*t398 - 1.*t175*t3154*t395*t398 + t2266*(-1.*t2885*t3491*t398 - 1.*t2794*t398*t4128 + t4158 + t4164 + t2932*t3491*t460 + t1143*t4128*t460) + t2794*(-1.*t175*t2885*t395*t398 + t4100 + t2266*t398*t4128 + t4140 + t175*t2932*t395*t460 - 1.*t2030*t4128*t460)) - 0.158015*t1000*(t3257*t3466*t398 - 1.*t175*t3343*t395*t398 + t2266*(t2885*t3466*t398 + t3208*t398*t4128 + t4300 + t4324 - 1.*t2932*t3466*t460 - 1.*t1354*t4128*t460) + t3208*(t175*t2885*t395*t398 - 1.*t2266*t398*t4128 + t4227 + t4255 - 1.*t175*t2932*t395*t460 + t2030*t4128*t460)) + 0.029427012384*(t2462*t3434*t398 - 1.*t175*t2499*t395*t398 + t2100*(t3885 - 1.*t175*t2199*t395 - 1.*t2266*t3866*t398 + t175*t2228*t395*t398 + t2030*t3866*t460 - 1.*t175*t2347*t395*t460) + t2266*(t3900 + t3907 + t2228*t3434*t398 + t2100*t3866*t398 - 1.*t2347*t3434*t460 - 1.*t3866*t460*t505)) - 0.0031174510920000003*(t2696*t3412*t398 - 1.*t175*t2767*t395*t398 + t2574*(t175*t2199*t395 + t3978 + t2266*t3866*t398 - 1.*t175*t2228*t395*t398 - 1.*t2030*t3866*t460 + t175*t2347*t395*t460) + t2266*(-1.*t2228*t3412*t398 - 1.*t2574*t3866*t398 + t4025 + t4033 + t2347*t3412*t460 + t3866*t460*t716)))*var2[3] - 0.5*(0.000029*t1330 + 1.e-6*(-1.*t1063*t175 - 1.*t1039*t182*t250) + 0.008769*t250*t395 - 0.158015*t1219*(t1116*t4088 + t1068*(-1.*t175*t2861*t395 + t4100 - 1.*t250*t395*t4128 + t4140) + t175*t395*(-1.*t2861*t3491 - 1.*t1116*t4128 + t4158 + t4164) - 1.*t250*t395*t4195) - 0.158015*t1000*(t1330*t4214 + t1310*(t175*t2861*t395 + t250*t395*t4128 + t4227 + t4255) - 1.*t250*t395*t4296 + t175*t395*(t2861*t3466 + t1330*t4128 + t4300 + t4324)) + 6.e-6*t501 + 0.029427012384*(-1.*t250*t3928*t395 + t325*(t3885 + t250*t3866*t395) + t3839*t501 + t175*t395*(t2199*t3434 + t3900 + t3907 + t3866*t501)) - 0.0031174510920000003*(-1.*t250*t395*t4009 + (-1.*t250*t3866*t395 + t3978)*t576 + t3944*t675 + t175*t395*(-1.*t2199*t3412 + t4025 + t4033 - 1.*t3866*t675)))*var2[4])*var2[10];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.5*(-0.0031174510920000003*t5348 + 0.029427012384*t5377 - 0.158015*t1000*t5392 - 0.158015*t1219*t5410)*var2[0] - 0.5*(-0.0031174510920000003*(-1.*t163*t175*t390*t395 - 1.*t145*t5456) + 0.029427012384*(t175*t197*t390*t395 - 1.*t145*t5510) - 0.158015*t1000*(-1.*t1039*t175*t390*t395 - 1.*t145*t5577) - 0.158015*t1219*(-1.*t1063*t175*t390*t395 - 1.*t145*t5614))*var2[1] - 0.5*(-0.0031174510920000003*(-1.*t145*t163*t175*t395 + t390*t5456) + 0.029427012384*(t145*t175*t197*t395 + t390*t5510) - 0.158015*t1000*(-1.*t1039*t145*t175*t395 + t390*t5577) - 0.158015*t1219*(-1.*t1063*t145*t175*t395 + t390*t5614))*var2[2] - 0.5*(1.e-6*(-1.*t1039*t250*t395*t398 + t1039*t182*t460) + 6.e-6*t5348 + 0.000029*t5410 - 0.008769*t6138 + 0.029427012384*(t2462*t5348 + t2499*t6138 + t2266*(t2228*t5348 + t2347*t5456 + t5812 + t5818 + t2100*t6186 + t505*t6206) + t2100*(t5752 + t5791 - 1.*t2228*t6138 - 1.*t2266*t6186 - 1.*t2030*t6206 - 1.*t2347*t6265)) - 0.158015*t1000*(t3257*t5410 + t3343*t6138 + t2266*(t2885*t5410 + t2932*t5614 + t6101 + t6103 + t3208*t6388 + t1354*t6401) + t3208*(t6072 + t6090 - 1.*t2885*t6138 - 1.*t2932*t6265 - 1.*t2266*t6388 - 1.*t2030*t6401)) - 0.158015*t1219*(t3062*t5392 + t3154*t6138 + t2266*(-1.*t2885*t5392 - 1.*t2932*t5577 + t6026 + t6033 - 1.*t2794*t6388 - 1.*t1143*t6401) + t2794*(t5967 + t5980 + t2885*t6138 + t2932*t6265 + t2266*t6388 + t2030*t6401)) - 0.0031174510920000003*(t2696*t5377 + t2767*t6138 + t2574*(t5848 + t5883 + t2228*t6138 + t2266*t6186 + t2030*t6206 + t2347*t6265) + t2266*(-1.*t2228*t5377 - 1.*t2347*t5510 + t5899 + t5905 - 1.*t2574*t6186 - 1.*t6206*t716)))*var2[3] - 0.5*(0.008769*t175*t182 + 1.e-6*t1039*t175*t395 - 0.000029*t1063*t175*t395 - 6.e-6*t163*t175*t395 + 0.029427012384*(-1.*t175*t182*t3928 - 1.*t163*t175*t3839*t395 + t325*(-1.*t182*t2199*t250 + t5021 + t5026 + t5752 - 1.*t395*t4857*t5756 + t5791) + t175*t395*(t163*t2199*t250*t395 + t5004 + t5006 - 1.*t250*t4857*t501 + t5812 + t5818)) - 0.158015*t1219*(-1.*t1039*t175*t395*t4088 - 1.*t175*t182*t4195 + t1068*(t182*t250*t2861 + t2807*t395 + t5194 + t395*t5102*t5756 + t5967 + t5980) + t175*t395*(t1039*t182*t2807 - 1.*t1039*t250*t2861*t395 + t1116*t250*t5102 + t5242 + t6026 + t6033)) - 0.158015*t1000*(-1.*t1063*t175*t395*t4214 - 1.*t175*t182*t4296 + t1310*(-1.*t182*t250*t2861 - 1.*t2807*t395 + t5119 - 1.*t395*t5102*t5756 + t6072 + t6090) + t175*t395*(-1.*t1063*t182*t2807 + t1063*t250*t2861*t395 - 1.*t1330*t250*t5102 + t5134 + t6101 + t6103)) - 0.0031174510920000003*(t175*t197*t3944*t395 - 1.*t175*t182*t4009 + t576*(t182*t2199*t250 + t4870 + t4891 + t395*t4857*t5756 + t5848 + t5883) + t175*t395*(t197*t2199*t250*t395 + t4936 + t4948 + t5899 + t5905 + t250*t4857*t675)))*var2[4] - 0.5*(1.e-6*t1039*t182 - 0.000029*t1063*t182 - 6.e-6*t163*t182 - 0.008769*t395 - 0.0031174510920000003*(t395*(-1.*t163*t2168 - 1.*t182*t197*t2191 + t4002) + t182*t197*t4811 - 1.*t197*t395*(-1.*t182*t2191 + t395*t4857 + t4870 + t4891) + t182*(-1.*t197*t2191*t395 - 1.*t182*t197*t4857 + t4936 + t4948)) + 0.029427012384*(-1.*t163*t182*t4984 + t182*(-1.*t163*t2191*t395 - 1.*t163*t182*t4857 + t5004 + t5006) + t163*t395*(t182*t2191 - 1.*t395*t4857 + t5021 + t5026) + t395*(t3923 + t5048 + t5050)) - 0.158015*t1000*(-1.*t1063*t182*t5088 + t1063*t395*(t182*t2836 - 1.*t395*t5082 - 1.*t395*t5102 + t5119) + t182*(-1.*t1063*t2836*t395 - 1.*t1063*t182*t5082 - 1.*t1063*t182*t5102 + t5134) + t395*t5165) - 0.158015*t1219*(-1.*t1039*t182*t5183 + t1039*t395*(-1.*t182*t2836 + t395*t5082 + t395*t5102 + t5194) + t182*(t1039*t2836*t395 + t1039*t182*t5082 + t1039*t182*t5102 + t5242) + t395*t5297))*var2[5])*var2[10];
  p_output1[10]=(-0.5*(-0.0031174510920000003*t2574 + 0.029427012384*t6761 + t6775 + t6810)*var2[0] - 0.5*(-0.0031174510920000003*t1496 + 0.029427012384*(t3434*t390 - 1.*t145*t6858) + t7006 + t7015)*var2[1] - 0.5*(0.029427012384*(t145*t3434 + t390*t6858) + t6914 + t6967 - 0.0031174510920000003*(t145*t576 + t390*t716))*var2[2] - 0.5*(6.e-6*t2574 + t7346 + t7361 + 0.029427012384*(t2462*t2574 + t2100*(t7077 - 1.*t2266*t7380 - 1.*t2030*t7394) + t2266*(t2228*t2574 + t7098 + t7102 + t2347*t716 + t2100*t7380 + t505*t7394)) - 0.0031174510920000003*(t2696*t6761 + t2574*(t7137 + t2266*t7380 + t2030*t7394) + t2266*(-1.*t2228*t6761 - 1.*t2347*t6858 + t7168 + t7169 - 1.*t2574*t7380 - 1.*t716*t7394)) - 0.158015*t1000*(t7446 + t3208*(t7206 - 1.*t2266*t7461 - 1.*t2030*t7473) + t2266*(t7253 + t7258 + t3208*t7461 + t1354*t7473 + t7481 + t7482)) - 0.158015*t1219*(t2794*(t7290 + t2266*t7461 + t2030*t7473) + t7503 + t2266*(t7303 + t7306 - 1.*t2794*t7461 - 1.*t1143*t7473 + t7522 + t7524)))*var2[3] - 0.5*(6.e-6*t576 + t7040 + t7048 + 0.029427012384*(t3839*t576 + t325*(-1.*t182*t395*t6561 + t7077 + t250*t395*t7087) + t175*t395*(t6562 + t6568 + t2199*t675 + t501*t7087 + t7098 + t7102)) - 0.0031174510920000003*(t3434*t3944 + t576*(t182*t395*t6561 - 1.*t250*t395*t7087 + t7137) + t175*t395*(t3923 + t6615 - 1.*t2199*t6759 - 1.*t675*t7087 + t7168 + t7169)) - 0.158015*t1000*(t1310*(-1.*t182*t395*t6669 + t7206 + t250*t395*t7215) + t7242 + t175*t395*(t6672 + t1330*t7215 + t7247 + t7250 + t7253 + t7258)) - 0.158015*t1219*(t1068*(t182*t395*t6669 - 1.*t250*t395*t7215 + t7290) + t7298 + t175*t395*(t6713 - 1.*t1116*t7215 + t7302 + t7303 + t7306 + t7307)))*var2[4] - 0.5*(-6.e-6*t197*t395 + 0.029427012384*(-1.*t197*t395*t4984 + t182*(t197*t2118 + t163*t2168 + t182*t197*t2191 + t6562 + t163*t6561*t6565 + t6568)) - 0.0031174510920000003*(-1.*t163*t395*t4811 + t182*(-1.*t163*t2118 + t3923 + t5048 + t5050 + t197*t6561*t6565 + t6615)) + t6634 + t6635 - 0.158015*t1000*(t6638 + t182*(t6646 + t6651 + t1307*t6655 + t1063*t6565*t6669 + t6672 + t6688)) - 0.158015*t1219*(t6704 + t182*(-1.*t1063*t6655 - 1.*t1039*t6565*t6669 + t6713 + t6720 + t6729 + t6733)))*var2[5] - 0.5*(-0.0017906073870803522*t163 + 0.00019032974151987603*t197 + t6502 + t6504 + t6507 + t6520)*var2[9])*var2[10];
  p_output1[11]=var2[10]*(-0.5*(t6775 + t6810 - 0.158015*t2794*t7579 - 0.158015*t3208*t7591)*var2[0] - 0.5*(t7006 + t7015 - 0.158015*t1545*t7579 - 0.158015*t1621*t7591)*var2[1] - 0.5*(t6914 + t6967 - 0.158015*t6913*t7579 - 0.158015*(t1310*t145 + t1354*t390)*t7591)*var2[2] - 0.5*(t7346 + t7361 - 0.158015*(t3208*t3257 + t2266*t3343)*t7579 - 0.158015*(t2794*t3062 + t2266*t3154)*t7591 - 0.158015*t1000*(t7446 + t2266*(t7258 + t7481 + t7482 + t7813 + t3208*t7873 + t1354*t7880) + t3208*(t7806 - 1.*t2266*t7873 - 1.*t2030*t7880)) - 0.158015*t1219*(t7503 + t2266*(t7303 + t7522 + t7524 + t7843 - 1.*t2794*t7873 - 1.*t1143*t7880) + t2794*(t7834 + t2266*t7873 + t2030*t7880)))*var2[3] - 0.5*(t7040 + t7048 - 0.158015*(t1310*t4214 + t175*t395*t4296)*t7579 - 0.158015*(t1068*t4088 + t175*t395*t4195)*t7591 - 0.158015*t1000*(t7242 + t1310*(-1.*t182*t395*t7683 + t250*t395*t7794 + t7806) + t175*t395*(t7247 + t7250 + t7258 + t7690 + t1330*t7794 + t7813)) - 0.158015*t1219*(t7298 + t1068*(t182*t395*t7683 - 1.*t250*t395*t7794 + t7834) + t175*t395*(t7302 + t7303 + t7307 + t7703 - 1.*t1116*t7794 + t7843)))*var2[4] - 0.5*(t6634 + t6635 - 0.158015*(t1063*t395*t5088 + t182*t5165)*t7579 - 0.158015*(t1039*t395*t5183 + t182*t5297)*t7591 - 0.158015*t1000*(t6638 + t182*(t6646 + t6651 + t6688 + t1307*t7679 + t1063*t6565*t7683 + t7690)) - 0.158015*t1219*(t6704 + t182*(t6720 + t6729 + t6733 - 1.*t1063*t7679 - 1.*t1039*t6565*t7683 + t7703)))*var2[5] - 0.5*(t6502 + t6504 + t6507 + t6520 - 0.158015*(0. - 0.04675*t1039 - 0.128057*t1307)*t7579 - 0.158015*(0. + 0.081307*t1063)*t7591)*var2[9] - 0.5*(-0.31603*t1000*t7579 - 0.31603*t1219*t7591)*var2[10] - 0.5*(0.019320336034999996*t7579 + 0.0009932822900000022*t7591)*var2[11]);
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

#include "Ce3_vec11_go1_description.hh"

namespace SymFunction
{

void Ce3_vec11_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
