
int r=6;

void setup(){
  pinMode(r,OUTPUT);
  digitalWrite(r,LOW);
  delay(2000);
}

  void loop(){
  analogWrite(r,1);
  delay(1);
  analogWrite(r,0);
  delay(15);
}


