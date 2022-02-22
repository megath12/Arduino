
int sensor=0;
int pc=A6;
int led=7;
int enc=9;
int btn=3;
int b;
double con=0;

void setup() {
  Serial.begin(9600);
  Serial.println("Medidor de pulso cardiaco");
  pinMode(pc,INPUT);
  pinMode(led,OUTPUT);
  pinMode(enc,OUTPUT);
  pinMode(btn,INPUT);
  delay(2000);
}

void loop() {
  b=digitalRead(btn);
  if(b==HIGH){
  digitalWrite(enc,HIGH);
  sensor=0;
  }
  else{
  digitalWrite(enc,LOW);
  sensor=0;
  }
sensor=analogRead(pc);
sensor=sensor-500;
if (sensor>=19&&sensor<100){
  digitalWrite(led,HIGH);
delay(50);
  digitalWrite(led,LOW);
  con=con+.0050;
  }
  Serial.println("Pulso Cardiaco:  ");
  Serial.println(sensor);
  //Serial.println(con);
  Serial.println("");
  }

