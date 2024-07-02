#include <stdio.h>
#include <uart.h>

#define GPIOAEN		(1U<<0)
#define GPIOA_5		(1U<<5)
#define LED_PIN		GPIOA_5

char key;

int main(void){

	//Enable clock access to GPIOA
	RCC->AHB1ENR |= GPIOAEN;

	//Set PA5 as output pin
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &= ~(1U<<11);

	uart2_rxtx_init();

	while(1){

		key = uart_receive();

		if(key == '1'){
			GPIOA->ODR |= LED_PIN;
		}
		else{
			GPIOA->ODR &= ~LED_PIN;

		}
//		printf("Hello I am Kaushik \n\r");
	}
}
