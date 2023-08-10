/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:38 GMT-05:00
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
  double t2113;
  double t2155;
  double t2122;
  double t2092;
  double t2157;
  double t2151;
  double t2197;
  double t2218;
  double t2260;
  double t2236;
  double t2237;
  double t2239;
  double t2231;
  double t2289;
  double t2343;
  double t2346;
  double t2348;
  double t2350;
  double t2351;
  double t2408;
  double t2414;
  double t2417;
  double t2273;
  double t2434;
  double t2442;
  double t2445;
  double t2361;
  double t2367;
  double t2420;
  double t2447;
  double t2450;
  double t2374;
  double t2382;
  double t2478;
  double t2480;
  double t2481;
  double t2482;
  double t2529;
  double t2534;
  double t2535;
  double t2536;
  double t2537;
  double t2538;
  double t2589;
  double t2590;
  double t2596;
  double t2604;
  double t2605;
  double t2608;
  double t2644;
  double t2645;
  double t2649;
  double t2651;
  double t2652;
  double t2653;
  double t2674;
  double t2675;
  double t2676;
  double t2688;
  double t2692;
  double t2694;
  double t2695;
  double t2696;
  double t2697;
  double t2733;
  double t2734;
  double t2735;
  double t2749;
  double t2754;
  double t2758;
  double t2761;
  double t2762;
  double t2766;
  double t2787;
  double t2789;
  double t2790;
  double t2804;
  double t2805;
  double t2807;
  double t2803;
  double t2808;
  double t2809;
  double t2490;
  double t2821;
  double t2822;
  double t2832;
  double t2833;
  double t2835;
  double t2834;
  double t2836;
  double t2837;
  double t2811;
  double t2848;
  double t2849;
  double t2851;
  double t2852;
  double t2850;
  double t2856;
  double t2858;
  double t2824;
  double t2868;
  double t2869;
  double t2871;
  double t2872;
  double t2870;
  double t2873;
  double t2875;
  t2113 = Cos(var1[5]);
  t2155 = Sin(var1[3]);
  t2122 = Sin(var1[4]);
  t2092 = Cos(var1[3]);
  t2157 = Sin(var1[5]);
  t2151 = t2092*t2113*t2122;
  t2197 = t2155*t2157;
  t2218 = t2151 + t2197;
  t2260 = Cos(var1[9]);
  t2236 = -1.*t2113*t2155*t2122;
  t2237 = t2092*t2157;
  t2239 = t2236 + t2237;
  t2231 = Sin(var1[9]);
  t2289 = Cos(var1[10]);
  t2343 = t2260*t2239;
  t2346 = -1.*t2231;
  t2348 = 0. + t2346;
  t2350 = t2348*t2218;
  t2351 = t2343 + t2350;
  t2408 = -1.*t2113*t2155;
  t2414 = t2092*t2122*t2157;
  t2417 = t2408 + t2414;
  t2273 = 0. + t2260;
  t2434 = -1.*t2092*t2113;
  t2442 = -1.*t2155*t2122*t2157;
  t2445 = t2434 + t2442;
  t2361 = Cos(var1[11]);
  t2367 = 0. + t2361;
  t2420 = t2348*t2417;
  t2447 = t2260*t2445;
  t2450 = t2420 + t2447;
  t2374 = Sin(var1[10]);
  t2382 = Sin(var1[11]);
  t2478 = Cos(var1[4]);
  t2480 = t2092*t2478*t2348;
  t2481 = -1.*t2260*t2478*t2155;
  t2482 = t2480 + t2481;
  t2529 = t2260*t2092*t2478*t2113;
  t2534 = t2478*t2113*t2348*t2155;
  t2535 = t2529 + t2534;
  t2536 = t2289*t2535;
  t2537 = -1.*t2113*t2374*t2122;
  t2538 = t2536 + t2537;
  t2589 = -1.*t2374*t2122*t2157;
  t2590 = t2260*t2092*t2478*t2157;
  t2596 = t2478*t2348*t2155*t2157;
  t2604 = t2590 + t2596;
  t2605 = t2289*t2604;
  t2608 = t2589 + t2605;
  t2644 = -1.*t2478*t2374;
  t2645 = -1.*t2260*t2092*t2122;
  t2649 = -1.*t2348*t2155*t2122;
  t2651 = t2645 + t2649;
  t2652 = t2289*t2651;
  t2653 = t2644 + t2652;
  t2674 = t2113*t2155;
  t2675 = -1.*t2092*t2122*t2157;
  t2676 = t2674 + t2675;
  t2688 = -1.*t2478*t2374*t2157;
  t2692 = t2260*t2676;
  t2694 = t2348*t2445;
  t2695 = t2692 + t2694;
  t2696 = t2289*t2695;
  t2697 = t2688 + t2696;
  t2733 = t2113*t2155*t2122;
  t2734 = -1.*t2092*t2157;
  t2735 = t2733 + t2734;
  t2749 = t2478*t2113*t2374;
  t2754 = t2348*t2735;
  t2758 = t2260*t2218;
  t2761 = t2754 + t2758;
  t2762 = t2289*t2761;
  t2766 = t2749 + t2762;
  t2787 = -1.*t2260*t2735;
  t2789 = -1.*t2231*t2218;
  t2790 = t2787 + t2789;
  t2804 = t2092*t2113;
  t2805 = t2155*t2122*t2157;
  t2807 = t2804 + t2805;
  t2803 = -1.*t2231*t2417;
  t2808 = -1.*t2260*t2807;
  t2809 = t2803 + t2808;
  t2490 = -1.*t2478*t2231*t2155;
  t2821 = -1.*t2092*t2478*t2231;
  t2822 = t2821 + t2481;
  t2832 = t2478*t2113;
  t2833 = 0. + t2832;
  t2835 = 0. + t2754 + t2758;
  t2834 = t2289*t2833;
  t2836 = -1.*t2374*t2835;
  t2837 = t2834 + t2836;
  t2811 = t2260*t2417;
  t2848 = t2478*t2157;
  t2849 = 0. + t2848;
  t2851 = t2348*t2807;
  t2852 = 0. + t2811 + t2851;
  t2850 = t2289*t2849;
  t2856 = -1.*t2374*t2852;
  t2858 = t2850 + t2856;
  t2824 = t2260*t2092*t2478;
  t2868 = t2478*t2348*t2155;
  t2869 = 0. + t2824 + t2868;
  t2871 = -1.*t2122;
  t2872 = 0. + t2871;
  t2870 = -1.*t2374*t2869;
  t2873 = t2289*t2872;
  t2875 = t2870 + t2873;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.04675*t2218 + 0.08*(t2231*t2239 + t2218*t2273) - 0.213*t2289*t2351 - 0.213*(t2289*t2351*t2367 - 1.*t2351*t2374*t2382);
  p_output1[10]=0.04675*t2417 + 0.08*(t2273*t2417 + t2231*t2445) - 0.213*t2289*t2450 - 0.213*(t2289*t2367*t2450 - 1.*t2374*t2382*t2450);
  p_output1[11]=0.04675*t2092*t2478 - 0.213*t2289*t2482 - 0.213*(t2289*t2367*t2482 - 1.*t2374*t2382*t2482) + 0.08*(t2092*t2273*t2478 + t2490);
  p_output1[12]=-0.1881*t2113*t2122 + 0.04675*t2113*t2155*t2478 + 0.08*(t2092*t2113*t2231*t2478 + t2113*t2155*t2273*t2478) - 0.213*t2538 - 0.213*(t2382*(-1.*t2113*t2122*t2289 - 1.*t2374*t2535) + t2367*t2538);
  p_output1[13]=-0.1881*t2122*t2157 + 0.04675*t2155*t2157*t2478 + 0.08*(t2092*t2157*t2231*t2478 + t2155*t2157*t2273*t2478) - 0.213*t2608 - 0.213*(t2382*(-1.*t2122*t2157*t2289 - 1.*t2374*t2604) + t2367*t2608);
  p_output1[14]=-0.04675*t2122*t2155 + 0.08*(-1.*t2092*t2122*t2231 - 1.*t2122*t2155*t2273) - 0.1881*t2478 - 0.213*t2653 - 0.213*(t2382*(-1.*t2289*t2478 - 1.*t2374*t2651) + t2367*t2653);
  p_output1[15]=0.04675*t2445 - 0.1881*t2157*t2478 + 0.08*(t2273*t2445 + t2231*t2676) - 0.213*t2697 - 0.213*(t2382*(-1.*t2157*t2289*t2478 - 1.*t2374*t2695) + t2367*t2697);
  p_output1[16]=0.1881*t2113*t2478 + 0.04675*t2735 + 0.08*(t2218*t2231 + t2273*t2735) - 0.213*t2766 - 0.213*(t2382*(t2113*t2289*t2478 - 1.*t2374*t2761) + t2367*t2766);
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.08*(-1.*t2231*t2735 + t2758) - 0.213*t2289*t2790 - 0.213*(t2289*t2367*t2790 - 1.*t2374*t2382*t2790);
  p_output1[28]=-0.213*t2289*t2809 - 0.213*(t2289*t2367*t2809 - 1.*t2374*t2382*t2809) + 0.08*(-1.*t2231*t2807 + t2811);
  p_output1[29]=-0.213*t2289*t2822 - 0.213*(t2289*t2367*t2822 - 1.*t2374*t2382*t2822) + 0.08*(t2490 + t2824);
  p_output1[30]=-0.213*t2837 - 0.213*(t2382*(-1.*t2374*t2833 - 1.*t2289*t2835) + t2367*t2837);
  p_output1[31]=-0.213*t2858 - 0.213*(t2382*(-1.*t2374*t2849 - 1.*t2289*t2852) + t2367*t2858);
  p_output1[32]=-0.213*t2875 - 0.213*(t2382*(-1.*t2289*t2869 - 1.*t2374*t2872) + t2367*t2875);
  p_output1[33]=-0.213*(-1.*t2382*(0. + t2374*t2833 + t2289*t2835) + t2361*(0. + t2834 + t2836));
  p_output1[34]=-0.213*(-1.*t2382*(0. + t2374*t2849 + t2289*t2852) + t2361*(0. + t2850 + t2856));
  p_output1[35]=-0.213*(-1.*t2382*(0. + t2289*t2869 + t2374*t2872) + t2361*(0. + t2870 + t2873));
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_2_func.hh"

namespace SymFunction
{

void j_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
