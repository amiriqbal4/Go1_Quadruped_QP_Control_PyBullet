/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:00 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t6;
  double t7;
  double t194;
  double t2749;
  double t711;
  double t2775;
  double t710;
  double t1311;
  double t2637;
  double t2725;
  double t2778;
  double t2816;
  double t2841;
  double t2868;
  double t2876;
  double t2922;
  double t2936;
  double t2886;
  double t2888;
  double t2945;
  double t2988;
  double t2989;
  double t2992;
  double t2991;
  double t2996;
  double t3006;
  double t2832;
  double t3122;
  double t3124;
  double t3128;
  double t3129;
  double t3134;
  double t3135;
  double t3186;
  double t3209;
  double t3210;
  double t3211;
  double t3214;
  double t3221;
  double t3224;
  double t2938;
  double t2946;
  double t2956;
  double t2967;
  double t2971;
  double t2972;
  double t2984;
  double t2985;
  double t3298;
  double t3299;
  double t3300;
  double t3301;
  double t3304;
  double t3305;
  double t3306;
  double t3312;
  double t3313;
  double t3329;
  double t3330;
  double t3336;
  double t3346;
  double t3348;
  double t3350;
  double t3355;
  double t3356;
  double t3316;
  double t3398;
  double t3400;
  double t3404;
  double t3407;
  double t3408;
  double t3409;
  double t3405;
  double t3411;
  double t3412;
  double t3012;
  double t3029;
  double t3030;
  double t3042;
  double t3044;
  double t3047;
  double t3360;
  double t3447;
  double t3448;
  double t3314;
  double t3323;
  double t3465;
  double t3466;
  double t3477;
  double t3478;
  double t3479;
  double t3486;
  double t3492;
  double t3416;
  double t3522;
  double t3523;
  double t290;
  double t2820;
  double t2834;
  double t2859;
  double t2860;
  double t2883;
  double t2889;
  double t2890;
  double t2891;
  double t2919;
  double t3450;
  double t3453;
  double t3455;
  double t3565;
  double t3566;
  double t3579;
  double t3564;
  double t3580;
  double t3582;
  double t3359;
  double t3362;
  double t3363;
  double t3366;
  double t3367;
  double t3369;
  double t3370;
  double t3377;
  double t3633;
  double t3634;
  double t3635;
  double t3631;
  double t3638;
  double t3640;
  double t3187;
  double t3188;
  double t3191;
  double t3195;
  double t3207;
  double t3208;
  double t3230;
  double t3239;
  double t3242;
  double t3248;
  double t3252;
  double t3253;
  double t3254;
  double t3278;
  double t3279;
  double t3413;
  double t3419;
  double t3420;
  double t3422;
  double t3423;
  double t3427;
  double t3430;
  double t3432;
  double t3437;
  double t3519;
  double t3527;
  double t3528;
  double t3532;
  double t3533;
  double t3535;
  double t3540;
  double t3541;
  double t3546;
  double t3630;
  double t3643;
  double t3644;
  double t3646;
  double t3647;
  double t3649;
  double t3651;
  double t3653;
  double t3654;
  double t3656;
  double t3659;
  double t3084;
  double t3560;
  double t3585;
  double t3587;
  double t3589;
  double t3590;
  double t3675;
  double t3684;
  double t3147;
  double t3053;
  double t3055;
  double t3056;
  double t3059;
  double t3060;
  double t3067;
  double t3068;
  double t3069;
  double t3075;
  double t3471;
  double t3480;
  double t3483;
  double t3484;
  double t3494;
  double t3495;
  double t3497;
  double t3614;
  double t3615;
  double t3617;
  double t3618;
  double t3621;
  double t3385;
  double t3388;
  double t3389;
  double t3390;
  double t3392;
  double t3710;
  double t3711;
  double t3712;
  double t3715;
  double t3723;
  double t3724;
  double t3725;
  double t3727;
  double t3731;
  double t3775;
  double t3776;
  double t3777;
  double t3798;
  double t3799;
  double t3801;
  double t3802;
  double t3804;
  double t3805;
  double t3809;
  double t3863;
  double t3865;
  double t3881;
  double t3882;
  double t3883;
  double t3806;
  double t3810;
  double t3856;
  double t3896;
  double t3897;
  double t3903;
  double t3913;
  double t3914;
  double t3916;
  double t3917;
  double t3918;
  double t3922;
  double t3923;
  double t3783;
  double t3948;
  double t3898;
  double t3899;
  double t3900;
  double t3857;
  double t3860;
  double t3866;
  double t3867;
  double t3868;
  double t3872;
  double t3875;
  double t3876;
  double t3986;
  double t3774;
  double t3780;
  double t3781;
  double t3784;
  double t3786;
  double t3788;
  double t3789;
  double t3790;
  double t3792;
  double t3796;
  double t3949;
  double t3950;
  double t3951;
  double t3952;
  double t3953;
  double t3954;
  double t3956;
  double t3957;
  double t3880;
  double t3884;
  double t3885;
  double t3886;
  double t3887;
  double t3888;
  double t3889;
  double t3891;
  double t3893;
  double t4044;
  double t4045;
  double t4046;
  double t4047;
  double t4048;
  double t3999;
  double t4000;
  double t4002;
  double t4003;
  double t4004;
  double t4005;
  double t4006;
  double t4007;
  double t4008;
  double t4009;
  double t4010;
  double t4011;
  double t3902;
  double t3904;
  double t3905;
  double t3906;
  double t3907;
  double t3908;
  double t3909;
  double t3910;
  double t3911;
  double t3814;
  double t3815;
  double t3816;
  double t3817;
  double t3818;
  double t3820;
  double t3822;
  double t3823;
  double t3824;
  double t3826;
  double t3827;
  double t3962;
  double t3963;
  double t3964;
  double t3965;
  double t3966;
  double t3968;
  double t3970;
  double t3972;
  double t3973;
  double t4033;
  double t3835;
  double t3838;
  double t3840;
  double t3846;
  double t3847;
  double t4024;
  double t4025;
  double t4026;
  double t4027;
  double t4028;
  double t4029;
  double t4030;
  double t4031;
  double t3829;
  double t3830;
  double t3831;
  double t3832;
  double t3833;
  double t3977;
  double t3978;
  double t3979;
  double t3980;
  double t3981;
  double t3915;
  double t3919;
  double t3920;
  double t3921;
  double t3924;
  double t3925;
  double t3926;
  double t4065;
  double t4067;
  double t4068;
  double t4069;
  double t4070;
  double t4071;
  double t4072;
  double t4073;
  double t4102;
  double t4103;
  double t4104;
  double t4106;
  double t4120;
  double t4121;
  double t4122;
  double t4116;
  double t4132;
  double t4133;
  double t4142;
  double t4143;
  double t4144;
  double t4130;
  double t4159;
  double t4131;
  double t4134;
  double t4135;
  double t4136;
  double t4137;
  double t4138;
  double t4139;
  double t4140;
  double t4147;
  double t4169;
  double t4170;
  double t4105;
  double t4107;
  double t4158;
  double t4160;
  double t4185;
  double t4186;
  double t4187;
  double t4189;
  double t4190;
  double t4188;
  double t4191;
  double t4172;
  double t4209;
  double t4210;
  double t4115;
  double t4117;
  double t4118;
  double t4119;
  double t4223;
  double t4224;
  double t4225;
  double t4141;
  double t4145;
  double t4146;
  double t4148;
  double t4149;
  double t4150;
  double t4151;
  double t4152;
  double t4153;
  double t4154;
  double t4171;
  double t4173;
  double t4174;
  double t4175;
  double t4176;
  double t4177;
  double t4178;
  double t4179;
  double t4208;
  double t4211;
  double t4212;
  double t4213;
  double t4214;
  double t4215;
  double t4216;
  double t4217;
  double t4218;
  double t4109;
  double t4110;
  double t4111;
  double t4112;
  double t4113;
  double t4162;
  double t4163;
  double t4164;
  double t4165;
  double t4166;
  double t4194;
  double t4195;
  double t4196;
  double t4192;
  double t4193;
  double t4197;
  double t4198;
  double t4239;
  double t4240;
  double t4241;
  double t4242;
  double t4243;
  double t4244;
  double t4245;
  double t4246;
  double t4247;
  t6 = Cos(var1[3]);
  t7 = Cos(var1[4]);
  t194 = Cos(var1[5]);
  t2749 = Cos(var1[15]);
  t711 = Sin(var1[15]);
  t2775 = Sin(var1[3]);
  t710 = Cos(var1[16]);
  t1311 = -1.*t711;
  t2637 = 0. + t1311;
  t2725 = t6*t7*t194*t2637;
  t2778 = -1.*t2749*t7*t194*t2775;
  t2816 = t2725 + t2778;
  t2841 = -1.*t7*t194*t711*t2775;
  t2868 = Cos(var1[17]);
  t2876 = 0. + t2868;
  t2922 = -1.*t6*t7*t194*t711;
  t2936 = t2922 + t2778;
  t2886 = Sin(var1[16]);
  t2888 = Sin(var1[17]);
  t2945 = t2749*t6*t7*t194;
  t2988 = t7*t194*t2637*t2775;
  t2989 = t2945 + t2988;
  t2992 = Sin(var1[4]);
  t2991 = -1.*t2886*t2989;
  t2996 = -1.*t710*t194*t2992;
  t3006 = t2991 + t2996;
  t2832 = 0. + t2749;
  t3122 = -1.*t7*t194*t2886;
  t3124 = -1.*t2749*t6*t194*t2992;
  t3128 = -1.*t194*t2637*t2775*t2992;
  t3129 = t3124 + t3128;
  t3134 = t710*t3129;
  t3135 = t3122 + t3134;
  t3186 = Sin(var1[5]);
  t3209 = t2886*t2992*t3186;
  t3210 = -1.*t2749*t6*t7*t3186;
  t3211 = -1.*t7*t2637*t2775*t3186;
  t3214 = t3210 + t3211;
  t3221 = t710*t3214;
  t3224 = t3209 + t3221;
  t2938 = -0.213*t710*t2936;
  t2946 = t2945 + t2841;
  t2956 = 0.08*t2946;
  t2967 = t710*t2876*t2936;
  t2971 = -1.*t2886*t2888*t2936;
  t2972 = t2967 + t2971;
  t2984 = -0.213*t2972;
  t2985 = t2938 + t2956 + t2984;
  t3298 = t194*t2775*t2992;
  t3299 = -1.*t6*t3186;
  t3300 = t3298 + t3299;
  t3301 = -1.*t2749*t3300;
  t3304 = t6*t194*t2992;
  t3305 = t2775*t3186;
  t3306 = t3304 + t3305;
  t3312 = -1.*t711*t3306;
  t3313 = t3301 + t3312;
  t3329 = t711*t3300;
  t3330 = -1.*t2749*t3306;
  t3336 = t3329 + t3330;
  t3346 = -1.*t194*t2775*t2992;
  t3348 = t6*t3186;
  t3350 = t3346 + t3348;
  t3355 = -1.*t711*t3350;
  t3356 = t3355 + t3330;
  t3316 = -1.*t710*t2888*t3313;
  t3398 = t194*t2775;
  t3400 = -1.*t6*t2992*t3186;
  t3404 = t3398 + t3400;
  t3407 = -1.*t6*t194;
  t3408 = -1.*t2775*t2992*t3186;
  t3409 = t3407 + t3408;
  t3405 = -1.*t711*t3404;
  t3411 = -1.*t2749*t3409;
  t3412 = t3405 + t3411;
  t3012 = t2868*t3006;
  t3029 = t710*t2989;
  t3030 = -1.*t194*t2886*t2992;
  t3042 = t3029 + t3030;
  t3044 = -1.*t2888*t3042;
  t3047 = t3012 + t3044;
  t3360 = t2749*t3350;
  t3447 = t2637*t3306;
  t3448 = t3360 + t3447;
  t3314 = -1.*t2868*t2886*t3313;
  t3323 = t3314 + t3316;
  t3465 = t7*t194;
  t3466 = 0. + t3465;
  t3477 = t2637*t3300;
  t3478 = t2749*t3306;
  t3479 = 0. + t3477 + t3478;
  t3486 = t710*t3466;
  t3492 = -1.*t2886*t3479;
  t3416 = t2749*t3404;
  t3522 = t2637*t3409;
  t3523 = t3416 + t3522;
  t290 = 0.04675*t6*t7*t194;
  t2820 = -0.213*t710*t2816;
  t2834 = t2832*t6*t7*t194;
  t2859 = t2834 + t2841;
  t2860 = 0.08*t2859;
  t2883 = t710*t2876*t2816;
  t2889 = -1.*t2886*t2888*t2816;
  t2890 = t2883 + t2889;
  t2891 = -0.213*t2890;
  t2919 = t290 + t2820 + t2860 + t2891;
  t3450 = -1.*t2868*t2886*t3448;
  t3453 = -1.*t710*t2888*t3448;
  t3455 = t3450 + t3453;
  t3565 = -1.*t6*t194*t2992;
  t3566 = -1.*t2775*t3186;
  t3579 = t3565 + t3566;
  t3564 = t2637*t3350;
  t3580 = t2749*t3579;
  t3582 = t3564 + t3580;
  t3359 = -0.213*t710*t3356;
  t3362 = t3360 + t3312;
  t3363 = 0.08*t3362;
  t3366 = t710*t2876*t3356;
  t3367 = -1.*t2886*t2888*t3356;
  t3369 = t3366 + t3367;
  t3370 = -0.213*t3369;
  t3377 = t3359 + t3363 + t3370;
  t3633 = t6*t194;
  t3634 = t2775*t2992*t3186;
  t3635 = t3633 + t3634;
  t3631 = t2637*t3404;
  t3638 = t2749*t3635;
  t3640 = t3631 + t3638;
  t3187 = -0.04675*t7*t2775*t3186;
  t3188 = -0.1881*t2992*t3186;
  t3191 = -1.*t6*t7*t711*t3186;
  t3195 = -1.*t2832*t7*t2775*t3186;
  t3207 = t3191 + t3195;
  t3208 = 0.08*t3207;
  t3230 = -0.213*t3224;
  t3239 = t2876*t3224;
  t3242 = t710*t2992*t3186;
  t3248 = -1.*t2886*t3214;
  t3252 = t3242 + t3248;
  t3253 = t2888*t3252;
  t3254 = t3239 + t3253;
  t3278 = -0.213*t3254;
  t3279 = t3187 + t3188 + t3208 + t3230 + t3278;
  t3413 = -0.213*t710*t3412;
  t3419 = -1.*t711*t3409;
  t3420 = t3416 + t3419;
  t3422 = 0.08*t3420;
  t3423 = t710*t2876*t3412;
  t3427 = -1.*t2886*t2888*t3412;
  t3430 = t3423 + t3427;
  t3432 = -0.213*t3430;
  t3437 = t3413 + t3422 + t3432;
  t3519 = -1.*t7*t2886*t3186;
  t3527 = t710*t3523;
  t3528 = t3519 + t3527;
  t3532 = -1.*t2888*t3528;
  t3533 = -1.*t710*t7*t3186;
  t3535 = -1.*t2886*t3523;
  t3540 = t3533 + t3535;
  t3541 = t2868*t3540;
  t3546 = t3532 + t3541;
  t3630 = 0.04675*t3404;
  t3643 = -0.213*t710*t3640;
  t3644 = t2832*t3404;
  t3646 = t711*t3635;
  t3647 = t3644 + t3646;
  t3649 = 0.08*t3647;
  t3651 = t710*t2876*t3640;
  t3653 = -1.*t2886*t2888*t3640;
  t3654 = t3651 + t3653;
  t3656 = -0.213*t3654;
  t3659 = t3630 + t3643 + t3649 + t3656;
  t3084 = 0.1881*t7*t194;
  t3560 = 0.04675*t3350;
  t3585 = t2832*t3350;
  t3587 = t711*t3579;
  t3589 = t3585 + t3587;
  t3590 = 0.08*t3589;
  t3675 = t710*t3582;
  t3684 = t3122 + t3675;
  t3147 = -1.*t710*t7*t194;
  t3053 = -0.213*t3006;
  t3055 = t2876*t3006;
  t3056 = -1.*t710*t2989;
  t3059 = t194*t2886*t2992;
  t3060 = t3056 + t3059;
  t3067 = t2888*t3060;
  t3068 = t3055 + t3067;
  t3069 = -0.213*t3068;
  t3075 = t3053 + t3069;
  t3471 = -1.*t3466*t2886;
  t3480 = -1.*t710*t3479;
  t3483 = t3471 + t3480;
  t3484 = t2868*t3483;
  t3494 = t3486 + t3492;
  t3495 = -1.*t2888*t3494;
  t3497 = t3484 + t3495;
  t3614 = 0.213*t2886*t3448;
  t3615 = -1.*t2876*t2886*t3448;
  t3617 = t3615 + t3453;
  t3618 = -0.213*t3617;
  t3621 = t3614 + t3618;
  t3385 = 0.213*t2886*t3313;
  t3388 = -1.*t2876*t2886*t3313;
  t3389 = t3388 + t3316;
  t3390 = -0.213*t3389;
  t3392 = t3385 + t3390;
  t3710 = -0.213*t3540;
  t3711 = t7*t2886*t3186;
  t3712 = -1.*t710*t3523;
  t3715 = t3711 + t3712;
  t3723 = t2888*t3715;
  t3724 = t2876*t3540;
  t3725 = t3723 + t3724;
  t3727 = -0.213*t3725;
  t3731 = t3710 + t3727;
  t3775 = t6*t7*t2637*t3186;
  t3776 = -1.*t2749*t7*t2775*t3186;
  t3777 = t3775 + t3776;
  t3798 = -1.*t194*t2775;
  t3799 = t6*t2992*t3186;
  t3801 = t3798 + t3799;
  t3802 = t2637*t3801;
  t3804 = t2749*t3409;
  t3805 = t3802 + t3804;
  t3809 = -1.*t710*t2888*t3805;
  t3863 = -1.*t2749*t3801;
  t3865 = t3863 + t3419;
  t3881 = t2749*t6*t7*t3186;
  t3882 = t7*t2637*t2775*t3186;
  t3883 = t3881 + t3882;
  t3806 = -1.*t2868*t2886*t3805;
  t3810 = t3806 + t3809;
  t3856 = -1.*t711*t3801;
  t3896 = -1.*t2749*t3635;
  t3897 = t3856 + t3896;
  t3903 = t3477 + t3478;
  t3913 = t7*t3186;
  t3914 = 0. + t3913;
  t3916 = t2749*t3801;
  t3917 = t2637*t3635;
  t3918 = 0. + t3916 + t3917;
  t3922 = t710*t3914;
  t3923 = -1.*t2886*t3918;
  t3783 = -1.*t7*t711*t2775*t3186;
  t3948 = t3191 + t3776;
  t3898 = -1.*t2868*t2886*t3897;
  t3899 = -1.*t710*t2888*t3897;
  t3900 = t3898 + t3899;
  t3857 = t3856 + t3804;
  t3860 = 0.08*t3857;
  t3866 = -0.213*t710*t3865;
  t3867 = t710*t2876*t3865;
  t3868 = -1.*t2886*t2888*t3865;
  t3872 = t3867 + t3868;
  t3875 = -0.213*t3872;
  t3876 = t3860 + t3866 + t3875;
  t3986 = t3863 + t3646;
  t3774 = 0.04675*t6*t7*t3186;
  t3780 = -0.213*t710*t3777;
  t3781 = t2832*t6*t7*t3186;
  t3784 = t3781 + t3783;
  t3786 = 0.08*t3784;
  t3788 = t710*t2876*t3777;
  t3789 = -1.*t2886*t2888*t3777;
  t3790 = t3788 + t3789;
  t3792 = -0.213*t3790;
  t3796 = t3774 + t3780 + t3786 + t3792;
  t3949 = -0.213*t710*t3948;
  t3950 = t3881 + t3783;
  t3951 = 0.08*t3950;
  t3952 = t710*t2876*t3948;
  t3953 = -1.*t2886*t2888*t3948;
  t3954 = t3952 + t3953;
  t3956 = -0.213*t3954;
  t3957 = t3949 + t3951 + t3956;
  t3880 = -1.*t2886*t2992*t3186;
  t3884 = t710*t3883;
  t3885 = t3880 + t3884;
  t3886 = -1.*t2888*t3885;
  t3887 = -1.*t710*t2992*t3186;
  t3888 = -1.*t2886*t3883;
  t3889 = t3887 + t3888;
  t3891 = t2868*t3889;
  t3893 = t3886 + t3891;
  t4044 = -1.*t2749*t6*t2992*t3186;
  t4045 = -1.*t2637*t2775*t2992*t3186;
  t4046 = t4044 + t4045;
  t4047 = t710*t4046;
  t4048 = t3519 + t4047;
  t3999 = 0.04675*t7*t194*t2775;
  t4000 = t6*t7*t194*t711;
  t4002 = t2832*t7*t194*t2775;
  t4003 = t4000 + t4002;
  t4004 = 0.08*t4003;
  t4005 = 0.1881*t194*t2992;
  t4006 = -0.213*t3042;
  t4007 = t2888*t3006;
  t4008 = t2876*t3042;
  t4009 = t4007 + t4008;
  t4010 = -0.213*t4009;
  t4011 = t3999 + t4004 + t4005 + t4006 + t4010;
  t3902 = t7*t194*t2886;
  t3904 = t710*t3903;
  t3905 = t3902 + t3904;
  t3906 = -1.*t2888*t3905;
  t3907 = t710*t7*t194;
  t3908 = -1.*t2886*t3903;
  t3909 = t3907 + t3908;
  t3910 = t2868*t3909;
  t3911 = t3906 + t3910;
  t3814 = 0.04675*t3306;
  t3815 = t711*t3350;
  t3816 = t2832*t3306;
  t3817 = t3815 + t3816;
  t3818 = 0.08*t3817;
  t3820 = -0.213*t710*t3448;
  t3822 = t710*t2876*t3448;
  t3823 = -1.*t2886*t2888*t3448;
  t3824 = t3822 + t3823;
  t3826 = -0.213*t3824;
  t3827 = t3814 + t3818 + t3820 + t3826;
  t3962 = -1.*t711*t3300;
  t3963 = t3962 + t3478;
  t3964 = 0.08*t3963;
  t3965 = -0.213*t710*t3313;
  t3966 = t710*t2876*t3313;
  t3968 = -1.*t2886*t2888*t3313;
  t3970 = t3966 + t3968;
  t3972 = -0.213*t3970;
  t3973 = t3964 + t3965 + t3972;
  t4033 = 0.1881*t7*t3186;
  t3835 = 0.04675*t3409;
  t3838 = t711*t3404;
  t3840 = t2832*t3409;
  t3846 = t3838 + t3840;
  t3847 = 0.08*t3846;
  t4024 = -0.213*t3889;
  t4025 = -1.*t710*t3883;
  t4026 = t3209 + t4025;
  t4027 = t2888*t4026;
  t4028 = t2876*t3889;
  t4029 = t4027 + t4028;
  t4030 = -0.213*t4029;
  t4031 = t4024 + t4030;
  t3829 = 0.213*t2886*t3805;
  t3830 = -1.*t2876*t2886*t3805;
  t3831 = t3830 + t3809;
  t3832 = -0.213*t3831;
  t3833 = t3829 + t3832;
  t3977 = 0.213*t2886*t3897;
  t3978 = -1.*t2876*t2886*t3897;
  t3979 = t3978 + t3899;
  t3980 = -0.213*t3979;
  t3981 = t3977 + t3980;
  t3915 = -1.*t2886*t3914;
  t3919 = -1.*t710*t3918;
  t3920 = t3915 + t3919;
  t3921 = t2868*t3920;
  t3924 = t3922 + t3923;
  t3925 = -1.*t2888*t3924;
  t3926 = t3921 + t3925;
  t4065 = -0.213*t3909;
  t4067 = -1.*t710*t3903;
  t4068 = t3122 + t4067;
  t4069 = t2888*t4068;
  t4070 = t2876*t3909;
  t4071 = t4069 + t4070;
  t4072 = -0.213*t4071;
  t4073 = t4065 + t4072;
  t4102 = t6*t7*t2637;
  t4103 = -1.*t2749*t7*t2775;
  t4104 = t4102 + t4103;
  t4106 = -1.*t710*t2888*t4104;
  t4120 = -1.*t2749*t6*t7;
  t4121 = -1.*t7*t2637*t2775;
  t4122 = t4120 + t4121;
  t4116 = -1.*t6*t7*t711;
  t4132 = t7*t711*t2775;
  t4133 = t4120 + t4132;
  t4142 = -1.*t6*t2637*t2992;
  t4143 = t2749*t2775*t2992;
  t4144 = t4142 + t4143;
  t4130 = t4116 + t4103;
  t4159 = -1.*t710*t2888*t4130;
  t4131 = 0.08*t4130;
  t4134 = -0.213*t710*t4133;
  t4135 = t710*t2876*t4133;
  t4136 = -1.*t2886*t2888*t4133;
  t4137 = t4135 + t4136;
  t4138 = -0.213*t4137;
  t4139 = t4131 + t4134 + t4138;
  t4140 = var2[15]*t4139;
  t4147 = t711*t2775*t2992;
  t4169 = t6*t711*t2992;
  t4170 = t4169 + t4143;
  t4105 = -1.*t2868*t2886*t4104;
  t4107 = t4105 + t4106;
  t4158 = -1.*t2868*t2886*t4130;
  t4160 = t4158 + t4159;
  t4185 = t2749*t6*t7;
  t4186 = t7*t2637*t2775;
  t4187 = 0. + t4185 + t4186;
  t4189 = -1.*t2992;
  t4190 = 0. + t4189;
  t4188 = -1.*t2886*t4187;
  t4191 = t710*t4190;
  t4172 = -1.*t2749*t6*t2992;
  t4209 = -1.*t2637*t2775*t2992;
  t4210 = t4172 + t4209;
  t4115 = -0.04675*t7*t2775;
  t4117 = -1.*t2832*t7*t2775;
  t4118 = t4116 + t4117;
  t4119 = 0.08*t4118;
  t4223 = t710*t4122;
  t4224 = t2886*t2992;
  t4225 = t4223 + t4224;
  t4141 = -0.04675*t6*t2992;
  t4145 = -0.213*t710*t4144;
  t4146 = -1.*t2832*t6*t2992;
  t4148 = t4146 + t4147;
  t4149 = 0.08*t4148;
  t4150 = t710*t2876*t4144;
  t4151 = -1.*t2886*t2888*t4144;
  t4152 = t4150 + t4151;
  t4153 = -0.213*t4152;
  t4154 = t4141 + t4145 + t4149 + t4153;
  t4171 = -0.213*t710*t4170;
  t4173 = t4172 + t4147;
  t4174 = 0.08*t4173;
  t4175 = t710*t2876*t4170;
  t4176 = -1.*t2886*t2888*t4170;
  t4177 = t4175 + t4176;
  t4178 = -0.213*t4177;
  t4179 = t4171 + t4174 + t4178;
  t4208 = -1.*t7*t2886;
  t4211 = t710*t4210;
  t4212 = t4208 + t4211;
  t4213 = -1.*t2888*t4212;
  t4214 = -1.*t710*t7;
  t4215 = -1.*t2886*t4210;
  t4216 = t4214 + t4215;
  t4217 = t2868*t4216;
  t4218 = t4213 + t4217;
  t4109 = 0.213*t2886*t4104;
  t4110 = -1.*t2876*t2886*t4104;
  t4111 = t4110 + t4106;
  t4112 = -0.213*t4111;
  t4113 = t4109 + t4112;
  t4162 = 0.213*t2886*t4130;
  t4163 = -1.*t2876*t2886*t4130;
  t4164 = t4163 + t4159;
  t4165 = -0.213*t4164;
  t4166 = t4162 + t4165;
  t4194 = -1.*t710*t4187;
  t4195 = -1.*t2886*t4190;
  t4196 = t4194 + t4195;
  t4192 = t4188 + t4191;
  t4193 = -1.*t2888*t4192;
  t4197 = t2868*t4196;
  t4198 = t4193 + t4197;
  t4239 = -0.213*t4216;
  t4240 = t7*t2886;
  t4241 = -1.*t710*t4210;
  t4242 = t4240 + t4241;
  t4243 = t2888*t4242;
  t4244 = t2876*t4216;
  t4245 = t4243 + t4244;
  t4246 = -0.213*t4245;
  t4247 = t4239 + t4246;
  p_output1[0]=var2[4]*(t2919*var2[3] + (-0.04675*t194*t2775*t2992 + t3084 - 0.213*t3135 - 0.213*(t2876*t3135 + t2888*(-1.*t2886*t3129 + t3147)) + 0.08*(-1.*t194*t2775*t2832*t2992 - 1.*t194*t2992*t6*t711))*var2[4] + t3279*var2[5] + t2985*var2[15] + t3075*var2[16] - 0.213*t3047*var2[17]) + var2[15]*(t3377*var2[3] + t2985*var2[4] + t3437*var2[5] + (0.08*t3313 - 0.213*t3336*t710 - 0.213*(-1.*t2886*t2888*t3336 + t2876*t3336*t710))*var2[15] + t3392*var2[16] - 0.213*t3323*var2[17]) + var2[3]*((t3560 + t3590 - 0.213*t3582*t710 - 0.213*(-1.*t2886*t2888*t3582 + t2876*t3582*t710))*var2[3] + t2919*var2[4] + t3659*var2[5] + t3377*var2[15] + t3621*var2[16] - 0.213*t3455*var2[17]) + var2[16]*(t3621*var2[3] + t3075*var2[4] + t3731*var2[5] + t3392*var2[15] + (-0.213*t3483 - 0.213*(t2876*t3483 + t2888*(t2886*t3479 - 1.*t3466*t710)))*var2[16] - 0.213*t3497*var2[17]) + var2[5]*(t3659*var2[3] + t3279*var2[4] + (t3084 + t3560 + t3590 - 0.213*t3684 - 0.213*(t2888*(t3147 - 1.*t2886*t3582) + t2876*t3684))*var2[5] + t3437*var2[15] + t3731*var2[16] - 0.213*t3546*var2[17]) + var2[17]*(-0.213*t3455*var2[3] - 0.213*t3047*var2[4] - 0.213*t3546*var2[5] - 0.213*t3323*var2[15] - 0.213*t3497*var2[16] - 0.213*(-1.*t2888*(0. + t3486 + t3492) - 1.*t2868*(0. + t2886*t3466 + t3479*t710))*var2[17]);
  p_output1[1]=var2[3]*((t3835 + t3847 - 0.213*t3523*t710 - 0.213*(-1.*t2886*t2888*t3523 + t2876*t3523*t710))*var2[3] + t3796*var2[4] + t3827*var2[5] + t3876*var2[15] + t3833*var2[16] - 0.213*t3810*var2[17]) + var2[4]*(t3796*var2[3] + (-0.04675*t2775*t2992*t3186 + t4033 - 0.213*t4048 - 0.213*(t2888*(t3533 - 1.*t2886*t4046) + t2876*t4048) + 0.08*(-1.*t2775*t2832*t2992*t3186 - 1.*t2992*t3186*t6*t711))*var2[4] + t4011*var2[5] + t3957*var2[15] + t4031*var2[16] - 0.213*t3893*var2[17]) + var2[15]*(t3876*var2[3] + t3957*var2[4] + t3973*var2[5] + (0.08*t3897 - 0.213*t3986*t710 - 0.213*(-1.*t2886*t2888*t3986 + t2876*t3986*t710))*var2[15] + t3981*var2[16] - 0.213*t3900*var2[17]) + var2[5]*(t3827*var2[3] + t4011*var2[4] + (-0.213*t3528 - 0.213*(t2876*t3528 + t2888*t3540) + t3835 + t3847 + t4033)*var2[5] + t3973*var2[15] + t4073*var2[16] - 0.213*t3911*var2[17]) + var2[16]*(t3833*var2[3] + t4031*var2[4] + t4073*var2[5] + t3981*var2[15] + (-0.213*t3920 - 0.213*(t2876*t3920 + t2888*(t2886*t3918 - 1.*t3914*t710)))*var2[16] - 0.213*t3926*var2[17]) + var2[17]*(-0.213*t3810*var2[3] - 0.213*t3893*var2[4] - 0.213*t3911*var2[5] - 0.213*t3900*var2[15] - 0.213*t3926*var2[16] - 0.213*(-1.*t2888*(0. + t3922 + t3923) - 1.*t2868*(0. + t2886*t3914 + t3918*t710))*var2[17]);
  p_output1[2]=var2[3]*(t4140 + (t4115 + t4119 - 0.213*t4122*t710 - 0.213*(-1.*t2886*t2888*t4122 + t2876*t4122*t710))*var2[3] + t4154*var2[4] + t4113*var2[16] - 0.213*t4107*var2[17]) + var2[15]*(t4140 + t4139*var2[3] + t4179*var2[4] + t4166*var2[16] - 0.213*t4160*var2[17]) + var2[16]*(t4113*var2[3] + t4247*var2[4] + t4166*var2[15] + (-0.213*t4196 - 0.213*(t2876*t4196 + t2888*(t2886*t4187 - 1.*t4190*t710)))*var2[16] - 0.213*t4198*var2[17]) + var2[4]*(t4154*var2[3] + (-0.1881*t2992 + t4115 + t4119 - 0.213*t4225 - 0.213*(t2876*t4225 + t2888*(-1.*t2886*t4122 + t2992*t710)))*var2[4] + t4179*var2[15] + t4247*var2[16] - 0.213*t4218*var2[17]) + var2[17]*(-0.213*t4107*var2[3] - 0.213*t4218*var2[4] - 0.213*t4160*var2[15] - 0.213*t4198*var2[16] - 0.213*(-1.*t2888*(0. + t4188 + t4191) - 1.*t2868*(0. + t2886*t4190 + t4187*t710))*var2[17]);
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_4_func.hh"

namespace SymFunction
{

void jj_4_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
