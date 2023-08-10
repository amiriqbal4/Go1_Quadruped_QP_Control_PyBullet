/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:19 GMT-05:00
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
  double t2820;
  double t2988;
  double t2919;
  double t163;
  double t3006;
  double t2956;
  double t3012;
  double t3047;
  double t3096;
  double t3068;
  double t3075;
  double t3084;
  double t3067;
  double t3177;
  double t3178;
  double t3179;
  double t3187;
  double t3188;
  double t3208;
  double t3293;
  double t3297;
  double t3298;
  double t3097;
  double t3323;
  double t3339;
  double t3340;
  double t3224;
  double t3230;
  double t3305;
  double t3341;
  double t3342;
  double t3242;
  double t3252;
  double t3383;
  double t3389;
  double t3390;
  double t3392;
  double t3465;
  double t3477;
  double t3478;
  double t3484;
  double t3486;
  double t3497;
  double t3548;
  double t3557;
  double t3558;
  double t3559;
  double t3560;
  double t3564;
  double t3617;
  double t3618;
  double t3621;
  double t3625;
  double t3630;
  double t3631;
  double t3659;
  double t3660;
  double t3661;
  double t3674;
  double t3675;
  double t3685;
  double t3686;
  double t3687;
  double t3689;
  double t3725;
  double t3727;
  double t3731;
  double t3740;
  double t3741;
  double t3746;
  double t3747;
  double t3751;
  double t3756;
  double t3780;
  double t3781;
  double t3784;
  double t3802;
  double t3804;
  double t3810;
  double t3799;
  double t3813;
  double t3814;
  double t3416;
  double t3829;
  double t3831;
  double t3849;
  double t3851;
  double t3853;
  double t3852;
  double t3854;
  double t3855;
  double t3816;
  double t3879;
  double t3881;
  double t3884;
  double t3889;
  double t3882;
  double t3891;
  double t3893;
  double t3833;
  double t3911;
  double t3912;
  double t3916;
  double t3917;
  double t3913;
  double t3921;
  double t3922;
  t2820 = Cos(var1[5]);
  t2988 = Sin(var1[3]);
  t2919 = Sin(var1[4]);
  t163 = Cos(var1[3]);
  t3006 = Sin(var1[5]);
  t2956 = t163*t2820*t2919;
  t3012 = t2988*t3006;
  t3047 = t2956 + t3012;
  t3096 = Cos(var1[9]);
  t3068 = -1.*t2820*t2988*t2919;
  t3075 = t163*t3006;
  t3084 = t3068 + t3075;
  t3067 = Sin(var1[9]);
  t3177 = Cos(var1[10]);
  t3178 = t3096*t3084;
  t3179 = -1.*t3067;
  t3187 = 0. + t3179;
  t3188 = t3187*t3047;
  t3208 = t3178 + t3188;
  t3293 = -1.*t2820*t2988;
  t3297 = t163*t2919*t3006;
  t3298 = t3293 + t3297;
  t3097 = 0. + t3096;
  t3323 = -1.*t163*t2820;
  t3339 = -1.*t2988*t2919*t3006;
  t3340 = t3323 + t3339;
  t3224 = Cos(var1[11]);
  t3230 = 0. + t3224;
  t3305 = t3187*t3298;
  t3341 = t3096*t3340;
  t3342 = t3305 + t3341;
  t3242 = Sin(var1[10]);
  t3252 = Sin(var1[11]);
  t3383 = Cos(var1[4]);
  t3389 = t163*t3383*t3187;
  t3390 = -1.*t3096*t3383*t2988;
  t3392 = t3389 + t3390;
  t3465 = t3096*t163*t3383*t2820;
  t3477 = t3383*t2820*t3187*t2988;
  t3478 = t3465 + t3477;
  t3484 = t3177*t3478;
  t3486 = -1.*t2820*t3242*t2919;
  t3497 = t3484 + t3486;
  t3548 = -1.*t3242*t2919*t3006;
  t3557 = t3096*t163*t3383*t3006;
  t3558 = t3383*t3187*t2988*t3006;
  t3559 = t3557 + t3558;
  t3560 = t3177*t3559;
  t3564 = t3548 + t3560;
  t3617 = -1.*t3383*t3242;
  t3618 = -1.*t3096*t163*t2919;
  t3621 = -1.*t3187*t2988*t2919;
  t3625 = t3618 + t3621;
  t3630 = t3177*t3625;
  t3631 = t3617 + t3630;
  t3659 = t2820*t2988;
  t3660 = -1.*t163*t2919*t3006;
  t3661 = t3659 + t3660;
  t3674 = -1.*t3383*t3242*t3006;
  t3675 = t3096*t3661;
  t3685 = t3187*t3340;
  t3686 = t3675 + t3685;
  t3687 = t3177*t3686;
  t3689 = t3674 + t3687;
  t3725 = t2820*t2988*t2919;
  t3727 = -1.*t163*t3006;
  t3731 = t3725 + t3727;
  t3740 = t3383*t2820*t3242;
  t3741 = t3187*t3731;
  t3746 = t3096*t3047;
  t3747 = t3741 + t3746;
  t3751 = t3177*t3747;
  t3756 = t3740 + t3751;
  t3780 = -1.*t3096*t3731;
  t3781 = -1.*t3067*t3047;
  t3784 = t3780 + t3781;
  t3802 = t163*t2820;
  t3804 = t2988*t2919*t3006;
  t3810 = t3802 + t3804;
  t3799 = -1.*t3067*t3298;
  t3813 = -1.*t3096*t3810;
  t3814 = t3799 + t3813;
  t3416 = -1.*t3383*t3067*t2988;
  t3829 = -1.*t163*t3383*t3067;
  t3831 = t3829 + t3390;
  t3849 = t3383*t2820;
  t3851 = 0. + t3849;
  t3853 = 0. + t3741 + t3746;
  t3852 = t3177*t3851;
  t3854 = -1.*t3242*t3853;
  t3855 = t3852 + t3854;
  t3816 = t3096*t3298;
  t3879 = t3383*t3006;
  t3881 = 0. + t3879;
  t3884 = t3187*t3810;
  t3889 = 0. + t3816 + t3884;
  t3882 = t3177*t3881;
  t3891 = -1.*t3242*t3889;
  t3893 = t3882 + t3891;
  t3833 = t3096*t163*t3383;
  t3911 = t3383*t3187*t2988;
  t3912 = 0. + t3833 + t3911;
  t3916 = -1.*t2919;
  t3917 = 0. + t3916;
  t3913 = -1.*t3242*t3912;
  t3921 = t3177*t3917;
  t3922 = t3913 + t3921;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=1.;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=1.;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0.04675*t3047 + 0.08*(t3067*t3084 + t3047*t3097) - 0.213*t3177*t3208 - 0.213*(t3177*t3208*t3230 - 1.*t3208*t3242*t3252);
  p_output1[34]=0.04675*t3298 + 0.08*(t3097*t3298 + t3067*t3340) - 0.213*t3177*t3342 - 0.213*(t3177*t3230*t3342 - 1.*t3242*t3252*t3342);
  p_output1[35]=0.04675*t163*t3383 - 0.213*t3177*t3392 - 0.213*(t3177*t3230*t3392 - 1.*t3242*t3252*t3392) + 0.08*(t163*t3097*t3383 + t3416);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.;
  p_output1[41]=0;
  p_output1[42]=-0.1881*t2820*t2919 + 0.04675*t2820*t2988*t3383 + 0.08*(t163*t2820*t3067*t3383 + t2820*t2988*t3097*t3383) - 0.213*t3497 - 0.213*(t3252*(-1.*t2820*t2919*t3177 - 1.*t3242*t3478) + t3230*t3497);
  p_output1[43]=-0.1881*t2919*t3006 + 0.04675*t2988*t3006*t3383 + 0.08*(t163*t3006*t3067*t3383 + t2988*t3006*t3097*t3383) - 0.213*t3564 - 0.213*(t3252*(-1.*t2919*t3006*t3177 - 1.*t3242*t3559) + t3230*t3564);
  p_output1[44]=-0.04675*t2919*t2988 + 0.08*(-1.*t163*t2919*t3067 - 1.*t2919*t2988*t3097) - 0.1881*t3383 - 0.213*t3631 - 0.213*(t3252*(-1.*t3177*t3383 - 1.*t3242*t3625) + t3230*t3631);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=1.;
  p_output1[51]=0.04675*t3340 - 0.1881*t3006*t3383 + 0.08*(t3097*t3340 + t3067*t3661) - 0.213*t3689 - 0.213*(t3252*(-1.*t3006*t3177*t3383 - 1.*t3242*t3686) + t3230*t3689);
  p_output1[52]=0.1881*t2820*t3383 + 0.04675*t3731 + 0.08*(t3047*t3067 + t3097*t3731) - 0.213*t3756 - 0.213*(t3252*(t2820*t3177*t3383 - 1.*t3242*t3747) + t3230*t3756);
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0.08*(-1.*t3067*t3731 + t3746) - 0.213*t3177*t3784 - 0.213*(t3177*t3230*t3784 - 1.*t3242*t3252*t3784);
  p_output1[88]=-0.213*t3177*t3814 - 0.213*(t3177*t3230*t3814 - 1.*t3242*t3252*t3814) + 0.08*(-1.*t3067*t3810 + t3816);
  p_output1[89]=-0.213*t3177*t3831 - 0.213*(t3177*t3230*t3831 - 1.*t3242*t3252*t3831) + 0.08*(t3416 + t3833);
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=-0.213*t3855 - 0.213*(t3252*(-1.*t3242*t3851 - 1.*t3177*t3853) + t3230*t3855);
  p_output1[97]=-0.213*t3893 - 0.213*(t3252*(-1.*t3242*t3881 - 1.*t3177*t3889) + t3230*t3893);
  p_output1[98]=-0.213*t3922 - 0.213*(t3252*(-1.*t3177*t3912 - 1.*t3242*t3917) + t3230*t3922);
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=-0.213*(-1.*t3252*(0. + t3242*t3851 + t3177*t3853) + t3224*(0. + t3852 + t3854));
  p_output1[106]=-0.213*(-1.*t3252*(0. + t3242*t3881 + t3177*t3889) + t3224*(0. + t3882 + t3891));
  p_output1[107]=-0.213*(-1.*t3252*(0. + t3177*t3912 + t3242*t3917) + t3224*(0. + t3913 + t3921));
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_hc_1_func.hh"

namespace SymFunction
{

void j_hc_1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
