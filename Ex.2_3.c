// Write a code to Turn-ON a LED when the proximity sensor senses an obstacle and vice-versa. 

int prox = 0;
int proxPin = A2;

void setup() {
  // put your setup code here, to run once:
  pinMode(proxPin, INPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  prox = digitalRead(proxPin);
  Serial.println(prox);

  if (prox == 0){
    digitalWrite(11, HIGH);
  }else{
    digitalWrite(11, LOW);
  }
  delay(50);
}
