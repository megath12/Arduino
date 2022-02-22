int J=4,p,L,S=PF_1,B=PF_2,K=PF_3,data_received; 
 void setup(){
  pinMode(K,OUTPUT);
  pinMode(S,OUTPUT); 
  pinMode(B,OUTPUT); 
  pinMode(J,INPUT);
  Serial3.begin(9600);
  Serial.begin(9600);
}

void loop(){ 
    if (Serial3.available()){
      data_received = Serial3.read();  
      switch(data_received){
       case '1':
       digitalWrite(S,HIGH); 
       delay(500);  
       digitalWrite(S,LOW);
       case '2':
       digitalWrite(B,HIGH); 
       delay(500);  
       digitalWrite(B,LOW);
       case '3':
       digitalWrite(K,HIGH); 
       delay(500);  
       digitalWrite(K,LOW);    
       break;
       default:
       Serial.println("Escribe un numero");
       delay(1000);
      }
    }
}
