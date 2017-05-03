 

#include "header/constant.h"
void setup()
{
   pinMode(LED_PORT_13, OUTPUT); // enable output on the led pin
       Serial.begin(9600);
}
void loop()
{
    int rate = analogRead(SENSOR_PIN); // read the analog input
    // the next line scales the blink rate between the min and max values
    rate = map(rate, MIN_DURATION_LDR,MAX_DURATION_LDR,MIN_DURATION, MAX_DURATION); // convert to blink rate
    rate = constrain(rate, MIN_DURATION,MAX_DURATION); // constrain the value
    digitalWrite(LED_PORT_13, HIGH); // set the LED on
    delay(rate); // wait duration dependent on light level
    digitalWrite(LED_PORT_13, LOW); // set the LED off
    delay(rate);
    Serial.println(rate, DEC);  // print as an ASCII-encoded decimal
}
