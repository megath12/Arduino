
int f1,f2,f3,f4,f5,f6,f7,f8,f9;
int s1=PB_4,s2=PB_5,s3=PK_0;
int s4=PK_1,s5=PK_2,s6=PK_3;
int s7=PD_2,s8=PD_4,s9=PD_5;
int r,g,b;



void setup() {
   
  Serial.begin(9600);
  
}


void loop() {  
  
  f1=analogRead(s1);
  f2=analogRead(s2);
  f3=analogRead(s3);
  f4=analogRead(s4);
  f5=analogRead(s5);
  f6=analogRead(s6);
  f7=analogRead(s7);
  f8=analogRead(s8);
  f9=analogRead(s9);
  
  Serial.println(f1);
  Serial.println(f2);
  Serial.println(f3);
  Serial.println(f4);
  Serial.println(f5);
  Serial.println(f6);
  Serial.println(f7);
  Serial.println(f8);
  Serial.println(f9);
  Serial.println(" ");
  Serial.println(" ");
  delay(1000); 
  
}


