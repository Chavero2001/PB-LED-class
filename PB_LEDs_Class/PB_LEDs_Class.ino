/*The goal of this program is to create a class for a Push button

Class, functions*/ 
#include "pushbutton.h" //include the header file
#include "ledclass.h"
#include <Timer.h>

PushButton PBtest(2); // create a new button object with pin 2

LED red(13);
LED blue(12);
LED green(11);
LED white(10);

int state;
int Case=1;

void setup() {
  PBtest.init();
  red.init();
  blue.init();
  green.init();
  white.init();
  
}

void loop() {


  state=PBtest.updateState();
  //delay(120);
  
  Serial.print(state);
  Serial.print("  ");

  if(state>0){
    Case=Case+1;  
       
  }

  Serial.println(Case);
  

  switch (Case){
    case 1: 
          red.ON();
          blue.OFF();
          green.OFF() ;
          white.OFF(); 
          
    break;             
    case 2:
          red.OFF();
          blue.ON();
          green.OFF() ;
          white.OFF();  
    break; 
    case 3:
          red.OFF();
          blue.OFF();
          green.ON();
          white.OFF(); 
    break;
    case 4:
      red.OFF();
      blue.OFF();
      green.OFF();
      white.ON();
    break;

    default:
      Case=1;   
    break;    
  };
  
  
}