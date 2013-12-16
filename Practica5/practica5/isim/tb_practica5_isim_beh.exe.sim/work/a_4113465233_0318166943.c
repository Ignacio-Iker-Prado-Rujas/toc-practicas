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
static const char *ng0 = "C:/hlocal/toc/Practica5/tb_p5.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4113465233_0318166943_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (5 * 1000LL);
    t8 = (t0 + 4040);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    xsi_set_current_line(66, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_4113465233_0318166943_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t7 = (100 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4113465233_0318166943_p_2(char *t0)
{
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int t10;
    int t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    int t15;
    char *t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    t1 = (t0 + 3608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4232);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(84, ng0);
    t9 = (100 * 1000LL);
    t2 = (t0 + 3416);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 6310);
    *((int *)t2) = 0;
    t3 = (t0 + 6314);
    *((int *)t3) = 1;
    t10 = 0;
    t11 = 1;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(87, ng0);
    t9 = (10 * 1000LL);
    t4 = (t0 + 3416);
    xsi_process_wait(t4, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 6310);
    t10 = *((int *)t2);
    t3 = (t0 + 6314);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB11;

LAB41:    t14 = (t10 + 1);
    t10 = t14;
    t4 = (t0 + 6310);
    *((int *)t4) = t10;
    goto LAB8;

LAB12:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);

LAB18:    t2 = (t0 + 3928);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t3 = (t0 + 3928);
    *((int *)t3) = 0;
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6318);
    *((int *)t2) = 1;
    t3 = (t0 + 6322);
    *((int *)t3) = 31;
    t14 = 1;
    t15 = 31;

LAB20:    if (t14 <= t15)
        goto LAB21;

LAB23:    xsi_set_current_line(98, ng0);

LAB39:    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB17:    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 6318);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t16, *((int *)t4), 5);
    t6 = (t0 + 4232);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t5, 5U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(92, ng0);

LAB26:    t2 = (t0 + 3944);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB22:    t2 = (t0 + 6318);
    t14 = *((int *)t2);
    t3 = (t0 + 6322);
    t15 = *((int *)t3);
    if (t14 == t15)
        goto LAB23;

LAB36:    t19 = (t14 + 1);
    t14 = t19;
    t4 = (t0 + 6318);
    *((int *)t4) = t14;
    goto LAB20;

LAB24:    t4 = (t0 + 3944);
    *((int *)t4) = 0;
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6318);
    t19 = *((int *)t2);
    t20 = (32 - t19);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t16, t20, 5);
    t4 = (t0 + 2128U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    t6 = (t16 + 12U);
    t21 = *((unsigned int *)t6);
    t21 = (t21 * 1U);
    memcpy(t4, t3, t21);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t21 = (4 - 4);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t2 = (t3 + t23);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t12 = 1;
    if (4U == 4U)
        goto LAB30;

LAB31:    t12 = 0;

LAB32:    if (t12 == 0)
        goto LAB28;

LAB29:    goto LAB22;

LAB25:    t3 = (t0 + 992U);
    t12 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t12 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t7 = (t0 + 6326);
    xsi_report(t7, 22U, (unsigned char)2);
    goto LAB29;

LAB30:    t24 = 0;

LAB33:    if (t24 < 4U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t4 = (t2 + t24);
    t6 = (t5 + t24);
    if (*((unsigned char *)t4) != *((unsigned char *)t6))
        goto LAB31;

LAB35:    t24 = (t24 + 1);
    goto LAB33;

LAB37:    t4 = (t0 + 3960);
    *((int *)t4) = 0;
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4232);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    goto LAB10;

LAB38:    t3 = (t0 + 992U);
    t12 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t12 == 1)
        goto LAB37;
    else
        goto LAB39;

LAB40:    goto LAB38;

LAB42:    goto LAB2;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

}


extern void work_a_4113465233_0318166943_init()
{
	static char *pe[] = {(void *)work_a_4113465233_0318166943_p_0,(void *)work_a_4113465233_0318166943_p_1,(void *)work_a_4113465233_0318166943_p_2};
	xsi_register_didat("work_a_4113465233_0318166943", "isim/tb_practica5_isim_beh.exe.sim/work/a_4113465233_0318166943.didat");
	xsi_register_executes(pe);
}
