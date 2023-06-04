/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2013, NVIDIA CORPORATION.  All rights reserved.
 */

#ifndef __MX6_COMMON_H
#define __MX6_COMMON_H

#include <linux/stringify.h>

#if (defined(CONFIG_MX6UL) || defined(CONFIG_MX6ULL))
#define CFG_SC_TIMER_CLK 8000000 /* 8Mhz */
#else
#ifndef CONFIG_SYS_L2CACHE_OFF
#define CFG_SYS_PL310_BASE	L2_PL310_BASE
#endif

#endif

/* LED1 & LED2 configuration  */
#define CONFIG_LED1_IOMUXC   MX6_PAD_GPIO1_IO03__GPIO1_IO03
#define CONFIG_LED2_IOMUXC   MX6_PAD_GPIO1_IO04__GPIO1_IO04
#define CONFIG_LED1          IMX_GPIO_NR(1, 3)
#define CONFIG_LED2          IMX_GPIO_NR(1, 4)

#include <linux/sizes.h>
#include <asm/arch/imx-regs.h>
#include <asm/mach-imx/gpio.h>

#endif
