/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/hlocal/toc-practicas/Practica4/maquina_divisor.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0196649568_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5808);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 5920);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 5920);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5984);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 6048);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 6112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 6176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_0196649568_3212880686_p_1(char *t0)
{
    char t10[16];
    char t14[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned int t11;
    char *t12;
    char *t13;
    int t15;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    int t22;
    unsigned int t23;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5824);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 6240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6304);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 9732U);
    t1 = xsi_base_array_concat(t1, t10, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t11 = (1U + 6U);
    t3 = (7U != t11);
    if (t3 == 1)
        goto LAB16;

LAB17:    t6 = (t0 + 6368);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 7U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 9716U);
    t1 = xsi_base_array_concat(t1, t10, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t15 = (6 - 3);
    t6 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t14, 0, t15);
    t8 = ((IEEE_P_2592010699) + 4024);
    t7 = xsi_base_array_concat(t7, t16, t8, (char)97, t1, t10, (char)97, t6, t14, (char)101);
    t11 = (1U + 3U);
    t17 = (t11 + 3U);
    t3 = (7U != t17);
    if (t3 == 1)
        goto LAB18;

LAB19:    t12 = (t0 + 6432);
    t13 = (t12 + 56U);
    t18 = *((char **)t13);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 7U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(94, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t4 = (t0 + 6496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(95, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t4 = (t0 + 6560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 6304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 9764U);
    t4 = (t0 + 2792U);
    t5 = *((char **)t4);
    t4 = (t0 + 9764U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t10, t2, t1, t5, t4);
    t7 = (t10 + 12U);
    t11 = *((unsigned int *)t7);
    t17 = (1U * t11);
    t3 = (7U != t17);
    if (t3 == 1)
        goto LAB20;

LAB21:    t8 = (t0 + 6368);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 7U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 6304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t15 = (6 - 6);
    t11 = (t15 * -1);
    t17 = (1U * t11);
    t21 = (0 + t17);
    t1 = (t2 + t21);
    t3 = *((unsigned char *)t1);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB22;

LAB24:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t15 = (6 - 6);
    t11 = (t15 * -1);
    t17 = (1U * t11);
    t21 = (0 + t17);
    t1 = (t2 + t21);
    t3 = *((unsigned char *)t1);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB25;

LAB26:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 6304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t15 = (6 - 2);
    t11 = (5 - t15);
    t17 = (t11 * 1U);
    t21 = (0 + t17);
    t1 = (t2 + t21);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 4;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t22 = (0 - 4);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t23;
    t4 = xsi_base_array_concat(t4, t10, t5, (char)97, t1, t14, (char)99, (unsigned char)2, (char)101);
    t23 = (5U + 1U);
    t3 = (6U != t23);
    if (t3 == 1)
        goto LAB27;

LAB28:    t7 = (t0 + 6496);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t18 = *((char **)t13);
    memcpy(t18, t4, 6U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 9764U);
    t4 = (t0 + 2792U);
    t5 = *((char **)t4);
    t4 = (t0 + 9764U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t2, t1, t5, t4);
    t7 = (t10 + 12U);
    t11 = *((unsigned int *)t7);
    t17 = (1U * t11);
    t3 = (7U != t17);
    if (t3 == 1)
        goto LAB29;

LAB30:    t8 = (t0 + 6368);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 7U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 6304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t15 = (6 - 2);
    t11 = (5 - t15);
    t17 = (t11 * 1U);
    t21 = (0 + t17);
    t1 = (t2 + t21);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 4;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t22 = (0 - 4);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t23;
    t4 = xsi_base_array_concat(t4, t10, t5, (char)97, t1, t14, (char)99, (unsigned char)3, (char)101);
    t23 = (5U + 1U);
    t3 = (6U != t23);
    if (t3 == 1)
        goto LAB31;

LAB32:    t7 = (t0 + 6496);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t18 = *((char **)t13);
    memcpy(t18, t4, 6U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 6304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t11 = (6 - 6);
    t17 = (t11 * 1U);
    t21 = (0 + t17);
    t1 = (t2 + t21);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 6;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t15 = (1 - 6);
    t23 = (t15 * -1);
    t23 = (t23 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t23;
    t4 = xsi_base_array_concat(t4, t10, t5, (char)99, (unsigned char)2, (char)97, t1, t14, (char)101);
    t23 = (1U + 6U);
    t3 = (7U != t23);
    if (t3 == 1)
        goto LAB33;

LAB34:    t7 = (t0 + 6432);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t18 = *((char **)t13);
    memcpy(t18, t4, 7U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 9796U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t10, t2, t1, 1);
    t5 = (t10 + 12U);
    t11 = *((unsigned int *)t5);
    t17 = (1U * t11);
    t3 = (3U != t17);
    if (t3 == 1)
        goto LAB35;

LAB36:    t6 = (t0 + 6560);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 6304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 9796U);
    t15 = (6 - 3);
    t22 = (t15 + 1);
    t3 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t2, t1, t22);
    if (t3 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 6304);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB38:    goto LAB2;

LAB11:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 6304);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 6304);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB16:    xsi_size_not_matching(7U, t11, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(7U, t17, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(7U, t17, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 6304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t4);
    goto LAB23;

LAB25:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 6304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t4);
    goto LAB23;

LAB27:    xsi_size_not_matching(6U, t23, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(7U, t17, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(6U, t23, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(7U, t23, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(3U, t17, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 6304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB38;

}

static void work_a_0196649568_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(143, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 6624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5840);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0196649568_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0196649568_3212880686_p_0,(void *)work_a_0196649568_3212880686_p_1,(void *)work_a_0196649568_3212880686_p_2};
	xsi_register_didat("work_a_0196649568_3212880686", "isim/prueba1_isim_beh.exe.sim/work/a_0196649568_3212880686.didat");
	xsi_register_executes(pe);
}
