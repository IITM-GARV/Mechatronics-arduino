//  Display text on the LCD (use a breadboard to connect the LCD to Induino according to the connection table shown in class). Connect pin 3 of the LCD to GND directly (No contrast adjustment) 

#include <LiquidCrystal.h>
const int rs = 2, en = 3, d4 = 4, d5 = 8, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  lcd.begin(16, 2);

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:

  lcd.print("HELLO WORLD");
  lcd.display();
  delay(500);
  lcd.clear();
}
