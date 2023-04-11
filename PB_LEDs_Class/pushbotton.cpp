#include "pushbutton.h" //include the header file



PushButton::PushButton(int pinNumber) { //the constructor receives the pin number connected to the push button
      pin = pinNumber; //pin variable receives the pin number
     
      state; //restart the value of state to 0
    };

void PushButton::init (){
   pinMode(pin, INPUT); //define pin as input
   Serial.begin(9600);
};

int PushButton::getState() {//function to return the state
      return state; //return the current state
    };    

int PushButton:: updateState() { //function to update the state
       int reading = digitalRead(pin); //digital read the pin 
      
      if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

   if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;

      // Check if button is pressed
      if (buttonState == HIGH) {
        // Only toggle the LED if button was not pressed before
        if (!buttonPressed) {
          //ledState = !ledState;
          buttonPressed = true;
          return 1; // Return 1 when button is first pressed
        } else {
          return 0; // Return 0 when button is continuously pressed
        }
      } else {
        buttonPressed = false;
      }
    }
  }
  
  lastButtonState = reading;
  return 0; // Return 0 if button is not pressed
     
        };


/*void PushButton:: printState(){
updateState(); // update the state of the button

  if (getState() == HIGH) {
    Serial.println("Button is pressed"); // print a message if the button is pressed
  }

  delay(100); // wait for a short time to debounce  
};

bool PushButton:: State(){
updateState(); // update the state of the button

  if (getState() == HIGH) {
   return 1; // print a message if the button is pressed
  } else{
    return 0;
  }

  delay(100); // wait for a short time to debounce  
};*/

