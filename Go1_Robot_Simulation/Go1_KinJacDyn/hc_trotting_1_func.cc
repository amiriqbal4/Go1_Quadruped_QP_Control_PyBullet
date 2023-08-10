/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:50 GMT-05:00
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
  double t98;
  double t193;
  double t387;
  double t535;
  double t664;
  double t728;
  double t733;
  double t829;
  double t78;
  double t1411;
  double t979;
  double t1445;
  double t1670;
  double t1743;
  double t1958;
  double t1975;
  double t2406;
  double t2457;
  double t2533;
  double t2636;
  double t2655;
  double t2770;
  double t3250;
  double t3251;
  double t3597;
  double t3685;
  double t1292;
  double t4072;
  double t4082;
  double t4112;
  double t4135;
  double t4150;
  double t4153;
  double t3717;
  double t3826;
  double t4174;
  double t4179;
  double t4180;
  double t4194;
  double t4202;
  double t4203;
  double t4204;
  double t4205;
  double t3876;
  double t4277;
  double t4285;
  double t4286;
  double t4289;
  double t4292;
  double t4303;
  double t4305;
  double t4306;
  double t4350;
  double t4338;
  double t4356;
  double t4359;
  double t4362;
  double t4366;
  double t4367;
  double t4368;
  double t4369;
  double t4375;
  double t4380;
  double t4382;
  double t4346;
  double t4385;
  double t4387;
  double t4448;
  double t4450;
  double t4451;
  double t4458;
  double t4465;
  double t4466;
  double t4392;
  double t4499;
  double t4504;
  double t4507;
  double t4526;
  double t4527;
  double t4528;
  t98 = Cos(var1[5]);
  t193 = Sin(var1[3]);
  t387 = Sin(var1[4]);
  t535 = t98*t193*t387;
  t664 = Cos(var1[3]);
  t728 = Sin(var1[5]);
  t733 = -1.*t664*t728;
  t829 = t535 + t733;
  t78 = Cos(var1[4]);
  t1411 = Sin(var1[9]);
  t979 = Cos(var1[9]);
  t1445 = t664*t98*t387;
  t1670 = t193*t728;
  t1743 = t1445 + t1670;
  t1958 = t78*t98;
  t1975 = 0. + t1958;
  t2406 = Sin(var1[10]);
  t2457 = t1975*t2406;
  t2533 = Cos(var1[10]);
  t2636 = -1.*t1411;
  t2655 = 0. + t2636;
  t2770 = t2655*t829;
  t3250 = t979*t1743;
  t3251 = 0. + t2770 + t3250;
  t3597 = t2533*t3251;
  t3685 = 0. + t2457 + t3597;
  t1292 = 0. + t979;
  t4072 = t664*t98;
  t4082 = t193*t387*t728;
  t4112 = t4072 + t4082;
  t4135 = -1.*t98*t193;
  t4150 = t664*t387*t728;
  t4153 = t4135 + t4150;
  t3717 = Cos(var1[11]);
  t3826 = 0. + t3717;
  t4174 = t78*t728;
  t4179 = 0. + t4174;
  t4180 = t2406*t4179;
  t4194 = t979*t4153;
  t4202 = t2655*t4112;
  t4203 = 0. + t4194 + t4202;
  t4204 = t2533*t4203;
  t4205 = 0. + t4180 + t4204;
  t3876 = Sin(var1[11]);
  t4277 = t979*t664*t78;
  t4285 = t78*t2655*t193;
  t4286 = 0. + t4277 + t4285;
  t4289 = -1.*t387;
  t4292 = 0. + t4289;
  t4303 = t2533*t4286;
  t4305 = t2406*t4292;
  t4306 = 0. + t4303 + t4305;
  t4350 = Sin(var1[12]);
  t4338 = Cos(var1[12]);
  t4356 = Sin(var1[13]);
  t4359 = t1975*t4356;
  t4362 = Cos(var1[13]);
  t4366 = -1.*t4350;
  t4367 = 0. + t4366;
  t4368 = t4367*t829;
  t4369 = t4338*t1743;
  t4375 = 0. + t4368 + t4369;
  t4380 = t4362*t4375;
  t4382 = 0. + t4359 + t4380;
  t4346 = 0. + t4338;
  t4385 = Cos(var1[14]);
  t4387 = 0. + t4385;
  t4448 = t4356*t4179;
  t4450 = t4338*t4153;
  t4451 = t4367*t4112;
  t4458 = 0. + t4450 + t4451;
  t4465 = t4362*t4458;
  t4466 = 0. + t4448 + t4465;
  t4392 = Sin(var1[14]);
  t4499 = t4338*t664*t78;
  t4504 = t78*t4367*t193;
  t4507 = 0. + t4499 + t4504;
  t4526 = t4362*t4507;
  t4527 = t4356*t4292;
  t4528 = 0. + t4526 + t4527;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.213*t3685 - 0.213*(t3685*t3826 + (0. + t1975*t2533 - 1.*t2406*t3251)*t3876) + 0.04675*t829 + 0.08*(0. + t1411*t1743 + t1292*t829) + 0.1881*t78*t98 + var1[0];
  p_output1[7]=0.04675*t4112 + 0.08*(0. + t1292*t4112 + t1411*t4153) - 0.213*t4205 - 0.213*(t3876*(0. + t2533*t4179 - 1.*t2406*t4203) + t3826*t4205) + 0.1881*t728*t78 + var1[1];
  p_output1[8]=-0.1881*t387 - 0.213*t4306 - 0.213*(t3876*(0. - 1.*t2406*t4286 + t2533*t4292) + t3826*t4306) + 0.04675*t193*t78 + 0.08*(0. + t1292*t193*t78 + t1411*t664*t78) + var1[2];
  p_output1[9]=-0.213*t4382 - 0.213*(t4382*t4387 + (0. + t1975*t4362 - 1.*t4356*t4375)*t4392) - 0.04675*t829 - 0.08*(0. + t1743*t4350 + t4346*t829) - 0.1881*t78*t98 + var1[0];
  p_output1[10]=-0.04675*t4112 - 0.08*(0. + t4112*t4346 + t4153*t4350) - 0.213*t4466 - 0.213*(t4392*(0. + t4179*t4362 - 1.*t4356*t4458) + t4387*t4466) - 0.1881*t728*t78 + var1[1];
  p_output1[11]=0.1881*t387 - 0.213*t4528 - 0.213*(t4392*(0. + t4292*t4362 - 1.*t4356*t4507) + t4387*t4528) - 0.04675*t193*t78 - 0.08*(0. + t193*t4346*t78 + t4350*t664*t78) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "hc_trotting_1_func.hh"

namespace SymFunction
{

void hc_trotting_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
