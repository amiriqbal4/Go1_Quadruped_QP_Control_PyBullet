/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:27 GMT-05:00
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
  double t1673;
  double t2041;
  double t2042;
  double t2063;
  double t2068;
  double t2070;
  double t2072;
  double t2074;
  double t565;
  double t2104;
  double t2096;
  double t2105;
  double t2106;
  double t2113;
  double t2135;
  double t2138;
  double t2145;
  double t2149;
  double t2151;
  double t2154;
  double t2155;
  double t2157;
  double t2160;
  double t2169;
  double t2172;
  double t2174;
  double t2100;
  double t2249;
  double t2253;
  double t2257;
  double t2265;
  double t2273;
  double t2275;
  double t2197;
  double t2203;
  double t2289;
  double t2291;
  double t2330;
  double t2333;
  double t2343;
  double t2344;
  double t2346;
  double t2348;
  double t2218;
  double t2403;
  double t2405;
  double t2406;
  double t2408;
  double t2414;
  double t2420;
  double t2434;
  double t2442;
  t1673 = Cos(var1[5]);
  t2041 = Sin(var1[3]);
  t2042 = Sin(var1[4]);
  t2063 = t1673*t2041*t2042;
  t2068 = Cos(var1[3]);
  t2070 = Sin(var1[5]);
  t2072 = -1.*t2068*t2070;
  t2074 = t2063 + t2072;
  t565 = Cos(var1[4]);
  t2104 = Sin(var1[12]);
  t2096 = Cos(var1[12]);
  t2105 = t2068*t1673*t2042;
  t2106 = t2041*t2070;
  t2113 = t2105 + t2106;
  t2135 = t565*t1673;
  t2138 = 0. + t2135;
  t2145 = Sin(var1[13]);
  t2149 = t2138*t2145;
  t2151 = Cos(var1[13]);
  t2154 = -1.*t2104;
  t2155 = 0. + t2154;
  t2157 = t2155*t2074;
  t2160 = t2096*t2113;
  t2169 = 0. + t2157 + t2160;
  t2172 = t2151*t2169;
  t2174 = 0. + t2149 + t2172;
  t2100 = 0. + t2096;
  t2249 = t2068*t1673;
  t2253 = t2041*t2042*t2070;
  t2257 = t2249 + t2253;
  t2265 = -1.*t1673*t2041;
  t2273 = t2068*t2042*t2070;
  t2275 = t2265 + t2273;
  t2197 = Cos(var1[14]);
  t2203 = 0. + t2197;
  t2289 = t565*t2070;
  t2291 = 0. + t2289;
  t2330 = t2145*t2291;
  t2333 = t2096*t2275;
  t2343 = t2155*t2257;
  t2344 = 0. + t2333 + t2343;
  t2346 = t2151*t2344;
  t2348 = 0. + t2330 + t2346;
  t2218 = Sin(var1[14]);
  t2403 = t2096*t2068*t565;
  t2405 = t565*t2155*t2041;
  t2406 = 0. + t2403 + t2405;
  t2408 = -1.*t2042;
  t2414 = 0. + t2408;
  t2420 = t2151*t2406;
  t2434 = t2145*t2414;
  t2442 = 0. + t2420 + t2434;
  p_output1[0]=-0.04675*t2074 - 0.08*(0. + t2074*t2100 + t2104*t2113) - 0.213*t2174 - 0.213*(t2174*t2203 + (0. + t2138*t2151 - 1.*t2145*t2169)*t2218) - 0.1881*t1673*t565 + var1[0];
  p_output1[1]=-0.04675*t2257 - 0.08*(0. + t2100*t2257 + t2104*t2275) - 0.213*t2348 - 0.213*(t2218*(0. + t2151*t2291 - 1.*t2145*t2344) + t2203*t2348) - 0.1881*t2070*t565 + var1[1];
  p_output1[2]=0.1881*t2042 - 0.213*t2442 - 0.213*(t2218*(0. - 1.*t2145*t2406 + t2151*t2414) + t2203*t2442) - 0.04675*t2041*t565 - 0.08*(0. + t2041*t2100*t565 + t2068*t2104*t565) + var1[2];
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

#include "F_3_func.hh"

namespace SymFunction
{

void F_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
