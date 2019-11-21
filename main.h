#ifndef MAIN_H_
#define MAIN_H_

#include "driverlib/driverlib.h"

/* ============================== Macros ================================ */

#define SOS 343 /* speed of sound in */

//PUSH BUTTON
#define PB1_PORT GPIO_PORT_P1
#define PB1_PIN GPIO_PIN2

#define PB2_PORT GPIO_PORT_P2
#define PB2_PIN GPIO_PIN6

//KEYPAD
#define KEYPAD_COL1_PORT GPIO_PORT_P5
#define KEYPAD_COL1_PIN GPIO_PIN1

#define KEYPAD_COL2_PORT GPIO_PORT_P8
#define KEYPAD_COL2_PIN GPIO_PIN2

#define KEYPAD_COL3_PORT GPIO_PORT_P2
#define KEYPAD_COL3_PIN GPIO_PIN7

#define KEYPAD_ROW1_PORT GPIO_PORT_P2
#define KEYPAD_ROW1_PIN GPIO_PIN5

#define KEYPAD_ROW2_PORT GPIO_PORT_P8
#define KEYPAD_ROW2_PIN GPIO_PIN1

#define KEYPAD_ROW3_PORT GPIO_PORT_P1
#define KEYPAD_ROW3_PIN GPIO_PIN0

#define KEYPAD_ROW4_PORT GPIO_PORT_P8
#define KEYPAD_ROW4_PIN GPIO_PIN0

//UTLRASONIC SENSOR

//back
#define USB_TRIG_PORT GPIO_PORT_P1
#define USB_TRIG_PIN GPIO_PIN6

#define USB_ECHO_PORT GPIO_PORT_P5
#define USB_ECHO_PIN GPIO_PIN0

//front
#define USF_TRIG_PORT GPIO_PORT_P1
#define USF_TRIG_PIN GPIO_PIN5

#define USF_ECHO_PORT GPIO_PORT_P8
#define USF_ECHO_PIN GPIO_PIN3

//PWM PIN
#define PWM_PORT GPIO_PORT_P1
#define PWM_PIN GPIO_PIN7


//LEDs

#define GREEN_LED_PORT GPIO_PORT_P1
#define GREEN_LED_PIN GPIO_PIN4

#define YELLOW_LED_PORT GPIO_PORT_P1
#define YELLOW_LED_PIN GPIO_PIN3

#define ORANGE_LED_PORT GPIO_PORT_P5
#define ORANGE_LED_PIN GPIO_PIN3

#define RED_LED_PORT GPIO_PORT_P5
#define RED_LED_PIN GPIO_PIN2

#define DUTY_CYCLE 500
#define PERIOD 1000

#define NO_BEEP 0
#define LOW_BEEP 1
#define HIGH_BEEP 2

/* =======================================================================*/




/* ============================== Prototype Functions ================================*/

void init_interrupt(void);
void init_timer(void);
void Init_GPIO(void);
unsigned int pulse_output_back(void);
unsigned int pulse_output_front(void);
unsigned int get_distance(unsigned int timer, unsigned int port, unsigned int pin);
int keypad(void);
int scan_cols(void);
void setup_back(int *back_values);
void setup_front(int *front_values);
void beep(int BeepPITCH);

/* ===================================================================================*/

// Random defines we need
#define NUM_ROWS 4
#define NUM_COLS 3
#define SETUP_MODE 0
#define USER_MODE 1

#endif /* MAIN_H_ */
