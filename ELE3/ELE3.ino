
int r,s=1,N=20;
unsigned int h=0,f=0;


void setup() {
Serial.begin(9600);
}


void loop() {
for(int k=1;k<=N;k++){
  r=analogRead(s);
  f=f+r;
  if(k==20){
    if(h>0){
      f=f/N+1;
    }
    else{
      f=f/N;
    }
  }
  delay(1);
}
h++;
Serial.println(f);
delay(10);
}


