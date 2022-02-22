
int s=PE_4,t1,le,le2,le3,la=PD_1,ld=PD_0;

void setup() {
  pinMode(s,OUTPUT);
  pinMode(ld,INPUT); 
  Serial.begin(9600); 
}


void loop(){
  le=digitalRead(ld);
  if(le==HIGH){
     delayMicroseconds(1000);
     le2=analogRead(la);
     t1=map(le2,0,4095,100,7000);   
     delayMicroseconds(t1);
     digitalWrite(s,HIGH);
     delayMicroseconds(200);
     digitalWrite(s,LOW);
  }
}



