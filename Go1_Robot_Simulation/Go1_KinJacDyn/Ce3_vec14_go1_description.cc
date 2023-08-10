/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:29:51 GMT-05:00
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
  double t40;
  double t83;
  double t159;
  double t84;
  double t171;
  double t36;
  double t224;
  double t240;
  double t254;
  double t289;
  double t540;
  double t627;
  double t558;
  double t560;
  double t748;
  double t751;
  double t753;
  double t757;
  double t760;
  double t763;
  double t683;
  double t686;
  double t723;
  double t724;
  double t566;
  double t615;
  double t650;
  double t658;
  double t953;
  double t955;
  double t961;
  double t126;
  double t189;
  double t208;
  double t268;
  double t312;
  double t354;
  double t363;
  double t369;
  double t371;
  double t400;
  double t409;
  double t422;
  double t438;
  double t452;
  double t459;
  double t462;
  double t465;
  double t470;
  double t669;
  double t682;
  double t736;
  double t743;
  double t754;
  double t768;
  double t772;
  double t792;
  double t800;
  double t806;
  double t808;
  double t815;
  double t822;
  double t878;
  double t879;
  double t916;
  double t938;
  double t941;
  double t964;
  double t970;
  double t1002;
  double t1009;
  double t1014;
  double t1016;
  double t1020;
  double t1023;
  double t1281;
  double t1288;
  double t1295;
  double t1299;
  double t1302;
  double t1305;
  double t1312;
  double t1316;
  double t1319;
  double t1323;
  double t1324;
  double t1327;
  double t1472;
  double t1479;
  double t1496;
  double t1551;
  double t1560;
  double t1565;
  double t1547;
  double t1594;
  double t1597;
  double t1615;
  double t1639;
  double t1641;
  double t1642;
  double t1649;
  double t1653;
  double t1655;
  double t1663;
  double t1682;
  double t1686;
  double t1700;
  double t1706;
  double t1708;
  double t1721;
  double t1722;
  double t1834;
  double t1855;
  double t1879;
  double t1822;
  double t1824;
  double t1826;
  double t1759;
  double t1790;
  double t1796;
  double t1610;
  double t1728;
  double t1738;
  double t1536;
  double t1539;
  double t1544;
  double t1969;
  double t1970;
  double t1971;
  double t1889;
  double t1895;
  double t1907;
  double t2143;
  double t2161;
  double t2175;
  double t2403;
  double t2416;
  double t2427;
  double t2438;
  double t2402;
  double t2464;
  double t2467;
  double t2483;
  double t2484;
  double t2493;
  double t2495;
  double t2496;
  double t2498;
  double t2501;
  double t2505;
  double t2508;
  double t2513;
  double t2522;
  double t2606;
  double t2609;
  double t2578;
  double t2581;
  double t2584;
  double t2635;
  double t2610;
  double t2378;
  double t2383;
  double t2400;
  double t2469;
  double t2524;
  double t2543;
  double t2683;
  double t2702;
  double t2707;
  double t2796;
  double t2803;
  double t2812;
  double t3049;
  double t3059;
  double t3061;
  double t3015;
  double t3020;
  double t3023;
  double t3126;
  double t3127;
  double t3165;
  double t3087;
  double t3094;
  double t3110;
  double t1982;
  double t3399;
  double t3400;
  double t3401;
  double t2072;
  double t2216;
  double t2306;
  double t2723;
  double t3683;
  double t3720;
  double t3724;
  double t3671;
  double t2775;
  double t2835;
  double t2919;
  double t3421;
  double t3458;
  double t3464;
  double t1994;
  double t2008;
  double t2017;
  double t2080;
  double t2098;
  double t2109;
  double t3552;
  double t2222;
  double t2235;
  double t2240;
  double t3588;
  double t3599;
  double t2322;
  double t2333;
  double t2341;
  double t3675;
  double t3726;
  double t2727;
  double t2740;
  double t2748;
  double t3741;
  double t3767;
  double t2776;
  double t2778;
  double t2779;
  double t3826;
  double t3836;
  double t2842;
  double t2850;
  double t2854;
  double t3888;
  double t3892;
  double t2921;
  double t2922;
  double t2925;
  double t3531;
  double t3565;
  double t4467;
  double t4468;
  double t4481;
  double t4502;
  double t4504;
  double t3387;
  double t3480;
  double t4719;
  double t4738;
  double t4739;
  double t4742;
  double t4751;
  double t4763;
  double t5137;
  double t5141;
  double t5147;
  double t5161;
  double t5166;
  double t5167;
  double t5181;
  double t5182;
  double t5188;
  double t5203;
  double t5205;
  double t5206;
  double t3390;
  double t3394;
  double t4644;
  double t4665;
  double t4623;
  double t4629;
  double t3484;
  double t3488;
  double t3532;
  double t3536;
  double t5303;
  double t4494;
  double t4511;
  double t5310;
  double t4566;
  double t4591;
  double t3568;
  double t3569;
  double t3657;
  double t3658;
  double t3664;
  double t4926;
  double t4952;
  double t3784;
  double t3785;
  double t3795;
  double t3810;
  double t3813;
  double t3817;
  double t4773;
  double t4834;
  double t3857;
  double t3868;
  double t3869;
  double t5031;
  double t5033;
  double t5035;
  double t5111;
  double t5115;
  double t5116;
  double t5352;
  double t5356;
  double t5307;
  double t5851;
  double t5857;
  double t5876;
  double t5320;
  double t5880;
  double t5884;
  double t5886;
  double t5742;
  double t5753;
  double t5755;
  double t5051;
  double t5059;
  double t5066;
  double t5394;
  double t5416;
  double t5951;
  double t5965;
  double t5973;
  double t5442;
  double t5453;
  double t5073;
  double t5079;
  double t5108;
  double t5513;
  double t5537;
  double t5564;
  double t5578;
  double t6132;
  double t6137;
  double t6142;
  double t6151;
  double t6171;
  double t6179;
  double t5616;
  double t5635;
  double t5676;
  double t5679;
  double t4616;
  double t4617;
  double t6374;
  double t6377;
  double t6378;
  double t4461;
  double t4462;
  double t4679;
  double t4685;
  double t6368;
  double t6392;
  double t6333;
  double t6338;
  double t6341;
  double t4722;
  double t4734;
  double t4735;
  double t6442;
  double t6443;
  double t6445;
  double t6447;
  double t4897;
  double t4906;
  double t4907;
  double t6440;
  double t6492;
  double t6495;
  double t6501;
  double t6524;
  double t6525;
  double t6531;
  double t6549;
  double t6567;
  double t6570;
  double t1189;
  double t1190;
  double t1192;
  double t1197;
  double t1199;
  double t1202;
  double t6604;
  double t6606;
  double t6613;
  double t6617;
  double t6622;
  double t6623;
  double t6390;
  double t6399;
  double t6752;
  double t6754;
  double t6760;
  double t6746;
  double t6748;
  double t6749;
  double t6419;
  double t6448;
  double t6884;
  double t6888;
  double t6889;
  double t6901;
  double t6907;
  double t6916;
  double t6468;
  double t6750;
  double t6768;
  double t6772;
  double t7057;
  double t7058;
  double t7066;
  double t7085;
  double t7089;
  double t7105;
  double t6505;
  double t6507;
  double t6809;
  double t6832;
  double t6842;
  double t6893;
  double t6946;
  double t6947;
  double t7261;
  double t7264;
  double t7265;
  double t7279;
  double t7282;
  double t7291;
  double t6516;
  double t6532;
  double t6534;
  double t6976;
  double t6996;
  double t7001;
  double t7434;
  double t7435;
  double t7423;
  double t7424;
  double t7425;
  double t7413;
  double t7422;
  double t7428;
  double t7432;
  double t7436;
  double t7439;
  double t7442;
  double t7443;
  double t7447;
  double t6325;
  double t6326;
  double t6330;
  double t6332;
  double t6342;
  double t6344;
  double t6352;
  double t6429;
  double t6430;
  double t4785;
  double t4787;
  double t4791;
  double t4792;
  double t4961;
  double t4965;
  double t4969;
  double t4971;
  double t6431;
  double t6434;
  double t6438;
  double t6452;
  double t7556;
  double t7557;
  double t7562;
  double t6465;
  double t6474;
  double t7539;
  double t7542;
  double t7547;
  double t6476;
  double t6478;
  double t6511;
  double t6539;
  double t6584;
  double t6593;
  double t6597;
  double t6603;
  double t6616;
  double t6626;
  double t6628;
  double t6630;
  double t6686;
  double t1207;
  double t1235;
  double t1238;
  double t6690;
  double t6691;
  double t6692;
  double t6693;
  double t6712;
  double t6714;
  double t6715;
  double t6716;
  double t6723;
  double t6931;
  double t6933;
  double t7572;
  double t6943;
  double t7725;
  double t7728;
  double t7731;
  double t7715;
  double t7716;
  double t7719;
  double t6990;
  double t7603;
  double t6992;
  double t7005;
  double t7042;
  double t7043;
  double t7045;
  double t7051;
  double t7052;
  double t7259;
  double t7733;
  double t7744;
  double t7305;
  double t7318;
  double t7814;
  double t7815;
  double t7820;
  double t7824;
  double t7825;
  double t7828;
  double t7337;
  double t7763;
  double t7771;
  double t7369;
  double t7371;
  t40 = Cos(var1[13]);
  t83 = Cos(var1[5]);
  t159 = Sin(var1[13]);
  t84 = Sin(var1[12]);
  t171 = Sin(var1[5]);
  t36 = Sin(var1[3]);
  t224 = Cos(var1[3]);
  t240 = Cos(var1[12]);
  t254 = Cos(var1[4]);
  t289 = Sin(var1[4]);
  t540 = Cos(var1[14]);
  t627 = Sin(var1[14]);
  t558 = -1.*t540;
  t560 = 1. + t558;
  t748 = -1.*t540*t159;
  t751 = -1.*t40*t627;
  t753 = t748 + t751;
  t757 = t40*t540;
  t760 = -1.*t159*t627;
  t763 = t757 + t760;
  t683 = -0.1881*t560;
  t686 = -0.181814*t540;
  t723 = -0.12226899999999999*t627;
  t724 = t683 + t686 + t723;
  t566 = -0.213*t560;
  t615 = -0.335269*t540;
  t650 = -0.006286*t627;
  t658 = t566 + t615 + t650;
  t953 = t540*t159;
  t955 = t40*t627;
  t961 = t953 + t955;
  t126 = -1.*t40*t83*t84;
  t189 = t159*t171;
  t208 = t126 + t189;
  t268 = t240*t40*t254;
  t312 = t83*t159;
  t354 = t40*t84*t171;
  t363 = t312 + t354;
  t369 = -1.*t289*t363;
  t371 = t268 + t369;
  t400 = t83*t84*t159;
  t409 = t40*t171;
  t422 = t400 + t409;
  t438 = -1.*t240*t254*t159;
  t452 = t40*t83;
  t459 = -1.*t84*t159*t171;
  t462 = t452 + t459;
  t465 = -1.*t289*t462;
  t470 = t438 + t465;
  t669 = t540*t658;
  t682 = 0.1881*t627;
  t736 = t724*t627;
  t743 = 0. + t669 + t682 + t736;
  t754 = -1.*t83*t84*t753;
  t768 = t763*t171;
  t772 = t754 + t768;
  t792 = t240*t254*t753;
  t800 = t83*t763;
  t806 = t84*t753*t171;
  t808 = t800 + t806;
  t815 = -1.*t289*t808;
  t822 = t792 + t815;
  t878 = -0.1881*t540;
  t879 = -1.*t540*t724;
  t916 = t658*t627;
  t938 = 0. + t878 + t879 + t916;
  t941 = -1.*t83*t84*t763;
  t964 = t961*t171;
  t970 = t941 + t964;
  t1002 = t240*t254*t763;
  t1009 = t83*t961;
  t1014 = t84*t763*t171;
  t1016 = t1009 + t1014;
  t1020 = -1.*t289*t1016;
  t1023 = t1002 + t1020;
  t1281 = -1.*t240*t40*t289;
  t1288 = -1.*t254*t363;
  t1295 = t1281 + t1288;
  t1299 = t240*t159*t289;
  t1302 = -1.*t254*t462;
  t1305 = t1299 + t1302;
  t1312 = -1.*t240*t753*t289;
  t1316 = -1.*t254*t808;
  t1319 = t1312 + t1316;
  t1323 = -1.*t240*t763*t289;
  t1324 = -1.*t254*t1016;
  t1327 = t1323 + t1324;
  t1472 = t254*t84;
  t1479 = t240*t289*t171;
  t1496 = t1472 + t1479;
  t1551 = -0.032736*t40;
  t1560 = 0.003468*t159;
  t1565 = t1551 + t1560;
  t1547 = -0.061053*t84;
  t1594 = t240*t1565;
  t1597 = t1547 + t1594;
  t1615 = -1.*t40;
  t1639 = 1. + t1615;
  t1641 = -0.1881*t1639;
  t1642 = -0.191568*t40;
  t1649 = -0.032736*t159;
  t1653 = t1641 + t1642 + t1649;
  t1655 = t83*t1653;
  t1663 = -1.*t240;
  t1682 = 1. + t1663;
  t1686 = -0.04675*t1682;
  t1700 = -0.107803*t240;
  t1706 = -1.*t84*t1565;
  t1708 = t1686 + t1700 + t1706;
  t1721 = -1.*t1708*t171;
  t1722 = t1655 + t1721;
  t1834 = t254*t1597;
  t1855 = -1.*t289*t1722;
  t1879 = t1834 + t1855;
  t1822 = t84*t289;
  t1824 = -1.*t240*t254*t171;
  t1826 = t1822 + t1824;
  t1759 = t1597*t289;
  t1790 = t254*t1722;
  t1796 = t1759 + t1790;
  t1610 = -1.*t1597*t289;
  t1728 = -1.*t254*t1722;
  t1738 = t1610 + t1728;
  t1536 = t240*t40*t289;
  t1539 = t254*t363;
  t1544 = t1536 + t1539;
  t1969 = t83*t1708;
  t1970 = t1653*t171;
  t1971 = t1969 + t1970;
  t1889 = -1.*t84*t289;
  t1895 = t240*t254*t171;
  t1907 = t1889 + t1895;
  t2143 = -1.*t240*t159*t289;
  t2161 = t254*t462;
  t2175 = t2143 + t2161;
  t2403 = -0.1881*t159;
  t2416 = -1.*t159*t724;
  t2427 = t40*t658;
  t2438 = 0. + t2403 + t2416 + t2427;
  t2402 = -0.078693*t84;
  t2464 = t240*t2438;
  t2467 = 0. + t2402 + t2464;
  t2483 = -0.1881*t1639;
  t2484 = t40*t724;
  t2493 = t159*t658;
  t2495 = 0. + t2483 + t2484 + t2493;
  t2496 = t83*t2495;
  t2498 = -0.04675*t1682;
  t2501 = -0.125443*t240;
  t2505 = -1.*t84*t2438;
  t2508 = t2498 + t2501 + t2505;
  t2513 = -1.*t2508*t171;
  t2522 = 0. + t2496 + t2513;
  t2606 = t254*t2467;
  t2609 = -1.*t289*t2522;
  t2578 = t2467*t289;
  t2581 = t254*t2522;
  t2584 = 0. + t2578 + t2581;
  t2635 = 0. + t2606 + t2609;
  t2610 = t2606 + t2609;
  t2378 = t240*t753*t289;
  t2383 = t254*t808;
  t2400 = t2378 + t2383;
  t2469 = -1.*t2467*t289;
  t2524 = -1.*t254*t2522;
  t2543 = t2469 + t2524;
  t2683 = t83*t2508;
  t2702 = t2495*t171;
  t2707 = 0. + t2683 + t2702;
  t2796 = t240*t763*t289;
  t2803 = t254*t1016;
  t2812 = t2796 + t2803;
  t3049 = t40*t83*t84;
  t3059 = -1.*t159*t171;
  t3061 = t3049 + t3059;
  t3015 = -1.*t83*t84*t159;
  t3020 = -1.*t40*t171;
  t3023 = t3015 + t3020;
  t3126 = t83*t84*t753;
  t3127 = -1.*t763*t171;
  t3165 = t3126 + t3127;
  t3087 = t83*t84*t763;
  t3094 = -1.*t961*t171;
  t3110 = t3087 + t3094;
  t1982 = -1.*t240*t83*t1971;
  t3399 = -1.*t83*t1708;
  t3400 = -1.*t1653*t171;
  t3401 = t3399 + t3400;
  t2072 = t1971*t208;
  t2216 = t240*t83*t1971;
  t2306 = -1.*t422*t1971;
  t2723 = t240*t83*t2707;
  t3683 = -1.*t83*t2508;
  t3720 = -1.*t2495*t171;
  t3724 = t3683 + t3720;
  t3671 = t2496 + t2513;
  t2775 = -1.*t2707*t772;
  t2835 = -1.*t240*t83*t2707;
  t2919 = t2707*t970;
  t3421 = t240*t171*t1971;
  t3458 = t363*t1971;
  t3464 = t1722*t208;
  t1994 = -1.*t1826*t1796;
  t2008 = -1.*t1496*t1879;
  t2017 = t1982 + t1994 + t2008;
  t2080 = t1544*t1796;
  t2098 = t371*t1879;
  t2109 = t2072 + t2080 + t2098;
  t3552 = -1.*t240*t171*t1971;
  t2222 = t1826*t1796;
  t2235 = t1496*t1879;
  t2240 = t2216 + t2222 + t2235;
  t3588 = -1.*t422*t1722;
  t3599 = -1.*t1971*t462;
  t2322 = -1.*t1796*t2175;
  t2333 = -1.*t1879*t470;
  t2341 = t2306 + t2322 + t2333;
  t3675 = t240*t83*t3671;
  t3726 = -1.*t240*t171*t2707;
  t2727 = t1826*t2584;
  t2740 = t1496*t2635;
  t2748 = t2723 + t2727 + t2740;
  t3741 = -1.*t2707*t808;
  t3767 = -1.*t3671*t772;
  t2776 = -1.*t2584*t2400;
  t2778 = -1.*t2635*t822;
  t2779 = t2775 + t2776 + t2778;
  t3826 = -1.*t240*t83*t3671;
  t3836 = t240*t171*t2707;
  t2842 = -1.*t1826*t2584;
  t2850 = -1.*t1496*t2635;
  t2854 = t2835 + t2842 + t2850;
  t3888 = t3671*t970;
  t3892 = t2707*t1016;
  t2921 = t2584*t2812;
  t2922 = t2635*t1023;
  t2925 = t2919 + t2921 + t2922;
  t3531 = t84*t1597;
  t3565 = t240*t1597*t159;
  t4467 = 0.061053*t84;
  t4468 = -1.*t240*t1565;
  t4481 = t4467 + t4468;
  t4502 = -0.061053*t240;
  t4504 = t4502 + t1706;
  t3387 = -1.*t84*t1597;
  t3480 = t240*t40*t1597;
  t4719 = t2402 + t2464;
  t4738 = 0.078693*t84;
  t4739 = -1.*t240*t2438;
  t4742 = t4738 + t4739;
  t4751 = -0.078693*t240;
  t4763 = t4751 + t2505;
  t5137 = -1.*t40*t254*t84;
  t5141 = -1.*t240*t40*t289*t171;
  t5147 = t5137 + t5141;
  t5161 = t254*t84*t159;
  t5166 = t240*t159*t289*t171;
  t5167 = t5161 + t5166;
  t5181 = -1.*t254*t84*t753;
  t5182 = -1.*t240*t753*t289*t171;
  t5188 = t5181 + t5182;
  t5203 = -1.*t254*t84*t763;
  t5205 = -1.*t240*t763*t289*t171;
  t5206 = t5203 + t5205;
  t3390 = t240*t171*t1722;
  t3394 = t3387 + t3390 + t1982;
  t4644 = -1.*t240*t1597;
  t4665 = -1.*t84*t4504;
  t4623 = -1.*t40*t84*t1597;
  t4629 = t240*t40*t4504;
  t3484 = t363*t1722;
  t3488 = t3480 + t3484 + t2072;
  t3532 = -1.*t240*t171*t1722;
  t3536 = t3531 + t3532 + t2216;
  t5303 = Power(t83,2);
  t4494 = t240*t1597;
  t4511 = t84*t4504;
  t5310 = Power(t171,2);
  t4566 = -1.*t84*t1597*t159;
  t4591 = t240*t4504*t159;
  t3568 = -1.*t1722*t462;
  t3569 = t3565 + t2306 + t3568;
  t3657 = t84*t2467;
  t3658 = -1.*t240*t171*t2522;
  t3664 = t3657 + t3658 + t2723;
  t4926 = t84*t4763;
  t4952 = -1.*t240*t4763*t753;
  t3784 = -1.*t240*t2467*t753;
  t3785 = -1.*t2522*t808;
  t3795 = t3784 + t3785 + t2775;
  t3810 = -1.*t84*t2467;
  t3813 = t240*t171*t2522;
  t3817 = t3810 + t3813 + t2835;
  t4773 = -1.*t84*t4763;
  t4834 = t240*t4763*t763;
  t3857 = t240*t2467*t763;
  t3868 = t2522*t1016;
  t3869 = t3857 + t2919 + t3868;
  t5031 = -1.*t40*t84*t289;
  t5033 = t240*t40*t254*t171;
  t5035 = t5031 + t5033;
  t5111 = -1.*t84*t763*t289;
  t5115 = t240*t254*t763*t171;
  t5116 = t5111 + t5115;
  t5352 = -1.*t240*t40*t83*t1971;
  t5356 = t83*t4481*t208;
  t5307 = -1.*t240*t5303*t4481;
  t5851 = t4504*t289;
  t5857 = -1.*t254*t4481*t171;
  t5876 = t5851 + t5857;
  t5320 = t83*t84*t1971;
  t5880 = t254*t4504;
  t5884 = t4481*t289*t171;
  t5886 = t5880 + t5884;
  t5742 = t240*t289;
  t5753 = t254*t84*t171;
  t5755 = t5742 + t5753;
  t5051 = t84*t159*t289;
  t5059 = -1.*t240*t254*t159*t171;
  t5066 = t5051 + t5059;
  t5394 = t240*t5303*t4481;
  t5416 = -1.*t83*t84*t1971;
  t5951 = t240*t254;
  t5965 = -1.*t84*t289*t171;
  t5973 = t5951 + t5965;
  t5442 = -1.*t83*t4481*t422;
  t5453 = -1.*t240*t83*t159*t1971;
  t5073 = -1.*t84*t753*t289;
  t5079 = t240*t254*t753*t171;
  t5108 = t5073 + t5079;
  t5513 = t240*t5303*t4742;
  t5537 = -1.*t83*t84*t2707;
  t5564 = t240*t83*t753*t2707;
  t5578 = -1.*t83*t4742*t772;
  t6132 = t4763*t289;
  t6137 = -1.*t254*t4742*t171;
  t6142 = t6132 + t6137;
  t6151 = t254*t4763;
  t6171 = t4742*t289*t171;
  t6179 = t6151 + t6171;
  t5616 = -1.*t240*t5303*t4742;
  t5635 = t83*t84*t2707;
  t5676 = -1.*t240*t83*t763*t2707;
  t5679 = t83*t4742*t970;
  t4616 = -1.*t240*t1708;
  t4617 = t3387 + t4616;
  t6374 = 0.003468*t40;
  t6377 = 0.032736*t159;
  t6378 = t6374 + t6377;
  t4461 = t240*t1708;
  t4462 = t3531 + t4461;
  t4679 = -1.*t40*t84*t1708;
  t4685 = t1653*t159;
  t6368 = Power(t240,2);
  t6392 = Power(t84,2);
  t6333 = -1.*t40*t540;
  t6338 = t159*t627;
  t6341 = t6333 + t6338;
  t4722 = -1.*t84*t4719;
  t4734 = -1.*t240*t2508;
  t4735 = t4722 + t4734;
  t6442 = -0.1881*t40;
  t6443 = -1.*t40*t724;
  t6445 = -1.*t159*t658;
  t6447 = t6442 + t6443 + t6445;
  t4897 = t84*t4719;
  t4906 = t240*t2508;
  t4907 = t4897 + t4906;
  t6440 = t2403 + t2416 + t2427;
  t6492 = -1.*t83*t159;
  t6495 = -1.*t40*t84*t171;
  t6501 = t6492 + t6495;
  t6524 = t83*t753;
  t6525 = t84*t6341*t171;
  t6531 = t6524 + t6525;
  t6549 = -1.*t240*t40*t254;
  t6567 = -1.*t289*t6501;
  t6570 = t6549 + t6567;
  t1189 = t224*t422;
  t1190 = -1.*t36*t470;
  t1192 = t1189 + t1190;
  t1197 = t224*t772;
  t1199 = -1.*t36*t822;
  t1202 = t1197 + t1199;
  t6604 = -1.*t83*t84*t6341;
  t6606 = t753*t171;
  t6613 = t6604 + t6606;
  t6617 = t240*t254*t6341;
  t6622 = -1.*t289*t6531;
  t6623 = t6617 + t6622;
  t6390 = t6368*t40*t6378;
  t6399 = -1.*t240*t1597*t159;
  t6752 = t83*t1565;
  t6754 = t84*t6378*t171;
  t6760 = t6752 + t6754;
  t6746 = -1.*t83*t84*t6378;
  t6748 = t1565*t171;
  t6749 = t6746 + t6748;
  t6419 = t6368*t6378*t159;
  t6448 = t6368*t6447*t763;
  t6884 = -1.*t83*t84*t6447;
  t6888 = t6440*t171;
  t6889 = t6884 + t6888;
  t6901 = t83*t6440;
  t6907 = t84*t6447*t171;
  t6916 = t6901 + t6907;
  t6468 = -1.*t6368*t6447*t753;
  t6750 = -1.*t240*t83*t6749;
  t6768 = t422*t1971;
  t6772 = t6749*t208;
  t7057 = t240*t6378*t289;
  t7058 = t254*t6760;
  t7066 = t7057 + t7058;
  t7085 = t240*t254*t6378;
  t7089 = -1.*t289*t6760;
  t7105 = t7085 + t7089;
  t6505 = t254*t6501;
  t6507 = t1281 + t6505;
  t6809 = t240*t83*t6749;
  t6832 = -1.*t422*t6749;
  t6842 = -1.*t1971*t3061;
  t6893 = -1.*t240*t83*t6889;
  t6946 = t6889*t970;
  t6947 = t2707*t772;
  t7261 = t240*t6447*t289;
  t7264 = t254*t6916;
  t7265 = t7261 + t7264;
  t7279 = t240*t254*t6447;
  t7282 = -1.*t289*t6916;
  t7291 = t7279 + t7282;
  t6516 = t240*t6341*t289;
  t6532 = t254*t6531;
  t6534 = t6516 + t6532;
  t6976 = t240*t83*t6889;
  t6996 = -1.*t2707*t6613;
  t7001 = -1.*t6889*t772;
  t7434 = -0.12226899999999999*t540;
  t7435 = t7434 + t650;
  t7423 = -0.006286*t540;
  t7424 = 0.12226899999999999*t627;
  t7425 = t7423 + t7424;
  t7413 = 0.1881*t540;
  t7422 = t540*t724;
  t7428 = t540*t7425;
  t7432 = -1.*t658*t627;
  t7436 = t7435*t627;
  t7439 = t7413 + t7422 + t7428 + t7432 + t7436;
  t7442 = -1.*t540*t7435;
  t7443 = t7425*t627;
  t7447 = t669 + t7442 + t682 + t736 + t7443;
  t6325 = 1.e-6*t961;
  t6326 = 0.000029*t763;
  t6330 = 0.012434674395*t753*t938;
  t6332 = 0.125443*t763;
  t6342 = 0.04675*t6341;
  t6344 = t6332 + t6342;
  t6352 = -0.158015*t743*t6344;
  t6429 = 0.000029*t240*t753;
  t6430 = -1.e-6*t240*t6341;
  t4785 = t2495*t961;
  t4787 = t240*t4719*t763;
  t4791 = -1.*t84*t2508*t763;
  t4792 = t4785 + t4787 + t4791;
  t4961 = -1.*t240*t4719*t753;
  t4965 = t84*t2508*t753;
  t4969 = -1.*t2495*t763;
  t4971 = t4961 + t4965 + t4969;
  t6431 = t240*t4735*t753;
  t6434 = t240*t4719*t753;
  t6438 = -1.*t84*t2508*t753;
  t6452 = t2495*t763;
  t7556 = -1.*t159*t7435;
  t7557 = t40*t7425;
  t7562 = t7556 + t7557;
  t6465 = t240*t4907*t6341;
  t6474 = -1.*t2495*t753;
  t7539 = t40*t7435;
  t7542 = t159*t7425;
  t7547 = t7539 + t7542;
  t6476 = -1.*t240*t4719*t6341;
  t6478 = t84*t2508*t6341;
  t6511 = -0.158015*t938*t2400;
  t6539 = -0.158015*t743*t6534;
  t6584 = t36*t772;
  t6593 = t224*t822;
  t6597 = t6584 + t6593;
  t6603 = -0.158015*t938*t6597;
  t6616 = t36*t6613;
  t6626 = t224*t6623;
  t6628 = t6616 + t6626;
  t6630 = -0.158015*t743*t6628;
  t6686 = -0.158015*t938*t1202;
  t1207 = t224*t970;
  t1235 = -1.*t36*t1023;
  t1238 = t1207 + t1235;
  t6690 = t224*t6613;
  t6691 = -1.*t36*t6623;
  t6692 = t6690 + t6691;
  t6693 = -0.158015*t743*t6692;
  t6712 = t83*t84*t6341;
  t6714 = -1.*t753*t171;
  t6715 = t6712 + t6714;
  t6716 = 1.e-6*t6715;
  t6723 = 0.000029*t772;
  t6931 = t772*t3817;
  t6933 = t240*t2467*t753;
  t7572 = t6368*t7562*t763;
  t6943 = t2522*t808;
  t7725 = -1.*t83*t84*t7562;
  t7728 = t7547*t171;
  t7731 = t7725 + t7728;
  t7715 = t83*t7547;
  t7716 = t84*t7562*t171;
  t7719 = t7715 + t7716;
  t6990 = t6613*t3664;
  t7603 = -1.*t6368*t7562*t753;
  t6992 = -1.*t240*t2467*t6341;
  t7005 = -1.*t2522*t6531;
  t7042 = 0.000029*t2400;
  t7043 = -1.*t240*t6341*t289;
  t7045 = -1.*t254*t6531;
  t7051 = t7043 + t7045;
  t7052 = 1.e-6*t7051;
  t7259 = t2400*t2854;
  t7733 = -1.*t240*t83*t7731;
  t7744 = t7731*t970;
  t7305 = t2584*t2400;
  t7318 = t2635*t822;
  t7814 = t240*t7562*t289;
  t7815 = t254*t7719;
  t7820 = t7814 + t7815;
  t7824 = t240*t254*t7562;
  t7825 = -1.*t289*t7719;
  t7828 = t7824 + t7825;
  t7337 = t6534*t2748;
  t7763 = t240*t83*t7731;
  t7771 = -1.*t7731*t772;
  t7369 = -1.*t2584*t6534;
  t7371 = -1.*t2635*t6623;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.0031174510920000003*(-1.*t208*t36 - 1.*t224*t371) + 0.029427012384*(-1.*t36*t422 - 1.*t224*t470) - 0.158015*t743*(-1.*t36*t772 - 1.*t224*t822) - 0.158015*t938*(-1.*t1023*t224 - 1.*t36*t970))*var2[1] - 0.5*(0.029427012384*t1192 - 0.0031174510920000003*(t208*t224 - 1.*t36*t371) - 0.158015*t1202*t743 - 0.158015*t1238*t938)*var2[2])*var2[13];
  p_output1[4]=(-0.5*(-0.0031174510920000003*t371 + 0.029427012384*t470 - 0.158015*t743*t822 - 0.158015*t1023*t938)*var2[0] - 0.5*(0.0031174510920000003*t1295*t36 - 0.029427012384*t1305*t36 + 0.158015*t1319*t36*t743 + 0.158015*t1327*t36*t938)*var2[1] - 0.5*(-0.0031174510920000003*t1295*t224 + 0.029427012384*t1305*t224 - 0.158015*t1319*t224*t743 - 0.158015*t1327*t224*t938)*var2[2] - 0.5*(0.000029*t1023 - 0.008769*t1496 - 6.e-6*t371 + 0.029427012384*(t1544*(-1.*t1496*t1738 - 1.*t1496*t1796 - 1.*t1826*t1879 - 1.*t1879*t1907) + t1496*t2109 + t2017*t371 + t1826*(t1295*t1879 + t1544*t1879 + t1738*t371 + t1796*t371)) - 0.0031174510920000003*((t1496*t1738 + t1496*t1796 + t1826*t1879 + t1879*t1907)*t2175 + t1496*t2341 + t2240*t470 + t1826*(-1.*t1305*t1879 - 1.*t1879*t2175 - 1.*t1738*t470 - 1.*t1796*t470)) - 0.158015*((-1.*t1496*t2543 - 1.*t1496*t2584 - 1.*t1826*t2610 - 1.*t1907*t2635)*t2812 + t1826*(t1023*t2543 + t1023*t2584 + t1327*t2635 + t2610*t2812) + t1023*t2854 + t1496*t2925)*t743 + 1.e-6*(-1.*t240*t254*t753 + t289*t808) - 0.158015*(t2400*(t1496*t2543 + t1496*t2584 + t1826*t2610 + t1907*t2635) + t1496*t2779 + t2748*t822 + t1826*(-1.*t2400*t2610 - 1.*t1319*t2635 - 1.*t2543*t822 - 1.*t2584*t822))*t938)*var2[3])*var2[13];
  p_output1[5]=(-0.5*(0.029427012384*t254*t3023 - 0.0031174510920000003*t254*t3061 - 0.158015*t254*t3165*t743 - 0.158015*t254*t3110*t938)*var2[0] - 0.5*(-0.0031174510920000003*(t289*t3061*t36 + t224*t363) + 0.029427012384*(t289*t3023*t36 + t224*t462) - 0.158015*t743*(t289*t3165*t36 + t224*t808) - 0.158015*(t1016*t224 + t289*t3110*t36)*t938)*var2[1] - 0.5*(-0.0031174510920000003*(-1.*t224*t289*t3061 + t36*t363) + 0.029427012384*(-1.*t224*t289*t3023 + t36*t462) - 0.158015*t743*(-1.*t224*t289*t3165 + t36*t808) - 0.158015*(-1.*t224*t289*t3110 + t1016*t36)*t938)*var2[2] - 0.5*(-6.e-6*t254*t3061 + 0.000029*t254*t3110 - 1.e-6*t254*t3165 + 0.008769*t240*t254*t83 + 0.029427012384*(t2017*t254*t3061 + t1826*(t1796*t254*t3061 - 1.*t1879*t289*t3061 + t1544*t254*t3401 + t3458 + t3464 - 1.*t289*t3401*t371) - 1.*t2109*t240*t254*t83 + t1544*(-1.*t1826*t254*t3401 + t1496*t289*t3401 + t3421 - 1.*t1722*t240*t83 + t1796*t240*t254*t83 - 1.*t1879*t240*t289*t83)) - 0.0031174510920000003*(t2240*t254*t3023 + t1826*(-1.*t1796*t254*t3023 + t1879*t289*t3023 - 1.*t2175*t254*t3401 + t3588 + t3599 + t289*t3401*t470) - 1.*t2341*t240*t254*t83 + t2175*(t1826*t254*t3401 - 1.*t1496*t289*t3401 + t3552 + t1722*t240*t83 - 1.*t1796*t240*t254*t83 + t1879*t240*t289*t83)) - 0.158015*t743*(t254*t2854*t3110 + t1826*(t254*t2584*t3110 - 1.*t2635*t289*t3110 + t254*t2812*t3724 - 1.*t1023*t289*t3724 + t3888 + t3892) - 1.*t240*t254*t2925*t83 + t2812*(-1.*t1826*t254*t3724 + t1496*t289*t3724 + t3826 + t3836 + t240*t254*t2584*t83 - 1.*t240*t2635*t289*t83)) - 0.158015*(t254*t2748*t3165 + t1826*(-1.*t254*t2584*t3165 + t2635*t289*t3165 - 1.*t2400*t254*t3724 + t3741 + t3767 + t289*t3724*t822) - 1.*t240*t254*t2779*t83 + t2400*(t3675 + t1826*t254*t3724 - 1.*t1496*t289*t3724 + t3726 - 1.*t240*t254*t2584*t83 + t240*t2635*t289*t83))*t938)*var2[3] - 0.5*(0.000029*t1016 + 0.008769*t171*t240 - 6.e-6*t363 + 0.029427012384*(t208*(t171*t240*t3401 + t3421) - 1.*t171*t240*t3488 + t3394*t363 + t240*(t1722*t3061 + t3458 + t3464 + t3401*t363)*t83) - 0.0031174510920000003*(-1.*t171*t240*t3569 + (-1.*t171*t240*t3401 + t3552)*t422 + t3536*t462 + t240*(-1.*t1722*t3023 + t3588 + t3599 - 1.*t3401*t462)*t83) + 1.e-6*(-1.*t763*t83 - 1.*t171*t753*t84) - 0.158015*(-1.*t171*t240*t3795 + t3664*t808 + t240*(-1.*t2522*t3165 + t3741 + t3767 - 1.*t3724*t808)*t83 + t772*(t3675 - 1.*t171*t240*t3724 + t3726 - 1.*t240*t2522*t83))*t938 - 0.158015*t743*(t1016*t3817 - 1.*t171*t240*t3869 + t240*(t2522*t3110 + t1016*t3724 + t3888 + t3892)*t83 + (t171*t240*t3724 + t3826 + t3836 + t240*t2522*t83)*t970))*var2[4])*var2[13];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.5*(-0.0031174510920000003*t5035 + 0.029427012384*t5066 - 0.158015*t5108*t743 - 0.158015*t5116*t938)*var2[0] - 0.5*(0.029427012384*(-1.*t36*t5167 + t159*t224*t240*t83) - 0.0031174510920000003*(-1.*t36*t5147 - 1.*t224*t240*t40*t83) - 0.158015*t743*(-1.*t36*t5188 - 1.*t224*t240*t753*t83) - 0.158015*(-1.*t36*t5206 - 1.*t224*t240*t763*t83)*t938)*var2[1] - 0.5*(0.029427012384*(t224*t5167 + t159*t240*t36*t83) - 0.0031174510920000003*(t224*t5147 - 1.*t240*t36*t40*t83) - 0.158015*t743*(t224*t5188 - 1.*t240*t36*t753*t83) - 0.158015*(t224*t5206 - 1.*t240*t36*t763*t83)*t938)*var2[2] - 0.5*(-6.e-6*t5035 + 0.000029*t5116 - 0.008769*t5755 + 0.029427012384*(t2017*t5035 + t2109*t5755 + t1826*(t1796*t5035 + t1879*t5147 + t5352 + t5356 + t1544*t5876 + t371*t5886) + t1544*(t5307 + t5320 - 1.*t1796*t5755 - 1.*t1826*t5876 - 1.*t1496*t5886 - 1.*t1879*t5973)) - 0.0031174510920000003*(t2240*t5066 + t2341*t5755 + t1826*(-1.*t1796*t5066 - 1.*t1879*t5167 + t5442 + t5453 - 1.*t2175*t5876 - 1.*t470*t5886) + t2175*(t5394 + t5416 + t1796*t5755 + t1826*t5876 + t1496*t5886 + t1879*t5973)) - 0.158015*(t2854*t5116 + t2925*t5755 + t1826*(t2584*t5116 + t2635*t5206 + t5676 + t5679 + t2812*t6142 + t1023*t6179) + t2812*(t5616 + t5635 - 1.*t2584*t5755 - 1.*t2635*t5973 - 1.*t1826*t6142 - 1.*t1496*t6179))*t743 + 1.e-6*(-1.*t171*t240*t254*t753 + t289*t753*t84) - 0.158015*(t2748*t5108 + t2779*t5755 + t2400*(t5513 + t5537 + t2584*t5755 + t2635*t5973 + t1826*t6142 + t1496*t6179) + t1826*(-1.*t2584*t5108 - 1.*t2635*t5188 + t5564 + t5578 - 1.*t2400*t6142 - 1.*t6179*t822))*t938)*var2[3] - 0.5*(6.e-6*t240*t40*t83 + 1.e-6*t240*t753*t83 - 0.000029*t240*t763*t83 + 0.008769*t83*t84 + 0.029427012384*(-1.*t240*t3394*t40*t83 + t240*(t171*t1722*t240*t40 - 1.*t171*t363*t4481 + t4623 + t4629 + t5352 + t5356)*t83 - 1.*t3488*t83*t84 + t208*(t4644 + t4665 + t5307 - 1.*t240*t4481*t5310 + t5320 - 1.*t171*t1722*t84)) - 0.0031174510920000003*(t159*t240*t3536*t83 + t240*(t159*t171*t1722*t240 + t4566 + t4591 + t171*t4481*t462 + t5442 + t5453)*t83 - 1.*t3569*t83*t84 + t422*(t4494 + t4511 + t240*t4481*t5310 + t5394 + t5416 + t171*t1722*t84)) - 0.158015*(-1.*t240*t3664*t753*t83 - 1.*t3795*t83*t84 + t772*(t240*t2467 + t4926 + t240*t4742*t5310 + t5513 + t5537 + t171*t2522*t84) + t240*t83*(t4952 + t5564 + t5578 - 1.*t171*t240*t2522*t753 + t171*t4742*t808 + t2467*t753*t84))*t938 - 0.158015*t743*(-1.*t240*t3817*t763*t83 - 1.*t3869*t83*t84 + t240*t83*(-1.*t1016*t171*t4742 + t4834 + t5676 + t5679 + t171*t240*t2522*t763 - 1.*t2467*t763*t84) + (-1.*t240*t2467 + t4773 - 1.*t240*t4742*t5310 + t5616 + t5635 - 1.*t171*t2522*t84)*t970))*var2[4] - 0.5*(-0.008769*t240 + 6.e-6*t40*t84 + 1.e-6*t753*t84 - 0.000029*t763*t84 - 0.0031174510920000003*(t159*t4462*t84 - 1.*t159*t240*(t240*t4481 + t4494 + t4511 - 1.*t1708*t84) + t240*(t3565 - 1.*t1653*t40 - 1.*t159*t1708*t84) + t84*(-1.*t159*t1708*t240 + t4566 + t4591 - 1.*t159*t4481*t84)) + 0.029427012384*(t240*(t3480 + t4679 + t4685) - 1.*t40*t4617*t84 + t240*t40*(-1.*t240*t4481 + t4644 + t4665 + t1708*t84) + t84*(-1.*t1708*t240*t40 + t4623 + t4629 - 1.*t40*t4481*t84)) - 0.158015*t743*(t240*t4792 - 1.*t4735*t763*t84 + t240*t763*(-1.*t240*t4719 - 1.*t240*t4742 + t4773 + t2508*t84) + t84*(t4834 - 1.*t240*t2508*t763 - 1.*t4719*t763*t84 - 1.*t4742*t763*t84)) - 0.158015*(t240*t4971 - 1.*t4907*t753*t84 + t240*t753*(t240*t4719 + t240*t4742 + t4926 - 1.*t2508*t84) + t84*(t4952 + t240*t2508*t753 + t4719*t753*t84 + t4742*t753*t84))*t938)*var2[5])*var2[13];
  p_output1[13]=(-0.5*(-0.0031174510920000003*t2175 + 0.029427012384*t6507 + t6511 + t6539)*var2[0] - 0.5*(-0.0031174510920000003*t1192 + 0.029427012384*(t224*t3061 - 1.*t36*t6570) + t6686 + t6693)*var2[1] - 0.5*(-0.0031174510920000003*(t36*t422 + t224*t470) + 0.029427012384*(t3061*t36 + t224*t6570) + t6603 + t6630)*var2[2] - 0.5*(-6.e-6*t2175 + t7042 + t7052 + 0.029427012384*(t2017*t2175 + t1544*(t6750 - 1.*t1826*t7066 - 1.*t1496*t7105) + t1826*(t1796*t2175 + t1879*t470 + t6768 + t6772 + t1544*t7066 + t371*t7105)) - 0.0031174510920000003*(t2240*t6507 + t2175*(t6809 + t1826*t7066 + t1496*t7105) + t1826*(-1.*t1796*t6507 - 1.*t1879*t6570 + t6832 + t6842 - 1.*t2175*t7066 - 1.*t470*t7105)) - 0.158015*(t7259 + t2812*(t6893 - 1.*t1826*t7265 - 1.*t1496*t7291) + t1826*(t6946 + t6947 + t2812*t7265 + t1023*t7291 + t7305 + t7318))*t743 - 0.158015*(t2400*(t6976 + t1826*t7265 + t1496*t7291) + t7337 + t1826*(t6996 + t7001 - 1.*t2400*t7265 + t7369 + t7371 - 1.*t7291*t822))*t938)*var2[3] - 0.5*(-6.e-6*t422 + t6716 + t6723 + 0.029427012384*(t3394*t422 + t240*(t1722*t462 + t6390 + t6399 + t363*t6760 + t6768 + t6772)*t83 + t208*(t6750 + t171*t240*t6760 - 1.*t240*t6378*t84)) - 0.0031174510920000003*(t3061*t3536 + t240*(t3480 + t6419 - 1.*t1722*t6501 - 1.*t462*t6760 + t6832 + t6842)*t83 + t422*(-1.*t171*t240*t6760 + t6809 + t240*t6378*t84)) - 0.158015*(t6990 + t240*(t6468 + t6992 + t6996 + t7001 + t7005 - 1.*t6916*t808)*t83 + t772*(-1.*t171*t240*t6916 + t6976 + t240*t6447*t84))*t938 - 0.158015*t743*(t6931 + t240*(t6448 + t1016*t6916 + t6933 + t6943 + t6946 + t6947)*t83 + (t6893 + t171*t240*t6916 - 1.*t240*t6447*t84)*t970))*var2[4] - 0.5*(6.e-6*t159*t240 + t6429 + t6430 - 0.0031174510920000003*(-1.*t240*t40*t4462 + (t3480 - 1.*t1565*t40 + t4679 + t4685 + t159*t6378*t6392 + t6419)*t84) + 0.029427012384*(-1.*t159*t240*t4617 + t84*(t1565*t159 + t1653*t40 + t6390 + t40*t6378*t6392 + t6399 + t159*t1708*t84)) - 0.158015*(t6465 + (t6468 + t6474 + t6476 + t6478 - 1.*t6392*t6447*t753 - 1.*t6440*t763)*t84)*t938 - 0.158015*t743*(t6431 + t84*(t6434 + t6438 + t6448 + t6452 + t6392*t6447*t763 + t6440*t961)))*var2[5] - 0.5*(-0.00019032974151987603*t159 + 0.0017906073870803522*t40 + t6325 + t6326 + t6330 + t6352)*var2[12])*var2[13];
  p_output1[14]=var2[13]*(-0.5*(t6511 + t6539 - 0.158015*t2400*t7439 - 0.158015*t2812*t7447)*var2[0] - 0.5*(t6686 + t6693 - 0.158015*t1202*t7439 - 0.158015*t1238*t7447)*var2[1] - 0.5*(t6603 + t6630 - 0.158015*t6597*t7439 - 0.158015*t7447*(t1023*t224 + t36*t970))*var2[2] - 0.5*(t7042 + t7052 - 0.158015*(t2812*t2854 + t1826*t2925)*t7439 - 0.158015*(t2400*t2748 + t1826*t2779)*t7447 - 0.158015*t743*(t7259 + t1826*(t6947 + t7305 + t7318 + t7744 + t2812*t7820 + t1023*t7828) + t2812*(t7733 - 1.*t1826*t7820 - 1.*t1496*t7828)) - 0.158015*(t7337 + t2400*(t7763 + t1826*t7820 + t1496*t7828) + t1826*(t6996 + t7369 + t7371 + t7771 - 1.*t2400*t7820 - 1.*t7828*t822))*t938)*var2[3] - 0.5*(t6716 + t6723 - 0.158015*t7447*(t3664*t772 + t240*t3795*t83) - 0.158015*(t6990 + t240*(t6992 + t6996 + t7005 + t7603 + t7771 - 1.*t7719*t808)*t83 + t772*(-1.*t171*t240*t7719 + t7763 + t240*t7562*t84))*t938 - 0.158015*t7439*(t240*t3869*t83 + t3817*t970) - 0.158015*t743*(t6931 + t240*(t6933 + t6943 + t6947 + t7572 + t1016*t7719 + t7744)*t83 + (t171*t240*t7719 + t7733 - 1.*t240*t7562*t84)*t970))*var2[4] - 0.5*(t6429 + t6430 - 0.158015*t7439*(t240*t4735*t763 + t4792*t84) - 0.158015*t7447*(t240*t4907*t753 + t4971*t84) - 0.158015*(t6465 + (t6474 + t6476 + t6478 - 1.*t6392*t753*t7562 + t7603 - 1.*t7547*t763)*t84)*t938 - 0.158015*t743*(t6431 + t84*(t6434 + t6438 + t6452 + t7572 + t6392*t7562*t763 + t7547*t961)))*var2[5] - 0.5*(t6325 + t6326 + t6330 + t6352 - 0.158015*t7447*(0. - 0.078693*t763) - 0.158015*t7439*(0. + 0.04675*t753 + 0.125443*t961))*var2[12] - 0.5*(-0.31603*t743*t7439 - 0.31603*t7447*t938)*var2[13] - 0.5*(0.019320336034999996*t7439 + 0.0009932822899999978*t7447)*var2[14]);
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

#include "Ce3_vec14_go1_description.hh"

namespace SymFunction
{

void Ce3_vec14_go1_description_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE