
#include <OLED_I2C.h>
OLED  myOLED(SDA, SCL, 8);

extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];

int pc=A6,led=13,b,K;
double R1,R2;

void setup(){
  myOLED.begin();

  pinMode(pc,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  R1=millis();
  delay(2000);
}


void loop(){
  b=analogRead(pc);
    if (b>515&b<580){
      R2=millis(); 
      K=60/((R2-R1)/1000);
      R1=millis();
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      myOLED.setFont(SmallFont);
      myOLED.print("FRECUENCIA CARDIACA", CENTER, 5);
      myOLED.setFont(BigNumbers);
      myOLED.printNumI(K,CENTER,30);
      myOLED.update();
      myOLED.clrScr();
    }
}
