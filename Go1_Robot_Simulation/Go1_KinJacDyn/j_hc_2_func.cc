/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:23 GMT-05:00
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
  double t300;
  double t3012;
  double t1121;
  double t65;
  double t3055;
  double t2956;
  double t3075;
  double t3084;
  double t3221;
  double t3161;
  double t3169;
  double t3178;
  double t3118;
  double t3278;
  double t3288;
  double t3297;
  double t3304;
  double t3305;
  double t3340;
  double t3377;
  double t3385;
  double t3389;
  double t3224;
  double t3420;
  double t3422;
  double t3423;
  double t3343;
  double t3344;
  double t3413;
  double t3430;
  double t3432;
  double t3348;
  double t3359;
  double t3484;
  double t3506;
  double t3507;
  double t3509;
  double t3584;
  double t3585;
  double t3587;
  double t3589;
  double t3590;
  double t3591;
  double t3646;
  double t3647;
  double t3649;
  double t3651;
  double t3654;
  double t3656;
  double t3711;
  double t3715;
  double t3723;
  double t3724;
  double t3725;
  double t3733;
  double t3762;
  double t3763;
  double t3764;
  double t3775;
  double t3786;
  double t3788;
  double t3790;
  double t3792;
  double t3796;
  double t3827;
  double t3828;
  double t3832;
  double t3846;
  double t3847;
  double t3848;
  double t3849;
  double t3852;
  double t3857;
  double t3895;
  double t3900;
  double t3901;
  double t3921;
  double t3926;
  double t3927;
  double t3916;
  double t3932;
  double t3933;
  double t3516;
  double t3951;
  double t3952;
  double t3970;
  double t3972;
  double t3974;
  double t3973;
  double t3975;
  double t3977;
  double t3936;
  double t3992;
  double t3993;
  double t3996;
  double t3998;
  double t3994;
  double t3999;
  double t4000;
  double t3956;
  double t4011;
  double t4014;
  double t4022;
  double t4023;
  double t4016;
  double t4024;
  double t4026;
  t300 = Cos(var1[5]);
  t3012 = Sin(var1[3]);
  t1121 = Sin(var1[4]);
  t65 = Cos(var1[3]);
  t3055 = Sin(var1[5]);
  t2956 = t65*t300*t1121;
  t3075 = t3012*t3055;
  t3084 = t2956 + t3075;
  t3221 = Cos(var1[12]);
  t3161 = -1.*t300*t3012*t1121;
  t3169 = t65*t3055;
  t3178 = t3161 + t3169;
  t3118 = Sin(var1[12]);
  t3278 = Cos(var1[13]);
  t3288 = t3221*t3178;
  t3297 = -1.*t3118;
  t3304 = 0. + t3297;
  t3305 = t3304*t3084;
  t3340 = t3288 + t3305;
  t3377 = -1.*t300*t3012;
  t3385 = t65*t1121*t3055;
  t3389 = t3377 + t3385;
  t3224 = 0. + t3221;
  t3420 = -1.*t65*t300;
  t3422 = -1.*t3012*t1121*t3055;
  t3423 = t3420 + t3422;
  t3343 = Cos(var1[14]);
  t3344 = 0. + t3343;
  t3413 = t3304*t3389;
  t3430 = t3221*t3423;
  t3432 = t3413 + t3430;
  t3348 = Sin(var1[13]);
  t3359 = Sin(var1[14]);
  t3484 = Cos(var1[4]);
  t3506 = t65*t3484*t3304;
  t3507 = -1.*t3221*t3484*t3012;
  t3509 = t3506 + t3507;
  t3584 = t3221*t65*t3484*t300;
  t3585 = t3484*t300*t3304*t3012;
  t3587 = t3584 + t3585;
  t3589 = t3278*t3587;
  t3590 = -1.*t300*t3348*t1121;
  t3591 = t3589 + t3590;
  t3646 = -1.*t3348*t1121*t3055;
  t3647 = t3221*t65*t3484*t3055;
  t3649 = t3484*t3304*t3012*t3055;
  t3651 = t3647 + t3649;
  t3654 = t3278*t3651;
  t3656 = t3646 + t3654;
  t3711 = -1.*t3484*t3348;
  t3715 = -1.*t3221*t65*t1121;
  t3723 = -1.*t3304*t3012*t1121;
  t3724 = t3715 + t3723;
  t3725 = t3278*t3724;
  t3733 = t3711 + t3725;
  t3762 = t300*t3012;
  t3763 = -1.*t65*t1121*t3055;
  t3764 = t3762 + t3763;
  t3775 = -1.*t3484*t3348*t3055;
  t3786 = t3221*t3764;
  t3788 = t3304*t3423;
  t3790 = t3786 + t3788;
  t3792 = t3278*t3790;
  t3796 = t3775 + t3792;
  t3827 = t300*t3012*t1121;
  t3828 = -1.*t65*t3055;
  t3832 = t3827 + t3828;
  t3846 = t3484*t300*t3348;
  t3847 = t3304*t3832;
  t3848 = t3221*t3084;
  t3849 = t3847 + t3848;
  t3852 = t3278*t3849;
  t3857 = t3846 + t3852;
  t3895 = -1.*t3221*t3832;
  t3900 = -1.*t3118*t3084;
  t3901 = t3895 + t3900;
  t3921 = t65*t300;
  t3926 = t3012*t1121*t3055;
  t3927 = t3921 + t3926;
  t3916 = -1.*t3118*t3389;
  t3932 = -1.*t3221*t3927;
  t3933 = t3916 + t3932;
  t3516 = -1.*t3484*t3118*t3012;
  t3951 = -1.*t65*t3484*t3118;
  t3952 = t3951 + t3507;
  t3970 = t3484*t300;
  t3972 = 0. + t3970;
  t3974 = 0. + t3847 + t3848;
  t3973 = t3278*t3972;
  t3975 = -1.*t3348*t3974;
  t3977 = t3973 + t3975;
  t3936 = t3221*t3389;
  t3992 = t3484*t3055;
  t3993 = 0. + t3992;
  t3996 = t3304*t3927;
  t3998 = 0. + t3936 + t3996;
  t3994 = t3278*t3993;
  t3999 = -1.*t3348*t3998;
  t4000 = t3994 + t3999;
  t3956 = t3221*t65*t3484;
  t4011 = t3484*t3304*t3012;
  t4014 = 0. + t3956 + t4011;
  t4022 = -1.*t1121;
  t4023 = 0. + t4022;
  t4016 = -1.*t3348*t4014;
  t4024 = t3278*t4023;
  t4026 = t4016 + t4024;
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
  p_output1[33]=-0.04675*t3084 - 0.08*(t3118*t3178 + t3084*t3224) - 0.213*t3278*t3340 - 0.213*(t3278*t3340*t3344 - 1.*t3340*t3348*t3359);
  p_output1[34]=-0.04675*t3389 - 0.08*(t3224*t3389 + t3118*t3423) - 0.213*t3278*t3432 - 0.213*(t3278*t3344*t3432 - 1.*t3348*t3359*t3432);
  p_output1[35]=-0.213*t3278*t3509 - 0.213*(t3278*t3344*t3509 - 1.*t3348*t3359*t3509) - 0.04675*t3484*t65 - 0.08*(t3516 + t3224*t3484*t65);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=0.1881*t1121*t300 - 0.04675*t300*t3012*t3484 - 0.213*t3591 - 0.213*(t3359*(-1.*t1121*t300*t3278 - 1.*t3348*t3587) + t3344*t3591) - 0.08*(t300*t3012*t3224*t3484 + t300*t3118*t3484*t65);
  p_output1[43]=0.1881*t1121*t3055 - 0.04675*t3012*t3055*t3484 - 0.213*t3656 - 0.213*(t3359*(-1.*t1121*t3055*t3278 - 1.*t3348*t3651) + t3344*t3656) - 0.08*(t3012*t3055*t3224*t3484 + t3055*t3118*t3484*t65);
  p_output1[44]=0.04675*t1121*t3012 + 0.1881*t3484 - 0.213*t3733 - 0.213*(t3359*(-1.*t3278*t3484 - 1.*t3348*t3724) + t3344*t3733) - 0.08*(-1.*t1121*t3012*t3224 - 1.*t1121*t3118*t65);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=-0.04675*t3423 + 0.1881*t3055*t3484 - 0.08*(t3224*t3423 + t3118*t3764) - 0.213*t3796 - 0.213*(t3359*(-1.*t3055*t3278*t3484 - 1.*t3348*t3790) + t3344*t3796);
  p_output1[52]=-0.1881*t300*t3484 - 0.04675*t3832 - 0.08*(t3084*t3118 + t3224*t3832) - 0.213*t3857 - 0.213*(t3359*(t300*t3278*t3484 - 1.*t3348*t3849) + t3344*t3857);
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
  p_output1[114]=-0.08*(-1.*t3118*t3832 + t3848) - 0.213*t3278*t3901 - 0.213*(t3278*t3344*t3901 - 1.*t3348*t3359*t3901);
  p_output1[115]=-0.213*t3278*t3933 - 0.213*(t3278*t3344*t3933 - 1.*t3348*t3359*t3933) - 0.08*(-1.*t3118*t3927 + t3936);
  p_output1[116]=-0.213*t3278*t3952 - 0.213*(t3278*t3344*t3952 - 1.*t3348*t3359*t3952) - 0.08*(t3516 + t3956);
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=-0.213*t3977 - 0.213*(t3359*(-1.*t3348*t3972 - 1.*t3278*t3974) + t3344*t3977);
  p_output1[124]=-0.213*t4000 - 0.213*(t3359*(-1.*t3348*t3993 - 1.*t3278*t3998) + t3344*t4000);
  p_output1[125]=-0.213*t4026 - 0.213*(t3359*(-1.*t3278*t4014 - 1.*t3348*t4023) + t3344*t4026);
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=-0.213*(-1.*t3359*(0. + t3348*t3972 + t3278*t3974) + t3343*(0. + t3973 + t3975));
  p_output1[133]=-0.213*(-1.*t3359*(0. + t3348*t3993 + t3278*t3998) + t3343*(0. + t3994 + t3999));
  p_output1[134]=-0.213*(-1.*t3359*(0. + t3278*t4014 + t3348*t4023) + t3343*(0. + t4016 + t4024));
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

#include "j_hc_2_func.hh"

namespace SymFunction
{

void j_hc_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
