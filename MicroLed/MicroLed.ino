
int micPin = 4;
int ledPin = 8;
boolean micRead;

boolean state = LOW ;

void setup() {
pinMode(ledPin,OUTPUT);
pinMode(micPin,INPUT);
Serial.begin(9600);
}

void loop() {
micRead = digitalRead(micPin);
  if (micRead == HIGH){
  state = !state;
  digitalWrite(ledPin,state);
  delay(500);
  }
Serial.print(state);
}

