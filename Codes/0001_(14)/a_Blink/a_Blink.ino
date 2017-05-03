 #include "header/constant.h"

/*
 * The setup() function is called when a sketch starts. 
 * Use it to initialize variables, pin modes, 
 * start using libraries, etc. The setup function will only run once, 
 * after each powerup or reset of the Arduino board.
 */
void setup()
{
   pinMode(LED_PORT_13, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PORT_13, HIGH); // set the LED on
    delay(DELAY_MILLI_SECOND); // wait for two seconds
    digitalWrite(LED_PORT_13, LOW); // set the LED off
    delay(DELAY_MILLI_SECOND); // wait for two seconds
}
