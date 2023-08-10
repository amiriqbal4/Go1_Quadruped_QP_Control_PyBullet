/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:53 GMT-05:00
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
  double t8;
  double t14;
  double t15;
  double t2521;
  double t155;
  double t2522;
  double t18;
  double t1903;
  double t2480;
  double t2507;
  double t2556;
  double t2609;
  double t2653;
  double t2669;
  double t2671;
  double t2754;
  double t2772;
  double t2687;
  double t2692;
  double t2775;
  double t2820;
  double t2828;
  double t2830;
  double t2829;
  double t2831;
  double t2832;
  double t2611;
  double t2903;
  double t2904;
  double t2915;
  double t2918;
  double t2919;
  double t2920;
  double t2948;
  double t2972;
  double t2973;
  double t2974;
  double t2982;
  double t2984;
  double t2985;
  double t2774;
  double t2778;
  double t2791;
  double t2804;
  double t2810;
  double t2816;
  double t2817;
  double t2818;
  double t3015;
  double t3021;
  double t3023;
  double t3027;
  double t3029;
  double t3030;
  double t3031;
  double t3033;
  double t3034;
  double t3044;
  double t3045;
  double t3046;
  double t3061;
  double t3062;
  double t3063;
  double t3064;
  double t3065;
  double t3037;
  double t3097;
  double t3103;
  double t3106;
  double t3110;
  double t3111;
  double t3112;
  double t3108;
  double t3116;
  double t3117;
  double t2834;
  double t2841;
  double t2843;
  double t2844;
  double t2847;
  double t2848;
  double t3067;
  double t3147;
  double t3149;
  double t3036;
  double t3040;
  double t3155;
  double t3156;
  double t3160;
  double t3161;
  double t3166;
  double t3170;
  double t3172;
  double t3122;
  double t3193;
  double t3194;
  double t17;
  double t2610;
  double t2637;
  double t2664;
  double t2666;
  double t2673;
  double t2696;
  double t2717;
  double t2725;
  double t2747;
  double t3150;
  double t3151;
  double t3152;
  double t3215;
  double t3216;
  double t3221;
  double t3214;
  double t3224;
  double t3229;
  double t3066;
  double t3068;
  double t3069;
  double t3071;
  double t3072;
  double t3073;
  double t3074;
  double t3075;
  double t3287;
  double t3288;
  double t3292;
  double t3283;
  double t3293;
  double t3294;
  double t2954;
  double t2956;
  double t2960;
  double t2961;
  double t2967;
  double t2971;
  double t2986;
  double t2988;
  double t2989;
  double t2990;
  double t2991;
  double t2992;
  double t2996;
  double t3006;
  double t3007;
  double t3118;
  double t3123;
  double t3124;
  double t3128;
  double t3129;
  double t3133;
  double t3134;
  double t3135;
  double t3136;
  double t3192;
  double t3195;
  double t3196;
  double t3197;
  double t3198;
  double t3202;
  double t3203;
  double t3204;
  double t3205;
  double t3279;
  double t3296;
  double t3297;
  double t3298;
  double t3299;
  double t3300;
  double t3301;
  double t3302;
  double t3304;
  double t3305;
  double t3306;
  double t2890;
  double t3213;
  double t3239;
  double t3240;
  double t3242;
  double t3248;
  double t3318;
  double t3319;
  double t2925;
  double t2859;
  double t2860;
  double t2862;
  double t2868;
  double t2876;
  double t2883;
  double t2885;
  double t2886;
  double t2888;
  double t3157;
  double t3167;
  double t3168;
  double t3169;
  double t3173;
  double t3174;
  double t3175;
  double t3270;
  double t3271;
  double t3272;
  double t3276;
  double t3277;
  double t3084;
  double t3086;
  double t3088;
  double t3089;
  double t3092;
  double t3332;
  double t3333;
  double t3335;
  double t3336;
  double t3337;
  double t3339;
  double t3340;
  double t3341;
  double t3342;
  double t3371;
  double t3373;
  double t3375;
  double t3394;
  double t3395;
  double t3396;
  double t3398;
  double t3400;
  double t3401;
  double t3403;
  double t3460;
  double t3461;
  double t3483;
  double t3484;
  double t3485;
  double t3402;
  double t3404;
  double t3456;
  double t3500;
  double t3501;
  double t3508;
  double t3519;
  double t3520;
  double t3522;
  double t3523;
  double t3524;
  double t3528;
  double t3529;
  double t3378;
  double t3563;
  double t3502;
  double t3503;
  double t3504;
  double t3457;
  double t3458;
  double t3465;
  double t3466;
  double t3470;
  double t3471;
  double t3475;
  double t3477;
  double t3606;
  double t3370;
  double t3376;
  double t3377;
  double t3383;
  double t3384;
  double t3385;
  double t3386;
  double t3388;
  double t3389;
  double t3390;
  double t3564;
  double t3565;
  double t3566;
  double t3569;
  double t3574;
  double t3575;
  double t3579;
  double t3580;
  double t3481;
  double t3486;
  double t3488;
  double t3489;
  double t3490;
  double t3491;
  double t3492;
  double t3494;
  double t3495;
  double t3677;
  double t3679;
  double t3680;
  double t3681;
  double t3683;
  double t3629;
  double t3630;
  double t3631;
  double t3633;
  double t3634;
  double t3635;
  double t3637;
  double t3638;
  double t3640;
  double t3643;
  double t3644;
  double t3646;
  double t3507;
  double t3509;
  double t3510;
  double t3512;
  double t3513;
  double t3514;
  double t3515;
  double t3516;
  double t3517;
  double t3407;
  double t3408;
  double t3409;
  double t3410;
  double t3411;
  double t3412;
  double t3413;
  double t3415;
  double t3416;
  double t3419;
  double t3420;
  double t3583;
  double t3584;
  double t3585;
  double t3586;
  double t3587;
  double t3588;
  double t3589;
  double t3590;
  double t3591;
  double t3668;
  double t3432;
  double t3437;
  double t3438;
  double t3439;
  double t3440;
  double t3654;
  double t3655;
  double t3656;
  double t3659;
  double t3660;
  double t3661;
  double t3662;
  double t3663;
  double t3423;
  double t3424;
  double t3426;
  double t3427;
  double t3429;
  double t3595;
  double t3596;
  double t3597;
  double t3598;
  double t3602;
  double t3521;
  double t3525;
  double t3526;
  double t3527;
  double t3530;
  double t3531;
  double t3532;
  double t3708;
  double t3709;
  double t3710;
  double t3711;
  double t3712;
  double t3715;
  double t3718;
  double t3720;
  double t3751;
  double t3752;
  double t3753;
  double t3755;
  double t3769;
  double t3770;
  double t3771;
  double t3765;
  double t3781;
  double t3782;
  double t3791;
  double t3792;
  double t3793;
  double t3779;
  double t3808;
  double t3780;
  double t3783;
  double t3784;
  double t3785;
  double t3786;
  double t3787;
  double t3788;
  double t3789;
  double t3796;
  double t3818;
  double t3819;
  double t3754;
  double t3756;
  double t3807;
  double t3809;
  double t3834;
  double t3835;
  double t3836;
  double t3838;
  double t3839;
  double t3837;
  double t3840;
  double t3821;
  double t3858;
  double t3859;
  double t3764;
  double t3766;
  double t3767;
  double t3768;
  double t3872;
  double t3873;
  double t3874;
  double t3790;
  double t3794;
  double t3795;
  double t3797;
  double t3798;
  double t3799;
  double t3800;
  double t3801;
  double t3802;
  double t3803;
  double t3820;
  double t3822;
  double t3823;
  double t3824;
  double t3825;
  double t3826;
  double t3827;
  double t3828;
  double t3857;
  double t3860;
  double t3861;
  double t3862;
  double t3863;
  double t3864;
  double t3865;
  double t3866;
  double t3867;
  double t3758;
  double t3759;
  double t3760;
  double t3761;
  double t3762;
  double t3811;
  double t3812;
  double t3813;
  double t3814;
  double t3815;
  double t3843;
  double t3844;
  double t3845;
  double t3841;
  double t3842;
  double t3846;
  double t3847;
  double t3888;
  double t3889;
  double t3890;
  double t3891;
  double t3892;
  double t3893;
  double t3894;
  double t3895;
  double t3896;
  t8 = Cos(var1[3]);
  t14 = Cos(var1[4]);
  t15 = Cos(var1[5]);
  t2521 = Cos(var1[9]);
  t155 = Sin(var1[9]);
  t2522 = Sin(var1[3]);
  t18 = Cos(var1[10]);
  t1903 = -1.*t155;
  t2480 = 0. + t1903;
  t2507 = t8*t14*t15*t2480;
  t2556 = -1.*t2521*t14*t15*t2522;
  t2609 = t2507 + t2556;
  t2653 = -1.*t14*t15*t155*t2522;
  t2669 = Cos(var1[11]);
  t2671 = 0. + t2669;
  t2754 = -1.*t8*t14*t15*t155;
  t2772 = t2754 + t2556;
  t2687 = Sin(var1[10]);
  t2692 = Sin(var1[11]);
  t2775 = t2521*t8*t14*t15;
  t2820 = t14*t15*t2480*t2522;
  t2828 = t2775 + t2820;
  t2830 = Sin(var1[4]);
  t2829 = -1.*t2687*t2828;
  t2831 = -1.*t18*t15*t2830;
  t2832 = t2829 + t2831;
  t2611 = 0. + t2521;
  t2903 = -1.*t14*t15*t2687;
  t2904 = -1.*t2521*t8*t15*t2830;
  t2915 = -1.*t15*t2480*t2522*t2830;
  t2918 = t2904 + t2915;
  t2919 = t18*t2918;
  t2920 = t2903 + t2919;
  t2948 = Sin(var1[5]);
  t2972 = t2687*t2830*t2948;
  t2973 = -1.*t2521*t8*t14*t2948;
  t2974 = -1.*t14*t2480*t2522*t2948;
  t2982 = t2973 + t2974;
  t2984 = t18*t2982;
  t2985 = t2972 + t2984;
  t2774 = -0.213*t18*t2772;
  t2778 = t2775 + t2653;
  t2791 = 0.08*t2778;
  t2804 = t18*t2671*t2772;
  t2810 = -1.*t2687*t2692*t2772;
  t2816 = t2804 + t2810;
  t2817 = -0.213*t2816;
  t2818 = t2774 + t2791 + t2817;
  t3015 = t15*t2522*t2830;
  t3021 = -1.*t8*t2948;
  t3023 = t3015 + t3021;
  t3027 = -1.*t2521*t3023;
  t3029 = t8*t15*t2830;
  t3030 = t2522*t2948;
  t3031 = t3029 + t3030;
  t3033 = -1.*t155*t3031;
  t3034 = t3027 + t3033;
  t3044 = t155*t3023;
  t3045 = -1.*t2521*t3031;
  t3046 = t3044 + t3045;
  t3061 = -1.*t15*t2522*t2830;
  t3062 = t8*t2948;
  t3063 = t3061 + t3062;
  t3064 = -1.*t155*t3063;
  t3065 = t3064 + t3045;
  t3037 = -1.*t18*t2692*t3034;
  t3097 = t15*t2522;
  t3103 = -1.*t8*t2830*t2948;
  t3106 = t3097 + t3103;
  t3110 = -1.*t8*t15;
  t3111 = -1.*t2522*t2830*t2948;
  t3112 = t3110 + t3111;
  t3108 = -1.*t155*t3106;
  t3116 = -1.*t2521*t3112;
  t3117 = t3108 + t3116;
  t2834 = t2669*t2832;
  t2841 = t18*t2828;
  t2843 = -1.*t15*t2687*t2830;
  t2844 = t2841 + t2843;
  t2847 = -1.*t2692*t2844;
  t2848 = t2834 + t2847;
  t3067 = t2521*t3063;
  t3147 = t2480*t3031;
  t3149 = t3067 + t3147;
  t3036 = -1.*t2669*t2687*t3034;
  t3040 = t3036 + t3037;
  t3155 = t14*t15;
  t3156 = 0. + t3155;
  t3160 = t2480*t3023;
  t3161 = t2521*t3031;
  t3166 = 0. + t3160 + t3161;
  t3170 = t18*t3156;
  t3172 = -1.*t2687*t3166;
  t3122 = t2521*t3106;
  t3193 = t2480*t3112;
  t3194 = t3122 + t3193;
  t17 = 0.04675*t8*t14*t15;
  t2610 = -0.213*t18*t2609;
  t2637 = t2611*t8*t14*t15;
  t2664 = t2637 + t2653;
  t2666 = 0.08*t2664;
  t2673 = t18*t2671*t2609;
  t2696 = -1.*t2687*t2692*t2609;
  t2717 = t2673 + t2696;
  t2725 = -0.213*t2717;
  t2747 = t17 + t2610 + t2666 + t2725;
  t3150 = -1.*t2669*t2687*t3149;
  t3151 = -1.*t18*t2692*t3149;
  t3152 = t3150 + t3151;
  t3215 = -1.*t8*t15*t2830;
  t3216 = -1.*t2522*t2948;
  t3221 = t3215 + t3216;
  t3214 = t2480*t3063;
  t3224 = t2521*t3221;
  t3229 = t3214 + t3224;
  t3066 = -0.213*t18*t3065;
  t3068 = t3067 + t3033;
  t3069 = 0.08*t3068;
  t3071 = t18*t2671*t3065;
  t3072 = -1.*t2687*t2692*t3065;
  t3073 = t3071 + t3072;
  t3074 = -0.213*t3073;
  t3075 = t3066 + t3069 + t3074;
  t3287 = t8*t15;
  t3288 = t2522*t2830*t2948;
  t3292 = t3287 + t3288;
  t3283 = t2480*t3106;
  t3293 = t2521*t3292;
  t3294 = t3283 + t3293;
  t2954 = -0.04675*t14*t2522*t2948;
  t2956 = 0.1881*t2830*t2948;
  t2960 = -1.*t8*t14*t155*t2948;
  t2961 = -1.*t2611*t14*t2522*t2948;
  t2967 = t2960 + t2961;
  t2971 = 0.08*t2967;
  t2986 = -0.213*t2985;
  t2988 = t2671*t2985;
  t2989 = t18*t2830*t2948;
  t2990 = -1.*t2687*t2982;
  t2991 = t2989 + t2990;
  t2992 = t2692*t2991;
  t2996 = t2988 + t2992;
  t3006 = -0.213*t2996;
  t3007 = t2954 + t2956 + t2971 + t2986 + t3006;
  t3118 = -0.213*t18*t3117;
  t3123 = -1.*t155*t3112;
  t3124 = t3122 + t3123;
  t3128 = 0.08*t3124;
  t3129 = t18*t2671*t3117;
  t3133 = -1.*t2687*t2692*t3117;
  t3134 = t3129 + t3133;
  t3135 = -0.213*t3134;
  t3136 = t3118 + t3128 + t3135;
  t3192 = -1.*t14*t2687*t2948;
  t3195 = t18*t3194;
  t3196 = t3192 + t3195;
  t3197 = -1.*t2692*t3196;
  t3198 = -1.*t18*t14*t2948;
  t3202 = -1.*t2687*t3194;
  t3203 = t3198 + t3202;
  t3204 = t2669*t3203;
  t3205 = t3197 + t3204;
  t3279 = 0.04675*t3106;
  t3296 = -0.213*t18*t3294;
  t3297 = t2611*t3106;
  t3298 = t155*t3292;
  t3299 = t3297 + t3298;
  t3300 = 0.08*t3299;
  t3301 = t18*t2671*t3294;
  t3302 = -1.*t2687*t2692*t3294;
  t3304 = t3301 + t3302;
  t3305 = -0.213*t3304;
  t3306 = t3279 + t3296 + t3300 + t3305;
  t2890 = -0.1881*t14*t15;
  t3213 = 0.04675*t3063;
  t3239 = t2611*t3063;
  t3240 = t155*t3221;
  t3242 = t3239 + t3240;
  t3248 = 0.08*t3242;
  t3318 = t18*t3229;
  t3319 = t2903 + t3318;
  t2925 = -1.*t18*t14*t15;
  t2859 = -0.213*t2832;
  t2860 = t2671*t2832;
  t2862 = -1.*t18*t2828;
  t2868 = t15*t2687*t2830;
  t2876 = t2862 + t2868;
  t2883 = t2692*t2876;
  t2885 = t2860 + t2883;
  t2886 = -0.213*t2885;
  t2888 = t2859 + t2886;
  t3157 = -1.*t3156*t2687;
  t3167 = -1.*t18*t3166;
  t3168 = t3157 + t3167;
  t3169 = t2669*t3168;
  t3173 = t3170 + t3172;
  t3174 = -1.*t2692*t3173;
  t3175 = t3169 + t3174;
  t3270 = 0.213*t2687*t3149;
  t3271 = -1.*t2671*t2687*t3149;
  t3272 = t3271 + t3151;
  t3276 = -0.213*t3272;
  t3277 = t3270 + t3276;
  t3084 = 0.213*t2687*t3034;
  t3086 = -1.*t2671*t2687*t3034;
  t3088 = t3086 + t3037;
  t3089 = -0.213*t3088;
  t3092 = t3084 + t3089;
  t3332 = -0.213*t3203;
  t3333 = t14*t2687*t2948;
  t3335 = -1.*t18*t3194;
  t3336 = t3333 + t3335;
  t3337 = t2692*t3336;
  t3339 = t2671*t3203;
  t3340 = t3337 + t3339;
  t3341 = -0.213*t3340;
  t3342 = t3332 + t3341;
  t3371 = t8*t14*t2480*t2948;
  t3373 = -1.*t2521*t14*t2522*t2948;
  t3375 = t3371 + t3373;
  t3394 = -1.*t15*t2522;
  t3395 = t8*t2830*t2948;
  t3396 = t3394 + t3395;
  t3398 = t2480*t3396;
  t3400 = t2521*t3112;
  t3401 = t3398 + t3400;
  t3403 = -1.*t18*t2692*t3401;
  t3460 = -1.*t2521*t3396;
  t3461 = t3460 + t3123;
  t3483 = t2521*t8*t14*t2948;
  t3484 = t14*t2480*t2522*t2948;
  t3485 = t3483 + t3484;
  t3402 = -1.*t2669*t2687*t3401;
  t3404 = t3402 + t3403;
  t3456 = -1.*t155*t3396;
  t3500 = -1.*t2521*t3292;
  t3501 = t3456 + t3500;
  t3508 = t3160 + t3161;
  t3519 = t14*t2948;
  t3520 = 0. + t3519;
  t3522 = t2521*t3396;
  t3523 = t2480*t3292;
  t3524 = 0. + t3522 + t3523;
  t3528 = t18*t3520;
  t3529 = -1.*t2687*t3524;
  t3378 = -1.*t14*t155*t2522*t2948;
  t3563 = t2960 + t3373;
  t3502 = -1.*t2669*t2687*t3501;
  t3503 = -1.*t18*t2692*t3501;
  t3504 = t3502 + t3503;
  t3457 = t3456 + t3400;
  t3458 = 0.08*t3457;
  t3465 = -0.213*t18*t3461;
  t3466 = t18*t2671*t3461;
  t3470 = -1.*t2687*t2692*t3461;
  t3471 = t3466 + t3470;
  t3475 = -0.213*t3471;
  t3477 = t3458 + t3465 + t3475;
  t3606 = t3460 + t3298;
  t3370 = 0.04675*t8*t14*t2948;
  t3376 = -0.213*t18*t3375;
  t3377 = t2611*t8*t14*t2948;
  t3383 = t3377 + t3378;
  t3384 = 0.08*t3383;
  t3385 = t18*t2671*t3375;
  t3386 = -1.*t2687*t2692*t3375;
  t3388 = t3385 + t3386;
  t3389 = -0.213*t3388;
  t3390 = t3370 + t3376 + t3384 + t3389;
  t3564 = -0.213*t18*t3563;
  t3565 = t3483 + t3378;
  t3566 = 0.08*t3565;
  t3569 = t18*t2671*t3563;
  t3574 = -1.*t2687*t2692*t3563;
  t3575 = t3569 + t3574;
  t3579 = -0.213*t3575;
  t3580 = t3564 + t3566 + t3579;
  t3481 = -1.*t2687*t2830*t2948;
  t3486 = t18*t3485;
  t3488 = t3481 + t3486;
  t3489 = -1.*t2692*t3488;
  t3490 = -1.*t18*t2830*t2948;
  t3491 = -1.*t2687*t3485;
  t3492 = t3490 + t3491;
  t3494 = t2669*t3492;
  t3495 = t3489 + t3494;
  t3677 = -1.*t2521*t8*t2830*t2948;
  t3679 = -1.*t2480*t2522*t2830*t2948;
  t3680 = t3677 + t3679;
  t3681 = t18*t3680;
  t3683 = t3192 + t3681;
  t3629 = 0.04675*t14*t15*t2522;
  t3630 = t8*t14*t15*t155;
  t3631 = t2611*t14*t15*t2522;
  t3633 = t3630 + t3631;
  t3634 = 0.08*t3633;
  t3635 = -0.1881*t15*t2830;
  t3637 = -0.213*t2844;
  t3638 = t2692*t2832;
  t3640 = t2671*t2844;
  t3643 = t3638 + t3640;
  t3644 = -0.213*t3643;
  t3646 = t3629 + t3634 + t3635 + t3637 + t3644;
  t3507 = t14*t15*t2687;
  t3509 = t18*t3508;
  t3510 = t3507 + t3509;
  t3512 = -1.*t2692*t3510;
  t3513 = t18*t14*t15;
  t3514 = -1.*t2687*t3508;
  t3515 = t3513 + t3514;
  t3516 = t2669*t3515;
  t3517 = t3512 + t3516;
  t3407 = 0.04675*t3031;
  t3408 = t155*t3063;
  t3409 = t2611*t3031;
  t3410 = t3408 + t3409;
  t3411 = 0.08*t3410;
  t3412 = -0.213*t18*t3149;
  t3413 = t18*t2671*t3149;
  t3415 = -1.*t2687*t2692*t3149;
  t3416 = t3413 + t3415;
  t3419 = -0.213*t3416;
  t3420 = t3407 + t3411 + t3412 + t3419;
  t3583 = -1.*t155*t3023;
  t3584 = t3583 + t3161;
  t3585 = 0.08*t3584;
  t3586 = -0.213*t18*t3034;
  t3587 = t18*t2671*t3034;
  t3588 = -1.*t2687*t2692*t3034;
  t3589 = t3587 + t3588;
  t3590 = -0.213*t3589;
  t3591 = t3585 + t3586 + t3590;
  t3668 = -0.1881*t14*t2948;
  t3432 = 0.04675*t3112;
  t3437 = t155*t3106;
  t3438 = t2611*t3112;
  t3439 = t3437 + t3438;
  t3440 = 0.08*t3439;
  t3654 = -0.213*t3492;
  t3655 = -1.*t18*t3485;
  t3656 = t2972 + t3655;
  t3659 = t2692*t3656;
  t3660 = t2671*t3492;
  t3661 = t3659 + t3660;
  t3662 = -0.213*t3661;
  t3663 = t3654 + t3662;
  t3423 = 0.213*t2687*t3401;
  t3424 = -1.*t2671*t2687*t3401;
  t3426 = t3424 + t3403;
  t3427 = -0.213*t3426;
  t3429 = t3423 + t3427;
  t3595 = 0.213*t2687*t3501;
  t3596 = -1.*t2671*t2687*t3501;
  t3597 = t3596 + t3503;
  t3598 = -0.213*t3597;
  t3602 = t3595 + t3598;
  t3521 = -1.*t2687*t3520;
  t3525 = -1.*t18*t3524;
  t3526 = t3521 + t3525;
  t3527 = t2669*t3526;
  t3530 = t3528 + t3529;
  t3531 = -1.*t2692*t3530;
  t3532 = t3527 + t3531;
  t3708 = -0.213*t3515;
  t3709 = -1.*t18*t3508;
  t3710 = t2903 + t3709;
  t3711 = t2692*t3710;
  t3712 = t2671*t3515;
  t3715 = t3711 + t3712;
  t3718 = -0.213*t3715;
  t3720 = t3708 + t3718;
  t3751 = t8*t14*t2480;
  t3752 = -1.*t2521*t14*t2522;
  t3753 = t3751 + t3752;
  t3755 = -1.*t18*t2692*t3753;
  t3769 = -1.*t2521*t8*t14;
  t3770 = -1.*t14*t2480*t2522;
  t3771 = t3769 + t3770;
  t3765 = -1.*t8*t14*t155;
  t3781 = t14*t155*t2522;
  t3782 = t3769 + t3781;
  t3791 = -1.*t8*t2480*t2830;
  t3792 = t2521*t2522*t2830;
  t3793 = t3791 + t3792;
  t3779 = t3765 + t3752;
  t3808 = -1.*t18*t2692*t3779;
  t3780 = 0.08*t3779;
  t3783 = -0.213*t18*t3782;
  t3784 = t18*t2671*t3782;
  t3785 = -1.*t2687*t2692*t3782;
  t3786 = t3784 + t3785;
  t3787 = -0.213*t3786;
  t3788 = t3780 + t3783 + t3787;
  t3789 = var2[9]*t3788;
  t3796 = t155*t2522*t2830;
  t3818 = t8*t155*t2830;
  t3819 = t3818 + t3792;
  t3754 = -1.*t2669*t2687*t3753;
  t3756 = t3754 + t3755;
  t3807 = -1.*t2669*t2687*t3779;
  t3809 = t3807 + t3808;
  t3834 = t2521*t8*t14;
  t3835 = t14*t2480*t2522;
  t3836 = 0. + t3834 + t3835;
  t3838 = -1.*t2830;
  t3839 = 0. + t3838;
  t3837 = -1.*t2687*t3836;
  t3840 = t18*t3839;
  t3821 = -1.*t2521*t8*t2830;
  t3858 = -1.*t2480*t2522*t2830;
  t3859 = t3821 + t3858;
  t3764 = -0.04675*t14*t2522;
  t3766 = -1.*t2611*t14*t2522;
  t3767 = t3765 + t3766;
  t3768 = 0.08*t3767;
  t3872 = t18*t3771;
  t3873 = t2687*t2830;
  t3874 = t3872 + t3873;
  t3790 = -0.04675*t8*t2830;
  t3794 = -0.213*t18*t3793;
  t3795 = -1.*t2611*t8*t2830;
  t3797 = t3795 + t3796;
  t3798 = 0.08*t3797;
  t3799 = t18*t2671*t3793;
  t3800 = -1.*t2687*t2692*t3793;
  t3801 = t3799 + t3800;
  t3802 = -0.213*t3801;
  t3803 = t3790 + t3794 + t3798 + t3802;
  t3820 = -0.213*t18*t3819;
  t3822 = t3821 + t3796;
  t3823 = 0.08*t3822;
  t3824 = t18*t2671*t3819;
  t3825 = -1.*t2687*t2692*t3819;
  t3826 = t3824 + t3825;
  t3827 = -0.213*t3826;
  t3828 = t3820 + t3823 + t3827;
  t3857 = -1.*t14*t2687;
  t3860 = t18*t3859;
  t3861 = t3857 + t3860;
  t3862 = -1.*t2692*t3861;
  t3863 = -1.*t18*t14;
  t3864 = -1.*t2687*t3859;
  t3865 = t3863 + t3864;
  t3866 = t2669*t3865;
  t3867 = t3862 + t3866;
  t3758 = 0.213*t2687*t3753;
  t3759 = -1.*t2671*t2687*t3753;
  t3760 = t3759 + t3755;
  t3761 = -0.213*t3760;
  t3762 = t3758 + t3761;
  t3811 = 0.213*t2687*t3779;
  t3812 = -1.*t2671*t2687*t3779;
  t3813 = t3812 + t3808;
  t3814 = -0.213*t3813;
  t3815 = t3811 + t3814;
  t3843 = -1.*t18*t3836;
  t3844 = -1.*t2687*t3839;
  t3845 = t3843 + t3844;
  t3841 = t3837 + t3840;
  t3842 = -1.*t2692*t3841;
  t3846 = t2669*t3845;
  t3847 = t3842 + t3846;
  t3888 = -0.213*t3865;
  t3889 = t14*t2687;
  t3890 = -1.*t18*t3859;
  t3891 = t3889 + t3890;
  t3892 = t2692*t3891;
  t3893 = t2671*t3865;
  t3894 = t3892 + t3893;
  t3895 = -0.213*t3894;
  t3896 = t3888 + t3895;
  p_output1[0]=var2[4]*(t2747*var2[3] + (-0.04675*t15*t2522*t2830 + t2890 - 0.213*t2920 - 0.213*(t2671*t2920 + t2692*(-1.*t2687*t2918 + t2925)) + 0.08*(-1.*t15*t2522*t2611*t2830 - 1.*t15*t155*t2830*t8))*var2[4] + t3007*var2[5] + t2818*var2[9] + t2888*var2[10] - 0.213*t2848*var2[11]) + var2[9]*(t3075*var2[3] + t2818*var2[4] + t3136*var2[5] + (0.08*t3034 - 0.213*t18*t3046 - 0.213*(t18*t2671*t3046 - 1.*t2687*t2692*t3046))*var2[9] + t3092*var2[10] - 0.213*t3040*var2[11]) + var2[3]*((t3213 - 0.213*t18*t3229 - 0.213*(t18*t2671*t3229 - 1.*t2687*t2692*t3229) + t3248)*var2[3] + t2747*var2[4] + t3306*var2[5] + t3075*var2[9] + t3277*var2[10] - 0.213*t3152*var2[11]) + var2[11]*(-0.213*t3152*var2[3] - 0.213*t2848*var2[4] - 0.213*t3205*var2[5] - 0.213*t3040*var2[9] - 0.213*t3175*var2[10] - 0.213*(-1.*t2669*(0. + t2687*t3156 + t18*t3166) - 1.*t2692*(0. + t3170 + t3172))*var2[11]) + var2[10]*(t3277*var2[3] + t2888*var2[4] + t3342*var2[5] + t3092*var2[9] + (-0.213*t3168 - 0.213*(t2692*(-1.*t18*t3156 + t2687*t3166) + t2671*t3168))*var2[10] - 0.213*t3175*var2[11]) + var2[5]*(t3306*var2[3] + t3007*var2[4] + (t2890 + t3213 + t3248 - 0.213*t3319 - 0.213*(t2692*(t2925 - 1.*t2687*t3229) + t2671*t3319))*var2[5] + t3136*var2[9] + t3342*var2[10] - 0.213*t3205*var2[11]);
  p_output1[1]=var2[3]*((-0.213*t18*t3194 - 0.213*(t18*t2671*t3194 - 1.*t2687*t2692*t3194) + t3432 + t3440)*var2[3] + t3390*var2[4] + t3420*var2[5] + t3477*var2[9] + t3429*var2[10] - 0.213*t3404*var2[11]) + var2[4]*(t3390*var2[3] + (-0.04675*t2522*t2830*t2948 + t3668 - 0.213*t3683 - 0.213*(t2692*(t3198 - 1.*t2687*t3680) + t2671*t3683) + 0.08*(-1.*t2522*t2611*t2830*t2948 - 1.*t155*t2830*t2948*t8))*var2[4] + t3646*var2[5] + t3580*var2[9] + t3663*var2[10] - 0.213*t3495*var2[11]) + var2[9]*(t3477*var2[3] + t3580*var2[4] + t3591*var2[5] + (0.08*t3501 - 0.213*t18*t3606 - 0.213*(t18*t2671*t3606 - 1.*t2687*t2692*t3606))*var2[9] + t3602*var2[10] - 0.213*t3504*var2[11]) + var2[5]*(t3420*var2[3] + t3646*var2[4] + (-0.213*t3196 - 0.213*(t2671*t3196 + t2692*t3203) + t3432 + t3440 + t3668)*var2[5] + t3591*var2[9] + t3720*var2[10] - 0.213*t3517*var2[11]) + var2[11]*(-0.213*t3404*var2[3] - 0.213*t3495*var2[4] - 0.213*t3517*var2[5] - 0.213*t3504*var2[9] - 0.213*t3532*var2[10] - 0.213*(-1.*t2669*(0. + t2687*t3520 + t18*t3524) - 1.*t2692*(0. + t3528 + t3529))*var2[11]) + var2[10]*(t3429*var2[3] + t3663*var2[4] + t3720*var2[5] + t3602*var2[9] + (-0.213*t3526 - 0.213*(t2692*(-1.*t18*t3520 + t2687*t3524) + t2671*t3526))*var2[10] - 0.213*t3532*var2[11]);
  p_output1[2]=var2[3]*(t3789 + (t3764 + t3768 - 0.213*t18*t3771 - 0.213*(t18*t2671*t3771 - 1.*t2687*t2692*t3771))*var2[3] + t3803*var2[4] + t3762*var2[10] - 0.213*t3756*var2[11]) + var2[9]*(t3789 + t3788*var2[3] + t3828*var2[4] + t3815*var2[10] - 0.213*t3809*var2[11]) + var2[11]*(-0.213*t3756*var2[3] - 0.213*t3867*var2[4] - 0.213*t3809*var2[9] - 0.213*t3847*var2[10] - 0.213*(-1.*t2669*(0. + t18*t3836 + t2687*t3839) - 1.*t2692*(0. + t3837 + t3840))*var2[11]) + var2[10]*(t3762*var2[3] + t3896*var2[4] + t3815*var2[9] + (-0.213*t3845 - 0.213*(t2692*(t2687*t3836 - 1.*t18*t3839) + t2671*t3845))*var2[10] - 0.213*t3847*var2[11]) + var2[4]*(t3803*var2[3] + (0.1881*t2830 + t3764 + t3768 - 0.213*t3874 - 0.213*(t2692*(t18*t2830 - 1.*t2687*t3771) + t2671*t3874))*var2[4] + t3828*var2[9] + t3896*var2[10] - 0.213*t3867*var2[11]);
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

#include "jj_2_func.hh"

namespace SymFunction
{

void jj_2_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
