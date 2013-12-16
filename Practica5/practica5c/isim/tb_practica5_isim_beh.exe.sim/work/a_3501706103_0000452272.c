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
static const char *ng0 = "C:/hlocal/toc/Practica5/practica5c/memp5.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3501706103_0000452272_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4160);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t2 = (t0 + 6684U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t15 = (t14 - 31);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t14);
    t17 = (4U * t16);
    t18 = (0 + t17);
    t8 = (t4 + t18);
    t11 = (t0 + 4256);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 4U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1832U);
    t11 = *((char **)t4);
    t4 = (t0 + 2608U);
    t12 = *((char **)t4);
    t4 = (t0 + 1512U);
    t13 = *((char **)t4);
    t4 = (t0 + 6684U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t13, t4);
    t15 = (t14 - 31);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t14);
    t17 = (4U * t16);
    t18 = (0 + t17);
    t19 = (t12 + t18);
    memcpy(t19, t11, 4U);
    t20 = (t0 + 2552U);
    xsi_variable_act(t20);
    goto LAB9;

}

static void work_a_3501706103_0000452272_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4176);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t2 = (t0 + 6700U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t15 = (t14 - 31);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t14);
    t17 = (4U * t16);
    t18 = (0 + t17);
    t8 = (t4 + t18);
    t11 = (t0 + 4320);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 4U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1992U);
    t11 = *((char **)t4);
    t4 = (t0 + 2608U);
    t12 = *((char **)t4);
    t4 = (t0 + 1672U);
    t13 = *((char **)t4);
    t4 = (t0 + 6700U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t13, t4);
    t15 = (t14 - 31);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t14);
    t17 = (4U * t16);
    t18 = (0 + t17);
    t19 = (t12 + t18);
    memcpy(t19, t11, 4U);
    t20 = (t0 + 2552U);
    xsi_variable_act(t20);
    goto LAB9;

}


extern void work_a_3501706103_0000452272_init()
{
	static char *pe[] = {(void *)work_a_3501706103_0000452272_p_0,(void *)work_a_3501706103_0000452272_p_1};
	xsi_register_didat("work_a_3501706103_0000452272", "isim/tb_practica5_isim_beh.exe.sim/work/a_3501706103_0000452272.didat");
	xsi_register_executes(pe);
}
