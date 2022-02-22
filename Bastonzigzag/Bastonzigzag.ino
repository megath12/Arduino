 
#include <Servo.h>
Servo myservo; 
Servo myserv2;
int pos = 90,aux1=0,aux2=19,distance,A=130,M=90,B=50,l=500;    
const int s1=5,s2=6,trigPin=9,echoPin=10;
long duration;
int a=30, b=50, c=70, d=90, e=110, f=130, g=150, t=A3,y=A4,u=A5,q,r;

void setup() {
  myservo.attach(s1); 
  myserv2.attach(s2);
  myservo.write(pos);
  myserv2.write(pos);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  pinMode(y,OUTPUT);
  pinMode(u,OUTPUT);
  pinMode(t,OUTPUT);
  delay(5000);
}


void loop() {

myservo.write(M);
myserv2.write(a);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(dstance);
} 
q=5-(5*(r/200));
analogWrite(q,t);
delay(l);
digitalWrite()

myservo.write(A);
myserv2.write(b);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,t);

myservo.write(M);
myserv2.write(c);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
q=5-(5*(r/200));
analogWrite(q,y);
delay(l);


myservo.write(B);
myserv2.write(d);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,y);

myservo.write(M);
myserv2.write(e);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,y);

myservo.write(A);
myserv2.write(f);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,u);

myservo.write(M);
myserv2.write(g);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,u);

myservo.write(B);
myserv2.write(f);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,u);

myservo.write(M);
myserv2.write(e);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,y);

myservo.write(A);
myserv2.write(d);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,y);

myservo.write(M);
myserv2.write(c);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,y);

myservo.write(B);
myserv2.write(b);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,t);

myservo.write(M);
myserv2.write(a);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance<=200){
  r=distance;
Serial.print("Distance: ");
Serial.println(distance);
}
delay(l);
q=5-(5*(r/200));
analogWrite(q,t);

}
