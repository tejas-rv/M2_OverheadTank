/**
 * @file main.c
 * @author Tejas V
 * @brief Water Level Indicator of Overhead Tank
 * @date 2022-04-18
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */ 
/* Including Header Files*/
#include "OverheadTank.h"
#include "user_utils.h"
#include "config.h"


void set_DDRB(void){
	DDRB |= (1 << LED_PIN_0);
	DDRB |= (1 << LED_PIN_1);
	DDRB |= (1 << LED_PIN_2);
	DDRB |= (1 << LED_PIN_3);
	DDRB |= (1 << LED_PIN_4);
	DDRB |= (1 << LED_PIN_5);
	DDRB |= (1 << LED_PIN_6);
	DDRB |= (1 << LED_PIN_7);
}

void clear_bit(void){
	DDRD &= ~(1 << SWITCH_PIN_0);
	DDRD &= ~(1 << SWITCH_PIN_1);
	DDRD &= ~(1 << SWITCH_PIN_2);
	DDRD &= ~(1 << SWITCH_PIN_3);
	DDRD &= ~(1 << SWITCH_PIN_4);
	DDRD &= ~(1 << SWITCH_PIN_5);
	DDRD &= ~(1 << SWITCH_PIN_6);
	DDRD &= ~(1 << SWITCH_PIN_7);
}

void set_bit(void){
	PORTD |= (1 << SWITCH_PIN_0);
	PORTD |= (1 << SWITCH_PIN_1);
	PORTD |= (1 << SWITCH_PIN_2);
	PORTD |= (1 << SWITCH_PIN_3);
	PORTD |= (1 << SWITCH_PIN_4);
	PORTD |= (1 << SWITCH_PIN_5);
	PORTD |= (1 << SWITCH_PIN_6);
	PORTD |= (1 << SWITCH_PIN_7);
}

void LED_Config(void){
	/* For Ground Level LED */
	
	if (!(PIND & (1 << SWITCH_PIN_0)))
	{
		PORTB |= (1 << LED_PIN_0);
		//_delay_ms(2000);
	}
	else
	{
		PORTB &= ~(1 << LED_PIN_0);
		//_delay_ms(2000);
	}
	
	/* For First Level LED */
	
	if (!(PIND & (1 << SWITCH_PIN_1)))
	{
		PORTB |= (1 << LED_PIN_1);
		//_delay_ms(2000);
	}
	else
	{
		PORTB &= ~(1 << LED_PIN_1);
		//_delay_ms(2000);
	}
	
	/* For Second Level LED */
	
	if (!(PIND & (1 << SWITCH_PIN_2)))
	{
		PORTB |= (1 << LED_PIN_2);
		//_delay_ms(2000);
	}
	else
	{
		PORTB &= ~(1 << LED_PIN_2);
		//_delay_ms(2000);
	}
	
	/* For Third Level LED */
	
	if (!(PIND & (1 << SWITCH_PIN_3)))
	{
		PORTB |= (1 << LED_PIN_3);
		//_delay_ms(2000);
	}
	else
	{
		PORTB &= ~(1 << LED_PIN_3);
		//_delay_ms(2000);
	}
	
	/* For Fourth Level LED */
	
	if (!(PIND & (1 << SWITCH_PIN_4)))
	{
		PORTB |= (1 << LED_PIN_4);
		//_delay_ms(2000);
	}
	else
	{
		PORTB &= ~(1 << SWITCH_PIN_4);
		//_delay_ms(2000);
	}
	
	/* For Fifth Level LED */
	
	if (!(PIND & (1 << SWITCH_PIN_5)))
	{
		PORTB |= (1 << LED_PIN_5);
		//_delay_ms(2000);
	}
	else
	{
		PORTB &= ~(1 << LED_PIN_5);
		//_delay_ms(2000);
	}
	
	/* For Sixth Level LED */
	
	if (!(PIND & (1 << SWITCH_PIN_6)))
	{
		PORTB |= (1 << LED_PIN_6);
		//_delay_ms(2000);
	}
	else
	{
		PORTB &= ~(1 << LED_PIN_6);
		//_delay_ms(2000);
	}
}

int main(void)
{
	set_DDRB(); 	/* Function that sets DDR registers */
	clear_bit();	/* Function that clears bits */
	set_bit();		/* Function that sets bit */
		
	while(1)
	{
		LED_Config();
		
		/* For Buzzer */
		
		if (!(PIND & (1 << SWITCH_PIN_7)))
		{
			PORTB |= (1 << LED_PIN_7);
			//_delay_ms(2000);
		}
		else
		{
			PORTB &= ~(1 << LED_PIN_7);
			//_delay_ms(2000);
		}
	}
}

