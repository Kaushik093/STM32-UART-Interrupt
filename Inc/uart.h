
#ifndef UART_H_
#define UART_H_

#include "stm32f4xx.h"
#include <stdint.h>
#include <stdio.h>

#define RX_NEMPTY			(1U<<5)

void uart2_rxtx_init(void);
void uart2_rx_interrupt_init(void);
//void uart_transmit(int ch);
char uart_receive(void);
int __io_putchar(int ch);

#endif /* UART_H_ */
