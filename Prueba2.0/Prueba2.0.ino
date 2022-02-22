
const double p=8,led=11;
volatile int t,t2;
char t1;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  digitalWrite(led,LOW);
}

void loop() {  
  if(Serial.available()>0){
    t1=Serial.read();
    t2=abs(t1-48);
    t=t2;
    Serial.println(t1);
  }
  delay(2000);
  Serial.println(t);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
  //delay((p-t)*100);                       // wait for a second
  }


