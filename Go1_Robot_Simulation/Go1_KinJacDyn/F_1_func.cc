/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:20 GMT-05:00
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
  double t1896;
  double t1973;
  double t2004;
  double t2013;
  double t2022;
  double t2030;
  double t2040;
  double t2041;
  double t2047;
  double t2063;
  double t2068;
  double t2070;
  double t2071;
  double t1673;
  double t2092;
  double t2096;
  double t2098;
  double t2100;
  double t2102;
  double t2103;
  double t2104;
  double t2105;
  double t2106;
  double t2111;
  double t2113;
  double t2115;
  double t2061;
  double t2160;
  double t2169;
  double t2172;
  double t2189;
  double t2197;
  double t2203;
  double t2122;
  double t2127;
  double t2223;
  double t2227;
  double t2228;
  double t2231;
  double t2234;
  double t2236;
  double t2237;
  double t2239;
  double t2145;
  double t2330;
  double t2333;
  double t2338;
  double t2343;
  double t2344;
  double t2346;
  double t2348;
  double t2349;
  t1896 = Cos(var1[5]);
  t1973 = Sin(var1[3]);
  t2004 = Sin(var1[4]);
  t2013 = t1896*t1973*t2004;
  t2022 = Cos(var1[3]);
  t2030 = Sin(var1[5]);
  t2040 = -1.*t2022*t2030;
  t2041 = t2013 + t2040;
  t2047 = Cos(var1[6]);
  t2063 = t2022*t1896*t2004;
  t2068 = t1973*t2030;
  t2070 = t2063 + t2068;
  t2071 = Sin(var1[6]);
  t1673 = Cos(var1[4]);
  t2092 = Cos(var1[7]);
  t2096 = t2047*t2070;
  t2098 = -1.*t2071;
  t2100 = 0. + t2098;
  t2102 = t2041*t2100;
  t2103 = 0. + t2096 + t2102;
  t2104 = t2092*t2103;
  t2105 = t1673*t1896;
  t2106 = 0. + t2105;
  t2111 = Sin(var1[7]);
  t2113 = t2106*t2111;
  t2115 = 0. + t2104 + t2113;
  t2061 = 0. + t2047;
  t2160 = t2022*t1896;
  t2169 = t1973*t2004*t2030;
  t2172 = t2160 + t2169;
  t2189 = -1.*t1896*t1973;
  t2197 = t2022*t2004*t2030;
  t2203 = t2189 + t2197;
  t2122 = Cos(var1[8]);
  t2127 = 0. + t2122;
  t2223 = t2047*t2203;
  t2227 = t2172*t2100;
  t2228 = 0. + t2223 + t2227;
  t2231 = t2092*t2228;
  t2234 = t1673*t2030;
  t2236 = 0. + t2234;
  t2237 = t2236*t2111;
  t2239 = 0. + t2231 + t2237;
  t2145 = Sin(var1[8]);
  t2330 = t2022*t1673*t2047;
  t2333 = t1673*t1973*t2100;
  t2338 = 0. + t2330 + t2333;
  t2343 = t2092*t2338;
  t2344 = -1.*t2004;
  t2346 = 0. + t2344;
  t2348 = t2346*t2111;
  t2349 = 0. + t2343 + t2348;
  p_output1[0]=0.1881*t1673*t1896 - 0.04675*t2041 - 0.08*(0. + t2041*t2061 + t2070*t2071) - 0.213*t2115 - 0.213*(t2115*t2127 + (0. + t2092*t2106 - 1.*t2103*t2111)*t2145) + var1[0];
  p_output1[1]=0.1881*t1673*t2030 - 0.04675*t2172 - 0.08*(0. + t2061*t2172 + t2071*t2203) - 0.213*t2239 - 0.213*(t2145*(0. - 1.*t2111*t2228 + t2092*t2236) + t2127*t2239) + var1[1];
  p_output1[2]=-0.04675*t1673*t1973 - 0.1881*t2004 - 0.08*(0. + t1673*t1973*t2061 + t1673*t2022*t2071) - 0.213*t2349 - 0.213*(t2145*(0. - 1.*t2111*t2338 + t2092*t2346) + t2127*t2349) + var1[2];
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

#include "F_1_func.hh"

namespace SymFunction
{

void F_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
