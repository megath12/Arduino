  
int sensor=0,pc=A1,led=13,b;
double k;
unsigned long r,t3;
volatile long t1=0,t2=0;


void setup() {
  Serial.begin(9600);
  //Serial.println("Medidor de pulso cardiaco");
  //pinMode(pc,INPUT);
  //pinMode(led,OUTPUT);
  //delay(2000);
}


void loop() {
b=analogRead(1);
//digitalWrite(led,LOW);
//if (b>520&b<600){
if (b>630){
  t2=millis();
  t3=abs(t1-t2);
  r=60/t3*1000;
  //Serial.print("Pulso Cardiaco:  ");
  Serial.println(r);  
//  digitalWrite(led,HIGH);
//  delay(20);
//  digitalWrite(led,LOW);
  t1=millis();
  delay(200);
  }
delay(20);
}
