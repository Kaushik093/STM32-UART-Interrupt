#include <stdio.h>
#include <uart.h>

#define GPIOAEN		(1U<<0)
#define GPIOA_5		(1U<<5)
#define LED_PIN		GPIOA_5

char key;

//Interrupt action
void toggle_LED(){

	key = uart_receive();

	if(key == '1'){
		GPIOA->ODR |= LED_PIN;
	}
	else{
		GPIOA->ODR &= ~LED_PIN;
	}

}

//Interrupt handler
void USART2_IRQHandler(void) {
    // Check if RXNE (Read data register not empty) flag is set
    if (USART2->SR & USART_SR_RXNE) {
        // Toggle LED based on received data
        toggle_LED();
    }
}


int main(void){

	/**Initialize user LED GPIO**/

	//Enable clock access to GPIOA
	RCC->AHB1ENR |= GPIOAEN;

	//Set PA5 to output mode
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &= ~(1U<<11);

	uart2_rx_interrupt_init();

	while(1){


	}
}
