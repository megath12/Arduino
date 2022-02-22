
int t=0;

void setup() {
Serial.begin(9600);
}

void loop() {
t=analogRead(A1);
Serial.println(t);
delay(100);
}
