int la=PF_2;

void setup() {
Serial.begin(9600);
pinMode(la,OUTPUT);
}

void loop() {
  digitalWrite(la,LOW);
  Serial.println("Esta es una prueba");
  delay(1500);
  digitalWrite(la,HIGH);
  delay(200);
}
