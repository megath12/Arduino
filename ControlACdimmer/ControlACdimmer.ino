const int led=7;
int L,y,sum=0,D=A0;


void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);
digitalWrite(led,LOW);
L=4000;
attachInterrupt(digitalPinToInterrupt(3),senhal,RISING);
}


void loop() {
//y=analogRead(D);
//L=map(y,0,1023,0,8000);
//Serial.println(L);
}


void senhal(){
  Serial.println(sum);
  sum=sum+1;
  delayMicroseconds(L);
  digitalWrite(led,HIGH);
  delayMicroseconds(500);
  digitalWrite(led,LOW);
}








//
//
//void senhal(){
////if(Serial.available()>0){
//// L=Serial.read();
//// }
//  //Serial.println("srgnsrbrlg");
//  delayMicroseconds(L);
//  digitalWrite(led,HIGH);
//  delayMicroseconds(200);
//  digitalWrite(led,LOW);
////  detachInterrupt(digitalPinToInterrupt(3));
//}
