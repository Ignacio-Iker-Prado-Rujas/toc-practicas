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
static const char *ng0 = "C:/hlocal/toc/Practica5/practica5/practica5.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_4022976725_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5760);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 5856);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 5856);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5920);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5984);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 6048);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_4022976725_3212880686_p_1(char *t0)
{
    char t12[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB7, &&LAB6, &&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 9837);
    t3 = (t0 + 6112);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 6176);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5776);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 6240);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6304);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 6112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB2;

LAB4:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 9716U);
    t8 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t2, t1, 32);
    if (t8 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 6240);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6304);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB2;

LAB5:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 9716U);
    t15 = (32 - 1);
    t8 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t2, t1, t15);
    if (t8 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB2;

LAB6:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t13 = (5 - 4);
    t14 = (t13 * 1U);
    t16 = (0 + t14);
    t1 = (t2 + t16);
    t3 = (t0 + 6304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 5U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t13 = (5 - 4);
    t14 = (t13 * 1U);
    t16 = (0 + t14);
    t1 = (t2 + t16);
    t3 = (t17 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 4;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t15 = (0 - 4);
    t18 = (t15 * -1);
    t18 = (t18 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t18;
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t1, t17, 1);
    t5 = (t12 + 12U);
    t18 = *((unsigned int *)t5);
    t19 = (1U * t18);
    t8 = (5U != t19);
    if (t8 == 1)
        goto LAB23;

LAB24:    t6 = (t0 + 6560);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t20 = *((char **)t11);
    memcpy(t20, t4, 5U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 9748U);
    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    t3 = (t0 + 9748U);
    t8 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t8 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB2;

LAB8:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 6624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 6176);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t13 = (5 - 4);
    t14 = (t13 * 1U);
    t16 = (0 + t14);
    t1 = (t2 + t16);
    t3 = (t17 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 4;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t15 = (0 - 4);
    t18 = (t15 * -1);
    t18 = (t18 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t18;
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t1, t17, 1);
    t5 = (t12 + 12U);
    t18 = *((unsigned int *)t5);
    t19 = (1U * t18);
    t8 = (5U != t19);
    if (t8 == 1)
        goto LAB28;

LAB29:    t6 = (t0 + 6304);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t20 = *((char **)t11);
    memcpy(t20, t4, 5U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 6624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 6176);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 9841);
    t4 = (t0 + 6368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 9847);
    t5 = (t0 + 6496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 6432);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 9716U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t4 = (t12 + 12U);
    t13 = *((unsigned int *)t4);
    t14 = (1U * t13);
    t8 = (6U != t14);
    if (t8 == 1)
        goto LAB16;

LAB17:    t5 = (t0 + 6368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB14;

LAB16:    xsi_size_not_matching(6U, t14, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 6432);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 9716U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t4 = (t12 + 12U);
    t13 = *((unsigned int *)t4);
    t14 = (1U * t13);
    t8 = (6U != t14);
    if (t8 == 1)
        goto LAB21;

LAB22:    t5 = (t0 + 6496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB19;

LAB21:    xsi_size_not_matching(6U, t14, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(5U, t19, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(133, ng0);
    t5 = (t0 + 6432);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    goto LAB26;

LAB28:    xsi_size_not_matching(5U, t19, 0);
    goto LAB29;

}


extern void work_a_4022976725_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4022976725_3212880686_p_0,(void *)work_a_4022976725_3212880686_p_1};
	xsi_register_didat("work_a_4022976725_3212880686", "isim/miTest_isim_beh.exe.sim/work/a_4022976725_3212880686.didat");
	xsi_register_executes(pe);
}
