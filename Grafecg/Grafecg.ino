
int lec,lec2,sl=7;

void setup() {
pinMode(sl,OUTPUT);
Serial.begin(9600);
}

void loop() {
  lec=analogRead(0);
  Serial.println(lec); 
  if(lec>618){
     digitalWrite(sl,HIGH);     
     delay(5);
     digitalWrite(sl,LOW);     
  }  
  delay(30);
}

