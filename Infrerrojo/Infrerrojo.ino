
int buzzer=8;
int v=A0;
bool t;
int k;

void setup() {
Serial.begin(9600);
}

void loop() {
delay(500);
k=digitalRead(v);
t=!k;
Serial.print('K');
Serial.print(k);
if(t==0){
  noTone(buzzer);
  Serial.print(t);
Serial.println("Sin Sonido");
}
else {
  tone(buzzer,523);
  Serial.print(t);
Serial.println("Sonido");
}
}

