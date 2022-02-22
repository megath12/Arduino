
#include "DHT.h"
#define DHTPIN 2 //pin conecta rsensor
#define DHTTYPE DHT11 //selecciona dht11
DHT dht(DHTPIN, DHTTYPE);

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
// SCL  ----  A5
// SDA  ----  A4
int sn=A0;
double v=0;

void setup() {
  pinMode(sn,INPUT);
  Serial.begin(9600);
  dht.begin();//inicia sensor
  Wire.begin();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("Temp.Ambiental");
  delay(3000);
}

void loop() {
v=(analogRead(sn)*5/1023)*10;
int t = dht.readTemperature();// leer temperatura

    lcd.setCursor(0, 0);
  lcd.print("Temp.Modulo: ");
  lcd.setCursor(13, 0);
  lcd.print(t);
  lcd.setCursor(15, 0);
  lcd.print((char)223);
  lcd.setCursor(16, 0);
  lcd.print('C');
    lcd.setCursor(0, 1);
  lcd.print("Temp.Sensor: ");
  lcd.setCursor(13, 1);
  lcd.print("15");                  //v  
  lcd.setCursor(15, 1);
  lcd.print((char)223);
  lcd.setCursor(16, 1);
  lcd.print('C');
 
  for(int c=0;c<1;c++){
  lcd.scrollDisplayLeft();
  delay(1500);
  }
  for(int c=0; c<1;c++){
  lcd.scrollDisplayRight();
  delay(1500); 
  }
  
}
