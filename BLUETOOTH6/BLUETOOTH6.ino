int J=4,p,L,S=12,B=13,data_received; 
 void setup(){
  pinMode(S,OUTPUT); 
  pinMode(B,OUTPUT); 
  pinMode(J,INPUT);
  Serial.begin(9600);
}

void loop(){ 
    if (Serial.available()){
      data_received = Serial.read();  
      if (data_received == '1')
      {
       digitalWrite(S,HIGH); 
       delay(500);  
       digitalWrite(S,LOW);
      }
      else if (data_received == '2')
      {
       digitalWrite(B,HIGH); 
       delay(500);  
       digitalWrite(B,LOW);
      }
      else
      {
        delay(500);
        Serial.write("-----");
      }
    }
}
