#ifndef __CONFIG_H__
#define __CONFIG_H__
/**
 * @file config.h
 * @author Tejas V
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/** Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /** LED Port Number */
#define LED_PIN_0  (DDB0)   /** LED Pin number  */
#define LED_PIN_1  (DDB1)
#define LED_PIN_2  (DDB2)
#define LED_PIN_3  (DDB3)
#define LED_PIN_4  (DDB4)
#define LED_PIN_5  (DDB5)
#define LED_PIN_6  (DDB6)
#define LED_PIN_7  (DDB7)

#define SWITCH_PORT (PORTD) /** SWITCH Port Number */
#define SWITCH_PIN_0  (DDD0)   /** SWITCH Pin number  */
#define SWITCH_PIN_1  (DDD1)
#define SWITCH_PIN_2  (DDD2)
#define SWITCH_PIN_3  (DDD3)
#define SWITCH_PIN_4  (DDD4)
#define SWITCH_PIN_5  (DDD5)
#define SWITCH_PIN_6  (DDD6)
#define SWITCH_PIN_7  (DDD7)

#endif /* __CONFIG_H__ */