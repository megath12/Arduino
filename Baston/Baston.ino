
#include <Servo.h>
Servo myservo; 
Servo myserv2;
int y1[]={90, 108, 118, 125, 130, 135, 138, 142, 146, 150, 150, 146, 142, 138, 135, 130, 125, 118, 108, 90};
int y2[]={90, 72, 62, 55, 50, 45, 42, 38, 34, 30, 30, 34, 38, 42, 45, 50, 55, 62, 72, 90};
int pos = 90,aux1=0,aux2=20;    
const int s1=5,s2=6;
long duration;


void setup() {
  myservo.attach(s1); 
  myserv2.attach(s2);
  myservo.write(pos);
  myserv2.write(pos);
  delay(5000);
}


void loop() {
  for (int po = 30; po < 50; po += 1){
    myservo.write(po);   
    myserv2.write(y1[aux1]);
    aux1=aux1+1;
    delay(20);
}

aux1=0;
 for (int po = 50; po < 70; po += 1){
    myservo.write(po);   
    myserv2.write(y2[aux1]);
    aux1=aux1+1;                  
    delay(20);
  }

aux1=0;
  for (int po = 70; po < 90; po += 1){
    myservo.write(po);   
    myserv2.write(y1[aux1]);
    aux1=aux1+1;
    delay(20);
}

aux1=0;
 for (int po = 90; po < 110; po += 1){
    myservo.write(po);   
    myserv2.write(y2[aux1]);
    aux1=aux1+1;
    delay(20);
}

aux1=0;
for (int po = 110; po < 130; po += 1){
    myservo.write(po);   
    myserv2.write(y1[aux1]);
    aux1=aux1+1;
    delay(20);
}

aux1=0;
for (int po = 130; po < 150; po += 1){
    myservo.write(po);   
    myserv2.write(y2[aux1]);
    aux1=aux1+1;
    delay(20);
}

aux2=20;
 for (int po1 = 150; po1 >= 130; po1 -= 1) { 
    myservo.write(po1);             
    myserv2.write(po1);    
    myserv2.write(y2[aux2]);
    aux2=aux2-1;         
    delay(20);
}

aux2=20;
for (int po1 = 130; po1 >= 110; po1 -= 1) { 
    myservo.write(po1);             
    myserv2.write(po1);    
    myserv2.write(y1[aux2]);
    aux2=aux2-1;         
    delay(20);
}

aux2=20;
for (int po1 = 110; po1 >= 90; po1 -= 1) { 
    myservo.write(po1);             
    myserv2.write(po1);    
    myserv2.write(y2[aux2]);
    aux2=aux2-1;         
    delay(20);
}

aux2=20;
for (int po1 = 90; po1 >= 70; po1 -= 1) { 
    myservo.write(po1);             
    myserv2.write(po1);    
    myserv2.write(y1[aux2]);
    aux2=aux2-1;         
    delay(20);
}

aux2=20;
for (int po1 = 70; po1 >= 50; po1 -= 1) { 
    myservo.write(po1);             
    myserv2.write(po1);    
    myserv2.write(y2[aux2]);
    aux2=aux2-1;         
    delay(20);
}

aux2=20;
for (int po1 = 50; po1 >= 30; po1 -= 1) { 
    myservo.write(po1);             
    myserv2.write(po1);    
    myserv2.write(y1[aux2]);
    aux2=aux2-1;         
    delay(20);
}

}

