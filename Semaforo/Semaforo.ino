int red=7;
int yel=9;
int gre=11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(gre, OUTPUT);
}

void loop() {
  digitalWrite(gre, HIGH);  
  delay(4000);            
  for (int t=0; t<=4; t=t+1)
  {
  digitalWrite(gre, LOW);   
  delay(500);             
  digitalWrite(gre, HIGH);  
  delay(500);
  }
  digitalWrite(gre, HIGH);   
  digitalWrite(yel, HIGH);  
  delay(500);
  digitalWrite(gre, LOW);   
  digitalWrite(yel,HIGH);   
  delay(2000);
  digitalWrite(red, HIGH);  
  digitalWrite(yel, LOW); 
  delay(5000);
  digitalWrite(red, LOW);   
  digitalWrite(yel, HIGH);   
  delay(1000);
  digitalWrite(yel,LOW);   
}
