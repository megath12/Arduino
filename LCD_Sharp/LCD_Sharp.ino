

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
int k=12;

int sensorPin = 0;
int sensorRead=0;
double dist=0;


void setup(){
  Wire.begin();
  lcd.begin(16, 2);

  lcd.clear();

lcd.backlight();
//  lcd.setCursor(2,0);
//  lcd.print("!Hola!");

pinMode(k,OUTPUT);
delay(3000);
}

void loop(){
digitalWrite(k,HIGH);
sensorRead = analogRead(sensorPin);
dist = pow(3027.4/sensorRead, 1.2134);
  
  lcd.setCursor(1, 0);
  lcd.print("Distancia (cm)");
  
  lcd.setCursor(5, 1);
  lcd.print(dist);
  //lcd.noBacklight();
  
  delay(500);
}
