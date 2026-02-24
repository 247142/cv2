/*
 * cv2.h
 *
 *  Created on: 24. 2. 2026
 *      Author: Student
 */

#ifndef INC_CV2_H_
#define INC_CV2_H_

#define RED	14
#define GREEN 0
#define BLUE 7

#define BUTTON 13

#endif /* INC_CV2_H_ */

#include "main.h"

void LED_init(uint8_t pin);

void LED_ON(uint8_t pin);

void LED_OFF(uint8_t pin);

void LED_TOGGLE(uint8_t pin);

void BUTTON_init(uint8_t pin);

uint8_t BUTTON_read(uint8_t pin);
