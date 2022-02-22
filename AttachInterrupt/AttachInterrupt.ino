
int h=6,l=13;
bool p=LOW;

void setup() {
pinMode(l,OUTPUT);
pinMode(h,INPUT);
digitalWrite(l,LOW);
Serial.begin(9600);
attachInterrupt(digitalPinToInterrupt(3),funcion,RISING);
}

void loop() {
  digitalWrite(l,p);
}

void funcion(){
  p=!p; 
  Serial.println(p);
  //delayMicroseconds(4000);
}


