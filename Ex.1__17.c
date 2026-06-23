// Write a code to count the number of times a switch is pressed and display it in LCD 

#include <LiquidCrystal.h>
const int rs = 2, en = 3, d4 = 4, d5 = 8, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int buttonPin = 7;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    // turn LED on:
    count++;
    
  }
  Serial.println(count);
  lcd.setCursor(0, 0);
  lcd.print(count);
  lcd.display();
  delay(250);
  lcd.clear();
}
