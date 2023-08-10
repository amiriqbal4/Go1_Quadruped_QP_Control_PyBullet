/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:49:49 GMT-05:00
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
  double t2477;
  double t2405;
  double t2453;
  double t2451;
  double t2479;
  double t2373;
  double t2454;
  double t2480;
  double t2496;
  double t2507;
  double t2521;
  double t2522;
  double t2527;
  double t2536;
  double t2539;
  double t2542;
  double t2556;
  double t2568;
  double t2284;
  double t2581;
  double t2588;
  double t2611;
  double t2612;
  double t2613;
  double t2619;
  double t2626;
  double t2630;
  double t2590;
  double t2663;
  double t2664;
  double t2666;
  double t2667;
  double t2696;
  double t2709;
  double t2713;
  double t2717;
  double t2718;
  double t2719;
  double t2720;
  double t2725;
  double t2745;
  double t2791;
  double t2792;
  double t2775;
  double t2778;
  double t2785;
  double t2810;
  double t2813;
  double t2585;
  double t2605;
  double t2609;
  double t2845;
  double t2861;
  double t2862;
  double t2866;
  double t2871;
  double t2895;
  double t2898;
  double t2899;
  double t2900;
  double t2901;
  double t2902;
  double t2936;
  double t2938;
  double t2939;
  double t2945;
  double t2946;
  double t2947;
  double t2975;
  double t2976;
  double t2978;
  double t2634;
  double t2636;
  double t2637;
  double t2879;
  double t3013;
  double t3014;
  double t3034;
  double t3035;
  double t2982;
  double t2984;
  double t2985;
  double t2986;
  double t2987;
  double t2988;
  double t2989;
  double t2990;
  double t3050;
  double t3051;
  double t3052;
  double t2654;
  double t2668;
  double t2669;
  double t2671;
  double t2673;
  double t2676;
  double t2679;
  double t2686;
  double t2687;
  double t2860;
  double t2868;
  double t2876;
  double t2883;
  double t2885;
  double t2886;
  double t2887;
  double t2888;
  double t2889;
  double t2890;
  double t3015;
  double t3021;
  double t3023;
  double t3027;
  double t3028;
  double t3029;
  double t3030;
  double t3031;
  double t3098;
  double t3099;
  double t3102;
  double t3103;
  double t3104;
  double t3105;
  double t3130;
  double t3131;
  double t3132;
  double t3133;
  double t3134;
  double t3135;
  double t2786;
  double t2796;
  double t2797;
  double t2804;
  double t2814;
  double t2815;
  double t2816;
  double t2844;
  double t2846;
  double t2847;
  double t2848;
  double t2850;
  double t3007;
  double t3008;
  double t3009;
  double t3010;
  double t3011;
  double t3068;
  double t3069;
  double t3070;
  double t3071;
  double t3072;
  double t3073;
  double t3074;
  double t3075;
  double t3080;
  double t2694;
  double t2746;
  double t2747;
  double t2749;
  double t2754;
  double t2762;
  double t2767;
  double t2771;
  double t2772;
  double t2932;
  double t2948;
  double t2954;
  double t2956;
  double t2960;
  double t2961;
  double t2967;
  double t2969;
  double t2971;
  double t2972;
  double t2973;
  double t3053;
  double t3054;
  double t3055;
  double t3056;
  double t3057;
  double t3058;
  double t3059;
  double t3060;
  double t3061;
  double t3160;
  double t3161;
  double t3162;
  double t3166;
  double t3167;
  double t3168;
  double t3169;
  double t3170;
  double t3172;
  double t3123;
  double t3124;
  double t3125;
  double t3127;
  double t3128;
  double t3129;
  double t3136;
  double t3137;
  double t3138;
  double t3139;
  double t3144;
  double t3146;
  double t3147;
  double t3149;
  double t3150;
  double t3086;
  double t2892;
  double t2904;
  double t2915;
  double t2918;
  double t2919;
  double t3198;
  double t3201;
  double t3109;
  double t3216;
  double t3220;
  double t3221;
  double t3223;
  double t3224;
  double t3225;
  double t3231;
  double t3232;
  double t3233;
  double t3243;
  double t3260;
  double t3261;
  double t3263;
  double t3283;
  double t3284;
  double t3278;
  double t3279;
  double t3280;
  double t3288;
  double t3289;
  double t3227;
  double t3228;
  double t3229;
  double t3315;
  double t3316;
  double t3317;
  double t3357;
  double t3358;
  double t3234;
  double t3238;
  double t3239;
  double t3320;
  double t3382;
  double t3355;
  double t3356;
  double t3359;
  double t3360;
  double t3361;
  double t3362;
  double t3363;
  double t3366;
  double t3406;
  double t3259;
  double t3265;
  double t3270;
  double t3271;
  double t3272;
  double t3273;
  double t3274;
  double t3275;
  double t3276;
  double t3314;
  double t3318;
  double t3319;
  double t3321;
  double t3323;
  double t3324;
  double t3325;
  double t3326;
  double t3327;
  double t3328;
  double t3383;
  double t3384;
  double t3385;
  double t3386;
  double t3387;
  double t3388;
  double t3389;
  double t3390;
  double t3472;
  double t3473;
  double t3474;
  double t3475;
  double t3476;
  double t3242;
  double t3247;
  double t3248;
  double t3252;
  double t3253;
  double t3254;
  double t3255;
  double t3256;
  double t3257;
  double t3330;
  double t3331;
  double t3332;
  double t3333;
  double t3335;
  double t3336;
  double t3337;
  double t3338;
  double t3339;
  double t3340;
  double t3341;
  double t3393;
  double t3394;
  double t3395;
  double t3396;
  double t3398;
  double t3399;
  double t3400;
  double t3401;
  double t3402;
  double t3438;
  double t3439;
  double t3440;
  double t3441;
  double t3446;
  double t3447;
  double t3448;
  double t3450;
  double t3453;
  double t3455;
  double t3456;
  double t3457;
  double t3460;
  double t3343;
  double t3345;
  double t3346;
  double t3347;
  double t3348;
  double t3282;
  double t3285;
  double t3286;
  double t3287;
  double t3290;
  double t3291;
  double t3292;
  double t3307;
  double t3308;
  double t3309;
  double t3311;
  double t3312;
  double t3373;
  double t3374;
  double t3375;
  double t3376;
  double t3377;
  double t3494;
  double t3495;
  double t3496;
  double t3497;
  double t3499;
  double t3500;
  double t3501;
  double t3502;
  double t3423;
  double t3424;
  double t3425;
  double t3426;
  double t3427;
  double t3429;
  double t3430;
  double t3432;
  double t3534;
  double t3535;
  double t3536;
  double t3542;
  double t3543;
  double t3549;
  double t3550;
  double t3551;
  double t3569;
  double t3570;
  double t3565;
  double t3566;
  double t3567;
  double t3575;
  double t3576;
  double t3537;
  double t3539;
  double t3540;
  double t3599;
  double t3600;
  double t3601;
  double t3618;
  double t3619;
  double t3620;
  double t3640;
  double t3641;
  double t3544;
  double t3545;
  double t3546;
  double t3638;
  double t3643;
  double t3644;
  double t3645;
  double t3646;
  double t3647;
  double t3649;
  double t3651;
  double t3625;
  double t3666;
  double t3667;
  double t3548;
  double t3555;
  double t3557;
  double t3558;
  double t3559;
  double t3560;
  double t3561;
  double t3562;
  double t3563;
  double t3617;
  double t3621;
  double t3624;
  double t3629;
  double t3630;
  double t3631;
  double t3632;
  double t3633;
  double t3634;
  double t3635;
  double t3668;
  double t3670;
  double t3671;
  double t3672;
  double t3673;
  double t3674;
  double t3675;
  double t3677;
  double t3598;
  double t3603;
  double t3604;
  double t3605;
  double t3704;
  double t3705;
  double t3706;
  double t3568;
  double t3571;
  double t3572;
  double t3574;
  double t3577;
  double t3578;
  double t3579;
  double t3592;
  double t3593;
  double t3594;
  double t3595;
  double t3596;
  double t3656;
  double t3658;
  double t3659;
  double t3660;
  double t3661;
  double t3686;
  double t3687;
  double t3688;
  double t3689;
  double t3690;
  double t3691;
  double t3692;
  double t3695;
  double t3701;
  t2477 = Cos(var1[3]);
  t2405 = Cos(var1[5]);
  t2453 = Sin(var1[4]);
  t2451 = Sin(var1[3]);
  t2479 = Sin(var1[5]);
  t2373 = Cos(var1[6]);
  t2454 = -1.*t2405*t2451*t2453;
  t2480 = t2477*t2479;
  t2496 = t2454 + t2480;
  t2507 = t2373*t2496;
  t2521 = t2477*t2405*t2453;
  t2522 = t2451*t2479;
  t2527 = t2521 + t2522;
  t2536 = Sin(var1[6]);
  t2539 = -1.*t2536;
  t2542 = 0. + t2539;
  t2556 = t2527*t2542;
  t2568 = t2507 + t2556;
  t2284 = Cos(var1[8]);
  t2581 = Sin(var1[7]);
  t2588 = Cos(var1[7]);
  t2611 = t2405*t2451*t2453;
  t2612 = -1.*t2477*t2479;
  t2613 = t2611 + t2612;
  t2619 = -1.*t2373*t2613;
  t2626 = -1.*t2527*t2536;
  t2630 = t2619 + t2626;
  t2590 = Sin(var1[8]);
  t2663 = Cos(var1[4]);
  t2664 = t2477*t2663*t2405*t2373;
  t2666 = t2663*t2405*t2451*t2542;
  t2667 = t2664 + t2666;
  t2696 = t2405*t2451;
  t2709 = -1.*t2477*t2453*t2479;
  t2713 = t2696 + t2709;
  t2717 = t2373*t2713;
  t2718 = -1.*t2477*t2405;
  t2719 = -1.*t2451*t2453*t2479;
  t2720 = t2718 + t2719;
  t2725 = t2720*t2542;
  t2745 = t2717 + t2725;
  t2791 = t2663*t2405;
  t2792 = 0. + t2791;
  t2775 = t2373*t2527;
  t2778 = t2613*t2542;
  t2785 = 0. + t2775 + t2778;
  t2810 = t2792*t2588;
  t2813 = -1.*t2785*t2581;
  t2585 = -1.*t2284*t2568*t2581;
  t2605 = -1.*t2588*t2568*t2590;
  t2609 = t2585 + t2605;
  t2845 = 0. + t2284;
  t2861 = -1.*t2663*t2405*t2373*t2451;
  t2862 = t2477*t2663*t2405*t2542;
  t2866 = t2861 + t2862;
  t2871 = 0. + t2373;
  t2895 = -1.*t2477*t2405*t2453;
  t2898 = -1.*t2451*t2479;
  t2899 = t2895 + t2898;
  t2900 = t2373*t2899;
  t2901 = t2496*t2542;
  t2902 = t2900 + t2901;
  t2936 = t2477*t2405;
  t2938 = t2451*t2453*t2479;
  t2939 = t2936 + t2938;
  t2945 = t2373*t2939;
  t2946 = t2713*t2542;
  t2947 = t2945 + t2946;
  t2975 = -1.*t2373*t2527;
  t2976 = -1.*t2496*t2536;
  t2978 = t2975 + t2976;
  t2634 = -1.*t2284*t2630*t2581;
  t2636 = -1.*t2588*t2630*t2590;
  t2637 = t2634 + t2636;
  t2879 = -1.*t2663*t2405*t2451*t2536;
  t3013 = -1.*t2477*t2663*t2405*t2536;
  t3014 = t2861 + t3013;
  t3034 = t2613*t2536;
  t3035 = t2975 + t3034;
  t2982 = -0.213*t2588*t2978;
  t2984 = t2507 + t2626;
  t2985 = -0.08*t2984;
  t2986 = t2588*t2845*t2978;
  t2987 = -1.*t2978*t2581*t2590;
  t2988 = t2986 + t2987;
  t2989 = -0.213*t2988;
  t2990 = t2982 + t2985 + t2989;
  t3050 = -1.*t2373*t2720;
  t3051 = -1.*t2713*t2536;
  t3052 = t3050 + t3051;
  t2654 = -1.*t2405*t2588*t2453;
  t2668 = -1.*t2667*t2581;
  t2669 = t2654 + t2668;
  t2671 = t2284*t2669;
  t2673 = t2588*t2667;
  t2676 = -1.*t2405*t2453*t2581;
  t2679 = t2673 + t2676;
  t2686 = -1.*t2679*t2590;
  t2687 = t2671 + t2686;
  t2860 = -0.04675*t2477*t2663*t2405;
  t2868 = -0.213*t2588*t2866;
  t2876 = t2477*t2663*t2405*t2871;
  t2883 = t2876 + t2879;
  t2885 = -0.08*t2883;
  t2886 = t2588*t2845*t2866;
  t2887 = -1.*t2866*t2581*t2590;
  t2888 = t2886 + t2887;
  t2889 = -0.213*t2888;
  t2890 = t2860 + t2868 + t2885 + t2889;
  t3015 = -0.213*t2588*t3014;
  t3021 = t2664 + t2879;
  t3023 = -0.08*t3021;
  t3027 = t2588*t2845*t3014;
  t3028 = -1.*t3014*t2581*t2590;
  t3029 = t3027 + t3028;
  t3030 = -0.213*t3029;
  t3031 = t3015 + t3023 + t3030;
  t3098 = -1.*t2477*t2405*t2373*t2453;
  t3099 = -1.*t2405*t2451*t2453*t2542;
  t3102 = t3098 + t3099;
  t3103 = t2588*t3102;
  t3104 = -1.*t2663*t2405*t2581;
  t3105 = t3103 + t3104;
  t3130 = -1.*t2477*t2663*t2373*t2479;
  t3131 = -1.*t2663*t2451*t2479*t2542;
  t3132 = t3130 + t3131;
  t3133 = t2588*t3132;
  t3134 = t2453*t2479*t2581;
  t3135 = t3133 + t3134;
  t2786 = -1.*t2588*t2785;
  t2796 = -1.*t2792*t2581;
  t2797 = t2786 + t2796;
  t2804 = t2284*t2797;
  t2814 = t2810 + t2813;
  t2815 = -1.*t2814*t2590;
  t2816 = t2804 + t2815;
  t2844 = 0.213*t2568*t2581;
  t2846 = -1.*t2845*t2568*t2581;
  t2847 = t2846 + t2605;
  t2848 = -0.213*t2847;
  t2850 = t2844 + t2848;
  t3007 = 0.213*t2630*t2581;
  t3008 = -1.*t2845*t2630*t2581;
  t3009 = t3008 + t2636;
  t3010 = -0.213*t3009;
  t3011 = t3007 + t3010;
  t3068 = -0.213*t2669;
  t3069 = t2845*t2669;
  t3070 = -1.*t2588*t2667;
  t3071 = t2405*t2453*t2581;
  t3072 = t3070 + t3071;
  t3073 = t3072*t2590;
  t3074 = t3069 + t3073;
  t3075 = -0.213*t3074;
  t3080 = t3068 + t3075;
  t2694 = -1.*t2663*t2588*t2479;
  t2746 = -1.*t2745*t2581;
  t2747 = t2694 + t2746;
  t2749 = t2284*t2747;
  t2754 = t2588*t2745;
  t2762 = -1.*t2663*t2479*t2581;
  t2767 = t2754 + t2762;
  t2771 = -1.*t2767*t2590;
  t2772 = t2749 + t2771;
  t2932 = -0.04675*t2713;
  t2948 = -0.213*t2588*t2947;
  t2954 = t2871*t2713;
  t2956 = t2939*t2536;
  t2960 = t2954 + t2956;
  t2961 = -0.08*t2960;
  t2967 = t2588*t2845*t2947;
  t2969 = -1.*t2947*t2581*t2590;
  t2971 = t2967 + t2969;
  t2972 = -0.213*t2971;
  t2973 = t2932 + t2948 + t2961 + t2972;
  t3053 = -0.213*t2588*t3052;
  t3054 = -1.*t2720*t2536;
  t3055 = t2717 + t3054;
  t3056 = -0.08*t3055;
  t3057 = t2588*t2845*t3052;
  t3058 = -1.*t3052*t2581*t2590;
  t3059 = t3057 + t3058;
  t3060 = -0.213*t3059;
  t3061 = t3053 + t3056 + t3060;
  t3160 = -0.213*t2747;
  t3161 = t2845*t2747;
  t3162 = -1.*t2588*t2745;
  t3166 = t2663*t2479*t2581;
  t3167 = t3162 + t3166;
  t3168 = t3167*t2590;
  t3169 = t3161 + t3168;
  t3170 = -0.213*t3169;
  t3172 = t3160 + t3170;
  t3123 = 0.04675*t2663*t2451*t2479;
  t3124 = 0.1881*t2453*t2479;
  t3125 = -1.*t2663*t2871*t2451*t2479;
  t3127 = -1.*t2477*t2663*t2479*t2536;
  t3128 = t3125 + t3127;
  t3129 = -0.08*t3128;
  t3136 = -0.213*t3135;
  t3137 = t2845*t3135;
  t3138 = t2588*t2453*t2479;
  t3139 = -1.*t3132*t2581;
  t3144 = t3138 + t3139;
  t3146 = t3144*t2590;
  t3147 = t3137 + t3146;
  t3149 = -0.213*t3147;
  t3150 = t3123 + t3124 + t3129 + t3136 + t3149;
  t3086 = -0.1881*t2663*t2405;
  t2892 = -0.04675*t2496;
  t2904 = t2871*t2496;
  t2915 = t2899*t2536;
  t2918 = t2904 + t2915;
  t2919 = -0.08*t2918;
  t3198 = t2588*t2902;
  t3201 = t3198 + t3104;
  t3109 = -1.*t2663*t2405*t2588;
  t3216 = t2373*t2720;
  t3220 = -1.*t2405*t2451;
  t3221 = t2477*t2453*t2479;
  t3223 = t3220 + t3221;
  t3224 = t3223*t2542;
  t3225 = t3216 + t3224;
  t3231 = -1.*t2373*t2939;
  t3232 = -1.*t3223*t2536;
  t3233 = t3231 + t3232;
  t3243 = t2775 + t2778;
  t3260 = t2477*t2663*t2373*t2479;
  t3261 = t2663*t2451*t2479*t2542;
  t3263 = t3260 + t3261;
  t3283 = t2663*t2479;
  t3284 = 0. + t3283;
  t3278 = t2373*t3223;
  t3279 = t2939*t2542;
  t3280 = 0. + t3278 + t3279;
  t3288 = t2588*t3284;
  t3289 = -1.*t3280*t2581;
  t3227 = -1.*t2284*t3225*t2581;
  t3228 = -1.*t2588*t3225*t2590;
  t3229 = t3227 + t3228;
  t3315 = -1.*t2663*t2373*t2451*t2479;
  t3316 = t2477*t2663*t2479*t2542;
  t3317 = t3315 + t3316;
  t3357 = -1.*t2373*t3223;
  t3358 = t3357 + t3054;
  t3234 = -1.*t2284*t3233*t2581;
  t3238 = -1.*t2588*t3233*t2590;
  t3239 = t3234 + t3238;
  t3320 = -1.*t2663*t2451*t2479*t2536;
  t3382 = t3315 + t3127;
  t3355 = t3216 + t3232;
  t3356 = -0.08*t3355;
  t3359 = -0.213*t2588*t3358;
  t3360 = t2588*t2845*t3358;
  t3361 = -1.*t3358*t2581*t2590;
  t3362 = t3360 + t3361;
  t3363 = -0.213*t3362;
  t3366 = t3356 + t3359 + t3363;
  t3406 = t3357 + t2956;
  t3259 = -1.*t2588*t2453*t2479;
  t3265 = -1.*t3263*t2581;
  t3270 = t3259 + t3265;
  t3271 = t2284*t3270;
  t3272 = t2588*t3263;
  t3273 = -1.*t2453*t2479*t2581;
  t3274 = t3272 + t3273;
  t3275 = -1.*t3274*t2590;
  t3276 = t3271 + t3275;
  t3314 = -0.04675*t2477*t2663*t2479;
  t3318 = -0.213*t2588*t3317;
  t3319 = t2477*t2663*t2871*t2479;
  t3321 = t3319 + t3320;
  t3323 = -0.08*t3321;
  t3324 = t2588*t2845*t3317;
  t3325 = -1.*t3317*t2581*t2590;
  t3326 = t3324 + t3325;
  t3327 = -0.213*t3326;
  t3328 = t3314 + t3318 + t3323 + t3327;
  t3383 = -0.213*t2588*t3382;
  t3384 = t3260 + t3320;
  t3385 = -0.08*t3384;
  t3386 = t2588*t2845*t3382;
  t3387 = -1.*t3382*t2581*t2590;
  t3388 = t3386 + t3387;
  t3389 = -0.213*t3388;
  t3390 = t3383 + t3385 + t3389;
  t3472 = -1.*t2477*t2373*t2453*t2479;
  t3473 = -1.*t2451*t2453*t2479*t2542;
  t3474 = t3472 + t3473;
  t3475 = t2588*t3474;
  t3476 = t3475 + t2762;
  t3242 = t2663*t2405*t2588;
  t3247 = -1.*t3243*t2581;
  t3248 = t3242 + t3247;
  t3252 = t2284*t3248;
  t3253 = t2588*t3243;
  t3254 = t2663*t2405*t2581;
  t3255 = t3253 + t3254;
  t3256 = -1.*t3255*t2590;
  t3257 = t3252 + t3256;
  t3330 = -0.04675*t2527;
  t3331 = -0.213*t2588*t2568;
  t3332 = t2871*t2527;
  t3333 = t2496*t2536;
  t3335 = t3332 + t3333;
  t3336 = -0.08*t3335;
  t3337 = t2588*t2845*t2568;
  t3338 = -1.*t2568*t2581*t2590;
  t3339 = t3337 + t3338;
  t3340 = -0.213*t3339;
  t3341 = t3330 + t3331 + t3336 + t3340;
  t3393 = -1.*t2613*t2536;
  t3394 = t2775 + t3393;
  t3395 = -0.08*t3394;
  t3396 = -0.213*t2588*t2630;
  t3398 = t2588*t2845*t2630;
  t3399 = -1.*t2630*t2581*t2590;
  t3400 = t3398 + t3399;
  t3401 = -0.213*t3400;
  t3402 = t3395 + t3396 + t3401;
  t3438 = -0.04675*t2663*t2405*t2451;
  t3439 = -0.1881*t2405*t2453;
  t3440 = t2663*t2405*t2871*t2451;
  t3441 = t2477*t2663*t2405*t2536;
  t3446 = t3440 + t3441;
  t3447 = -0.08*t3446;
  t3448 = -0.213*t2679;
  t3450 = t2845*t2679;
  t3453 = t2669*t2590;
  t3455 = t3450 + t3453;
  t3456 = -0.213*t3455;
  t3457 = t3438 + t3439 + t3447 + t3448 + t3456;
  t3460 = -0.1881*t2663*t2479;
  t3343 = -0.04675*t2720;
  t3345 = t2871*t2720;
  t3346 = t2713*t2536;
  t3347 = t3345 + t3346;
  t3348 = -0.08*t3347;
  t3282 = -1.*t2588*t3280;
  t3285 = -1.*t3284*t2581;
  t3286 = t3282 + t3285;
  t3287 = t2284*t3286;
  t3290 = t3288 + t3289;
  t3291 = -1.*t3290*t2590;
  t3292 = t3287 + t3291;
  t3307 = 0.213*t3225*t2581;
  t3308 = -1.*t2845*t3225*t2581;
  t3309 = t3308 + t3228;
  t3311 = -0.213*t3309;
  t3312 = t3307 + t3311;
  t3373 = 0.213*t3233*t2581;
  t3374 = -1.*t2845*t3233*t2581;
  t3375 = t3374 + t3238;
  t3376 = -0.213*t3375;
  t3377 = t3373 + t3376;
  t3494 = -0.213*t3248;
  t3495 = t2845*t3248;
  t3496 = -1.*t2588*t3243;
  t3497 = t3496 + t3104;
  t3499 = t3497*t2590;
  t3500 = t3495 + t3499;
  t3501 = -0.213*t3500;
  t3502 = t3494 + t3501;
  t3423 = -0.213*t3270;
  t3424 = t2845*t3270;
  t3425 = -1.*t2588*t3263;
  t3426 = t3425 + t3134;
  t3427 = t3426*t2590;
  t3429 = t3424 + t3427;
  t3430 = -0.213*t3429;
  t3432 = t3423 + t3430;
  t3534 = -1.*t2663*t2373*t2451;
  t3535 = t2477*t2663*t2542;
  t3536 = t3534 + t3535;
  t3542 = -1.*t2477*t2663*t2536;
  t3543 = t3534 + t3542;
  t3549 = -1.*t2477*t2373*t2453;
  t3550 = -1.*t2451*t2453*t2542;
  t3551 = t3549 + t3550;
  t3569 = -1.*t2453;
  t3570 = 0. + t3569;
  t3565 = t2477*t2663*t2373;
  t3566 = t2663*t2451*t2542;
  t3567 = 0. + t3565 + t3566;
  t3575 = t2588*t3570;
  t3576 = -1.*t3567*t2581;
  t3537 = -1.*t2284*t3536*t2581;
  t3539 = -1.*t2588*t3536*t2590;
  t3540 = t3537 + t3539;
  t3599 = -1.*t2477*t2663*t2373;
  t3600 = -1.*t2663*t2451*t2542;
  t3601 = t3599 + t3600;
  t3618 = t2373*t2451*t2453;
  t3619 = -1.*t2477*t2453*t2542;
  t3620 = t3618 + t3619;
  t3640 = t2663*t2451*t2536;
  t3641 = t3599 + t3640;
  t3544 = -1.*t2284*t3543*t2581;
  t3545 = -1.*t2588*t3543*t2590;
  t3546 = t3544 + t3545;
  t3638 = -0.08*t3543;
  t3643 = -0.213*t2588*t3641;
  t3644 = t2588*t2845*t3641;
  t3645 = -1.*t3641*t2581*t2590;
  t3646 = t3644 + t3645;
  t3647 = -0.213*t3646;
  t3649 = t3638 + t3643 + t3647;
  t3651 = var2[6]*t3649;
  t3625 = t2451*t2453*t2536;
  t3666 = t2477*t2453*t2536;
  t3667 = t3618 + t3666;
  t3548 = -1.*t2663*t2588;
  t3555 = -1.*t3551*t2581;
  t3557 = t3548 + t3555;
  t3558 = t2284*t3557;
  t3559 = t2588*t3551;
  t3560 = -1.*t2663*t2581;
  t3561 = t3559 + t3560;
  t3562 = -1.*t3561*t2590;
  t3563 = t3558 + t3562;
  t3617 = 0.04675*t2477*t2453;
  t3621 = -0.213*t2588*t3620;
  t3624 = -1.*t2477*t2871*t2453;
  t3629 = t3624 + t3625;
  t3630 = -0.08*t3629;
  t3631 = t2588*t2845*t3620;
  t3632 = -1.*t3620*t2581*t2590;
  t3633 = t3631 + t3632;
  t3634 = -0.213*t3633;
  t3635 = t3617 + t3621 + t3630 + t3634;
  t3668 = -0.213*t2588*t3667;
  t3670 = t3549 + t3625;
  t3671 = -0.08*t3670;
  t3672 = t2588*t2845*t3667;
  t3673 = -1.*t3667*t2581*t2590;
  t3674 = t3672 + t3673;
  t3675 = -0.213*t3674;
  t3677 = t3668 + t3671 + t3675;
  t3598 = 0.04675*t2663*t2451;
  t3603 = -1.*t2663*t2871*t2451;
  t3604 = t3603 + t3542;
  t3605 = -0.08*t3604;
  t3704 = t2588*t3601;
  t3705 = t2453*t2581;
  t3706 = t3704 + t3705;
  t3568 = -1.*t2588*t3567;
  t3571 = -1.*t3570*t2581;
  t3572 = t3568 + t3571;
  t3574 = t2284*t3572;
  t3577 = t3575 + t3576;
  t3578 = -1.*t3577*t2590;
  t3579 = t3574 + t3578;
  t3592 = 0.213*t3536*t2581;
  t3593 = -1.*t2845*t3536*t2581;
  t3594 = t3593 + t3539;
  t3595 = -0.213*t3594;
  t3596 = t3592 + t3595;
  t3656 = 0.213*t3543*t2581;
  t3658 = -1.*t2845*t3543*t2581;
  t3659 = t3658 + t3545;
  t3660 = -0.213*t3659;
  t3661 = t3656 + t3660;
  t3686 = -0.213*t3557;
  t3687 = t2845*t3557;
  t3688 = -1.*t2588*t3551;
  t3689 = t2663*t2581;
  t3690 = t3688 + t3689;
  t3691 = t3690*t2590;
  t3692 = t3687 + t3691;
  t3695 = -0.213*t3692;
  t3701 = t3686 + t3695;
  p_output1[0]=var2[3]*((t2892 - 0.213*t2588*t2902 - 0.213*(-1.*t2581*t2590*t2902 + t2588*t2845*t2902) + t2919)*var2[3] + t2890*var2[4] + t2973*var2[5] + t2990*var2[6] + t2850*var2[7] - 0.213*t2609*var2[8]) + var2[6]*(t2990*var2[3] + t3031*var2[4] + t3061*var2[5] + (-0.08*t2630 - 0.213*t2588*t3035 - 0.213*(-1.*t2581*t2590*t3035 + t2588*t2845*t3035))*var2[6] + t3011*var2[7] - 0.213*t2637*var2[8]) + var2[4]*(t2890*var2[3] + (0.04675*t2405*t2451*t2453 - 0.08*(-1.*t2405*t2453*t2477*t2536 - 1.*t2405*t2451*t2453*t2871) + t3086 - 0.213*t3105 - 0.213*(t2845*t3105 + t2590*(-1.*t2581*t3102 + t3109)))*var2[4] + t3150*var2[5] + t3031*var2[6] + t3080*var2[7] - 0.213*t2687*var2[8]) + var2[5]*(t2973*var2[3] + t3150*var2[4] + (t2892 + t2919 + t3086 - 0.213*t3201 - 0.213*(t2590*(-1.*t2581*t2902 + t3109) + t2845*t3201))*var2[5] + t3061*var2[6] + t3172*var2[7] - 0.213*t2772*var2[8]) + var2[8]*(-0.213*t2609*var2[3] - 0.213*t2687*var2[4] - 0.213*t2772*var2[5] - 0.213*t2637*var2[6] - 0.213*t2816*var2[7] - 0.213*(-1.*t2284*(0. + t2588*t2785 + t2581*t2792) - 1.*t2590*(0. + t2810 + t2813))*var2[8]) + var2[7]*(t2850*var2[3] + t3080*var2[4] + t3172*var2[5] + t3011*var2[6] + (-0.213*t2797 - 0.213*(t2590*(t2581*t2785 - 1.*t2588*t2792) + t2797*t2845))*var2[7] - 0.213*t2816*var2[8]);
  p_output1[1]=var2[3]*((-0.213*t2588*t2745 - 0.213*(-1.*t2581*t2590*t2745 + t2588*t2745*t2845) + t3343 + t3348)*var2[3] + t3328*var2[4] + t3341*var2[5] + t3366*var2[6] + t3312*var2[7] - 0.213*t3229*var2[8]) + var2[6]*(t3366*var2[3] + t3390*var2[4] + t3402*var2[5] + (-0.08*t3233 - 0.213*t2588*t3406 - 0.213*(-1.*t2581*t2590*t3406 + t2588*t2845*t3406))*var2[6] + t3377*var2[7] - 0.213*t3239*var2[8]) + var2[5]*(t3341*var2[3] + t3457*var2[4] + (-0.213*t2767 - 0.213*(t2590*t2747 + t2767*t2845) + t3343 + t3348 + t3460)*var2[5] + t3402*var2[6] + t3502*var2[7] - 0.213*t3257*var2[8]) + var2[4]*(t3328*var2[3] + (0.04675*t2451*t2453*t2479 - 0.08*(-1.*t2453*t2477*t2479*t2536 - 1.*t2451*t2453*t2479*t2871) + t3460 - 0.213*t3476 - 0.213*(t2590*(t2694 - 1.*t2581*t3474) + t2845*t3476))*var2[4] + t3457*var2[5] + t3390*var2[6] + t3432*var2[7] - 0.213*t3276*var2[8]) + var2[8]*(-0.213*t3229*var2[3] - 0.213*t3276*var2[4] - 0.213*t3257*var2[5] - 0.213*t3239*var2[6] - 0.213*t3292*var2[7] - 0.213*(-1.*t2284*(0. + t2588*t3280 + t2581*t3284) - 1.*t2590*(0. + t3288 + t3289))*var2[8]) + var2[7]*(t3312*var2[3] + t3432*var2[4] + t3502*var2[5] + t3377*var2[6] + (-0.213*t3286 - 0.213*(t2590*(t2581*t3280 - 1.*t2588*t3284) + t2845*t3286))*var2[7] - 0.213*t3292*var2[8]);
  p_output1[2]=var2[3]*(t3651 + (t3598 - 0.213*t2588*t3601 - 0.213*(-1.*t2581*t2590*t3601 + t2588*t2845*t3601) + t3605)*var2[3] + t3635*var2[4] + t3596*var2[7] - 0.213*t3540*var2[8]) + var2[6]*(t3651 + t3649*var2[3] + t3677*var2[4] + t3661*var2[7] - 0.213*t3546*var2[8]) + var2[4]*(t3635*var2[3] + (0.1881*t2453 + t3598 + t3605 - 0.213*t3706 - 0.213*(t2590*(t2453*t2588 - 1.*t2581*t3601) + t2845*t3706))*var2[4] + t3677*var2[6] + t3701*var2[7] - 0.213*t3563*var2[8]) + var2[8]*(-0.213*t3540*var2[3] - 0.213*t3563*var2[4] - 0.213*t3546*var2[6] - 0.213*t3579*var2[7] - 0.213*(-1.*t2284*(0. + t2588*t3567 + t2581*t3570) - 1.*t2590*(0. + t3575 + t3576))*var2[8]) + var2[7]*(t3596*var2[3] + t3701*var2[4] + t3661*var2[6] + (-0.213*t3572 - 0.213*(t2590*(t2581*t3567 - 1.*t2588*t3570) + t2845*t3572))*var2[7] - 0.213*t3579*var2[8]);
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

#include "jj_1_func.hh"

namespace SymFunction
{

void jj_1_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
