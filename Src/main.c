/*
 * Bare metal C code to toggle the user LED on STM32 Nucleo board using the on-board push button
 */

#include "stm32f4xx.h"

#define GPIOC_EN		(1U<<2) //Write to register for port C clock enable
#define GPIOA_EN        (1U<<0) //Write to register for port A clock enable

#define PIN5		(1U<<5)
#define PIN13		(1U<<13)

#define LED_PIN			PIN5
#define BTN_PIN			PIN13

int main(void){

	//Enable clock for GPIO A and C
	RCC->AHB1ENR |= GPIOA_EN;
	RCC->AHB1ENR |= GPIOC_EN;

	//Set mode of pin13 on port C to input
	GPIOC->MODER &= ~(1U<<26);
	GPIOC->MODER &= ~(1U<<27);

	//Set mode of pin5 on port A to output
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &= ~(1U<<11);

	while(1){

		//Check if button is pressed

		if(GPIOC->IDR & BTN_PIN){
			//Turn off LED
			GPIOA->BSRR = LED_PIN;
		}
		else{
			//Turn on LED
			GPIOA->BSRR = (1U<<21);
		}
	}

}
