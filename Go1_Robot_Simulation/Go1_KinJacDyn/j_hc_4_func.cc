/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:30 GMT-05:00
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
  double t1773;
  double t3239;
  double t3075;
  double t546;
  double t3253;
  double t3188;
  double t3341;
  double t3345;
  double t3438;
  double t3370;
  double t3385;
  double t3395;
  double t3369;
  double t3465;
  double t3506;
  double t3513;
  double t3515;
  double t3518;
  double t3522;
  double t3594;
  double t3597;
  double t3607;
  double t3440;
  double t3614;
  double t3617;
  double t3630;
  double t3540;
  double t3541;
  double t3613;
  double t3631;
  double t3633;
  double t3547;
  double t3557;
  double t3675;
  double t3687;
  double t3690;
  double t3692;
  double t3764;
  double t3767;
  double t3768;
  double t3772;
  double t3774;
  double t3786;
  double t3846;
  double t3847;
  double t3852;
  double t3860;
  double t3866;
  double t3872;
  double t3938;
  double t3939;
  double t3944;
  double t3949;
  double t3950;
  double t3954;
  double t3985;
  double t3987;
  double t3989;
  double t4004;
  double t4005;
  double t4006;
  double t4007;
  double t4008;
  double t4009;
  double t4049;
  double t4051;
  double t4052;
  double t4058;
  double t4060;
  double t4064;
  double t4065;
  double t4068;
  double t4069;
  double t4086;
  double t4087;
  double t4088;
  double t4100;
  double t4101;
  double t4102;
  double t4099;
  double t4107;
  double t4108;
  double t3708;
  double t4125;
  double t4126;
  double t4139;
  double t4140;
  double t4143;
  double t4141;
  double t4145;
  double t4147;
  double t4111;
  double t4160;
  double t4161;
  double t4164;
  double t4165;
  double t4162;
  double t4166;
  double t4167;
  double t4128;
  double t4180;
  double t4181;
  double t4183;
  double t4184;
  double t4182;
  double t4185;
  double t4186;
  t1773 = Cos(var1[5]);
  t3239 = Sin(var1[3]);
  t3075 = Sin(var1[4]);
  t546 = Cos(var1[3]);
  t3253 = Sin(var1[5]);
  t3188 = t546*t1773*t3075;
  t3341 = t3239*t3253;
  t3345 = t3188 + t3341;
  t3438 = Cos(var1[15]);
  t3370 = -1.*t1773*t3239*t3075;
  t3385 = t546*t3253;
  t3395 = t3370 + t3385;
  t3369 = Sin(var1[15]);
  t3465 = Cos(var1[16]);
  t3506 = t3438*t3395;
  t3513 = -1.*t3369;
  t3515 = 0. + t3513;
  t3518 = t3515*t3345;
  t3522 = t3506 + t3518;
  t3594 = -1.*t1773*t3239;
  t3597 = t546*t3075*t3253;
  t3607 = t3594 + t3597;
  t3440 = 0. + t3438;
  t3614 = -1.*t546*t1773;
  t3617 = -1.*t3239*t3075*t3253;
  t3630 = t3614 + t3617;
  t3540 = Cos(var1[17]);
  t3541 = 0. + t3540;
  t3613 = t3515*t3607;
  t3631 = t3438*t3630;
  t3633 = t3613 + t3631;
  t3547 = Sin(var1[16]);
  t3557 = Sin(var1[17]);
  t3675 = Cos(var1[4]);
  t3687 = t546*t3675*t3515;
  t3690 = -1.*t3438*t3675*t3239;
  t3692 = t3687 + t3690;
  t3764 = t3438*t546*t3675*t1773;
  t3767 = t3675*t1773*t3515*t3239;
  t3768 = t3764 + t3767;
  t3772 = t3465*t3768;
  t3774 = -1.*t1773*t3547*t3075;
  t3786 = t3772 + t3774;
  t3846 = -1.*t3547*t3075*t3253;
  t3847 = t3438*t546*t3675*t3253;
  t3852 = t3675*t3515*t3239*t3253;
  t3860 = t3847 + t3852;
  t3866 = t3465*t3860;
  t3872 = t3846 + t3866;
  t3938 = -1.*t3675*t3547;
  t3939 = -1.*t3438*t546*t3075;
  t3944 = -1.*t3515*t3239*t3075;
  t3949 = t3939 + t3944;
  t3950 = t3465*t3949;
  t3954 = t3938 + t3950;
  t3985 = t1773*t3239;
  t3987 = -1.*t546*t3075*t3253;
  t3989 = t3985 + t3987;
  t4004 = -1.*t3675*t3547*t3253;
  t4005 = t3438*t3989;
  t4006 = t3515*t3630;
  t4007 = t4005 + t4006;
  t4008 = t3465*t4007;
  t4009 = t4004 + t4008;
  t4049 = t1773*t3239*t3075;
  t4051 = -1.*t546*t3253;
  t4052 = t4049 + t4051;
  t4058 = t3675*t1773*t3547;
  t4060 = t3515*t4052;
  t4064 = t3438*t3345;
  t4065 = t4060 + t4064;
  t4068 = t3465*t4065;
  t4069 = t4058 + t4068;
  t4086 = -1.*t3438*t4052;
  t4087 = -1.*t3369*t3345;
  t4088 = t4086 + t4087;
  t4100 = t546*t1773;
  t4101 = t3239*t3075*t3253;
  t4102 = t4100 + t4101;
  t4099 = -1.*t3369*t3607;
  t4107 = -1.*t3438*t4102;
  t4108 = t4099 + t4107;
  t3708 = -1.*t3675*t3369*t3239;
  t4125 = -1.*t546*t3675*t3369;
  t4126 = t4125 + t3690;
  t4139 = t3675*t1773;
  t4140 = 0. + t4139;
  t4143 = 0. + t4060 + t4064;
  t4141 = t3465*t4140;
  t4145 = -1.*t3547*t4143;
  t4147 = t4141 + t4145;
  t4111 = t3438*t3607;
  t4160 = t3675*t3253;
  t4161 = 0. + t4160;
  t4164 = t3515*t4102;
  t4165 = 0. + t4111 + t4164;
  t4162 = t3465*t4161;
  t4166 = -1.*t3547*t4165;
  t4167 = t4162 + t4166;
  t4128 = t3438*t546*t3675;
  t4180 = t3675*t3515*t3239;
  t4181 = 0. + t4128 + t4180;
  t4183 = -1.*t3075;
  t4184 = 0. + t4183;
  t4182 = -1.*t3547*t4181;
  t4185 = t3465*t4184;
  t4186 = t4182 + t4185;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=1.;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0.04675*t3345 + 0.08*(t3369*t3395 + t3345*t3440) - 0.213*t3465*t3522 - 0.213*(t3465*t3522*t3541 - 1.*t3522*t3547*t3557);
  p_output1[34]=0.04675*t3607 + 0.08*(t3440*t3607 + t3369*t3630) - 0.213*t3465*t3633 - 0.213*(t3465*t3541*t3633 - 1.*t3547*t3557*t3633);
  p_output1[35]=-0.213*t3465*t3692 - 0.213*(t3465*t3541*t3692 - 1.*t3547*t3557*t3692) + 0.04675*t3675*t546 + 0.08*(t3708 + t3440*t3675*t546);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=0.1881*t1773*t3075 + 0.04675*t1773*t3239*t3675 - 0.213*t3786 - 0.213*(t3557*(-1.*t1773*t3075*t3465 - 1.*t3547*t3768) + t3541*t3786) + 0.08*(t1773*t3239*t3440*t3675 + t1773*t3369*t3675*t546);
  p_output1[43]=0.1881*t3075*t3253 + 0.04675*t3239*t3253*t3675 - 0.213*t3872 - 0.213*(t3557*(-1.*t3075*t3253*t3465 - 1.*t3547*t3860) + t3541*t3872) + 0.08*(t3239*t3253*t3440*t3675 + t3253*t3369*t3675*t546);
  p_output1[44]=-0.04675*t3075*t3239 + 0.1881*t3675 - 0.213*t3954 - 0.213*(t3557*(-1.*t3465*t3675 - 1.*t3547*t3949) + t3541*t3954) + 0.08*(-1.*t3075*t3239*t3440 - 1.*t3075*t3369*t546);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=0.04675*t3630 + 0.1881*t3253*t3675 + 0.08*(t3440*t3630 + t3369*t3989) - 0.213*t4009 - 0.213*(t3557*(-1.*t3253*t3465*t3675 - 1.*t3547*t4007) + t3541*t4009);
  p_output1[52]=-0.1881*t1773*t3675 + 0.04675*t4052 + 0.08*(t3345*t3369 + t3440*t4052) - 0.213*t4069 - 0.213*(t3557*(t1773*t3465*t3675 - 1.*t3547*t4065) + t3541*t4069);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
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
  p_output1[141]=0.08*(-1.*t3369*t4052 + t4064) - 0.213*t3465*t4088 - 0.213*(t3465*t3541*t4088 - 1.*t3547*t3557*t4088);
  p_output1[142]=-0.213*t3465*t4108 - 0.213*(t3465*t3541*t4108 - 1.*t3547*t3557*t4108) + 0.08*(-1.*t3369*t4102 + t4111);
  p_output1[143]=-0.213*t3465*t4126 - 0.213*(t3465*t3541*t4126 - 1.*t3547*t3557*t4126) + 0.08*(t3708 + t4128);
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=-0.213*t4147 - 0.213*(t3557*(-1.*t3547*t4140 - 1.*t3465*t4143) + t3541*t4147);
  p_output1[151]=-0.213*t4167 - 0.213*(t3557*(-1.*t3547*t4161 - 1.*t3465*t4165) + t3541*t4167);
  p_output1[152]=-0.213*t4186 - 0.213*(t3557*(-1.*t3465*t4181 - 1.*t3547*t4184) + t3541*t4186);
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=-0.213*(-1.*t3557*(0. + t3547*t4140 + t3465*t4143) + t3540*(0. + t4141 + t4145));
  p_output1[160]=-0.213*(-1.*t3557*(0. + t3547*t4161 + t3465*t4165) + t3540*(0. + t4162 + t4166));
  p_output1[161]=-0.213*(-1.*t3557*(0. + t3465*t4181 + t3547*t4184) + t3540*(0. + t4182 + t4185));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_hc_4_func.hh"

namespace SymFunction
{

void j_hc_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
