/*
 * cv2.c
 *
 *  Created on: 24. 2. 2026
 *      Author: Student
 */


#include "cv2.h"

void LED_init(uint8_t pin){
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;	//Hodiny

	GPIOB->MODER &= ~(3U << (pin*2));		//Mode register
	GPIOB->MODER |= (1U << (pin*2));		//Set as output
}

void LED_ON(uint8_t pin){
	GPIOB->BSRR = (1U << pin);
}

void LED_OFF(uint8_t pin){
	GPIOB->BSRR = (1U << (pin+16));
}

void LED_TOGGLE(uint8_t pin){
	GPIOB->ODR ^= (1<<pin);
}

void BUTTON_init(uint8_t pin){
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;	//Hodiny

	GPIOC->MODER &= ~(3U << (pin*2));		//Mode register set as input
}

uint8_t BUTTON_read(uint8_t pin){
	if(GPIOC->IDR & (1U << pin)){
		return 1;
	}
	return 0;
}
