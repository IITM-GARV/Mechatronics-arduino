// Write a code to start/stop servo sweeping by receiving commands (Ex: 1- ON, 2-OFF) serially and wait till the user enters a valid command. 

#include <Servo.h>

Servo myServo;
int pos = 0;
bool sweeping = false;

void setup() {
  Serial.begin(9600);
  myServo.attach(5);   // Servo signal pin connected to D9
  Serial.println("Enter command: 1=ON, 2=OFF");
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();

    if (cmd == '1') {
      sweeping = true;
      Serial.println("Sweeping started");
    }
    else if (cmd == '2') {
      sweeping = false;
      Serial.println("Sweeping stopped");
    }
    else {
      Serial.println("Invalid command! Enter 1=ON, 2=OFF");
    }
  }

  if (sweeping) {
    // Sweep forward
    for (pos = 0; pos <= 180; pos++) {
      myServo.write(pos);
      delay(15);
      if (!sweeping) break;  // stop immediately if command received
    }
    // Sweep backward
    for (pos = 180; pos >= 0; pos--) {
      myServo.write(pos);
      delay(15);
      if (!sweeping) break;
    }
  }
}
