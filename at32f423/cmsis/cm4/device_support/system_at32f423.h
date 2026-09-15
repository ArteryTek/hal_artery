/**
  **************************************************************************
  * @file     system_at32f423.h
  * @brief    cmsis cortex-m4 system header file.
  **************************************************************************
  *
  * Copyright (c) 2025, Artery Technology, All rights reserved.
  * SPDX-License-Identifier: Apache-2.0
  *
  **************************************************************************
  */

#ifndef __SYSTEM_AT32F423_H
#define __SYSTEM_AT32F423_H

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup AT32F423_system
  * @{
  */

#define SystemCoreClock                  system_core_clock

/** @defgroup AT32F423_system_exported_variables
  * @{
  */
extern unsigned int system_core_clock; /*!< system clock frequency (core clock) */

/**
  * @}
  */

/** @defgroup AT32F423_system_exported_functions
  * @{
  */

extern void SystemInit(void);
extern void system_core_clock_update(void);
extern void wait_for_power_stable(void);

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif

