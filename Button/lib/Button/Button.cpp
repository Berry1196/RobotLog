#include "Button.h"
#include "Arduino.h"
 
Button::Button(int pin, bool buttonDown) : _pin(pin), _buttonDown(buttonDown) {}

    void Button::setup(long startTime) {
            pinMode(_pin, INPUT_PULLUP);
            _buttonState = Off;
        }
        void Button::update(long now) {
            switch(_buttonState)
            {
                case Off:
                    if(digitalRead(_pin) != LOW)
                    
                        _buttonState = Push;
                        _nextChangeTime = now + _noiceCancelTimer;
                    break;
                case Push:
                    if(now < _nextChangeTime) return;
                    _buttonState = On;
                    break;
                case On:
                    if(digitalRead(_pin) == _buttonDown) return;
                    
                        _buttonState = Release;
                        _nextChangeTime = now + _noiceCancelTimer;
                        break;
                case Release:
                    if(now < _nextChangeTime) return;
                    _buttonState = Off;
                    break;
            }
        }

        bool Button::GetButtonState()
        {
            return _buttonState == On || _buttonState == Push;
        }