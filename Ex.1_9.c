// Vary the intensity of R in the RGB LED in the pin. 3 using a potentiometer in pin A2 

int ledPin0 = 3;
int ledPin1 = 5;
int ledPin2 = 6;  // LED connected to digital pin 9

void setup() {
  // nothing happens in setup
  
}

void loop() {
  // fade in from min to max in increments of 5 points:
  int sensorValue = analogRead(A2);
  analogWrite(ledPin0,  sensorValue*5);
  analogWrite(ledPin1, HIGH);
  analogWrite(ledPin2, HIGH);
 }

