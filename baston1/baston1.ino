

#include <Servo.h>
Servo myservo; 
Servo myserv2;

int al=12,distance,pos = 90;    
const int trigPin = 9,echoPin = 10,s1=5,s2=6;
long duration;


void setup() {
  myservo.attach(s1); 
  myserv2.attach(s2);
  pinMode(al,OUTPUT);
  myservo.write(pos);
  myserv2.write(pos);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  digitalWrite(al,HIGH);
  delay(5000);
}


void loop() {
  for (int po = 30; po <= 150; po += 2){
    myservo.write(po);              
    myserv2.write(po);
    delay(18);                  
}
  for (int po1 = 150; po1 >= 30; po1 -= 1) { 
    myservo.write(po1);             
    myserv2.write(po1);              
    delay(18);                    
  }
}

