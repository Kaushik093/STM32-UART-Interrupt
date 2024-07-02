/*
 * uart.h
 *
 *  Created on: Jul 1, 2024
 *      Author: Kaushik Narayan
 */

#ifndef UART_H_
#define UART_H_

#include "stm32f4xx.h"
#include <stdint.h>
#include <stdio.h>

void uart2_rxtx_init(void);
void uart_transmit(int ch);
char uart_receive(void);
int __io_putchar(int ch);

#endif /* UART_H_ */
