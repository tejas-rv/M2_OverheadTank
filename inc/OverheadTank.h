#ifndef __OVERHEADTANK_H_
#define __OVERHEADTANK_H_
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

/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

/**
 * Include files
 */ 
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);


/**
 * @brief Function that sets DDRB Registers
 * 
 */
void set_DDRB(void);
/**
 * @brief Function that clears bits
 * 
 */
void clear_bit(void);
/**
 * @brief Function that sets bits
 * 
 */
void set_bit(void);
/**
 * @brief Function that turn ON and OFF the LED
 * 
 */
void LED_Config(void);
#endif /**__OVERHEADTANK_H_*/