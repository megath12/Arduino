// SCL  ----  A5
// SDA  ----  A4

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
float p=0;
int P;
int E;
int Dec;

void setup(){
  Serial.begin(9600);
  Wire.begin();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Concentracion");
  delay(1500);
}

void loop(){
  p=analogRead(A1);  
  p=map(p,801,45,0,552);
  E=p/100;
  P=p;
  Dec=P % 100;
  lcd.setCursor(6, 1);
  lcd.print(E);
  lcd.setCursor(7,1);
  lcd.print(".");
  lcd.setCursor(8,1);
  lcd.print(Dec);
  lcd.setCursor(11,1);
  lcd.print("%");
  Serial.println(analogRead(A1));
  delay(10);
}

