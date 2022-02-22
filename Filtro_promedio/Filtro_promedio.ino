int r,s=1; 
unsigned int h=0,f=0;

void setup() {
Serial.begin(9600);
}

void loop() {
for(int k=1;k<=20;k++){
  r=analogRead(s);
  f=f+r;
  if(k==20){
    if(h>0){
      f=f/21;
    }
    else{
      f=f/20;
    }
  }
}
h++;
Serial.println(f);
delay(20);

}
