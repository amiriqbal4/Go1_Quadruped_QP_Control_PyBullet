/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:04 GMT-05:00
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
  double t440;
  double t497;
  double t824;
  double t1225;
  double t1656;
  double t2180;
  double t2725;
  double t2820;
  double t290;
  double t2890;
  double t2859;
  double t2891;
  double t2919;
  double t2921;
  double t2956;
  double t2967;
  double t2972;
  double t2984;
  double t2985;
  double t2986;
  double t2988;
  double t3006;
  double t3012;
  double t3029;
  double t3047;
  double t3049;
  double t2860;
  double t3097;
  double t3118;
  double t3134;
  double t3146;
  double t3161;
  double t3169;
  double t3055;
  double t3059;
  double t3180;
  double t3187;
  double t3188;
  double t3207;
  double t3208;
  double t3209;
  double t3221;
  double t3224;
  double t3067;
  double t3305;
  double t3323;
  double t3324;
  double t3337;
  double t3339;
  double t3343;
  double t3344;
  double t3345;
  t440 = Cos(var1[5]);
  t497 = Sin(var1[3]);
  t824 = Sin(var1[4]);
  t1225 = t440*t497*t824;
  t1656 = Cos(var1[3]);
  t2180 = Sin(var1[5]);
  t2725 = -1.*t1656*t2180;
  t2820 = t1225 + t2725;
  t290 = Cos(var1[4]);
  t2890 = Sin(var1[9]);
  t2859 = Cos(var1[9]);
  t2891 = t1656*t440*t824;
  t2919 = t497*t2180;
  t2921 = t2891 + t2919;
  t2956 = t290*t440;
  t2967 = 0. + t2956;
  t2972 = Sin(var1[10]);
  t2984 = t2967*t2972;
  t2985 = Cos(var1[10]);
  t2986 = -1.*t2890;
  t2988 = 0. + t2986;
  t3006 = t2988*t2820;
  t3012 = t2859*t2921;
  t3029 = 0. + t3006 + t3012;
  t3047 = t2985*t3029;
  t3049 = 0. + t2984 + t3047;
  t2860 = 0. + t2859;
  t3097 = t1656*t440;
  t3118 = t497*t824*t2180;
  t3134 = t3097 + t3118;
  t3146 = -1.*t440*t497;
  t3161 = t1656*t824*t2180;
  t3169 = t3146 + t3161;
  t3055 = Cos(var1[11]);
  t3059 = 0. + t3055;
  t3180 = t290*t2180;
  t3187 = 0. + t3180;
  t3188 = t2972*t3187;
  t3207 = t2859*t3169;
  t3208 = t2988*t3134;
  t3209 = 0. + t3207 + t3208;
  t3221 = t2985*t3209;
  t3224 = 0. + t3188 + t3221;
  t3067 = Sin(var1[11]);
  t3305 = t2859*t1656*t290;
  t3323 = t290*t2988*t497;
  t3324 = 0. + t3305 + t3323;
  t3337 = -1.*t824;
  t3339 = 0. + t3337;
  t3343 = t2985*t3324;
  t3344 = t2972*t3339;
  t3345 = 0. + t3343 + t3344;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=0.04675*t2820 + 0.08*(0. + t2820*t2860 + t2890*t2921) - 0.213*t3049 - 0.213*(t3049*t3059 + (0. + t2967*t2985 - 1.*t2972*t3029)*t3067) + 0.1881*t290*t440 + var1[0];
  p_output1[7]=0.1881*t2180*t290 + 0.04675*t3134 + 0.08*(0. + t2860*t3134 + t2890*t3169) - 0.213*t3224 - 0.213*(t3067*(0. + t2985*t3187 - 1.*t2972*t3209) + t3059*t3224) + var1[1];
  p_output1[8]=-0.213*t3345 - 0.213*(t3067*(0. - 1.*t2972*t3324 + t2985*t3339) + t3059*t3345) + 0.04675*t290*t497 + 0.08*(0. + t1656*t2890*t290 + t2860*t290*t497) - 0.1881*t824 + var1[2];
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

#include "hc_1_func.hh"

namespace SymFunction
{

void hc_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
