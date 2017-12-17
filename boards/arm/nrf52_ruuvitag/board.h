/*
 * Copyright (c) 2017 Peter Robinson
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Onboard LED 0 (red) P0_17 */
#define LED0_GPIO_PIN	17
#define LED0_GPIO_PORT	CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Onboard LED 1 (green) P0_19 */
#define LED1_GPIO_PIN	19
#define LED1_GPIO_PORT	CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Push button 0 */
#define SW0_GPIO_PIN	12
#define SW0_GPIO_NAME	CONFIG_GPIO_NRF5_P0_DEV_NAME

#endif /* __INC_BOARD_H */
