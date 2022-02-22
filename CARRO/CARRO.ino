
bool L1=0,C1=0;
int G=3,H=4,J=5,K=6,L=1,C=0,m ,M=8,data_received;
#include <SoftwareSerial.h>
SoftwareSerial mySerial(11, 10); // RX, TX


void setup(){
  pinMode(G,OUTPUT); 
  pinMode(H,OUTPUT); 
  pinMode(K,OUTPUT); 
  pinMode(J,OUTPUT);
  pinMode(L,OUTPUT);
  pinMode(C,OUTPUT);
  mySerial.begin(9600);
  digitalWrite(L,LOW);          
  digitalWrite(C,LOW);          
}


void loop(){ 
    if (mySerial.available()>0){
      data_received = mySerial.read();  
      if (data_received == '2'){
        digitalWrite(G,HIGH);  
        digitalWrite(H,LOW); 
        digitalWrite(J,LOW);
        digitalWrite(K,HIGH);   
        apagar();
      }
      else if (data_received == '5'){
        digitalWrite(G,LOW);  
        digitalWrite(H,HIGH); 
        digitalWrite(J,HIGH);
        digitalWrite(K,LOW); 
        apagar();
      }
      else if (data_received == '1'){
        digitalWrite(G,HIGH);  
        digitalWrite(H,LOW); 
        digitalWrite(J,HIGH);
        digitalWrite(K,LOW);
        apagar();          
      }
      else if (data_received == '3'){
        digitalWrite(G,LOW);  
        digitalWrite(H,HIGH); 
        digitalWrite(J,LOW);
        digitalWrite(K,HIGH);
        apagar();         
    }
    else if(data_received == '7'){
        L1=!L1;
        C1=!C1;
        digitalWrite(L,L1);
        digitalWrite(C,C1);   
    }
    else if(data_received == '9'){
        tone(M,410);
        delay(700);
        noTone(M);
    }
  }
}

void apagar(){
  delay(400);  
  digitalWrite(G,LOW);  
  digitalWrite(H,LOW); 
  digitalWrite(J,LOW);
  digitalWrite(K,LOW); 
}



