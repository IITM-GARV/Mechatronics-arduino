// Use 3 switches (7,8,9) to turn on/off the 3 LEDs

const int buttonPin0 = 7;
const int buttonPin1 = 8;
const int buttonPin2 = 9;  // the number of the pushbutton pin
const int ledPin0 = 11;
const int ledPin1 = 12;
const int ledPin2 = 13;    // the number of the LED pin

// variables will change:
 // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin0, INPUT_PULLUP);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  int buttonState0 = digitalRead(buttonPin0);
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);

  // LED0
  if (buttonState0 == LOW) {
    // turn LED on:
    digitalWrite(ledPin0, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin0, LOW);
  }

  // LED1
    if (buttonState1 == LOW) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin1, LOW);
  }

  // LED2
    if (buttonState2 == LOW) {
    // turn LED on:
    digitalWrite(ledPin2, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin2, LOW);
  }
}

