// Combine various intensities of R, G, and B and get different colors 

int ledPin0 = 3;
int ledPin1 = 5;
int ledPin2 = 6;  // LED connected to digital pin 9

void setup() {
  // nothing happens in setup
  
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue0 = 0; fadeValue0 <= 255; fadeValue0 += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin0, fadeValue0);
    // wait for 30 milliseconds to see the dimming effect
    delay(100);

  }
 // analogWrite(ledPin0, 0);

    for (int fadeValue0 = 0; fadeValue0 <= 255; fadeValue0 += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue0);
    // wait for 30 milliseconds to see the dimming effect
    delay(100);
  }
 //   analogWrite(ledPin1, 0);

    for (int fadeValue0 = 0; fadeValue0 <= 255; fadeValue0 += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin2, fadeValue0);
    // wait for 30 milliseconds to see the dimming effect
    delay(100);
  }
//      analogWrite(ledPin2, 0);
}
