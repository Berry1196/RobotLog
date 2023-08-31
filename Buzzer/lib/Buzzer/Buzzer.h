#ifndef BUZZER_H
#define BUZZER_H
#include "Arduino.h"

class Buzzer
{
public:
    Buzzer(int pin);
    void play(int frequency, int duration);
    // void play(int frequency);
    // void stop();
private:
    int pin;
};

#endif // BUZZER_H