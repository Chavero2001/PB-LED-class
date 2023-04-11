#include "ledclass.h"

LED::LED(int pinNumber){
  pin=pinNumber;

};

void LED::init(){
  pinMode(pin,OUTPUT);
};

    void LED::ON(){
digitalWrite(pin,1);
    };//function to digitalRead the pin to see the state of the button 

    void LED::OFF(){
      digitalWrite(pin,0);
    };