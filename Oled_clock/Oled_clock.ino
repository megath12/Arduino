#include <Time.h>
#include <TimeLib.h>
#include<OLED_I2C.h>


OLED myOLED(SDA,SCL,8);

extern uint8_t SmallFont{};
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];

void setup() {
  setTime(12,1,00,30,10,2018);
  myOLED.begin();
  myOLED.setFont(SmallFont);
}

void loop() {
  time_t t=now();
  int H=hour(t);
  int M=minute(t);
  int S=second(t);
  myOLED.setFont(SmallFont);
  myOLED.print("Pasdfgh",CENTER,0);
  myOLED.print("LABs",CENTER,10);

  myOLED.setFont(BigNumbers);
  myOLED.printNumI(H,LEFT,20);
  myOLED.setFont(SmallFont);
  myOLED.print(":",40,30);
  myOLED.setFont(BigNumbers);
  myOLED.printNumI(M,CENTER,20);
  myOLED.setFont(SmallFont);
  myOLED.print(":",90,30);
  myOLED.setFont(BigNumbers);
  myOLED.printNumI(S,RIGHT,20);

  myOLED.setFont(SmallFont);
  myOLED.print("qwerty.",CENTER,45);
  myOLED.print("No_pasa_nada",CENTER,55);

  delay(1000);
  myOLED.update();
  myOLED.clrScr();
}
