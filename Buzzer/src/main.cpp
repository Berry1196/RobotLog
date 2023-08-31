#include <Arduino.h>
#include <Buzzer.h>

int buzzer = D1;
Buzzer myBuzzer(buzzer);


void setup() {
  pinMode(buzzer, OUTPUT);
 
}

void loop() {
  long now = millis();
  if (now % 1000 == 0) {
    myBuzzer.play(1000, 100);
  }
  // else {
  //   myBuzzer.stop();
  // }
  
  
 

}
