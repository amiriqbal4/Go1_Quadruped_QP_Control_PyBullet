/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:57 GMT-05:00
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
  double t17;
  double t129;
  double t380;
  double t2664;
  double t2294;
  double t2666;
  double t1115;
  double t2507;
  double t2610;
  double t2637;
  double t2673;
  double t2717;
  double t2774;
  double t2791;
  double t2804;
  double t2848;
  double t2850;
  double t2817;
  double t2818;
  double t2860;
  double t2891;
  double t2892;
  double t2900;
  double t2899;
  double t2901;
  double t2919;
  double t2747;
  double t3007;
  double t3009;
  double t3010;
  double t3011;
  double t3012;
  double t3015;
  double t3057;
  double t3069;
  double t3071;
  double t3073;
  double t3074;
  double t3075;
  double t3080;
  double t2859;
  double t2868;
  double t2876;
  double t2883;
  double t2885;
  double t2886;
  double t2888;
  double t2889;
  double t3136;
  double t3137;
  double t3138;
  double t3144;
  double t3146;
  double t3147;
  double t3152;
  double t3153;
  double t3154;
  double t3170;
  double t3175;
  double t3176;
  double t3193;
  double t3195;
  double t3203;
  double t3204;
  double t3205;
  double t3160;
  double t3254;
  double t3257;
  double t3258;
  double t3261;
  double t3270;
  double t3272;
  double t3260;
  double t3276;
  double t3277;
  double t2921;
  double t2922;
  double t2926;
  double t2931;
  double t2932;
  double t2936;
  double t3208;
  double t3306;
  double t3307;
  double t3155;
  double t3161;
  double t3316;
  double t3318;
  double t3323;
  double t3324;
  double t3326;
  double t3330;
  double t3331;
  double t3279;
  double t3348;
  double t3349;
  double t710;
  double t2725;
  double t2749;
  double t2775;
  double t2778;
  double t2816;
  double t2819;
  double t2820;
  double t2832;
  double t2834;
  double t3309;
  double t3311;
  double t3312;
  double t3371;
  double t3376;
  double t3377;
  double t3370;
  double t3383;
  double t3384;
  double t3207;
  double t3209;
  double t3210;
  double t3211;
  double t3213;
  double t3214;
  double t3221;
  double t3224;
  double t3422;
  double t3423;
  double t3426;
  double t3420;
  double t3427;
  double t3429;
  double t3059;
  double t3060;
  double t3062;
  double t3066;
  double t3067;
  double t3068;
  double t3084;
  double t3088;
  double t3089;
  double t3092;
  double t3096;
  double t3097;
  double t3118;
  double t3122;
  double t3124;
  double t3278;
  double t3283;
  double t3287;
  double t3288;
  double t3293;
  double t3296;
  double t3297;
  double t3298;
  double t3299;
  double t3347;
  double t3350;
  double t3351;
  double t3352;
  double t3353;
  double t3354;
  double t3355;
  double t3356;
  double t3359;
  double t3419;
  double t3430;
  double t3432;
  double t3437;
  double t3438;
  double t3439;
  double t3440;
  double t3441;
  double t3446;
  double t3447;
  double t3448;
  double t2988;
  double t3369;
  double t3388;
  double t3389;
  double t3390;
  double t3392;
  double t3471;
  double t3475;
  double t3040;
  double t2945;
  double t2946;
  double t2954;
  double t2956;
  double t2967;
  double t2971;
  double t2972;
  double t2984;
  double t2985;
  double t3321;
  double t3327;
  double t3328;
  double t3329;
  double t3332;
  double t3333;
  double t3336;
  double t3409;
  double t3410;
  double t3411;
  double t3412;
  double t3413;
  double t3239;
  double t3240;
  double t3242;
  double t3248;
  double t3252;
  double t3495;
  double t3497;
  double t3499;
  double t3504;
  double t3506;
  double t3507;
  double t3509;
  double t3513;
  double t3515;
  double t3566;
  double t3569;
  double t3575;
  double t3592;
  double t3594;
  double t3595;
  double t3597;
  double t3598;
  double t3602;
  double t3605;
  double t3671;
  double t3672;
  double t3692;
  double t3695;
  double t3701;
  double t3604;
  double t3607;
  double t3666;
  double t3718;
  double t3720;
  double t3726;
  double t3737;
  double t3738;
  double t3740;
  double t3741;
  double t3742;
  double t3747;
  double t3748;
  double t3581;
  double t3773;
  double t3721;
  double t3722;
  double t3723;
  double t3668;
  double t3670;
  double t3674;
  double t3675;
  double t3681;
  double t3684;
  double t3685;
  double t3686;
  double t3811;
  double t3565;
  double t3579;
  double t3580;
  double t3582;
  double t3584;
  double t3585;
  double t3586;
  double t3587;
  double t3589;
  double t3590;
  double t3774;
  double t3775;
  double t3776;
  double t3777;
  double t3778;
  double t3780;
  double t3781;
  double t3783;
  double t3691;
  double t3702;
  double t3703;
  double t3704;
  double t3705;
  double t3707;
  double t3708;
  double t3710;
  double t3711;
  double t3869;
  double t3870;
  double t3871;
  double t3872;
  double t3873;
  double t3824;
  double t3826;
  double t3827;
  double t3828;
  double t3829;
  double t3830;
  double t3831;
  double t3832;
  double t3833;
  double t3834;
  double t3835;
  double t3838;
  double t3725;
  double t3727;
  double t3728;
  double t3730;
  double t3731;
  double t3732;
  double t3733;
  double t3734;
  double t3735;
  double t3613;
  double t3614;
  double t3615;
  double t3617;
  double t3618;
  double t3621;
  double t3625;
  double t3629;
  double t3630;
  double t3631;
  double t3633;
  double t3787;
  double t3788;
  double t3789;
  double t3790;
  double t3792;
  double t3794;
  double t3796;
  double t3797;
  double t3798;
  double t3860;
  double t3646;
  double t3647;
  double t3649;
  double t3651;
  double t3653;
  double t3849;
  double t3850;
  double t3851;
  double t3852;
  double t3853;
  double t3854;
  double t3855;
  double t3856;
  double t3635;
  double t3637;
  double t3638;
  double t3640;
  double t3643;
  double t3802;
  double t3803;
  double t3804;
  double t3805;
  double t3806;
  double t3739;
  double t3743;
  double t3744;
  double t3746;
  double t3749;
  double t3750;
  double t3751;
  double t3891;
  double t3892;
  double t3893;
  double t3894;
  double t3895;
  double t3896;
  double t3897;
  double t3898;
  double t3927;
  double t3928;
  double t3929;
  double t3931;
  double t3945;
  double t3946;
  double t3947;
  double t3941;
  double t3957;
  double t3958;
  double t3967;
  double t3968;
  double t3969;
  double t3955;
  double t3984;
  double t3956;
  double t3959;
  double t3960;
  double t3961;
  double t3962;
  double t3963;
  double t3964;
  double t3965;
  double t3972;
  double t3994;
  double t3995;
  double t3930;
  double t3932;
  double t3983;
  double t3985;
  double t4010;
  double t4011;
  double t4012;
  double t4014;
  double t4015;
  double t4013;
  double t4016;
  double t3997;
  double t4034;
  double t4035;
  double t3940;
  double t3942;
  double t3943;
  double t3944;
  double t4048;
  double t4049;
  double t4050;
  double t3966;
  double t3970;
  double t3971;
  double t3973;
  double t3974;
  double t3975;
  double t3976;
  double t3977;
  double t3978;
  double t3979;
  double t3996;
  double t3998;
  double t3999;
  double t4000;
  double t4001;
  double t4002;
  double t4003;
  double t4004;
  double t4033;
  double t4036;
  double t4037;
  double t4038;
  double t4039;
  double t4040;
  double t4041;
  double t4042;
  double t4043;
  double t3934;
  double t3935;
  double t3936;
  double t3937;
  double t3938;
  double t3987;
  double t3988;
  double t3989;
  double t3990;
  double t3991;
  double t4019;
  double t4020;
  double t4021;
  double t4017;
  double t4018;
  double t4022;
  double t4023;
  double t4064;
  double t4065;
  double t4066;
  double t4067;
  double t4068;
  double t4069;
  double t4070;
  double t4071;
  double t4072;
  t17 = Cos(var1[3]);
  t129 = Cos(var1[4]);
  t380 = Cos(var1[5]);
  t2664 = Cos(var1[12]);
  t2294 = Sin(var1[12]);
  t2666 = Sin(var1[3]);
  t1115 = Cos(var1[13]);
  t2507 = -1.*t2294;
  t2610 = 0. + t2507;
  t2637 = t17*t129*t380*t2610;
  t2673 = -1.*t2664*t129*t380*t2666;
  t2717 = t2637 + t2673;
  t2774 = -1.*t129*t380*t2294*t2666;
  t2791 = Cos(var1[14]);
  t2804 = 0. + t2791;
  t2848 = -1.*t17*t129*t380*t2294;
  t2850 = t2848 + t2673;
  t2817 = Sin(var1[13]);
  t2818 = Sin(var1[14]);
  t2860 = t2664*t17*t129*t380;
  t2891 = t129*t380*t2610*t2666;
  t2892 = t2860 + t2891;
  t2900 = Sin(var1[4]);
  t2899 = -1.*t2817*t2892;
  t2901 = -1.*t1115*t380*t2900;
  t2919 = t2899 + t2901;
  t2747 = 0. + t2664;
  t3007 = -1.*t129*t380*t2817;
  t3009 = -1.*t2664*t17*t380*t2900;
  t3010 = -1.*t380*t2610*t2666*t2900;
  t3011 = t3009 + t3010;
  t3012 = t1115*t3011;
  t3015 = t3007 + t3012;
  t3057 = Sin(var1[5]);
  t3069 = t2817*t2900*t3057;
  t3071 = -1.*t2664*t17*t129*t3057;
  t3073 = -1.*t129*t2610*t2666*t3057;
  t3074 = t3071 + t3073;
  t3075 = t1115*t3074;
  t3080 = t3069 + t3075;
  t2859 = -0.213*t1115*t2850;
  t2868 = t2860 + t2774;
  t2876 = -0.08*t2868;
  t2883 = t1115*t2804*t2850;
  t2885 = -1.*t2817*t2818*t2850;
  t2886 = t2883 + t2885;
  t2888 = -0.213*t2886;
  t2889 = t2859 + t2876 + t2888;
  t3136 = t380*t2666*t2900;
  t3137 = -1.*t17*t3057;
  t3138 = t3136 + t3137;
  t3144 = -1.*t2664*t3138;
  t3146 = t17*t380*t2900;
  t3147 = t2666*t3057;
  t3152 = t3146 + t3147;
  t3153 = -1.*t2294*t3152;
  t3154 = t3144 + t3153;
  t3170 = t2294*t3138;
  t3175 = -1.*t2664*t3152;
  t3176 = t3170 + t3175;
  t3193 = -1.*t380*t2666*t2900;
  t3195 = t17*t3057;
  t3203 = t3193 + t3195;
  t3204 = -1.*t2294*t3203;
  t3205 = t3204 + t3175;
  t3160 = -1.*t1115*t2818*t3154;
  t3254 = t380*t2666;
  t3257 = -1.*t17*t2900*t3057;
  t3258 = t3254 + t3257;
  t3261 = -1.*t17*t380;
  t3270 = -1.*t2666*t2900*t3057;
  t3272 = t3261 + t3270;
  t3260 = -1.*t2294*t3258;
  t3276 = -1.*t2664*t3272;
  t3277 = t3260 + t3276;
  t2921 = t2791*t2919;
  t2922 = t1115*t2892;
  t2926 = -1.*t380*t2817*t2900;
  t2931 = t2922 + t2926;
  t2932 = -1.*t2818*t2931;
  t2936 = t2921 + t2932;
  t3208 = t2664*t3203;
  t3306 = t2610*t3152;
  t3307 = t3208 + t3306;
  t3155 = -1.*t2791*t2817*t3154;
  t3161 = t3155 + t3160;
  t3316 = t129*t380;
  t3318 = 0. + t3316;
  t3323 = t2610*t3138;
  t3324 = t2664*t3152;
  t3326 = 0. + t3323 + t3324;
  t3330 = t1115*t3318;
  t3331 = -1.*t2817*t3326;
  t3279 = t2664*t3258;
  t3348 = t2610*t3272;
  t3349 = t3279 + t3348;
  t710 = -0.04675*t17*t129*t380;
  t2725 = -0.213*t1115*t2717;
  t2749 = t2747*t17*t129*t380;
  t2775 = t2749 + t2774;
  t2778 = -0.08*t2775;
  t2816 = t1115*t2804*t2717;
  t2819 = -1.*t2817*t2818*t2717;
  t2820 = t2816 + t2819;
  t2832 = -0.213*t2820;
  t2834 = t710 + t2725 + t2778 + t2832;
  t3309 = -1.*t2791*t2817*t3307;
  t3311 = -1.*t1115*t2818*t3307;
  t3312 = t3309 + t3311;
  t3371 = -1.*t17*t380*t2900;
  t3376 = -1.*t2666*t3057;
  t3377 = t3371 + t3376;
  t3370 = t2610*t3203;
  t3383 = t2664*t3377;
  t3384 = t3370 + t3383;
  t3207 = -0.213*t1115*t3205;
  t3209 = t3208 + t3153;
  t3210 = -0.08*t3209;
  t3211 = t1115*t2804*t3205;
  t3213 = -1.*t2817*t2818*t3205;
  t3214 = t3211 + t3213;
  t3221 = -0.213*t3214;
  t3224 = t3207 + t3210 + t3221;
  t3422 = t17*t380;
  t3423 = t2666*t2900*t3057;
  t3426 = t3422 + t3423;
  t3420 = t2610*t3258;
  t3427 = t2664*t3426;
  t3429 = t3420 + t3427;
  t3059 = 0.04675*t129*t2666*t3057;
  t3060 = -0.1881*t2900*t3057;
  t3062 = -1.*t17*t129*t2294*t3057;
  t3066 = -1.*t2747*t129*t2666*t3057;
  t3067 = t3062 + t3066;
  t3068 = -0.08*t3067;
  t3084 = -0.213*t3080;
  t3088 = t2804*t3080;
  t3089 = t1115*t2900*t3057;
  t3092 = -1.*t2817*t3074;
  t3096 = t3089 + t3092;
  t3097 = t2818*t3096;
  t3118 = t3088 + t3097;
  t3122 = -0.213*t3118;
  t3124 = t3059 + t3060 + t3068 + t3084 + t3122;
  t3278 = -0.213*t1115*t3277;
  t3283 = -1.*t2294*t3272;
  t3287 = t3279 + t3283;
  t3288 = -0.08*t3287;
  t3293 = t1115*t2804*t3277;
  t3296 = -1.*t2817*t2818*t3277;
  t3297 = t3293 + t3296;
  t3298 = -0.213*t3297;
  t3299 = t3278 + t3288 + t3298;
  t3347 = -1.*t129*t2817*t3057;
  t3350 = t1115*t3349;
  t3351 = t3347 + t3350;
  t3352 = -1.*t2818*t3351;
  t3353 = -1.*t1115*t129*t3057;
  t3354 = -1.*t2817*t3349;
  t3355 = t3353 + t3354;
  t3356 = t2791*t3355;
  t3359 = t3352 + t3356;
  t3419 = -0.04675*t3258;
  t3430 = -0.213*t1115*t3429;
  t3432 = t2747*t3258;
  t3437 = t2294*t3426;
  t3438 = t3432 + t3437;
  t3439 = -0.08*t3438;
  t3440 = t1115*t2804*t3429;
  t3441 = -1.*t2817*t2818*t3429;
  t3446 = t3440 + t3441;
  t3447 = -0.213*t3446;
  t3448 = t3419 + t3430 + t3439 + t3447;
  t2988 = 0.1881*t129*t380;
  t3369 = -0.04675*t3203;
  t3388 = t2747*t3203;
  t3389 = t2294*t3377;
  t3390 = t3388 + t3389;
  t3392 = -0.08*t3390;
  t3471 = t1115*t3384;
  t3475 = t3007 + t3471;
  t3040 = -1.*t1115*t129*t380;
  t2945 = -0.213*t2919;
  t2946 = t2804*t2919;
  t2954 = -1.*t1115*t2892;
  t2956 = t380*t2817*t2900;
  t2967 = t2954 + t2956;
  t2971 = t2818*t2967;
  t2972 = t2946 + t2971;
  t2984 = -0.213*t2972;
  t2985 = t2945 + t2984;
  t3321 = -1.*t3318*t2817;
  t3327 = -1.*t1115*t3326;
  t3328 = t3321 + t3327;
  t3329 = t2791*t3328;
  t3332 = t3330 + t3331;
  t3333 = -1.*t2818*t3332;
  t3336 = t3329 + t3333;
  t3409 = 0.213*t2817*t3307;
  t3410 = -1.*t2804*t2817*t3307;
  t3411 = t3410 + t3311;
  t3412 = -0.213*t3411;
  t3413 = t3409 + t3412;
  t3239 = 0.213*t2817*t3154;
  t3240 = -1.*t2804*t2817*t3154;
  t3242 = t3240 + t3160;
  t3248 = -0.213*t3242;
  t3252 = t3239 + t3248;
  t3495 = -0.213*t3355;
  t3497 = t129*t2817*t3057;
  t3499 = -1.*t1115*t3349;
  t3504 = t3497 + t3499;
  t3506 = t2818*t3504;
  t3507 = t2804*t3355;
  t3509 = t3506 + t3507;
  t3513 = -0.213*t3509;
  t3515 = t3495 + t3513;
  t3566 = t17*t129*t2610*t3057;
  t3569 = -1.*t2664*t129*t2666*t3057;
  t3575 = t3566 + t3569;
  t3592 = -1.*t380*t2666;
  t3594 = t17*t2900*t3057;
  t3595 = t3592 + t3594;
  t3597 = t2610*t3595;
  t3598 = t2664*t3272;
  t3602 = t3597 + t3598;
  t3605 = -1.*t1115*t2818*t3602;
  t3671 = -1.*t2664*t3595;
  t3672 = t3671 + t3283;
  t3692 = t2664*t17*t129*t3057;
  t3695 = t129*t2610*t2666*t3057;
  t3701 = t3692 + t3695;
  t3604 = -1.*t2791*t2817*t3602;
  t3607 = t3604 + t3605;
  t3666 = -1.*t2294*t3595;
  t3718 = -1.*t2664*t3426;
  t3720 = t3666 + t3718;
  t3726 = t3323 + t3324;
  t3737 = t129*t3057;
  t3738 = 0. + t3737;
  t3740 = t2664*t3595;
  t3741 = t2610*t3426;
  t3742 = 0. + t3740 + t3741;
  t3747 = t1115*t3738;
  t3748 = -1.*t2817*t3742;
  t3581 = -1.*t129*t2294*t2666*t3057;
  t3773 = t3062 + t3569;
  t3721 = -1.*t2791*t2817*t3720;
  t3722 = -1.*t1115*t2818*t3720;
  t3723 = t3721 + t3722;
  t3668 = t3666 + t3598;
  t3670 = -0.08*t3668;
  t3674 = -0.213*t1115*t3672;
  t3675 = t1115*t2804*t3672;
  t3681 = -1.*t2817*t2818*t3672;
  t3684 = t3675 + t3681;
  t3685 = -0.213*t3684;
  t3686 = t3670 + t3674 + t3685;
  t3811 = t3671 + t3437;
  t3565 = -0.04675*t17*t129*t3057;
  t3579 = -0.213*t1115*t3575;
  t3580 = t2747*t17*t129*t3057;
  t3582 = t3580 + t3581;
  t3584 = -0.08*t3582;
  t3585 = t1115*t2804*t3575;
  t3586 = -1.*t2817*t2818*t3575;
  t3587 = t3585 + t3586;
  t3589 = -0.213*t3587;
  t3590 = t3565 + t3579 + t3584 + t3589;
  t3774 = -0.213*t1115*t3773;
  t3775 = t3692 + t3581;
  t3776 = -0.08*t3775;
  t3777 = t1115*t2804*t3773;
  t3778 = -1.*t2817*t2818*t3773;
  t3780 = t3777 + t3778;
  t3781 = -0.213*t3780;
  t3783 = t3774 + t3776 + t3781;
  t3691 = -1.*t2817*t2900*t3057;
  t3702 = t1115*t3701;
  t3703 = t3691 + t3702;
  t3704 = -1.*t2818*t3703;
  t3705 = -1.*t1115*t2900*t3057;
  t3707 = -1.*t2817*t3701;
  t3708 = t3705 + t3707;
  t3710 = t2791*t3708;
  t3711 = t3704 + t3710;
  t3869 = -1.*t2664*t17*t2900*t3057;
  t3870 = -1.*t2610*t2666*t2900*t3057;
  t3871 = t3869 + t3870;
  t3872 = t1115*t3871;
  t3873 = t3347 + t3872;
  t3824 = -0.04675*t129*t380*t2666;
  t3826 = t17*t129*t380*t2294;
  t3827 = t2747*t129*t380*t2666;
  t3828 = t3826 + t3827;
  t3829 = -0.08*t3828;
  t3830 = 0.1881*t380*t2900;
  t3831 = -0.213*t2931;
  t3832 = t2818*t2919;
  t3833 = t2804*t2931;
  t3834 = t3832 + t3833;
  t3835 = -0.213*t3834;
  t3838 = t3824 + t3829 + t3830 + t3831 + t3835;
  t3725 = t129*t380*t2817;
  t3727 = t1115*t3726;
  t3728 = t3725 + t3727;
  t3730 = -1.*t2818*t3728;
  t3731 = t1115*t129*t380;
  t3732 = -1.*t2817*t3726;
  t3733 = t3731 + t3732;
  t3734 = t2791*t3733;
  t3735 = t3730 + t3734;
  t3613 = -0.04675*t3152;
  t3614 = t2294*t3203;
  t3615 = t2747*t3152;
  t3617 = t3614 + t3615;
  t3618 = -0.08*t3617;
  t3621 = -0.213*t1115*t3307;
  t3625 = t1115*t2804*t3307;
  t3629 = -1.*t2817*t2818*t3307;
  t3630 = t3625 + t3629;
  t3631 = -0.213*t3630;
  t3633 = t3613 + t3618 + t3621 + t3631;
  t3787 = -1.*t2294*t3138;
  t3788 = t3787 + t3324;
  t3789 = -0.08*t3788;
  t3790 = -0.213*t1115*t3154;
  t3792 = t1115*t2804*t3154;
  t3794 = -1.*t2817*t2818*t3154;
  t3796 = t3792 + t3794;
  t3797 = -0.213*t3796;
  t3798 = t3789 + t3790 + t3797;
  t3860 = 0.1881*t129*t3057;
  t3646 = -0.04675*t3272;
  t3647 = t2294*t3258;
  t3649 = t2747*t3272;
  t3651 = t3647 + t3649;
  t3653 = -0.08*t3651;
  t3849 = -0.213*t3708;
  t3850 = -1.*t1115*t3701;
  t3851 = t3069 + t3850;
  t3852 = t2818*t3851;
  t3853 = t2804*t3708;
  t3854 = t3852 + t3853;
  t3855 = -0.213*t3854;
  t3856 = t3849 + t3855;
  t3635 = 0.213*t2817*t3602;
  t3637 = -1.*t2804*t2817*t3602;
  t3638 = t3637 + t3605;
  t3640 = -0.213*t3638;
  t3643 = t3635 + t3640;
  t3802 = 0.213*t2817*t3720;
  t3803 = -1.*t2804*t2817*t3720;
  t3804 = t3803 + t3722;
  t3805 = -0.213*t3804;
  t3806 = t3802 + t3805;
  t3739 = -1.*t2817*t3738;
  t3743 = -1.*t1115*t3742;
  t3744 = t3739 + t3743;
  t3746 = t2791*t3744;
  t3749 = t3747 + t3748;
  t3750 = -1.*t2818*t3749;
  t3751 = t3746 + t3750;
  t3891 = -0.213*t3733;
  t3892 = -1.*t1115*t3726;
  t3893 = t3007 + t3892;
  t3894 = t2818*t3893;
  t3895 = t2804*t3733;
  t3896 = t3894 + t3895;
  t3897 = -0.213*t3896;
  t3898 = t3891 + t3897;
  t3927 = t17*t129*t2610;
  t3928 = -1.*t2664*t129*t2666;
  t3929 = t3927 + t3928;
  t3931 = -1.*t1115*t2818*t3929;
  t3945 = -1.*t2664*t17*t129;
  t3946 = -1.*t129*t2610*t2666;
  t3947 = t3945 + t3946;
  t3941 = -1.*t17*t129*t2294;
  t3957 = t129*t2294*t2666;
  t3958 = t3945 + t3957;
  t3967 = -1.*t17*t2610*t2900;
  t3968 = t2664*t2666*t2900;
  t3969 = t3967 + t3968;
  t3955 = t3941 + t3928;
  t3984 = -1.*t1115*t2818*t3955;
  t3956 = -0.08*t3955;
  t3959 = -0.213*t1115*t3958;
  t3960 = t1115*t2804*t3958;
  t3961 = -1.*t2817*t2818*t3958;
  t3962 = t3960 + t3961;
  t3963 = -0.213*t3962;
  t3964 = t3956 + t3959 + t3963;
  t3965 = var2[12]*t3964;
  t3972 = t2294*t2666*t2900;
  t3994 = t17*t2294*t2900;
  t3995 = t3994 + t3968;
  t3930 = -1.*t2791*t2817*t3929;
  t3932 = t3930 + t3931;
  t3983 = -1.*t2791*t2817*t3955;
  t3985 = t3983 + t3984;
  t4010 = t2664*t17*t129;
  t4011 = t129*t2610*t2666;
  t4012 = 0. + t4010 + t4011;
  t4014 = -1.*t2900;
  t4015 = 0. + t4014;
  t4013 = -1.*t2817*t4012;
  t4016 = t1115*t4015;
  t3997 = -1.*t2664*t17*t2900;
  t4034 = -1.*t2610*t2666*t2900;
  t4035 = t3997 + t4034;
  t3940 = 0.04675*t129*t2666;
  t3942 = -1.*t2747*t129*t2666;
  t3943 = t3941 + t3942;
  t3944 = -0.08*t3943;
  t4048 = t1115*t3947;
  t4049 = t2817*t2900;
  t4050 = t4048 + t4049;
  t3966 = 0.04675*t17*t2900;
  t3970 = -0.213*t1115*t3969;
  t3971 = -1.*t2747*t17*t2900;
  t3973 = t3971 + t3972;
  t3974 = -0.08*t3973;
  t3975 = t1115*t2804*t3969;
  t3976 = -1.*t2817*t2818*t3969;
  t3977 = t3975 + t3976;
  t3978 = -0.213*t3977;
  t3979 = t3966 + t3970 + t3974 + t3978;
  t3996 = -0.213*t1115*t3995;
  t3998 = t3997 + t3972;
  t3999 = -0.08*t3998;
  t4000 = t1115*t2804*t3995;
  t4001 = -1.*t2817*t2818*t3995;
  t4002 = t4000 + t4001;
  t4003 = -0.213*t4002;
  t4004 = t3996 + t3999 + t4003;
  t4033 = -1.*t129*t2817;
  t4036 = t1115*t4035;
  t4037 = t4033 + t4036;
  t4038 = -1.*t2818*t4037;
  t4039 = -1.*t1115*t129;
  t4040 = -1.*t2817*t4035;
  t4041 = t4039 + t4040;
  t4042 = t2791*t4041;
  t4043 = t4038 + t4042;
  t3934 = 0.213*t2817*t3929;
  t3935 = -1.*t2804*t2817*t3929;
  t3936 = t3935 + t3931;
  t3937 = -0.213*t3936;
  t3938 = t3934 + t3937;
  t3987 = 0.213*t2817*t3955;
  t3988 = -1.*t2804*t2817*t3955;
  t3989 = t3988 + t3984;
  t3990 = -0.213*t3989;
  t3991 = t3987 + t3990;
  t4019 = -1.*t1115*t4012;
  t4020 = -1.*t2817*t4015;
  t4021 = t4019 + t4020;
  t4017 = t4013 + t4016;
  t4018 = -1.*t2818*t4017;
  t4022 = t2791*t4021;
  t4023 = t4018 + t4022;
  t4064 = -0.213*t4041;
  t4065 = t129*t2817;
  t4066 = -1.*t1115*t4035;
  t4067 = t4065 + t4066;
  t4068 = t2818*t4067;
  t4069 = t2804*t4041;
  t4070 = t4068 + t4069;
  t4071 = -0.213*t4070;
  t4072 = t4064 + t4071;
  p_output1[0]=var2[4]*(t2834*var2[3] + (t2988 - 0.213*t3015 - 0.213*(t2804*t3015 + t2818*(-1.*t2817*t3011 + t3040)) + 0.04675*t2666*t2900*t380 - 0.08*(-1.*t17*t2294*t2900*t380 - 1.*t2666*t2747*t2900*t380))*var2[4] + t3124*var2[5] + t2889*var2[12] + t2985*var2[13] - 0.213*t2936*var2[14]) + var2[12]*(t3224*var2[3] + t2889*var2[4] + t3299*var2[5] + (-0.08*t3154 - 0.213*t1115*t3176 - 0.213*(t1115*t2804*t3176 - 1.*t2817*t2818*t3176))*var2[12] + t3252*var2[13] - 0.213*t3161*var2[14]) + var2[3]*((t3369 - 0.213*t1115*t3384 - 0.213*(t1115*t2804*t3384 - 1.*t2817*t2818*t3384) + t3392)*var2[3] + t2834*var2[4] + t3448*var2[5] + t3224*var2[12] + t3413*var2[13] - 0.213*t3312*var2[14]) + var2[14]*(-0.213*t3312*var2[3] - 0.213*t2936*var2[4] - 0.213*t3359*var2[5] - 0.213*t3161*var2[12] - 0.213*t3336*var2[13] - 0.213*(-1.*t2791*(0. + t2817*t3318 + t1115*t3326) - 1.*t2818*(0. + t3330 + t3331))*var2[14]) + var2[13]*(t3413*var2[3] + t2985*var2[4] + t3515*var2[5] + t3252*var2[12] + (-0.213*t3328 - 0.213*(t2818*(-1.*t1115*t3318 + t2817*t3326) + t2804*t3328))*var2[13] - 0.213*t3336*var2[14]) + var2[5]*(t3448*var2[3] + t3124*var2[4] + (t2988 + t3369 + t3392 - 0.213*t3475 - 0.213*(t2818*(t3040 - 1.*t2817*t3384) + t2804*t3475))*var2[5] + t3299*var2[12] + t3515*var2[13] - 0.213*t3359*var2[14]);
  p_output1[1]=var2[3]*((-0.213*t1115*t3349 - 0.213*(t1115*t2804*t3349 - 1.*t2817*t2818*t3349) + t3646 + t3653)*var2[3] + t3590*var2[4] + t3633*var2[5] + t3686*var2[12] + t3643*var2[13] - 0.213*t3607*var2[14]) + var2[4]*(t3590*var2[3] + (0.04675*t2666*t2900*t3057 - 0.08*(-1.*t17*t2294*t2900*t3057 - 1.*t2666*t2747*t2900*t3057) + t3860 - 0.213*t3873 - 0.213*(t2818*(t3353 - 1.*t2817*t3871) + t2804*t3873))*var2[4] + t3838*var2[5] + t3783*var2[12] + t3856*var2[13] - 0.213*t3711*var2[14]) + var2[12]*(t3686*var2[3] + t3783*var2[4] + t3798*var2[5] + (-0.08*t3720 - 0.213*t1115*t3811 - 0.213*(t1115*t2804*t3811 - 1.*t2817*t2818*t3811))*var2[12] + t3806*var2[13] - 0.213*t3723*var2[14]) + var2[5]*(t3633*var2[3] + t3838*var2[4] + (-0.213*t3351 - 0.213*(t2804*t3351 + t2818*t3355) + t3646 + t3653 + t3860)*var2[5] + t3798*var2[12] + t3898*var2[13] - 0.213*t3735*var2[14]) + var2[14]*(-0.213*t3607*var2[3] - 0.213*t3711*var2[4] - 0.213*t3735*var2[5] - 0.213*t3723*var2[12] - 0.213*t3751*var2[13] - 0.213*(-1.*t2791*(0. + t2817*t3738 + t1115*t3742) - 1.*t2818*(0. + t3747 + t3748))*var2[14]) + var2[13]*(t3643*var2[3] + t3856*var2[4] + t3898*var2[5] + t3806*var2[12] + (-0.213*t3744 - 0.213*(t2818*(-1.*t1115*t3738 + t2817*t3742) + t2804*t3744))*var2[13] - 0.213*t3751*var2[14]);
  p_output1[2]=var2[3]*(t3965 + (t3940 + t3944 - 0.213*t1115*t3947 - 0.213*(t1115*t2804*t3947 - 1.*t2817*t2818*t3947))*var2[3] + t3979*var2[4] + t3938*var2[13] - 0.213*t3932*var2[14]) + var2[12]*(t3965 + t3964*var2[3] + t4004*var2[4] + t3991*var2[13] - 0.213*t3985*var2[14]) + var2[14]*(-0.213*t3932*var2[3] - 0.213*t4043*var2[4] - 0.213*t3985*var2[12] - 0.213*t4023*var2[13] - 0.213*(-1.*t2791*(0. + t1115*t4012 + t2817*t4015) - 1.*t2818*(0. + t4013 + t4016))*var2[14]) + var2[13]*(t3938*var2[3] + t4072*var2[4] + t3991*var2[12] + (-0.213*t4021 - 0.213*(t2818*(t2817*t4012 - 1.*t1115*t4015) + t2804*t4021))*var2[13] - 0.213*t4023*var2[14]) + var2[4]*(t3979*var2[3] + (-0.1881*t2900 + t3940 + t3944 - 0.213*t4050 - 0.213*(t2818*(t1115*t2900 - 1.*t2817*t3947) + t2804*t4050))*var2[4] + t4004*var2[12] + t4072*var2[13] - 0.213*t4043*var2[14]);
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

#include "jj_3_func.hh"

namespace SymFunction
{

void jj_3_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
