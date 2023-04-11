#ifndef pushbutton_H
#define pushbutton_H
//define if is not defined yet

#include<Arduino.h> //include Arduino library

class PushButton { //create a class for push buttons
  private: //hide and protect the variables here
    int pin; //variable in which the pin number in use will be saved
    int state=0; //the initial state of the pin is 0 as the circuit is pull down

    int ledState = 1;
    int buttonState;            // the current reading from the input pin
    int lastButtonState = LOW;  // the previous reading from the input pin
// the following variables are unsigned longs because the time, measured in
// milliseconds, will quickly become a bigger number than can be stored in an int.
    unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
    unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers
    
    bool buttonPressed;

  public:
    PushButton(){}; //default costructor
    PushButton(int pinNumber); //constructor that receives the pin number
    
    void init();

    int getState(); //function that returns the current state

    int updateState();//function to digitalRead the pin to see the state of the button 

    /*void printState();

    bool State();*/

};

#endif