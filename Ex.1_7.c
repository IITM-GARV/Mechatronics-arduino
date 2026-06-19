// Print a text in the serial monitor

iconst int buttonPin = 7;  // the number of the pushbutton pin
   // the number of the LED pin

// variables will change:
 // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  Serial.begin(9600);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  int buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    // turn LED on:
    Serial.println("pressed");
  } else {
    // turn LED off:
    Serial.println("NOT-pressed");
  }

  delay (1000);
}
