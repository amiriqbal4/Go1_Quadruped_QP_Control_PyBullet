/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:31 GMT-05:00
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
  double t2004;
  double t2063;
  double t2074;
  double t2092;
  double t2096;
  double t2100;
  double t2102;
  double t2105;
  double t565;
  double t2132;
  double t2113;
  double t2135;
  double t2138;
  double t2149;
  double t2160;
  double t2172;
  double t2174;
  double t2175;
  double t2197;
  double t2203;
  double t2217;
  double t2218;
  double t2222;
  double t2223;
  double t2227;
  double t2231;
  double t2121;
  double t2286;
  double t2289;
  double t2291;
  double t2333;
  double t2343;
  double t2346;
  double t2237;
  double t2239;
  double t2352;
  double t2361;
  double t2367;
  double t2373;
  double t2374;
  double t2375;
  double t2382;
  double t2383;
  double t2249;
  double t2445;
  double t2447;
  double t2448;
  double t2451;
  double t2452;
  double t2462;
  double t2463;
  double t2465;
  t2004 = Cos(var1[5]);
  t2063 = Sin(var1[3]);
  t2074 = Sin(var1[4]);
  t2092 = t2004*t2063*t2074;
  t2096 = Cos(var1[3]);
  t2100 = Sin(var1[5]);
  t2102 = -1.*t2096*t2100;
  t2105 = t2092 + t2102;
  t565 = Cos(var1[4]);
  t2132 = Sin(var1[15]);
  t2113 = Cos(var1[15]);
  t2135 = t2096*t2004*t2074;
  t2138 = t2063*t2100;
  t2149 = t2135 + t2138;
  t2160 = t565*t2004;
  t2172 = 0. + t2160;
  t2174 = Sin(var1[16]);
  t2175 = t2172*t2174;
  t2197 = Cos(var1[16]);
  t2203 = -1.*t2132;
  t2217 = 0. + t2203;
  t2218 = t2217*t2105;
  t2222 = t2113*t2149;
  t2223 = 0. + t2218 + t2222;
  t2227 = t2197*t2223;
  t2231 = 0. + t2175 + t2227;
  t2121 = 0. + t2113;
  t2286 = t2096*t2004;
  t2289 = t2063*t2074*t2100;
  t2291 = t2286 + t2289;
  t2333 = -1.*t2004*t2063;
  t2343 = t2096*t2074*t2100;
  t2346 = t2333 + t2343;
  t2237 = Cos(var1[17]);
  t2239 = 0. + t2237;
  t2352 = t565*t2100;
  t2361 = 0. + t2352;
  t2367 = t2174*t2361;
  t2373 = t2113*t2346;
  t2374 = t2217*t2291;
  t2375 = 0. + t2373 + t2374;
  t2382 = t2197*t2375;
  t2383 = 0. + t2367 + t2382;
  t2249 = Sin(var1[17]);
  t2445 = t2113*t2096*t565;
  t2447 = t565*t2217*t2063;
  t2448 = 0. + t2445 + t2447;
  t2451 = -1.*t2074;
  t2452 = 0. + t2451;
  t2462 = t2197*t2448;
  t2463 = t2174*t2452;
  t2465 = 0. + t2462 + t2463;
  p_output1[0]=0.04675*t2105 + 0.08*(0. + t2105*t2121 + t2132*t2149) - 0.213*t2231 - 0.213*(t2231*t2239 + (0. + t2172*t2197 - 1.*t2174*t2223)*t2249) - 0.1881*t2004*t565 + var1[0];
  p_output1[1]=0.04675*t2291 + 0.08*(0. + t2121*t2291 + t2132*t2346) - 0.213*t2383 - 0.213*(t2249*(0. + t2197*t2361 - 1.*t2174*t2375) + t2239*t2383) - 0.1881*t2100*t565 + var1[1];
  p_output1[2]=0.1881*t2074 - 0.213*t2465 - 0.213*(t2249*(0. - 1.*t2174*t2448 + t2197*t2452) + t2239*t2465) + 0.04675*t2063*t565 + 0.08*(0. + t2063*t2121*t565 + t2096*t2132*t565) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "F_4_func.hh"

namespace SymFunction
{

void F_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
