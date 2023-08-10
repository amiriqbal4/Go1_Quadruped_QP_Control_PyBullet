/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:08 GMT-05:00
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
  double t463;
  double t1225;
  double t2820;
  double t2834;
  double t2859;
  double t2860;
  double t2883;
  double t2891;
  double t290;
  double t2946;
  double t2921;
  double t2956;
  double t2967;
  double t2984;
  double t3012;
  double t3047;
  double t3049;
  double t3053;
  double t3055;
  double t3059;
  double t3060;
  double t3067;
  double t3068;
  double t3069;
  double t3075;
  double t3080;
  double t2938;
  double t3179;
  double t3180;
  double t3187;
  double t3207;
  double t3208;
  double t3221;
  double t3088;
  double t3089;
  double t3252;
  double t3253;
  double t3254;
  double t3278;
  double t3279;
  double t3287;
  double t3288;
  double t3293;
  double t3097;
  double t3348;
  double t3359;
  double t3360;
  double t3363;
  double t3366;
  double t3383;
  double t3385;
  double t3389;
  t463 = Cos(var1[5]);
  t1225 = Sin(var1[3]);
  t2820 = Sin(var1[4]);
  t2834 = t463*t1225*t2820;
  t2859 = Cos(var1[3]);
  t2860 = Sin(var1[5]);
  t2883 = -1.*t2859*t2860;
  t2891 = t2834 + t2883;
  t290 = Cos(var1[4]);
  t2946 = Sin(var1[12]);
  t2921 = Cos(var1[12]);
  t2956 = t2859*t463*t2820;
  t2967 = t1225*t2860;
  t2984 = t2956 + t2967;
  t3012 = t290*t463;
  t3047 = 0. + t3012;
  t3049 = Sin(var1[13]);
  t3053 = t3047*t3049;
  t3055 = Cos(var1[13]);
  t3059 = -1.*t2946;
  t3060 = 0. + t3059;
  t3067 = t3060*t2891;
  t3068 = t2921*t2984;
  t3069 = 0. + t3067 + t3068;
  t3075 = t3055*t3069;
  t3080 = 0. + t3053 + t3075;
  t2938 = 0. + t2921;
  t3179 = t2859*t463;
  t3180 = t1225*t2820*t2860;
  t3187 = t3179 + t3180;
  t3207 = -1.*t463*t1225;
  t3208 = t2859*t2820*t2860;
  t3221 = t3207 + t3208;
  t3088 = Cos(var1[14]);
  t3089 = 0. + t3088;
  t3252 = t290*t2860;
  t3253 = 0. + t3252;
  t3254 = t3049*t3253;
  t3278 = t2921*t3221;
  t3279 = t3060*t3187;
  t3287 = 0. + t3278 + t3279;
  t3288 = t3055*t3287;
  t3293 = 0. + t3254 + t3288;
  t3097 = Sin(var1[14]);
  t3348 = t2921*t2859*t290;
  t3359 = t290*t3060*t1225;
  t3360 = 0. + t3348 + t3359;
  t3363 = -1.*t2820;
  t3366 = 0. + t3363;
  t3383 = t3055*t3360;
  t3385 = t3049*t3366;
  t3389 = 0. + t3383 + t3385;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.04675*t2891 - 0.08*(0. + t2891*t2938 + t2946*t2984) - 0.213*t3080 - 0.213*(t3080*t3089 + (0. + t3047*t3055 - 1.*t3049*t3069)*t3097) - 0.1881*t290*t463 + var1[0];
  p_output1[7]=-0.1881*t2860*t290 - 0.04675*t3187 - 0.08*(0. + t2938*t3187 + t2946*t3221) - 0.213*t3293 - 0.213*(t3097*(0. + t3055*t3253 - 1.*t3049*t3287) + t3089*t3293) + var1[1];
  p_output1[8]=0.1881*t2820 - 0.04675*t1225*t290 - 0.08*(0. + t1225*t290*t2938 + t2859*t290*t2946) - 0.213*t3389 - 0.213*(t3097*(0. - 1.*t3049*t3360 + t3055*t3366) + t3089*t3389) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "hc_2_func.hh"

namespace SymFunction
{

void hc_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
