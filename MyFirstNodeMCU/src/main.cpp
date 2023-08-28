#include <Arduino.h>
#include "SimpleLED.h"

SimpleLED LED1(LED_BUILTIN, false, 50, 200);
SimpleLED LED2(LED_BUILTIN_AUX, false, 50, 150);


void setup() {
  // put your setup code here, to run once:
  long start = millis();
  LED1.setup(start);
  LED2.setup(start);
}


void loop() {
  long now = millis();
  LED1.update(now);
  LED2.update(now);
  
}





