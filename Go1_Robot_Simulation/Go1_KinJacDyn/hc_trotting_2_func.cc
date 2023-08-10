/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:54 GMT-05:00
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
  double t186;
  double t535;
  double t829;
  double t930;
  double t979;
  double t1292;
  double t1344;
  double t1445;
  double t1743;
  double t1908;
  double t1958;
  double t1975;
  double t2457;
  double t78;
  double t2898;
  double t3250;
  double t3597;
  double t3685;
  double t3687;
  double t3717;
  double t3826;
  double t3827;
  double t3876;
  double t3877;
  double t3878;
  double t3910;
  double t1851;
  double t4168;
  double t4173;
  double t4174;
  double t4194;
  double t4202;
  double t4204;
  double t3970;
  double t3989;
  double t4244;
  double t4247;
  double t4248;
  double t4251;
  double t4254;
  double t4255;
  double t4256;
  double t4259;
  double t4112;
  double t4307;
  double t4308;
  double t4314;
  double t4316;
  double t4323;
  double t4324;
  double t4335;
  double t4337;
  double t4385;
  double t4380;
  double t4397;
  double t4398;
  double t4399;
  double t4417;
  double t4418;
  double t4422;
  double t4423;
  double t4427;
  double t4435;
  double t4440;
  double t4382;
  double t4445;
  double t4446;
  double t4493;
  double t4494;
  double t4496;
  double t4498;
  double t4499;
  double t4504;
  double t4450;
  double t4551;
  double t4552;
  double t4556;
  double t4564;
  double t4565;
  double t4566;
  t186 = Cos(var1[5]);
  t535 = Sin(var1[3]);
  t829 = Sin(var1[4]);
  t930 = t186*t535*t829;
  t979 = Cos(var1[3]);
  t1292 = Sin(var1[5]);
  t1344 = -1.*t979*t1292;
  t1445 = t930 + t1344;
  t1743 = Cos(var1[6]);
  t1908 = t979*t186*t829;
  t1958 = t535*t1292;
  t1975 = t1908 + t1958;
  t2457 = Sin(var1[6]);
  t78 = Cos(var1[4]);
  t2898 = Cos(var1[7]);
  t3250 = t1743*t1975;
  t3597 = -1.*t2457;
  t3685 = 0. + t3597;
  t3687 = t1445*t3685;
  t3717 = 0. + t3250 + t3687;
  t3826 = t2898*t3717;
  t3827 = t78*t186;
  t3876 = 0. + t3827;
  t3877 = Sin(var1[7]);
  t3878 = t3876*t3877;
  t3910 = 0. + t3826 + t3878;
  t1851 = 0. + t1743;
  t4168 = t979*t186;
  t4173 = t535*t829*t1292;
  t4174 = t4168 + t4173;
  t4194 = -1.*t186*t535;
  t4202 = t979*t829*t1292;
  t4204 = t4194 + t4202;
  t3970 = Cos(var1[8]);
  t3989 = 0. + t3970;
  t4244 = t1743*t4204;
  t4247 = t4174*t3685;
  t4248 = 0. + t4244 + t4247;
  t4251 = t2898*t4248;
  t4254 = t78*t1292;
  t4255 = 0. + t4254;
  t4256 = t4255*t3877;
  t4259 = 0. + t4251 + t4256;
  t4112 = Sin(var1[8]);
  t4307 = t979*t78*t1743;
  t4308 = t78*t535*t3685;
  t4314 = 0. + t4307 + t4308;
  t4316 = t2898*t4314;
  t4323 = -1.*t829;
  t4324 = 0. + t4323;
  t4335 = t4324*t3877;
  t4337 = 0. + t4316 + t4335;
  t4385 = Sin(var1[15]);
  t4380 = Cos(var1[15]);
  t4397 = Sin(var1[16]);
  t4398 = t3876*t4397;
  t4399 = Cos(var1[16]);
  t4417 = -1.*t4385;
  t4418 = 0. + t4417;
  t4422 = t4418*t1445;
  t4423 = t4380*t1975;
  t4427 = 0. + t4422 + t4423;
  t4435 = t4399*t4427;
  t4440 = 0. + t4398 + t4435;
  t4382 = 0. + t4380;
  t4445 = Cos(var1[17]);
  t4446 = 0. + t4445;
  t4493 = t4397*t4255;
  t4494 = t4380*t4204;
  t4496 = t4418*t4174;
  t4498 = 0. + t4494 + t4496;
  t4499 = t4399*t4498;
  t4504 = 0. + t4493 + t4499;
  t4450 = Sin(var1[17]);
  t4551 = t4380*t979*t78;
  t4552 = t78*t4418*t535;
  t4556 = 0. + t4551 + t4552;
  t4564 = t4399*t4556;
  t4565 = t4397*t4324;
  t4566 = 0. + t4564 + t4565;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=var1[5];
  p_output1[6]=-0.04675*t1445 - 0.08*(0. + t1445*t1851 + t1975*t2457) - 0.213*t3910 - 0.213*(t3910*t3989 + (0. + t2898*t3876 - 1.*t3717*t3877)*t4112) + 0.1881*t186*t78 + var1[0];
  p_output1[7]=-0.04675*t4174 - 0.08*(0. + t1851*t4174 + t2457*t4204) - 0.213*t4259 - 0.213*(t4112*(0. - 1.*t3877*t4248 + t2898*t4255) + t3989*t4259) + 0.1881*t1292*t78 + var1[1];
  p_output1[8]=-0.213*t4337 - 0.213*(t4112*(0. - 1.*t3877*t4314 + t2898*t4324) + t3989*t4337) - 0.04675*t535*t78 - 0.1881*t829 - 0.08*(0. + t1851*t535*t78 + t2457*t78*t979) + var1[2];
  p_output1[9]=0.04675*t1445 + 0.08*(0. + t1445*t4382 + t1975*t4385) - 0.213*t4440 - 0.213*(t4440*t4446 + (0. + t3876*t4399 - 1.*t4397*t4427)*t4450) - 0.1881*t186*t78 + var1[0];
  p_output1[10]=0.04675*t4174 + 0.08*(0. + t4174*t4382 + t4204*t4385) - 0.213*t4504 - 0.213*(t4450*(0. + t4255*t4399 - 1.*t4397*t4498) + t4446*t4504) - 0.1881*t1292*t78 + var1[1];
  p_output1[11]=-0.213*t4566 - 0.213*(t4450*(0. + t4324*t4399 - 1.*t4397*t4556) + t4446*t4566) + 0.04675*t535*t78 + 0.1881*t829 + 0.08*(0. + t4382*t535*t78 + t4385*t78*t979) + var1[2];
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

#include "hc_trotting_2_func.hh"

namespace SymFunction
{

void hc_trotting_2_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
