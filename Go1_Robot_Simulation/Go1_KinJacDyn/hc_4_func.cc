/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:15 GMT-05:00
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
  double t290;
  double t2891;
  double t2919;
  double t2956;
  double t2967;
  double t2984;
  double t2985;
  double t2988;
  double t163;
  double t3060;
  double t3012;
  double t3067;
  double t3068;
  double t3075;
  double t3097;
  double t3118;
  double t3136;
  double t3161;
  double t3169;
  double t3170;
  double t3177;
  double t3178;
  double t3179;
  double t3180;
  double t3187;
  double t3188;
  double t3047;
  double t3298;
  double t3304;
  double t3305;
  double t3337;
  double t3339;
  double t3340;
  double t3221;
  double t3224;
  double t3345;
  double t3348;
  double t3359;
  double t3362;
  double t3363;
  double t3366;
  double t3369;
  double t3370;
  double t3239;
  double t3437;
  double t3438;
  double t3439;
  double t3446;
  double t3447;
  double t3465;
  double t3477;
  double t3478;
  t290 = Cos(var1[5]);
  t2891 = Sin(var1[3]);
  t2919 = Sin(var1[4]);
  t2956 = t290*t2891*t2919;
  t2967 = Cos(var1[3]);
  t2984 = Sin(var1[5]);
  t2985 = -1.*t2967*t2984;
  t2988 = t2956 + t2985;
  t163 = Cos(var1[4]);
  t3060 = Sin(var1[15]);
  t3012 = Cos(var1[15]);
  t3067 = t2967*t290*t2919;
  t3068 = t2891*t2984;
  t3075 = t3067 + t3068;
  t3097 = t163*t290;
  t3118 = 0. + t3097;
  t3136 = Sin(var1[16]);
  t3161 = t3118*t3136;
  t3169 = Cos(var1[16]);
  t3170 = -1.*t3060;
  t3177 = 0. + t3170;
  t3178 = t3177*t2988;
  t3179 = t3012*t3075;
  t3180 = 0. + t3178 + t3179;
  t3187 = t3169*t3180;
  t3188 = 0. + t3161 + t3187;
  t3047 = 0. + t3012;
  t3298 = t2967*t290;
  t3304 = t2891*t2919*t2984;
  t3305 = t3298 + t3304;
  t3337 = -1.*t290*t2891;
  t3339 = t2967*t2919*t2984;
  t3340 = t3337 + t3339;
  t3221 = Cos(var1[17]);
  t3224 = 0. + t3221;
  t3345 = t163*t2984;
  t3348 = 0. + t3345;
  t3359 = t3136*t3348;
  t3362 = t3012*t3340;
  t3363 = t3177*t3305;
  t3366 = 0. + t3362 + t3363;
  t3369 = t3169*t3366;
  t3370 = 0. + t3359 + t3369;
  t3239 = Sin(var1[17]);
  t3437 = t3012*t2967*t163;
  t3438 = t163*t3177*t2891;
  t3439 = 0. + t3437 + t3438;
  t3446 = -1.*t2919;
  t3447 = 0. + t3446;
  t3465 = t3169*t3439;
  t3477 = t3136*t3447;
  t3478 = 0. + t3465 + t3477;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.1881*t163*t290 + 0.04675*t2988 + 0.08*(0. + t2988*t3047 + t3060*t3075) - 0.213*t3188 - 0.213*(t3188*t3224 + (0. + t3118*t3169 - 1.*t3136*t3180)*t3239) + var1[0];
  p_output1[7]=-0.1881*t163*t2984 + 0.04675*t3305 + 0.08*(0. + t3047*t3305 + t3060*t3340) - 0.213*t3370 - 0.213*(t3239*(0. + t3169*t3348 - 1.*t3136*t3366) + t3224*t3370) + var1[1];
  p_output1[8]=0.04675*t163*t2891 + 0.1881*t2919 + 0.08*(0. + t163*t2891*t3047 + t163*t2967*t3060) - 0.213*t3478 - 0.213*(t3239*(0. - 1.*t3136*t3439 + t3169*t3447) + t3224*t3478) + var1[2];
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

#include "hc_4_func.hh"

namespace SymFunction
{

void hc_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
