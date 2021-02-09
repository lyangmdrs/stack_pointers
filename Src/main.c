/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>

/*
 * The goal of this exercise is to get 1 KB of STACK memory space
 * and separate it in two spaces, each one with 512 B. The first
 * space will be pointed by MSP and the second will be pointed by
 * PSP.
 *
 * As such, when the processor is on Handler Mode, the first portion
 * will be used as stack memory.
 *
 * By consequence, when the processor is on Thread Mode, the second
 * portion will be used as stack memory.
 *
 */

#define S_RAM 		0x20000000U 			// Initial RAM address
#define RAM_SZ		(128 * 1024) 			// RAM Size = 128 KB
#define E_RAM 		( (S_RAM) + (RAM_SZ) )	// Final RAM address
#define S_STACK 	E_RAM					// Stack starts at the end of RAM

#define S_MSP_STACK	S_STACK					// MSP space starts with Stack
#define E_MSP_STACK ( S_STACK + 512 )		// MSP occupies the first 512 B of Stack

#define S_PSP_STACK E_MSP_STACK				// PSP space starts at the end of MSP space

int main(void)
{
    /* Loop forever */
	for(;;);
}
