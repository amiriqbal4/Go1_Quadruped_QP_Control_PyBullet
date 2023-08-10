/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:46 GMT-05:00
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
  double t2237;
  double t2352;
  double t2275;
  double t490;
  double t2361;
  double t2284;
  double t2373;
  double t2400;
  double t2462;
  double t2420;
  double t2451;
  double t2453;
  double t2414;
  double t2484;
  double t2496;
  double t2500;
  double t2506;
  double t2507;
  double t2520;
  double t2564;
  double t2568;
  double t2579;
  double t2472;
  double t2586;
  double t2587;
  double t2588;
  double t2522;
  double t2525;
  double t2585;
  double t2590;
  double t2596;
  double t2529;
  double t2534;
  double t2635;
  double t2637;
  double t2644;
  double t2652;
  double t2694;
  double t2696;
  double t2705;
  double t2709;
  double t2710;
  double t2712;
  double t2773;
  double t2774;
  double t2775;
  double t2777;
  double t2778;
  double t2784;
  double t2820;
  double t2823;
  double t2824;
  double t2827;
  double t2828;
  double t2829;
  double t2850;
  double t2851;
  double t2859;
  double t2867;
  double t2868;
  double t2871;
  double t2873;
  double t2876;
  double t2878;
  double t2895;
  double t2896;
  double t2897;
  double t2903;
  double t2904;
  double t2906;
  double t2914;
  double t2915;
  double t2916;
  double t2941;
  double t2942;
  double t2944;
  double t2960;
  double t2961;
  double t2962;
  double t2959;
  double t2963;
  double t2964;
  double t2658;
  double t2980;
  double t2981;
  double t2992;
  double t2993;
  double t2998;
  double t2996;
  double t3004;
  double t3005;
  double t2968;
  double t3015;
  double t3018;
  double t3023;
  double t3024;
  double t3021;
  double t3025;
  double t3026;
  double t2984;
  double t3037;
  double t3038;
  double t3040;
  double t3041;
  double t3039;
  double t3042;
  double t3043;
  t2237 = Cos(var1[5]);
  t2352 = Sin(var1[3]);
  t2275 = Sin(var1[4]);
  t490 = Cos(var1[3]);
  t2361 = Sin(var1[5]);
  t2284 = t490*t2237*t2275;
  t2373 = t2352*t2361;
  t2400 = t2284 + t2373;
  t2462 = Cos(var1[15]);
  t2420 = -1.*t2237*t2352*t2275;
  t2451 = t490*t2361;
  t2453 = t2420 + t2451;
  t2414 = Sin(var1[15]);
  t2484 = Cos(var1[16]);
  t2496 = t2462*t2453;
  t2500 = -1.*t2414;
  t2506 = 0. + t2500;
  t2507 = t2506*t2400;
  t2520 = t2496 + t2507;
  t2564 = -1.*t2237*t2352;
  t2568 = t490*t2275*t2361;
  t2579 = t2564 + t2568;
  t2472 = 0. + t2462;
  t2586 = -1.*t490*t2237;
  t2587 = -1.*t2352*t2275*t2361;
  t2588 = t2586 + t2587;
  t2522 = Cos(var1[17]);
  t2525 = 0. + t2522;
  t2585 = t2506*t2579;
  t2590 = t2462*t2588;
  t2596 = t2585 + t2590;
  t2529 = Sin(var1[16]);
  t2534 = Sin(var1[17]);
  t2635 = Cos(var1[4]);
  t2637 = t490*t2635*t2506;
  t2644 = -1.*t2462*t2635*t2352;
  t2652 = t2637 + t2644;
  t2694 = t2462*t490*t2635*t2237;
  t2696 = t2635*t2237*t2506*t2352;
  t2705 = t2694 + t2696;
  t2709 = t2484*t2705;
  t2710 = -1.*t2237*t2529*t2275;
  t2712 = t2709 + t2710;
  t2773 = -1.*t2529*t2275*t2361;
  t2774 = t2462*t490*t2635*t2361;
  t2775 = t2635*t2506*t2352*t2361;
  t2777 = t2774 + t2775;
  t2778 = t2484*t2777;
  t2784 = t2773 + t2778;
  t2820 = -1.*t2635*t2529;
  t2823 = -1.*t2462*t490*t2275;
  t2824 = -1.*t2506*t2352*t2275;
  t2827 = t2823 + t2824;
  t2828 = t2484*t2827;
  t2829 = t2820 + t2828;
  t2850 = t2237*t2352;
  t2851 = -1.*t490*t2275*t2361;
  t2859 = t2850 + t2851;
  t2867 = -1.*t2635*t2529*t2361;
  t2868 = t2462*t2859;
  t2871 = t2506*t2588;
  t2873 = t2868 + t2871;
  t2876 = t2484*t2873;
  t2878 = t2867 + t2876;
  t2895 = t2237*t2352*t2275;
  t2896 = -1.*t490*t2361;
  t2897 = t2895 + t2896;
  t2903 = t2635*t2237*t2529;
  t2904 = t2506*t2897;
  t2906 = t2462*t2400;
  t2914 = t2904 + t2906;
  t2915 = t2484*t2914;
  t2916 = t2903 + t2915;
  t2941 = -1.*t2462*t2897;
  t2942 = -1.*t2414*t2400;
  t2944 = t2941 + t2942;
  t2960 = t490*t2237;
  t2961 = t2352*t2275*t2361;
  t2962 = t2960 + t2961;
  t2959 = -1.*t2414*t2579;
  t2963 = -1.*t2462*t2962;
  t2964 = t2959 + t2963;
  t2658 = -1.*t2635*t2414*t2352;
  t2980 = -1.*t490*t2635*t2414;
  t2981 = t2980 + t2644;
  t2992 = t2635*t2237;
  t2993 = 0. + t2992;
  t2998 = 0. + t2904 + t2906;
  t2996 = t2484*t2993;
  t3004 = -1.*t2529*t2998;
  t3005 = t2996 + t3004;
  t2968 = t2462*t2579;
  t3015 = t2635*t2361;
  t3018 = 0. + t3015;
  t3023 = t2506*t2962;
  t3024 = 0. + t2968 + t3023;
  t3021 = t2484*t3018;
  t3025 = -1.*t2529*t3024;
  t3026 = t3021 + t3025;
  t2984 = t2462*t490*t2635;
  t3037 = t2635*t2506*t2352;
  t3038 = 0. + t2984 + t3037;
  t3040 = -1.*t2275;
  t3041 = 0. + t3040;
  t3039 = -1.*t2529*t3038;
  t3042 = t2484*t3041;
  t3043 = t3039 + t3042;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.04675*t2400 + 0.08*(t2414*t2453 + t2400*t2472) - 0.213*t2484*t2520 - 0.213*(t2484*t2520*t2525 - 1.*t2520*t2529*t2534);
  p_output1[10]=0.04675*t2579 + 0.08*(t2472*t2579 + t2414*t2588) - 0.213*t2484*t2596 - 0.213*(t2484*t2525*t2596 - 1.*t2529*t2534*t2596);
  p_output1[11]=-0.213*t2484*t2652 - 0.213*(t2484*t2525*t2652 - 1.*t2529*t2534*t2652) + 0.04675*t2635*t490 + 0.08*(t2658 + t2472*t2635*t490);
  p_output1[12]=0.1881*t2237*t2275 + 0.04675*t2237*t2352*t2635 - 0.213*t2712 - 0.213*(t2534*(-1.*t2237*t2275*t2484 - 1.*t2529*t2705) + t2525*t2712) + 0.08*(t2237*t2352*t2472*t2635 + t2237*t2414*t2635*t490);
  p_output1[13]=0.1881*t2275*t2361 + 0.04675*t2352*t2361*t2635 - 0.213*t2784 - 0.213*(t2534*(-1.*t2275*t2361*t2484 - 1.*t2529*t2777) + t2525*t2784) + 0.08*(t2352*t2361*t2472*t2635 + t2361*t2414*t2635*t490);
  p_output1[14]=-0.04675*t2275*t2352 + 0.1881*t2635 - 0.213*t2829 - 0.213*(t2534*(-1.*t2484*t2635 - 1.*t2529*t2827) + t2525*t2829) + 0.08*(-1.*t2275*t2352*t2472 - 1.*t2275*t2414*t490);
  p_output1[15]=0.04675*t2588 + 0.1881*t2361*t2635 + 0.08*(t2472*t2588 + t2414*t2859) - 0.213*t2878 - 0.213*(t2534*(-1.*t2361*t2484*t2635 - 1.*t2529*t2873) + t2525*t2878);
  p_output1[16]=-0.1881*t2237*t2635 + 0.04675*t2897 + 0.08*(t2400*t2414 + t2472*t2897) - 0.213*t2916 - 0.213*(t2534*(t2237*t2484*t2635 - 1.*t2529*t2914) + t2525*t2916);
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.08*(-1.*t2414*t2897 + t2906) - 0.213*t2484*t2944 - 0.213*(t2484*t2525*t2944 - 1.*t2529*t2534*t2944);
  p_output1[46]=-0.213*t2484*t2964 - 0.213*(t2484*t2525*t2964 - 1.*t2529*t2534*t2964) + 0.08*(-1.*t2414*t2962 + t2968);
  p_output1[47]=-0.213*t2484*t2981 - 0.213*(t2484*t2525*t2981 - 1.*t2529*t2534*t2981) + 0.08*(t2658 + t2984);
  p_output1[48]=-0.213*t3005 - 0.213*(t2534*(-1.*t2529*t2993 - 1.*t2484*t2998) + t2525*t3005);
  p_output1[49]=-0.213*t3026 - 0.213*(t2534*(-1.*t2529*t3018 - 1.*t2484*t3024) + t2525*t3026);
  p_output1[50]=-0.213*t3043 - 0.213*(t2534*(-1.*t2484*t3038 - 1.*t2529*t3041) + t2525*t3043);
  p_output1[51]=-0.213*(-1.*t2534*(0. + t2529*t2993 + t2484*t2998) + t2522*(0. + t2996 + t3004));
  p_output1[52]=-0.213*(-1.*t2534*(0. + t2529*t3018 + t2484*t3024) + t2522*(0. + t3021 + t3025));
  p_output1[53]=-0.213*(-1.*t2534*(0. + t2484*t3038 + t2529*t3041) + t2522*(0. + t3039 + t3042));
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

#include "j_4_func.hh"

namespace SymFunction
{

void j_4_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
