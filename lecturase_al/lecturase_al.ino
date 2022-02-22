int en=PD_1,k;
int c[100];

void setup() {
pinMode(en,INPUT);
Serial.begin(9600);
}

void loop() {
  for(int n=0;n<=99;n++){
  c[n]=analogRead(en);
  k=c[n];
  delay(10);
  Serial.println(k);
  }
  }
