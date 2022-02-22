
int s=PE_4,t1,le,le3,la=PD_1,ld=PD_0;
int l=PF_2,p2,p3;
String p;

void setup() {
  pinMode(s,OUTPUT);
  pinMode(ld,INPUT); 
  Serial.begin(9600); 
  digitalWrite(s,LOW);

}


void loop(){
  le=digitalRead(ld);
  if(le==HIGH){
     if(Serial.available()>0){
          p=Serial.read();
          p3=p.toInt();
          p2=((9-(p3-48)))*(255/9);
     }
     delayMicroseconds(1000);
     t1=map(p2,0,255,100,7000);   
     delayMicroseconds(t1);
     digitalWrite(s,HIGH);
     delayMicroseconds(200);
     digitalWrite(s,LOW);
  }
}


