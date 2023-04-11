#ifndef ledclass_H
#define ledclass_H
//define if is not defined yet

#include<Arduino.h> //include Arduino library

class LED { //create a class for push buttons
  private: //hide and protect the variables here
    int pin; //variable in which the pin number in use will be saved
    int state; //the initial state of the pin is 0 as the circuit is pull down

  public:
    LED(){}; //default costructor
    LED(int pinNumber); //constructor that receives the pin number
    
    void init();

    void ON();//function to digitalRead the pin to see the state of the button 

    void OFF();

};

#endif