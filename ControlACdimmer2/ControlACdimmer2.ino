
const int led=8;
int L=700;


void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);
digitalWrite(led,LOW);
attachInterrupt(digitalPinToInterrupt(3),senhal,RISING);
}


void loop() {
digitalWrite(led,LOW);
}


void senhal(){
//if(Serial.available()>0){
// L=Serial.read();
// }
  //Serial.println("srgnsrbrlg");
  digitalWrite(led,LOW);
  delayMicroseconds(L);
  digitalWrite(led,HIGH);
  delayMicroseconds(500);
  digitalWrite(led, LOW);
//  detachInterrupt(digitalPinToInterrupt(3));
}

