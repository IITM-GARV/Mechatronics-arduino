// Write a code to count the number of times your finger crosses just above the LDR, within a known time (5s) and display the count in LCD 

#include <LiquidCrystal.h>

const int rs = 2, en = 3, d4 = 4, d5 = 8, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 7;     // the number of the pushbutton pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonPushCounter=0;
int lastButtonState=0;

void setup() {;
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  lcd.begin(16, 2);
  lcd.print("0");
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A3);
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);
  // compare the buttonState to its previous state
  if(voltage<=3.3){
    buttonState=LOW;
  }else{
    buttonState=HIGH;
  }
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == LOW) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      lcd.clear();
      lcd.print(buttonPushCounter);
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;

}
