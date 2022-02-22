
int K,sa=6;

void setup() {
pinMode(sa,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
K=analogRead(sa);
Serial.println(K);
delay(200);
}

