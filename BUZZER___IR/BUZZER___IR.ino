
int buzzer=8;
int v=A0;
bool t;
int k;

void setup() {
Serial.begin(9600);
}

void loop() {
delay(333);
k=digitalRead(v);
t=!k;

if(t==0){
  noTone(buzzer);
  Serial.print(t);
  Serial.print('-');
Serial.println("Sin Sonido");
}
else {
  tone(buzzer,587);          //frecuencia de RE 
  Serial.print(t);
  Serial.print('-');
Serial.println("Sonido");
}
}

