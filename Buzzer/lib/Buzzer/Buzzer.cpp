#include "Buzzer.h"
#include "Arduino.h"

Buzzer::Buzzer(int pin)
{
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

void Buzzer::play(int frequency, int duration)
{
    tone(pin, frequency, duration);
}

// void Buzzer::play(int frequency)
// {
//     tone(pin, frequency);
// }

// void Buzzer::stop()
// {
//     noTone(pin);
// }
