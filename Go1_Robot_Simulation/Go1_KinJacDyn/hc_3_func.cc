/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:12 GMT-05:00
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
  double t824;
  double t2834;
  double t2891;
  double t2919;
  double t2921;
  double t2938;
  double t2945;
  double t2956;
  double t2984;
  double t3006;
  double t3012;
  double t3047;
  double t3053;
  double t290;
  double t3068;
  double t3075;
  double t3080;
  double t3084;
  double t3088;
  double t3089;
  double t3096;
  double t3097;
  double t3118;
  double t3134;
  double t3136;
  double t3161;
  double t2985;
  double t3242;
  double t3252;
  double t3253;
  double t3279;
  double t3288;
  double t3293;
  double t3170;
  double t3177;
  double t3305;
  double t3323;
  double t3329;
  double t3337;
  double t3339;
  double t3340;
  double t3341;
  double t3342;
  double t3188;
  double t3392;
  double t3395;
  double t3398;
  double t3413;
  double t3416;
  double t3420;
  double t3422;
  double t3423;
  t824 = Cos(var1[5]);
  t2834 = Sin(var1[3]);
  t2891 = Sin(var1[4]);
  t2919 = t824*t2834*t2891;
  t2921 = Cos(var1[3]);
  t2938 = Sin(var1[5]);
  t2945 = -1.*t2921*t2938;
  t2956 = t2919 + t2945;
  t2984 = Cos(var1[6]);
  t3006 = t2921*t824*t2891;
  t3012 = t2834*t2938;
  t3047 = t3006 + t3012;
  t3053 = Sin(var1[6]);
  t290 = Cos(var1[4]);
  t3068 = Cos(var1[7]);
  t3075 = t2984*t3047;
  t3080 = -1.*t3053;
  t3084 = 0. + t3080;
  t3088 = t2956*t3084;
  t3089 = 0. + t3075 + t3088;
  t3096 = t3068*t3089;
  t3097 = t290*t824;
  t3118 = 0. + t3097;
  t3134 = Sin(var1[7]);
  t3136 = t3118*t3134;
  t3161 = 0. + t3096 + t3136;
  t2985 = 0. + t2984;
  t3242 = t2921*t824;
  t3252 = t2834*t2891*t2938;
  t3253 = t3242 + t3252;
  t3279 = -1.*t824*t2834;
  t3288 = t2921*t2891*t2938;
  t3293 = t3279 + t3288;
  t3170 = Cos(var1[8]);
  t3177 = 0. + t3170;
  t3305 = t2984*t3293;
  t3323 = t3253*t3084;
  t3329 = 0. + t3305 + t3323;
  t3337 = t3068*t3329;
  t3339 = t290*t2938;
  t3340 = 0. + t3339;
  t3341 = t3340*t3134;
  t3342 = 0. + t3337 + t3341;
  t3188 = Sin(var1[8]);
  t3392 = t2921*t290*t2984;
  t3395 = t290*t2834*t3084;
  t3398 = 0. + t3392 + t3395;
  t3413 = t3068*t3398;
  t3416 = -1.*t2891;
  t3420 = 0. + t3416;
  t3422 = t3420*t3134;
  t3423 = 0. + t3413 + t3422;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.04675*t2956 - 0.08*(0. + t2956*t2985 + t3047*t3053) - 0.213*t3161 - 0.213*(t3161*t3177 + (0. + t3068*t3118 - 1.*t3089*t3134)*t3188) + 0.1881*t290*t824 + var1[0];
  p_output1[7]=0.1881*t290*t2938 - 0.04675*t3253 - 0.08*(0. + t2985*t3253 + t3053*t3293) - 0.213*t3342 - 0.213*(t3188*(0. - 1.*t3134*t3329 + t3068*t3340) + t3177*t3342) + var1[1];
  p_output1[8]=-0.1881*t2891 - 0.04675*t2834*t290 - 0.08*(0. + t2834*t290*t2985 + t290*t2921*t3053) - 0.213*t3423 - 0.213*(t3188*(0. - 1.*t3134*t3398 + t3068*t3420) + t3177*t3423) + var1[2];
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

#include "hc_3_func.hh"

namespace SymFunction
{

void hc_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
