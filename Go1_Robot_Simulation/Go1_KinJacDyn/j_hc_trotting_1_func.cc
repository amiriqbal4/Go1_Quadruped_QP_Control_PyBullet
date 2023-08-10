/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:58 GMT-05:00
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
  double t387;
  double t1445;
  double t829;
  double t78;
  double t1447;
  double t930;
  double t1670;
  double t1743;
  double t2655;
  double t1908;
  double t1958;
  double t1975;
  double t1871;
  double t3687;
  double t3826;
  double t3827;
  double t3876;
  double t3878;
  double t3910;
  double t4153;
  double t4162;
  double t4164;
  double t2770;
  double t4174;
  double t4179;
  double t4180;
  double t3970;
  double t3989;
  double t4173;
  double t4202;
  double t4204;
  double t4070;
  double t4072;
  double t4265;
  double t4272;
  double t4276;
  double t4277;
  double t4323;
  double t4308;
  double t4346;
  double t4348;
  double t4353;
  double t4354;
  double t4355;
  double t4359;
  double t4324;
  double t4367;
  double t4368;
  double t4399;
  double t4418;
  double t4422;
  double t4380;
  double t4382;
  double t4471;
  double t4476;
  double t4477;
  double t4526;
  double t4527;
  double t4528;
  double t4529;
  double t4534;
  double t4536;
  double t4581;
  double t4593;
  double t4595;
  double t4596;
  double t4602;
  double t4603;
  double t4651;
  double t4653;
  double t4654;
  double t4657;
  double t4665;
  double t4666;
  double t4698;
  double t4699;
  double t4700;
  double t4702;
  double t4703;
  double t4704;
  double t4722;
  double t4723;
  double t4726;
  double t4727;
  double t4729;
  double t4732;
  double t4772;
  double t4773;
  double t4775;
  double t4778;
  double t4780;
  double t4782;
  double t4800;
  double t4801;
  double t4802;
  double t4812;
  double t4815;
  double t4816;
  double t4818;
  double t4819;
  double t4820;
  double t4854;
  double t4859;
  double t4861;
  double t4872;
  double t4873;
  double t4874;
  double t4878;
  double t4879;
  double t4883;
  double t4903;
  double t4904;
  double t4910;
  double t4911;
  double t4916;
  double t4917;
  double t4950;
  double t4952;
  double t4953;
  double t4954;
  double t4955;
  double t4956;
  double t4974;
  double t4975;
  double t4976;
  double t4989;
  double t4990;
  double t4991;
  double t4988;
  double t4992;
  double t4993;
  double t4289;
  double t5011;
  double t5012;
  double t5024;
  double t5025;
  double t5028;
  double t5026;
  double t5029;
  double t5031;
  double t4996;
  double t5042;
  double t5043;
  double t5045;
  double t5046;
  double t5044;
  double t5047;
  double t5048;
  double t5015;
  double t5058;
  double t5059;
  double t5061;
  double t5062;
  double t5060;
  double t5063;
  double t5064;
  double t5118;
  double t5119;
  double t5122;
  double t5130;
  double t5131;
  double t5133;
  double t4488;
  double t5146;
  double t5147;
  double t5166;
  double t5165;
  double t5167;
  double t5168;
  double t5136;
  double t5184;
  double t5185;
  double t5183;
  double t5186;
  double t5188;
  double t5151;
  double t5198;
  double t5199;
  double t5200;
  double t5201;
  double t5202;
  t387 = Cos(var1[5]);
  t1445 = Sin(var1[3]);
  t829 = Sin(var1[4]);
  t78 = Cos(var1[3]);
  t1447 = Sin(var1[5]);
  t930 = t78*t387*t829;
  t1670 = t1445*t1447;
  t1743 = t930 + t1670;
  t2655 = Cos(var1[9]);
  t1908 = -1.*t387*t1445*t829;
  t1958 = t78*t1447;
  t1975 = t1908 + t1958;
  t1871 = Sin(var1[9]);
  t3687 = Cos(var1[10]);
  t3826 = t2655*t1975;
  t3827 = -1.*t1871;
  t3876 = 0. + t3827;
  t3878 = t3876*t1743;
  t3910 = t3826 + t3878;
  t4153 = -1.*t387*t1445;
  t4162 = t78*t829*t1447;
  t4164 = t4153 + t4162;
  t2770 = 0. + t2655;
  t4174 = -1.*t78*t387;
  t4179 = -1.*t1445*t829*t1447;
  t4180 = t4174 + t4179;
  t3970 = Cos(var1[11]);
  t3989 = 0. + t3970;
  t4173 = t3876*t4164;
  t4202 = t2655*t4180;
  t4204 = t4173 + t4202;
  t4070 = Sin(var1[10]);
  t4072 = Sin(var1[11]);
  t4265 = Cos(var1[4]);
  t4272 = t78*t4265*t3876;
  t4276 = -1.*t2655*t4265*t1445;
  t4277 = t4272 + t4276;
  t4323 = Cos(var1[12]);
  t4308 = Sin(var1[12]);
  t4346 = Cos(var1[13]);
  t4348 = t4323*t1975;
  t4353 = -1.*t4308;
  t4354 = 0. + t4353;
  t4355 = t4354*t1743;
  t4359 = t4348 + t4355;
  t4324 = 0. + t4323;
  t4367 = Cos(var1[14]);
  t4368 = 0. + t4367;
  t4399 = t4354*t4164;
  t4418 = t4323*t4180;
  t4422 = t4399 + t4418;
  t4380 = Sin(var1[13]);
  t4382 = Sin(var1[14]);
  t4471 = t78*t4265*t4354;
  t4476 = -1.*t4323*t4265*t1445;
  t4477 = t4471 + t4476;
  t4526 = t2655*t78*t4265*t387;
  t4527 = t4265*t387*t3876*t1445;
  t4528 = t4526 + t4527;
  t4529 = t3687*t4528;
  t4534 = -1.*t387*t4070*t829;
  t4536 = t4529 + t4534;
  t4581 = -1.*t4070*t829*t1447;
  t4593 = t2655*t78*t4265*t1447;
  t4595 = t4265*t3876*t1445*t1447;
  t4596 = t4593 + t4595;
  t4602 = t3687*t4596;
  t4603 = t4581 + t4602;
  t4651 = -1.*t4265*t4070;
  t4653 = -1.*t2655*t78*t829;
  t4654 = -1.*t3876*t1445*t829;
  t4657 = t4653 + t4654;
  t4665 = t3687*t4657;
  t4666 = t4651 + t4665;
  t4698 = t4323*t78*t4265*t387;
  t4699 = t4265*t387*t4354*t1445;
  t4700 = t4698 + t4699;
  t4702 = t4346*t4700;
  t4703 = -1.*t387*t4380*t829;
  t4704 = t4702 + t4703;
  t4722 = -1.*t4380*t829*t1447;
  t4723 = t4323*t78*t4265*t1447;
  t4726 = t4265*t4354*t1445*t1447;
  t4727 = t4723 + t4726;
  t4729 = t4346*t4727;
  t4732 = t4722 + t4729;
  t4772 = -1.*t4265*t4380;
  t4773 = -1.*t4323*t78*t829;
  t4775 = -1.*t4354*t1445*t829;
  t4778 = t4773 + t4775;
  t4780 = t4346*t4778;
  t4782 = t4772 + t4780;
  t4800 = t387*t1445;
  t4801 = -1.*t78*t829*t1447;
  t4802 = t4800 + t4801;
  t4812 = -1.*t4265*t4070*t1447;
  t4815 = t2655*t4802;
  t4816 = t3876*t4180;
  t4818 = t4815 + t4816;
  t4819 = t3687*t4818;
  t4820 = t4812 + t4819;
  t4854 = t387*t1445*t829;
  t4859 = -1.*t78*t1447;
  t4861 = t4854 + t4859;
  t4872 = t4265*t387*t4070;
  t4873 = t3876*t4861;
  t4874 = t2655*t1743;
  t4878 = t4873 + t4874;
  t4879 = t3687*t4878;
  t4883 = t4872 + t4879;
  t4903 = -1.*t4265*t4380*t1447;
  t4904 = t4323*t4802;
  t4910 = t4354*t4180;
  t4911 = t4904 + t4910;
  t4916 = t4346*t4911;
  t4917 = t4903 + t4916;
  t4950 = t4265*t387*t4380;
  t4952 = t4354*t4861;
  t4953 = t4323*t1743;
  t4954 = t4952 + t4953;
  t4955 = t4346*t4954;
  t4956 = t4950 + t4955;
  t4974 = -1.*t2655*t4861;
  t4975 = -1.*t1871*t1743;
  t4976 = t4974 + t4975;
  t4989 = t78*t387;
  t4990 = t1445*t829*t1447;
  t4991 = t4989 + t4990;
  t4988 = -1.*t1871*t4164;
  t4992 = -1.*t2655*t4991;
  t4993 = t4988 + t4992;
  t4289 = -1.*t4265*t1871*t1445;
  t5011 = -1.*t78*t4265*t1871;
  t5012 = t5011 + t4276;
  t5024 = t4265*t387;
  t5025 = 0. + t5024;
  t5028 = 0. + t4873 + t4874;
  t5026 = t3687*t5025;
  t5029 = -1.*t4070*t5028;
  t5031 = t5026 + t5029;
  t4996 = t2655*t4164;
  t5042 = t4265*t1447;
  t5043 = 0. + t5042;
  t5045 = t3876*t4991;
  t5046 = 0. + t4996 + t5045;
  t5044 = t3687*t5043;
  t5047 = -1.*t4070*t5046;
  t5048 = t5044 + t5047;
  t5015 = t2655*t78*t4265;
  t5058 = t4265*t3876*t1445;
  t5059 = 0. + t5015 + t5058;
  t5061 = -1.*t829;
  t5062 = 0. + t5061;
  t5060 = -1.*t4070*t5059;
  t5063 = t3687*t5062;
  t5064 = t5060 + t5063;
  t5118 = -1.*t4323*t4861;
  t5119 = -1.*t4308*t1743;
  t5122 = t5118 + t5119;
  t5130 = -1.*t4308*t4164;
  t5131 = -1.*t4323*t4991;
  t5133 = t5130 + t5131;
  t4488 = -1.*t4265*t4308*t1445;
  t5146 = -1.*t78*t4265*t4308;
  t5147 = t5146 + t4476;
  t5166 = 0. + t4952 + t4953;
  t5165 = t4346*t5025;
  t5167 = -1.*t4380*t5166;
  t5168 = t5165 + t5167;
  t5136 = t4323*t4164;
  t5184 = t4354*t4991;
  t5185 = 0. + t5136 + t5184;
  t5183 = t4346*t5043;
  t5186 = -1.*t4380*t5185;
  t5188 = t5183 + t5186;
  t5151 = t4323*t78*t4265;
  t5198 = t4265*t4354*t1445;
  t5199 = 0. + t5151 + t5198;
  t5200 = -1.*t4380*t5199;
  t5201 = t4346*t5062;
  t5202 = t5200 + t5201;
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
  p_output1[42]=0.04675*t1743 + 0.08*(t1871*t1975 + t1743*t2770) - 0.213*t3687*t3910 - 0.213*(t3687*t3910*t3989 - 1.*t3910*t4070*t4072);
  p_output1[43]=0.04675*t4164 + 0.08*(t2770*t4164 + t1871*t4180) - 0.213*t3687*t4204 - 0.213*(t3687*t3989*t4204 - 1.*t4070*t4072*t4204);
  p_output1[44]=-0.213*t3687*t4277 - 0.213*(t3687*t3989*t4277 - 1.*t4070*t4072*t4277) + 0.04675*t4265*t78 + 0.08*(t4289 + t2770*t4265*t78);
  p_output1[45]=-0.04675*t1743 - 0.08*(t1975*t4308 + t1743*t4324) - 0.213*t4346*t4359 - 0.213*(t4346*t4359*t4368 - 1.*t4359*t4380*t4382);
  p_output1[46]=-0.04675*t4164 - 0.08*(t4180*t4308 + t4164*t4324) - 0.213*t4346*t4422 - 0.213*(t4346*t4368*t4422 - 1.*t4380*t4382*t4422);
  p_output1[47]=-0.213*t4346*t4477 - 0.213*(t4346*t4368*t4477 - 1.*t4380*t4382*t4477) - 0.04675*t4265*t78 - 0.08*(t4488 + t4265*t4324*t78);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=1.;
  p_output1[53]=0;
  p_output1[54]=0.04675*t1445*t387*t4265 - 0.213*t4536 + 0.08*(t1445*t2770*t387*t4265 + t1871*t387*t4265*t78) - 0.1881*t387*t829 - 0.213*(t3989*t4536 + t4072*(-1.*t4070*t4528 - 1.*t3687*t387*t829));
  p_output1[55]=0.04675*t1445*t1447*t4265 - 0.213*t4603 + 0.08*(t1445*t1447*t2770*t4265 + t1447*t1871*t4265*t78) - 0.1881*t1447*t829 - 0.213*(t3989*t4603 + t4072*(-1.*t4070*t4596 - 1.*t1447*t3687*t829));
  p_output1[56]=-0.1881*t4265 - 0.213*t4666 - 0.213*(t4072*(-1.*t3687*t4265 - 1.*t4070*t4657) + t3989*t4666) - 0.04675*t1445*t829 + 0.08*(-1.*t1445*t2770*t829 - 1.*t1871*t78*t829);
  p_output1[57]=-0.04675*t1445*t387*t4265 - 0.213*t4704 - 0.08*(t1445*t387*t4265*t4324 + t387*t4265*t4308*t78) + 0.1881*t387*t829 - 0.213*(t4368*t4704 + t4382*(-1.*t4380*t4700 - 1.*t387*t4346*t829));
  p_output1[58]=-0.04675*t1445*t1447*t4265 - 0.213*t4732 - 0.08*(t1445*t1447*t4265*t4324 + t1447*t4265*t4308*t78) + 0.1881*t1447*t829 - 0.213*(t4368*t4732 + t4382*(-1.*t4380*t4727 - 1.*t1447*t4346*t829));
  p_output1[59]=0.1881*t4265 - 0.213*t4782 - 0.213*(t4382*(-1.*t4265*t4346 - 1.*t4380*t4778) + t4368*t4782) + 0.04675*t1445*t829 - 0.08*(-1.*t1445*t4324*t829 - 1.*t4308*t78*t829);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=1.;
  p_output1[66]=0.04675*t4180 - 0.1881*t1447*t4265 + 0.08*(t2770*t4180 + t1871*t4802) - 0.213*t4820 - 0.213*(t4072*(-1.*t1447*t3687*t4265 - 1.*t4070*t4818) + t3989*t4820);
  p_output1[67]=0.1881*t387*t4265 + 0.04675*t4861 + 0.08*(t1743*t1871 + t2770*t4861) - 0.213*t4883 - 0.213*(t4072*(t3687*t387*t4265 - 1.*t4070*t4878) + t3989*t4883);
  p_output1[68]=0;
  p_output1[69]=-0.04675*t4180 + 0.1881*t1447*t4265 - 0.08*(t4180*t4324 + t4308*t4802) - 0.213*t4917 - 0.213*(t4382*(-1.*t1447*t4265*t4346 - 1.*t4380*t4911) + t4368*t4917);
  p_output1[70]=-0.1881*t387*t4265 - 0.04675*t4861 - 0.08*(t1743*t4308 + t4324*t4861) - 0.213*t4956 - 0.213*(t4382*(t387*t4265*t4346 - 1.*t4380*t4954) + t4368*t4956);
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0.08*(-1.*t1871*t4861 + t4874) - 0.213*t3687*t4976 - 0.213*(t3687*t3989*t4976 - 1.*t4070*t4072*t4976);
  p_output1[115]=-0.213*t3687*t4993 - 0.213*(t3687*t3989*t4993 - 1.*t4070*t4072*t4993) + 0.08*(-1.*t1871*t4991 + t4996);
  p_output1[116]=-0.213*t3687*t5012 - 0.213*(t3687*t3989*t5012 - 1.*t4070*t4072*t5012) + 0.08*(t4289 + t5015);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=-0.213*t5031 - 0.213*(t4072*(-1.*t4070*t5025 - 1.*t3687*t5028) + t3989*t5031);
  p_output1[127]=-0.213*t5048 - 0.213*(t4072*(-1.*t4070*t5043 - 1.*t3687*t5046) + t3989*t5048);
  p_output1[128]=-0.213*t5064 - 0.213*(t4072*(-1.*t3687*t5059 - 1.*t4070*t5062) + t3989*t5064);
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=-0.213*(-1.*t4072*(0. + t4070*t5025 + t3687*t5028) + t3970*(0. + t5026 + t5029));
  p_output1[139]=-0.213*(-1.*t4072*(0. + t4070*t5043 + t3687*t5046) + t3970*(0. + t5044 + t5047));
  p_output1[140]=-0.213*(-1.*t4072*(0. + t3687*t5059 + t4070*t5062) + t3970*(0. + t5060 + t5063));
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
  p_output1[153]=-0.08*(-1.*t4308*t4861 + t4953) - 0.213*t4346*t5122 - 0.213*(t4346*t4368*t5122 - 1.*t4380*t4382*t5122);
  p_output1[154]=-0.213*t4346*t5133 - 0.213*(t4346*t4368*t5133 - 1.*t4380*t4382*t5133) - 0.08*(-1.*t4308*t4991 + t5136);
  p_output1[155]=-0.213*t4346*t5147 - 0.213*(t4346*t4368*t5147 - 1.*t4380*t4382*t5147) - 0.08*(t4488 + t5151);
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=-0.213*t5168 - 0.213*(t4382*(-1.*t4380*t5025 - 1.*t4346*t5166) + t4368*t5168);
  p_output1[166]=-0.213*t5188 - 0.213*(t4382*(-1.*t4380*t5043 - 1.*t4346*t5185) + t4368*t5188);
  p_output1[167]=-0.213*t5202 - 0.213*(t4382*(-1.*t4380*t5062 - 1.*t4346*t5199) + t4368*t5202);
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=-0.213*(-1.*t4382*(0. + t4380*t5025 + t4346*t5166) + t4367*(0. + t5165 + t5167));
  p_output1[178]=-0.213*(-1.*t4382*(0. + t4380*t5043 + t4346*t5185) + t4367*(0. + t5183 + t5186));
  p_output1[179]=-0.213*(-1.*t4382*(0. + t4380*t5062 + t4346*t5199) + t4367*(0. + t5200 + t5201));
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
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

#include "j_hc_trotting_1_func.hh"

namespace SymFunction
{

void j_hc_trotting_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
