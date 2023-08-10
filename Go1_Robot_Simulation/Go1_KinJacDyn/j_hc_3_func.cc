/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:26 GMT-05:00
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
  double t203;
  double t845;
  double t430;
  double t123;
  double t1136;
  double t546;
  double t1773;
  double t2956;
  double t3169;
  double t3178;
  double t3188;
  double t3239;
  double t3254;
  double t3088;
  double t3253;
  double t3288;
  double t3305;
  double t3341;
  double t3343;
  double t3455;
  double t3457;
  double t3458;
  double t3362;
  double t3477;
  double t3504;
  double t3506;
  double t3395;
  double t3413;
  double t3513;
  double t3515;
  double t3517;
  double t3430;
  double t3437;
  double t3579;
  double t3584;
  double t3585;
  double t3589;
  double t3649;
  double t3654;
  double t3659;
  double t3661;
  double t3662;
  double t3663;
  double t3735;
  double t3736;
  double t3737;
  double t3740;
  double t3741;
  double t3751;
  double t3804;
  double t3815;
  double t3817;
  double t3818;
  double t3820;
  double t3822;
  double t3866;
  double t3867;
  double t3872;
  double t3878;
  double t3879;
  double t3882;
  double t3884;
  double t3894;
  double t3902;
  double t3939;
  double t3940;
  double t3943;
  double t3957;
  double t3959;
  double t3960;
  double t3963;
  double t3964;
  double t3965;
  double t3992;
  double t3994;
  double t3996;
  double t4008;
  double t4009;
  double t4010;
  double t4011;
  double t4022;
  double t4024;
  double t3598;
  double t4042;
  double t4043;
  double t4058;
  double t4059;
  double t4060;
  double t4061;
  double t4062;
  double t4063;
  double t4028;
  double t4075;
  double t4076;
  double t4077;
  double t4078;
  double t4079;
  double t4080;
  double t4081;
  double t4049;
  double t4091;
  double t4092;
  double t4093;
  double t4094;
  double t4095;
  double t4096;
  double t4097;
  t203 = Cos(var1[5]);
  t845 = Sin(var1[3]);
  t430 = Sin(var1[4]);
  t123 = Cos(var1[3]);
  t1136 = Sin(var1[5]);
  t546 = t123*t203*t430;
  t1773 = t845*t1136;
  t2956 = t546 + t1773;
  t3169 = Cos(var1[6]);
  t3178 = -1.*t203*t845*t430;
  t3188 = t123*t1136;
  t3239 = t3178 + t3188;
  t3254 = Sin(var1[6]);
  t3088 = Cos(var1[7]);
  t3253 = t3169*t3239;
  t3288 = -1.*t3254;
  t3305 = 0. + t3288;
  t3341 = t2956*t3305;
  t3343 = t3253 + t3341;
  t3455 = -1.*t203*t845;
  t3457 = t123*t430*t1136;
  t3458 = t3455 + t3457;
  t3362 = 0. + t3169;
  t3477 = -1.*t123*t203;
  t3504 = -1.*t845*t430*t1136;
  t3506 = t3477 + t3504;
  t3395 = Cos(var1[8]);
  t3413 = 0. + t3395;
  t3513 = t3169*t3506;
  t3515 = t3458*t3305;
  t3517 = t3513 + t3515;
  t3430 = Sin(var1[7]);
  t3437 = Sin(var1[8]);
  t3579 = Cos(var1[4]);
  t3584 = -1.*t3579*t3169*t845;
  t3585 = t123*t3579*t3305;
  t3589 = t3584 + t3585;
  t3649 = t123*t3579*t203*t3169;
  t3654 = t3579*t203*t845*t3305;
  t3659 = t3649 + t3654;
  t3661 = t3088*t3659;
  t3662 = -1.*t203*t430*t3430;
  t3663 = t3661 + t3662;
  t3735 = t123*t3579*t3169*t1136;
  t3736 = t3579*t845*t1136*t3305;
  t3737 = t3735 + t3736;
  t3740 = t3088*t3737;
  t3741 = -1.*t430*t1136*t3430;
  t3751 = t3740 + t3741;
  t3804 = -1.*t123*t3169*t430;
  t3815 = -1.*t845*t430*t3305;
  t3817 = t3804 + t3815;
  t3818 = t3088*t3817;
  t3820 = -1.*t3579*t3430;
  t3822 = t3818 + t3820;
  t3866 = t203*t845;
  t3867 = -1.*t123*t430*t1136;
  t3872 = t3866 + t3867;
  t3878 = t3169*t3872;
  t3879 = t3506*t3305;
  t3882 = t3878 + t3879;
  t3884 = t3088*t3882;
  t3894 = -1.*t3579*t1136*t3430;
  t3902 = t3884 + t3894;
  t3939 = t203*t845*t430;
  t3940 = -1.*t123*t1136;
  t3943 = t3939 + t3940;
  t3957 = t3169*t2956;
  t3959 = t3943*t3305;
  t3960 = t3957 + t3959;
  t3963 = t3088*t3960;
  t3964 = t3579*t203*t3430;
  t3965 = t3963 + t3964;
  t3992 = -1.*t3169*t3943;
  t3994 = -1.*t2956*t3254;
  t3996 = t3992 + t3994;
  t4008 = t123*t203;
  t4009 = t845*t430*t1136;
  t4010 = t4008 + t4009;
  t4011 = -1.*t3169*t4010;
  t4022 = -1.*t3458*t3254;
  t4024 = t4011 + t4022;
  t3598 = -1.*t3579*t845*t3254;
  t4042 = -1.*t123*t3579*t3254;
  t4043 = t3584 + t4042;
  t4058 = t3579*t203;
  t4059 = 0. + t4058;
  t4060 = t4059*t3088;
  t4061 = 0. + t3957 + t3959;
  t4062 = -1.*t4061*t3430;
  t4063 = t4060 + t4062;
  t4028 = t3169*t3458;
  t4075 = t3579*t1136;
  t4076 = 0. + t4075;
  t4077 = t3088*t4076;
  t4078 = t4010*t3305;
  t4079 = 0. + t4028 + t4078;
  t4080 = -1.*t4079*t3430;
  t4081 = t4077 + t4080;
  t4049 = t123*t3579*t3169;
  t4091 = -1.*t430;
  t4092 = 0. + t4091;
  t4093 = t3088*t4092;
  t4094 = t3579*t845*t3305;
  t4095 = 0. + t4049 + t4094;
  t4096 = -1.*t4095*t3430;
  t4097 = t4093 + t4096;
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
  p_output1[33]=-0.04675*t2956 - 0.213*t3088*t3343 - 0.08*(t3239*t3254 + t2956*t3362) - 0.213*(t3088*t3343*t3413 - 1.*t3343*t3430*t3437);
  p_output1[34]=-0.04675*t3458 - 0.08*(t3362*t3458 + t3254*t3506) - 0.213*t3088*t3517 - 0.213*(t3088*t3413*t3517 - 1.*t3430*t3437*t3517);
  p_output1[35]=-0.04675*t123*t3579 - 0.213*t3088*t3589 - 0.213*(t3088*t3413*t3589 - 1.*t3430*t3437*t3589) - 0.08*(t123*t3362*t3579 + t3598);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=-0.213*t3663 - 0.1881*t203*t430 - 0.213*(t3413*t3663 + t3437*(-1.*t3430*t3659 - 1.*t203*t3088*t430)) - 0.04675*t203*t3579*t845 - 0.08*(t123*t203*t3254*t3579 + t203*t3362*t3579*t845);
  p_output1[43]=-0.213*t3751 - 0.1881*t1136*t430 - 0.213*(t3413*t3751 + t3437*(-1.*t3430*t3737 - 1.*t1136*t3088*t430)) - 0.04675*t1136*t3579*t845 - 0.08*(t1136*t123*t3254*t3579 + t1136*t3362*t3579*t845);
  p_output1[44]=-0.1881*t3579 - 0.213*t3822 - 0.213*(t3437*(-1.*t3088*t3579 - 1.*t3430*t3817) + t3413*t3822) + 0.04675*t430*t845 - 0.08*(-1.*t123*t3254*t430 - 1.*t3362*t430*t845);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=-0.04675*t3506 - 0.1881*t1136*t3579 - 0.08*(t3362*t3506 + t3254*t3872) - 0.213*t3902 - 0.213*(t3437*(-1.*t1136*t3088*t3579 - 1.*t3430*t3882) + t3413*t3902);
  p_output1[52]=0.1881*t203*t3579 - 0.04675*t3943 - 0.08*(t2956*t3254 + t3362*t3943) - 0.213*t3965 - 0.213*(t3437*(t203*t3088*t3579 - 1.*t3430*t3960) + t3413*t3965);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=-0.08*(-1.*t3254*t3943 + t3957) - 0.213*t3088*t3996 - 0.213*(t3088*t3413*t3996 - 1.*t3430*t3437*t3996);
  p_output1[61]=-0.213*t3088*t4024 - 0.213*(t3088*t3413*t4024 - 1.*t3430*t3437*t4024) - 0.08*(-1.*t3254*t4010 + t4028);
  p_output1[62]=-0.213*t3088*t4043 - 0.213*(t3088*t3413*t4043 - 1.*t3430*t3437*t4043) - 0.08*(t3598 + t4049);
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=-0.213*t4063 - 0.213*(t3437*(-1.*t3430*t4059 - 1.*t3088*t4061) + t3413*t4063);
  p_output1[70]=-0.213*t4081 - 0.213*(t3437*(-1.*t3430*t4076 - 1.*t3088*t4079) + t3413*t4081);
  p_output1[71]=-0.213*t4097 - 0.213*(t3437*(-1.*t3430*t4092 - 1.*t3088*t4095) + t3413*t4097);
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=-0.213*(-1.*t3437*(0. + t3430*t4059 + t3088*t4061) + t3395*(0. + t4060 + t4062));
  p_output1[79]=-0.213*(-1.*t3437*(0. + t3430*t4076 + t3088*t4079) + t3395*(0. + t4077 + t4080));
  p_output1[80]=-0.213*(-1.*t3437*(0. + t3430*t4092 + t3088*t4095) + t3395*(0. + t4093 + t4096));
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

#include "j_hc_3_func.hh"

namespace SymFunction
{

void j_hc_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
