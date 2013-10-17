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
static const char *ng0 = "C:/hlocal/Pr2/munyeca.vhd";



static void work_a_2120599938_3212880686_p_0(char *t0)
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
LAB3:    t1 = (t0 + 4128);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 4240);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_2120599938_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    static char *nl0[] = {&&LAB3, &&LAB6, &&LAB5, &&LAB4};

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4144);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t7 = (t4 == (unsigned char)3);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB2;

LAB5:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB2;

LAB6:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t7 = (t4 == (unsigned char)3);
    if (t7 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t7 = (t4 == (unsigned char)2);
    if (t7 == 1)
        goto LAB33;

LAB34:    t3 = (unsigned char)0;

LAB35:    if (t3 != 0)
        goto LAB31;

LAB32:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB2;

LAB7:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(77, ng0);
    t5 = (t0 + 4304);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    t5 = (t0 + 1352U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t4 = t11;
    goto LAB13;

LAB14:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 4304);
    t6 = (t1 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB16:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t8 = *((unsigned char *)t5);
    t10 = (t8 == (unsigned char)2);
    t3 = t10;
    goto LAB18;

LAB19:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 4304);
    t6 = (t1 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t8 = *((unsigned char *)t5);
    t10 = (t8 == (unsigned char)2);
    t3 = t10;
    goto LAB30;

LAB31:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4304);
    t6 = (t1 + 56U);
    t9 = *((char **)t6);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB33:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t8 = *((unsigned char *)t5);
    t10 = (t8 == (unsigned char)2);
    t3 = t10;
    goto LAB35;

}

static void work_a_2120599938_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    static char *nl0[] = {&&LAB5, &&LAB4, &&LAB5, &&LAB3};

LAB0:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4160);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 4368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 4432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 4432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 4368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 4368);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

}


extern void work_a_2120599938_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2120599938_3212880686_p_0,(void *)work_a_2120599938_3212880686_p_1,(void *)work_a_2120599938_3212880686_p_2};
	xsi_register_didat("work_a_2120599938_3212880686", "isim/munyeca_isim_beh.exe.sim/work/a_2120599938_3212880686.didat");
	xsi_register_executes(pe);
}
