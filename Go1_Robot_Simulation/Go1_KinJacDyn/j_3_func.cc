/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:42 GMT-05:00
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
  double t2197;
  double t2239;
  double t2227;
  double t2151;
  double t2249;
  double t2237;
  double t2275;
  double t2277;
  double t2383;
  double t2350;
  double t2352;
  double t2361;
  double t2343;
  double t2418;
  double t2420;
  double t2445;
  double t2447;
  double t2451;
  double t2452;
  double t2483;
  double t2484;
  double t2494;
  double t2389;
  double t2501;
  double t2505;
  double t2506;
  double t2454;
  double t2455;
  double t2500;
  double t2507;
  double t2516;
  double t2463;
  double t2466;
  double t2543;
  double t2564;
  double t2566;
  double t2567;
  double t2619;
  double t2626;
  double t2627;
  double t2630;
  double t2632;
  double t2633;
  double t2670;
  double t2671;
  double t2673;
  double t2674;
  double t2676;
  double t2677;
  double t2725;
  double t2733;
  double t2736;
  double t2737;
  double t2745;
  double t2746;
  double t2778;
  double t2782;
  double t2784;
  double t2793;
  double t2796;
  double t2797;
  double t2802;
  double t2804;
  double t2805;
  double t2824;
  double t2825;
  double t2826;
  double t2832;
  double t2834;
  double t2838;
  double t2840;
  double t2841;
  double t2842;
  double t2863;
  double t2864;
  double t2865;
  double t2878;
  double t2879;
  double t2880;
  double t2877;
  double t2881;
  double t2882;
  double t2580;
  double t2893;
  double t2894;
  double t2904;
  double t2905;
  double t2907;
  double t2906;
  double t2908;
  double t2909;
  double t2884;
  double t2926;
  double t2930;
  double t2932;
  double t2933;
  double t2931;
  double t2934;
  double t2935;
  double t2896;
  double t2948;
  double t2950;
  double t2954;
  double t2955;
  double t2952;
  double t2956;
  double t2957;
  t2197 = Cos(var1[5]);
  t2239 = Sin(var1[3]);
  t2227 = Sin(var1[4]);
  t2151 = Cos(var1[3]);
  t2249 = Sin(var1[5]);
  t2237 = t2151*t2197*t2227;
  t2275 = t2239*t2249;
  t2277 = t2237 + t2275;
  t2383 = Cos(var1[12]);
  t2350 = -1.*t2197*t2239*t2227;
  t2352 = t2151*t2249;
  t2361 = t2350 + t2352;
  t2343 = Sin(var1[12]);
  t2418 = Cos(var1[13]);
  t2420 = t2383*t2361;
  t2445 = -1.*t2343;
  t2447 = 0. + t2445;
  t2451 = t2447*t2277;
  t2452 = t2420 + t2451;
  t2483 = -1.*t2197*t2239;
  t2484 = t2151*t2227*t2249;
  t2494 = t2483 + t2484;
  t2389 = 0. + t2383;
  t2501 = -1.*t2151*t2197;
  t2505 = -1.*t2239*t2227*t2249;
  t2506 = t2501 + t2505;
  t2454 = Cos(var1[14]);
  t2455 = 0. + t2454;
  t2500 = t2447*t2494;
  t2507 = t2383*t2506;
  t2516 = t2500 + t2507;
  t2463 = Sin(var1[13]);
  t2466 = Sin(var1[14]);
  t2543 = Cos(var1[4]);
  t2564 = t2151*t2543*t2447;
  t2566 = -1.*t2383*t2543*t2239;
  t2567 = t2564 + t2566;
  t2619 = t2383*t2151*t2543*t2197;
  t2626 = t2543*t2197*t2447*t2239;
  t2627 = t2619 + t2626;
  t2630 = t2418*t2627;
  t2632 = -1.*t2197*t2463*t2227;
  t2633 = t2630 + t2632;
  t2670 = -1.*t2463*t2227*t2249;
  t2671 = t2383*t2151*t2543*t2249;
  t2673 = t2543*t2447*t2239*t2249;
  t2674 = t2671 + t2673;
  t2676 = t2418*t2674;
  t2677 = t2670 + t2676;
  t2725 = -1.*t2543*t2463;
  t2733 = -1.*t2383*t2151*t2227;
  t2736 = -1.*t2447*t2239*t2227;
  t2737 = t2733 + t2736;
  t2745 = t2418*t2737;
  t2746 = t2725 + t2745;
  t2778 = t2197*t2239;
  t2782 = -1.*t2151*t2227*t2249;
  t2784 = t2778 + t2782;
  t2793 = -1.*t2543*t2463*t2249;
  t2796 = t2383*t2784;
  t2797 = t2447*t2506;
  t2802 = t2796 + t2797;
  t2804 = t2418*t2802;
  t2805 = t2793 + t2804;
  t2824 = t2197*t2239*t2227;
  t2825 = -1.*t2151*t2249;
  t2826 = t2824 + t2825;
  t2832 = t2543*t2197*t2463;
  t2834 = t2447*t2826;
  t2838 = t2383*t2277;
  t2840 = t2834 + t2838;
  t2841 = t2418*t2840;
  t2842 = t2832 + t2841;
  t2863 = -1.*t2383*t2826;
  t2864 = -1.*t2343*t2277;
  t2865 = t2863 + t2864;
  t2878 = t2151*t2197;
  t2879 = t2239*t2227*t2249;
  t2880 = t2878 + t2879;
  t2877 = -1.*t2343*t2494;
  t2881 = -1.*t2383*t2880;
  t2882 = t2877 + t2881;
  t2580 = -1.*t2543*t2343*t2239;
  t2893 = -1.*t2151*t2543*t2343;
  t2894 = t2893 + t2566;
  t2904 = t2543*t2197;
  t2905 = 0. + t2904;
  t2907 = 0. + t2834 + t2838;
  t2906 = t2418*t2905;
  t2908 = -1.*t2463*t2907;
  t2909 = t2906 + t2908;
  t2884 = t2383*t2494;
  t2926 = t2543*t2249;
  t2930 = 0. + t2926;
  t2932 = t2447*t2880;
  t2933 = 0. + t2884 + t2932;
  t2931 = t2418*t2930;
  t2934 = -1.*t2463*t2933;
  t2935 = t2931 + t2934;
  t2896 = t2383*t2151*t2543;
  t2948 = t2543*t2447*t2239;
  t2950 = 0. + t2896 + t2948;
  t2954 = -1.*t2227;
  t2955 = 0. + t2954;
  t2952 = -1.*t2463*t2950;
  t2956 = t2418*t2955;
  t2957 = t2952 + t2956;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.04675*t2277 - 0.08*(t2343*t2361 + t2277*t2389) - 0.213*t2418*t2452 - 0.213*(t2418*t2452*t2455 - 1.*t2452*t2463*t2466);
  p_output1[10]=-0.04675*t2494 - 0.08*(t2389*t2494 + t2343*t2506) - 0.213*t2418*t2516 - 0.213*(t2418*t2455*t2516 - 1.*t2463*t2466*t2516);
  p_output1[11]=-0.04675*t2151*t2543 - 0.213*t2418*t2567 - 0.213*(t2418*t2455*t2567 - 1.*t2463*t2466*t2567) - 0.08*(t2151*t2389*t2543 + t2580);
  p_output1[12]=0.1881*t2197*t2227 - 0.04675*t2197*t2239*t2543 - 0.08*(t2151*t2197*t2343*t2543 + t2197*t2239*t2389*t2543) - 0.213*t2633 - 0.213*(t2466*(-1.*t2197*t2227*t2418 - 1.*t2463*t2627) + t2455*t2633);
  p_output1[13]=0.1881*t2227*t2249 - 0.04675*t2239*t2249*t2543 - 0.08*(t2151*t2249*t2343*t2543 + t2239*t2249*t2389*t2543) - 0.213*t2677 - 0.213*(t2466*(-1.*t2227*t2249*t2418 - 1.*t2463*t2674) + t2455*t2677);
  p_output1[14]=0.04675*t2227*t2239 - 0.08*(-1.*t2151*t2227*t2343 - 1.*t2227*t2239*t2389) + 0.1881*t2543 - 0.213*t2746 - 0.213*(t2466*(-1.*t2418*t2543 - 1.*t2463*t2737) + t2455*t2746);
  p_output1[15]=-0.04675*t2506 + 0.1881*t2249*t2543 - 0.08*(t2389*t2506 + t2343*t2784) - 0.213*t2805 - 0.213*(t2466*(-1.*t2249*t2418*t2543 - 1.*t2463*t2802) + t2455*t2805);
  p_output1[16]=-0.1881*t2197*t2543 - 0.04675*t2826 - 0.08*(t2277*t2343 + t2389*t2826) - 0.213*t2842 - 0.213*(t2466*(t2197*t2418*t2543 - 1.*t2463*t2840) + t2455*t2842);
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
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=-0.08*(-1.*t2343*t2826 + t2838) - 0.213*t2418*t2865 - 0.213*(t2418*t2455*t2865 - 1.*t2463*t2466*t2865);
  p_output1[37]=-0.213*t2418*t2882 - 0.213*(t2418*t2455*t2882 - 1.*t2463*t2466*t2882) - 0.08*(-1.*t2343*t2880 + t2884);
  p_output1[38]=-0.213*t2418*t2894 - 0.213*(t2418*t2455*t2894 - 1.*t2463*t2466*t2894) - 0.08*(t2580 + t2896);
  p_output1[39]=-0.213*t2909 - 0.213*(t2466*(-1.*t2463*t2905 - 1.*t2418*t2907) + t2455*t2909);
  p_output1[40]=-0.213*t2935 - 0.213*(t2466*(-1.*t2463*t2930 - 1.*t2418*t2933) + t2455*t2935);
  p_output1[41]=-0.213*t2957 - 0.213*(t2466*(-1.*t2418*t2950 - 1.*t2463*t2955) + t2455*t2957);
  p_output1[42]=-0.213*(-1.*t2466*(0. + t2463*t2905 + t2418*t2907) + t2454*(0. + t2906 + t2908));
  p_output1[43]=-0.213*(-1.*t2466*(0. + t2463*t2930 + t2418*t2933) + t2454*(0. + t2931 + t2934));
  p_output1[44]=-0.213*(-1.*t2466*(0. + t2418*t2950 + t2463*t2955) + t2454*(0. + t2952 + t2956));
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

#include "j_3_func.hh"

namespace SymFunction
{

void j_3_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
