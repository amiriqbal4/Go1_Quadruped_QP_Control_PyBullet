/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:35 GMT-05:00
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
  double t2042;
  double t2105;
  double t2074;
  double t565;
  double t2106;
  double t2092;
  double t2113;
  double t2121;
  double t2138;
  double t2149;
  double t2151;
  double t2155;
  double t2160;
  double t2135;
  double t2157;
  double t2172;
  double t2175;
  double t2197;
  double t2217;
  double t2283;
  double t2284;
  double t2286;
  double t2222;
  double t2291;
  double t2330;
  double t2343;
  double t2239;
  double t2244;
  double t2346;
  double t2348;
  double t2349;
  double t2253;
  double t2257;
  double t2393;
  double t2403;
  double t2405;
  double t2407;
  double t2462;
  double t2463;
  double t2465;
  double t2466;
  double t2468;
  double t2469;
  double t2506;
  double t2507;
  double t2513;
  double t2516;
  double t2517;
  double t2519;
  double t2557;
  double t2559;
  double t2560;
  double t2564;
  double t2566;
  double t2567;
  double t2605;
  double t2606;
  double t2608;
  double t2612;
  double t2613;
  double t2617;
  double t2619;
  double t2620;
  double t2625;
  double t2645;
  double t2647;
  double t2648;
  double t2656;
  double t2658;
  double t2659;
  double t2663;
  double t2664;
  double t2665;
  double t2683;
  double t2684;
  double t2685;
  double t2696;
  double t2697;
  double t2698;
  double t2699;
  double t2700;
  double t2701;
  double t2415;
  double t2722;
  double t2723;
  double t2749;
  double t2752;
  double t2754;
  double t2755;
  double t2756;
  double t2757;
  double t2706;
  double t2775;
  double t2776;
  double t2777;
  double t2778;
  double t2779;
  double t2780;
  double t2781;
  double t2733;
  double t2793;
  double t2795;
  double t2796;
  double t2797;
  double t2798;
  double t2800;
  double t2801;
  t2042 = Cos(var1[5]);
  t2105 = Sin(var1[3]);
  t2074 = Sin(var1[4]);
  t565 = Cos(var1[3]);
  t2106 = Sin(var1[5]);
  t2092 = t565*t2042*t2074;
  t2113 = t2105*t2106;
  t2121 = t2092 + t2113;
  t2138 = Cos(var1[6]);
  t2149 = -1.*t2042*t2105*t2074;
  t2151 = t565*t2106;
  t2155 = t2149 + t2151;
  t2160 = Sin(var1[6]);
  t2135 = Cos(var1[7]);
  t2157 = t2138*t2155;
  t2172 = -1.*t2160;
  t2175 = 0. + t2172;
  t2197 = t2121*t2175;
  t2217 = t2157 + t2197;
  t2283 = -1.*t2042*t2105;
  t2284 = t565*t2074*t2106;
  t2286 = t2283 + t2284;
  t2222 = 0. + t2138;
  t2291 = -1.*t565*t2042;
  t2330 = -1.*t2105*t2074*t2106;
  t2343 = t2291 + t2330;
  t2239 = Cos(var1[8]);
  t2244 = 0. + t2239;
  t2346 = t2138*t2343;
  t2348 = t2286*t2175;
  t2349 = t2346 + t2348;
  t2253 = Sin(var1[7]);
  t2257 = Sin(var1[8]);
  t2393 = Cos(var1[4]);
  t2403 = -1.*t2393*t2138*t2105;
  t2405 = t565*t2393*t2175;
  t2407 = t2403 + t2405;
  t2462 = t565*t2393*t2042*t2138;
  t2463 = t2393*t2042*t2105*t2175;
  t2465 = t2462 + t2463;
  t2466 = t2135*t2465;
  t2468 = -1.*t2042*t2074*t2253;
  t2469 = t2466 + t2468;
  t2506 = t565*t2393*t2138*t2106;
  t2507 = t2393*t2105*t2106*t2175;
  t2513 = t2506 + t2507;
  t2516 = t2135*t2513;
  t2517 = -1.*t2074*t2106*t2253;
  t2519 = t2516 + t2517;
  t2557 = -1.*t565*t2138*t2074;
  t2559 = -1.*t2105*t2074*t2175;
  t2560 = t2557 + t2559;
  t2564 = t2135*t2560;
  t2566 = -1.*t2393*t2253;
  t2567 = t2564 + t2566;
  t2605 = t2042*t2105;
  t2606 = -1.*t565*t2074*t2106;
  t2608 = t2605 + t2606;
  t2612 = t2138*t2608;
  t2613 = t2343*t2175;
  t2617 = t2612 + t2613;
  t2619 = t2135*t2617;
  t2620 = -1.*t2393*t2106*t2253;
  t2625 = t2619 + t2620;
  t2645 = t2042*t2105*t2074;
  t2647 = -1.*t565*t2106;
  t2648 = t2645 + t2647;
  t2656 = t2138*t2121;
  t2658 = t2648*t2175;
  t2659 = t2656 + t2658;
  t2663 = t2135*t2659;
  t2664 = t2393*t2042*t2253;
  t2665 = t2663 + t2664;
  t2683 = -1.*t2138*t2648;
  t2684 = -1.*t2121*t2160;
  t2685 = t2683 + t2684;
  t2696 = t565*t2042;
  t2697 = t2105*t2074*t2106;
  t2698 = t2696 + t2697;
  t2699 = -1.*t2138*t2698;
  t2700 = -1.*t2286*t2160;
  t2701 = t2699 + t2700;
  t2415 = -1.*t2393*t2105*t2160;
  t2722 = -1.*t565*t2393*t2160;
  t2723 = t2403 + t2722;
  t2749 = t2393*t2042;
  t2752 = 0. + t2749;
  t2754 = t2752*t2135;
  t2755 = 0. + t2656 + t2658;
  t2756 = -1.*t2755*t2253;
  t2757 = t2754 + t2756;
  t2706 = t2138*t2286;
  t2775 = t2393*t2106;
  t2776 = 0. + t2775;
  t2777 = t2135*t2776;
  t2778 = t2698*t2175;
  t2779 = 0. + t2706 + t2778;
  t2780 = -1.*t2779*t2253;
  t2781 = t2777 + t2780;
  t2733 = t565*t2393*t2138;
  t2793 = -1.*t2074;
  t2795 = 0. + t2793;
  t2796 = t2135*t2795;
  t2797 = t2393*t2105*t2175;
  t2798 = 0. + t2733 + t2797;
  t2800 = -1.*t2798*t2253;
  t2801 = t2796 + t2800;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.04675*t2121 - 0.213*t2135*t2217 - 0.08*(t2155*t2160 + t2121*t2222) - 0.213*(t2135*t2217*t2244 - 1.*t2217*t2253*t2257);
  p_output1[10]=-0.04675*t2286 - 0.08*(t2222*t2286 + t2160*t2343) - 0.213*t2135*t2349 - 0.213*(t2135*t2244*t2349 - 1.*t2253*t2257*t2349);
  p_output1[11]=-0.213*t2135*t2407 - 0.213*(t2135*t2244*t2407 - 1.*t2253*t2257*t2407) - 0.04675*t2393*t565 - 0.08*(t2415 + t2222*t2393*t565);
  p_output1[12]=-0.1881*t2042*t2074 - 0.04675*t2042*t2105*t2393 - 0.213*t2469 - 0.213*(t2257*(-1.*t2042*t2074*t2135 - 1.*t2253*t2465) + t2244*t2469) - 0.08*(t2042*t2105*t2222*t2393 + t2042*t2160*t2393*t565);
  p_output1[13]=-0.1881*t2074*t2106 - 0.04675*t2105*t2106*t2393 - 0.213*t2519 - 0.213*(t2257*(-1.*t2074*t2106*t2135 - 1.*t2253*t2513) + t2244*t2519) - 0.08*(t2105*t2106*t2222*t2393 + t2106*t2160*t2393*t565);
  p_output1[14]=0.04675*t2074*t2105 - 0.1881*t2393 - 0.213*t2567 - 0.213*(t2257*(-1.*t2135*t2393 - 1.*t2253*t2560) + t2244*t2567) - 0.08*(-1.*t2074*t2105*t2222 - 1.*t2074*t2160*t565);
  p_output1[15]=-0.04675*t2343 - 0.1881*t2106*t2393 - 0.08*(t2222*t2343 + t2160*t2608) - 0.213*t2625 - 0.213*(t2257*(-1.*t2106*t2135*t2393 - 1.*t2253*t2617) + t2244*t2625);
  p_output1[16]=0.1881*t2042*t2393 - 0.04675*t2648 - 0.08*(t2121*t2160 + t2222*t2648) - 0.213*t2665 - 0.213*(t2257*(t2042*t2135*t2393 - 1.*t2253*t2659) + t2244*t2665);
  p_output1[17]=0;
  p_output1[18]=-0.08*(-1.*t2160*t2648 + t2656) - 0.213*t2135*t2685 - 0.213*(t2135*t2244*t2685 - 1.*t2253*t2257*t2685);
  p_output1[19]=-0.213*t2135*t2701 - 0.213*(t2135*t2244*t2701 - 1.*t2253*t2257*t2701) - 0.08*(-1.*t2160*t2698 + t2706);
  p_output1[20]=-0.213*t2135*t2723 - 0.213*(t2135*t2244*t2723 - 1.*t2253*t2257*t2723) - 0.08*(t2415 + t2733);
  p_output1[21]=-0.213*t2757 - 0.213*(t2257*(-1.*t2253*t2752 - 1.*t2135*t2755) + t2244*t2757);
  p_output1[22]=-0.213*t2781 - 0.213*(t2257*(-1.*t2253*t2776 - 1.*t2135*t2779) + t2244*t2781);
  p_output1[23]=-0.213*t2801 - 0.213*(t2257*(-1.*t2253*t2795 - 1.*t2135*t2798) + t2244*t2801);
  p_output1[24]=-0.213*(-1.*t2257*(0. + t2253*t2752 + t2135*t2755) + t2239*(0. + t2754 + t2756));
  p_output1[25]=-0.213*(-1.*t2257*(0. + t2253*t2776 + t2135*t2779) + t2239*(0. + t2777 + t2780));
  p_output1[26]=-0.213*(-1.*t2257*(0. + t2253*t2795 + t2135*t2798) + t2239*(0. + t2796 + t2800));
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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

#include "j_1_func.hh"

namespace SymFunction
{

void j_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
