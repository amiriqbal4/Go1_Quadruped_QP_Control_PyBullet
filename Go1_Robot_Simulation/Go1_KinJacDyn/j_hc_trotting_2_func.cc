/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:51:02 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t330;
  double t592;
  double t376;
  double t189;
  double t930;
  double t381;
  double t1150;
  double t1291;
  double t1747;
  double t1803;
  double t1845;
  double t1851;
  double t1906;
  double t1670;
  double t1890;
  double t1920;
  double t1927;
  double t1958;
  double t1975;
  double t4162;
  double t4168;
  double t4173;
  double t2898;
  double t4202;
  double t4205;
  double t4228;
  double t3826;
  double t3878;
  double t4232;
  double t4244;
  double t4247;
  double t3970;
  double t4002;
  double t4296;
  double t4302;
  double t4303;
  double t4305;
  double t4390;
  double t4384;
  double t4423;
  double t4435;
  double t4440;
  double t4441;
  double t4445;
  double t4446;
  double t4392;
  double t4450;
  double t4451;
  double t4492;
  double t4493;
  double t4494;
  double t4466;
  double t4471;
  double t4544;
  double t4547;
  double t4548;
  double t4616;
  double t4617;
  double t4622;
  double t4623;
  double t4624;
  double t4630;
  double t4673;
  double t4679;
  double t4684;
  double t4685;
  double t4688;
  double t4690;
  double t4715;
  double t4716;
  double t4717;
  double t4718;
  double t4719;
  double t4720;
  double t4764;
  double t4766;
  double t4767;
  double t4769;
  double t4772;
  double t4780;
  double t4804;
  double t4808;
  double t4810;
  double t4815;
  double t4816;
  double t4819;
  double t4871;
  double t4872;
  double t4873;
  double t4879;
  double t4884;
  double t4888;
  double t4902;
  double t4904;
  double t4910;
  double t4925;
  double t4926;
  double t4929;
  double t4931;
  double t4932;
  double t4935;
  double t4957;
  double t4959;
  double t4960;
  double t4970;
  double t4971;
  double t4972;
  double t4973;
  double t4977;
  double t4978;
  double t5014;
  double t5015;
  double t5016;
  double t5017;
  double t5019;
  double t5020;
  double t5044;
  double t5045;
  double t5049;
  double t5050;
  double t5051;
  double t5052;
  double t5074;
  double t5075;
  double t5076;
  double t5088;
  double t5089;
  double t5090;
  double t5091;
  double t5093;
  double t5094;
  double t4316;
  double t5110;
  double t5111;
  double t5128;
  double t5129;
  double t5135;
  double t5137;
  double t5139;
  double t5140;
  double t5097;
  double t5160;
  double t5161;
  double t5162;
  double t5163;
  double t5164;
  double t5165;
  double t5169;
  double t5114;
  double t5184;
  double t5189;
  double t5190;
  double t5191;
  double t5192;
  double t5193;
  double t5194;
  double t5235;
  double t5236;
  double t5237;
  double t5244;
  double t5245;
  double t5246;
  double t4557;
  double t5257;
  double t5258;
  double t5269;
  double t5268;
  double t5270;
  double t5271;
  double t5248;
  double t5282;
  double t5283;
  double t5281;
  double t5284;
  double t5285;
  double t5260;
  double t5295;
  double t5296;
  double t5297;
  double t5298;
  double t5299;
  t330 = Cos(var1[5]);
  t592 = Sin(var1[3]);
  t376 = Sin(var1[4]);
  t189 = Cos(var1[3]);
  t930 = Sin(var1[5]);
  t381 = t189*t330*t376;
  t1150 = t592*t930;
  t1291 = t381 + t1150;
  t1747 = Cos(var1[6]);
  t1803 = -1.*t330*t592*t376;
  t1845 = t189*t930;
  t1851 = t1803 + t1845;
  t1906 = Sin(var1[6]);
  t1670 = Cos(var1[7]);
  t1890 = t1747*t1851;
  t1920 = -1.*t1906;
  t1927 = 0. + t1920;
  t1958 = t1291*t1927;
  t1975 = t1890 + t1958;
  t4162 = -1.*t330*t592;
  t4168 = t189*t376*t930;
  t4173 = t4162 + t4168;
  t2898 = 0. + t1747;
  t4202 = -1.*t189*t330;
  t4205 = -1.*t592*t376*t930;
  t4228 = t4202 + t4205;
  t3826 = Cos(var1[8]);
  t3878 = 0. + t3826;
  t4232 = t1747*t4228;
  t4244 = t4173*t1927;
  t4247 = t4232 + t4244;
  t3970 = Sin(var1[7]);
  t4002 = Sin(var1[8]);
  t4296 = Cos(var1[4]);
  t4302 = -1.*t4296*t1747*t592;
  t4303 = t189*t4296*t1927;
  t4305 = t4302 + t4303;
  t4390 = Cos(var1[15]);
  t4384 = Sin(var1[15]);
  t4423 = Cos(var1[16]);
  t4435 = t4390*t1851;
  t4440 = -1.*t4384;
  t4441 = 0. + t4440;
  t4445 = t4441*t1291;
  t4446 = t4435 + t4445;
  t4392 = 0. + t4390;
  t4450 = Cos(var1[17]);
  t4451 = 0. + t4450;
  t4492 = t4441*t4173;
  t4493 = t4390*t4228;
  t4494 = t4492 + t4493;
  t4466 = Sin(var1[16]);
  t4471 = Sin(var1[17]);
  t4544 = t189*t4296*t4441;
  t4547 = -1.*t4390*t4296*t592;
  t4548 = t4544 + t4547;
  t4616 = t189*t4296*t330*t1747;
  t4617 = t4296*t330*t592*t1927;
  t4622 = t4616 + t4617;
  t4623 = t1670*t4622;
  t4624 = -1.*t330*t376*t3970;
  t4630 = t4623 + t4624;
  t4673 = t189*t4296*t1747*t930;
  t4679 = t4296*t592*t930*t1927;
  t4684 = t4673 + t4679;
  t4685 = t1670*t4684;
  t4688 = -1.*t376*t930*t3970;
  t4690 = t4685 + t4688;
  t4715 = -1.*t189*t1747*t376;
  t4716 = -1.*t592*t376*t1927;
  t4717 = t4715 + t4716;
  t4718 = t1670*t4717;
  t4719 = -1.*t4296*t3970;
  t4720 = t4718 + t4719;
  t4764 = t4390*t189*t4296*t330;
  t4766 = t4296*t330*t4441*t592;
  t4767 = t4764 + t4766;
  t4769 = t4423*t4767;
  t4772 = -1.*t330*t4466*t376;
  t4780 = t4769 + t4772;
  t4804 = -1.*t4466*t376*t930;
  t4808 = t4390*t189*t4296*t930;
  t4810 = t4296*t4441*t592*t930;
  t4815 = t4808 + t4810;
  t4816 = t4423*t4815;
  t4819 = t4804 + t4816;
  t4871 = -1.*t4296*t4466;
  t4872 = -1.*t4390*t189*t376;
  t4873 = -1.*t4441*t592*t376;
  t4879 = t4872 + t4873;
  t4884 = t4423*t4879;
  t4888 = t4871 + t4884;
  t4902 = t330*t592;
  t4904 = -1.*t189*t376*t930;
  t4910 = t4902 + t4904;
  t4925 = t1747*t4910;
  t4926 = t4228*t1927;
  t4929 = t4925 + t4926;
  t4931 = t1670*t4929;
  t4932 = -1.*t4296*t930*t3970;
  t4935 = t4931 + t4932;
  t4957 = t330*t592*t376;
  t4959 = -1.*t189*t930;
  t4960 = t4957 + t4959;
  t4970 = t1747*t1291;
  t4971 = t4960*t1927;
  t4972 = t4970 + t4971;
  t4973 = t1670*t4972;
  t4977 = t4296*t330*t3970;
  t4978 = t4973 + t4977;
  t5014 = -1.*t4296*t4466*t930;
  t5015 = t4390*t4910;
  t5016 = t4441*t4228;
  t5017 = t5015 + t5016;
  t5019 = t4423*t5017;
  t5020 = t5014 + t5019;
  t5044 = t4296*t330*t4466;
  t5045 = t4441*t4960;
  t5049 = t4390*t1291;
  t5050 = t5045 + t5049;
  t5051 = t4423*t5050;
  t5052 = t5044 + t5051;
  t5074 = -1.*t1747*t4960;
  t5075 = -1.*t1291*t1906;
  t5076 = t5074 + t5075;
  t5088 = t189*t330;
  t5089 = t592*t376*t930;
  t5090 = t5088 + t5089;
  t5091 = -1.*t1747*t5090;
  t5093 = -1.*t4173*t1906;
  t5094 = t5091 + t5093;
  t4316 = -1.*t4296*t592*t1906;
  t5110 = -1.*t189*t4296*t1906;
  t5111 = t4302 + t5110;
  t5128 = t4296*t330;
  t5129 = 0. + t5128;
  t5135 = t5129*t1670;
  t5137 = 0. + t4970 + t4971;
  t5139 = -1.*t5137*t3970;
  t5140 = t5135 + t5139;
  t5097 = t1747*t4173;
  t5160 = t4296*t930;
  t5161 = 0. + t5160;
  t5162 = t1670*t5161;
  t5163 = t5090*t1927;
  t5164 = 0. + t5097 + t5163;
  t5165 = -1.*t5164*t3970;
  t5169 = t5162 + t5165;
  t5114 = t189*t4296*t1747;
  t5184 = -1.*t376;
  t5189 = 0. + t5184;
  t5190 = t1670*t5189;
  t5191 = t4296*t592*t1927;
  t5192 = 0. + t5114 + t5191;
  t5193 = -1.*t5192*t3970;
  t5194 = t5190 + t5193;
  t5235 = -1.*t4390*t4960;
  t5236 = -1.*t4384*t1291;
  t5237 = t5235 + t5236;
  t5244 = -1.*t4384*t4173;
  t5245 = -1.*t4390*t5090;
  t5246 = t5244 + t5245;
  t4557 = -1.*t4296*t4384*t592;
  t5257 = -1.*t189*t4296*t4384;
  t5258 = t5257 + t4547;
  t5269 = 0. + t5045 + t5049;
  t5268 = t4423*t5129;
  t5270 = -1.*t4466*t5269;
  t5271 = t5268 + t5270;
  t5248 = t4390*t4173;
  t5282 = t4441*t5090;
  t5283 = 0. + t5248 + t5282;
  t5281 = t4423*t5161;
  t5284 = -1.*t4466*t5283;
  t5285 = t5281 + t5284;
  t5260 = t4390*t189*t4296;
  t5295 = t4296*t4441*t592;
  t5296 = 0. + t5260 + t5295;
  t5297 = -1.*t4466*t5296;
  t5298 = t4423*t5189;
  t5299 = t5297 + t5298;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=1.;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=1.;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=1.;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=1.;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=1.;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=1.;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=1.;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=-0.04675*t1291 - 0.213*t1670*t1975 - 0.08*(t1851*t1906 + t1291*t2898) - 0.213*(t1670*t1975*t3878 - 1.*t1975*t3970*t4002);
  p_output1[43]=-0.04675*t4173 - 0.08*(t2898*t4173 + t1906*t4228) - 0.213*t1670*t4247 - 0.213*(t1670*t3878*t4247 - 1.*t3970*t4002*t4247);
  p_output1[44]=-0.04675*t189*t4296 - 0.213*t1670*t4305 - 0.213*(t1670*t3878*t4305 - 1.*t3970*t4002*t4305) - 0.08*(t189*t2898*t4296 + t4316);
  p_output1[45]=0.04675*t1291 + 0.08*(t1851*t4384 + t1291*t4392) - 0.213*t4423*t4446 - 0.213*(t4423*t4446*t4451 - 1.*t4446*t4466*t4471);
  p_output1[46]=0.04675*t4173 + 0.08*(t4228*t4384 + t4173*t4392) - 0.213*t4423*t4494 - 0.213*(t4423*t4451*t4494 - 1.*t4466*t4471*t4494);
  p_output1[47]=0.04675*t189*t4296 - 0.213*t4423*t4548 - 0.213*(t4423*t4451*t4548 - 1.*t4466*t4471*t4548) + 0.08*(t189*t4296*t4392 + t4557);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=1.;
  p_output1[53]=0;
  p_output1[54]=-0.1881*t330*t376 - 0.213*t4630 - 0.213*(t4002*(-1.*t1670*t330*t376 - 1.*t3970*t4622) + t3878*t4630) - 0.04675*t330*t4296*t592 - 0.08*(t189*t1906*t330*t4296 + t2898*t330*t4296*t592);
  p_output1[55]=-0.213*t4690 - 0.1881*t376*t930 - 0.04675*t4296*t592*t930 - 0.08*(t189*t1906*t4296*t930 + t2898*t4296*t592*t930) - 0.213*(t3878*t4690 + t4002*(-1.*t3970*t4684 - 1.*t1670*t376*t930));
  p_output1[56]=-0.1881*t4296 - 0.213*t4720 - 0.213*(t4002*(-1.*t1670*t4296 - 1.*t3970*t4717) + t3878*t4720) + 0.04675*t376*t592 - 0.08*(-1.*t189*t1906*t376 - 1.*t2898*t376*t592);
  p_output1[57]=0.1881*t330*t376 - 0.213*t4780 - 0.213*(t4471*(-1.*t330*t376*t4423 - 1.*t4466*t4767) + t4451*t4780) + 0.04675*t330*t4296*t592 + 0.08*(t189*t330*t4296*t4384 + t330*t4296*t4392*t592);
  p_output1[58]=-0.213*t4819 + 0.1881*t376*t930 + 0.04675*t4296*t592*t930 + 0.08*(t189*t4296*t4384*t930 + t4296*t4392*t592*t930) - 0.213*(t4451*t4819 + t4471*(-1.*t4466*t4815 - 1.*t376*t4423*t930));
  p_output1[59]=0.1881*t4296 - 0.213*t4888 - 0.213*(t4471*(-1.*t4296*t4423 - 1.*t4466*t4879) + t4451*t4888) - 0.04675*t376*t592 + 0.08*(-1.*t189*t376*t4384 - 1.*t376*t4392*t592);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=1.;
  p_output1[66]=-0.04675*t4228 - 0.08*(t2898*t4228 + t1906*t4910) - 0.213*t4935 - 0.1881*t4296*t930 - 0.213*(t3878*t4935 + t4002*(-1.*t3970*t4929 - 1.*t1670*t4296*t930));
  p_output1[67]=0.1881*t330*t4296 - 0.04675*t4960 - 0.08*(t1291*t1906 + t2898*t4960) - 0.213*t4978 - 0.213*(t4002*(t1670*t330*t4296 - 1.*t3970*t4972) + t3878*t4978);
  p_output1[68]=0;
  p_output1[69]=0.04675*t4228 + 0.08*(t4228*t4392 + t4384*t4910) - 0.213*t5020 + 0.1881*t4296*t930 - 0.213*(t4451*t5020 + t4471*(-1.*t4466*t5017 - 1.*t4296*t4423*t930));
  p_output1[70]=-0.1881*t330*t4296 + 0.04675*t4960 + 0.08*(t1291*t4384 + t4392*t4960) - 0.213*t5052 - 0.213*(t4471*(t330*t4296*t4423 - 1.*t4466*t5050) + t4451*t5052);
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=-0.08*(-1.*t1906*t4960 + t4970) - 0.213*t1670*t5076 - 0.213*(t1670*t3878*t5076 - 1.*t3970*t4002*t5076);
  p_output1[79]=-0.213*t1670*t5094 - 0.213*(t1670*t3878*t5094 - 1.*t3970*t4002*t5094) - 0.08*(-1.*t1906*t5090 + t5097);
  p_output1[80]=-0.213*t1670*t5111 - 0.213*(t1670*t3878*t5111 - 1.*t3970*t4002*t5111) - 0.08*(t4316 + t5114);
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=-0.213*t5140 - 0.213*(t4002*(-1.*t3970*t5129 - 1.*t1670*t5137) + t3878*t5140);
  p_output1[91]=-0.213*t5169 - 0.213*(t4002*(-1.*t3970*t5161 - 1.*t1670*t5164) + t3878*t5169);
  p_output1[92]=-0.213*t5194 - 0.213*(t4002*(-1.*t3970*t5189 - 1.*t1670*t5192) + t3878*t5194);
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=-0.213*(-1.*t4002*(0. + t3970*t5129 + t1670*t5137) + t3826*(0. + t5135 + t5139));
  p_output1[103]=-0.213*(-1.*t4002*(0. + t3970*t5161 + t1670*t5164) + t3826*(0. + t5162 + t5165));
  p_output1[104]=-0.213*(-1.*t4002*(0. + t3970*t5189 + t1670*t5192) + t3826*(0. + t5190 + t5193));
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0.08*(-1.*t4384*t4960 + t5049) - 0.213*t4423*t5237 - 0.213*(t4423*t4451*t5237 - 1.*t4466*t4471*t5237);
  p_output1[190]=-0.213*t4423*t5246 - 0.213*(t4423*t4451*t5246 - 1.*t4466*t4471*t5246) + 0.08*(-1.*t4384*t5090 + t5248);
  p_output1[191]=-0.213*t4423*t5258 - 0.213*(t4423*t4451*t5258 - 1.*t4466*t4471*t5258) + 0.08*(t4557 + t5260);
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=-0.213*t5271 - 0.213*(t4471*(-1.*t4466*t5129 - 1.*t4423*t5269) + t4451*t5271);
  p_output1[202]=-0.213*t5285 - 0.213*(t4471*(-1.*t4466*t5161 - 1.*t4423*t5283) + t4451*t5285);
  p_output1[203]=-0.213*t5299 - 0.213*(t4471*(-1.*t4466*t5189 - 1.*t4423*t5296) + t4451*t5299);
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=-0.213*(-1.*t4471*(0. + t4466*t5129 + t4423*t5269) + t4450*(0. + t5268 + t5270));
  p_output1[214]=-0.213*(-1.*t4471*(0. + t4466*t5161 + t4423*t5283) + t4450*(0. + t5281 + t5284));
  p_output1[215]=-0.213*(-1.*t4471*(0. + t4466*t5189 + t4423*t5296) + t4450*(0. + t5297 + t5298));
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_hc_trotting_2_func.hh"

namespace SymFunction
{

void j_hc_trotting_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
