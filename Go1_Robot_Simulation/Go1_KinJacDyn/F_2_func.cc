/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:23 GMT-05:00
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
  double t1929;
  double t2013;
  double t2041;
  double t2042;
  double t2047;
  double t2061;
  double t2062;
  double t2063;
  double t1673;
  double t2077;
  double t2070;
  double t2092;
  double t2096;
  double t2100;
  double t2106;
  double t2113;
  double t2115;
  double t2121;
  double t2122;
  double t2127;
  double t2132;
  double t2135;
  double t2138;
  double t2143;
  double t2145;
  double t2149;
  double t2072;
  double t2222;
  double t2223;
  double t2227;
  double t2234;
  double t2236;
  double t2237;
  double t2154;
  double t2155;
  double t2257;
  double t2260;
  double t2265;
  double t2273;
  double t2275;
  double t2276;
  double t2277;
  double t2283;
  double t2160;
  double t2361;
  double t2367;
  double t2372;
  double t2374;
  double t2375;
  double t2393;
  double t2400;
  double t2403;
  t1929 = Cos(var1[5]);
  t2013 = Sin(var1[3]);
  t2041 = Sin(var1[4]);
  t2042 = t1929*t2013*t2041;
  t2047 = Cos(var1[3]);
  t2061 = Sin(var1[5]);
  t2062 = -1.*t2047*t2061;
  t2063 = t2042 + t2062;
  t1673 = Cos(var1[4]);
  t2077 = Sin(var1[9]);
  t2070 = Cos(var1[9]);
  t2092 = t2047*t1929*t2041;
  t2096 = t2013*t2061;
  t2100 = t2092 + t2096;
  t2106 = t1673*t1929;
  t2113 = 0. + t2106;
  t2115 = Sin(var1[10]);
  t2121 = t2113*t2115;
  t2122 = Cos(var1[10]);
  t2127 = -1.*t2077;
  t2132 = 0. + t2127;
  t2135 = t2132*t2063;
  t2138 = t2070*t2100;
  t2143 = 0. + t2135 + t2138;
  t2145 = t2122*t2143;
  t2149 = 0. + t2121 + t2145;
  t2072 = 0. + t2070;
  t2222 = t2047*t1929;
  t2223 = t2013*t2041*t2061;
  t2227 = t2222 + t2223;
  t2234 = -1.*t1929*t2013;
  t2236 = t2047*t2041*t2061;
  t2237 = t2234 + t2236;
  t2154 = Cos(var1[11]);
  t2155 = 0. + t2154;
  t2257 = t1673*t2061;
  t2260 = 0. + t2257;
  t2265 = t2115*t2260;
  t2273 = t2070*t2237;
  t2275 = t2132*t2227;
  t2276 = 0. + t2273 + t2275;
  t2277 = t2122*t2276;
  t2283 = 0. + t2265 + t2277;
  t2160 = Sin(var1[11]);
  t2361 = t2070*t2047*t1673;
  t2367 = t1673*t2132*t2013;
  t2372 = 0. + t2361 + t2367;
  t2374 = -1.*t2041;
  t2375 = 0. + t2374;
  t2393 = t2122*t2372;
  t2400 = t2115*t2375;
  t2403 = 0. + t2393 + t2400;
  p_output1[0]=0.1881*t1673*t1929 + 0.04675*t2063 + 0.08*(0. + t2063*t2072 + t2077*t2100) - 0.213*t2149 - 0.213*(t2149*t2155 + (0. + t2113*t2122 - 1.*t2115*t2143)*t2160) + var1[0];
  p_output1[1]=0.1881*t1673*t2061 + 0.04675*t2227 + 0.08*(0. + t2072*t2227 + t2077*t2237) - 0.213*t2283 - 0.213*(t2160*(0. + t2122*t2260 - 1.*t2115*t2276) + t2155*t2283) + var1[1];
  p_output1[2]=0.04675*t1673*t2013 - 0.1881*t2041 + 0.08*(0. + t1673*t2013*t2072 + t1673*t2047*t2077) - 0.213*t2403 - 0.213*(t2160*(0. - 1.*t2115*t2372 + t2122*t2375) + t2155*t2403) + var1[2];
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

#include "F_2_func.hh"

namespace SymFunction
{

void F_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
