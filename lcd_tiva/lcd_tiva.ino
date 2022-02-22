// SCL  ----  A5
// SDA  ----  A4

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
int k;


void setup(){
  Wire.begin();
  lcd.begin(16, 2);

  lcd.clear();

  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("!Hola Mundito!");

  delay(3000);
}

void loop(){
  k=random()%5+1;
    lcd.setCursor(6, 1);
  lcd.print(k);
  //lcd.noBacklight();
  
  for(int c=0;c<4;c++){
  lcd.scrollDisplayLeft();
  delay(500);
  }
  for(int c=0; c<4;c++){
  lcd.scrollDisplayRight();
  delay(500); 
  }
  
  delay(1000);
}
