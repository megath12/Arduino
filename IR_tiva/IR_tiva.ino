int ir=PB_5,edo,led=PF_1;

void setup() {
  Serial.begin(9600);
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
}

void loop() {
  edo=digitalRead(ir);
  Serial.println(edo);
  if(edo==LOW){
    digitalWrite(led,HIGH);
    delay(250);
    digitalWrite(led,LOW);
  }  
}
