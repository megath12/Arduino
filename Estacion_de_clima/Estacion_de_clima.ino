
#include "DHT.h"
#define DHTPIN 2 //pin conecta rsensor
#define DHTTYPE DHT11 //selecciona dht11
DHT dht(DHTPIN, DHTTYPE);

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
// SCL  ----  A5
// SDA  ----  A4

void setup() {
Serial.begin(9600);
dht.begin();//inicia sensor
  Wire.begin();
  lcd.begin(16, 2);
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Clima Actual");
  delay(3000);
}

void loop() {
int h = dht.readHumidity();//leer humedad
int t = dht.readTemperature();// leer temperatura

    lcd.setCursor(1, 0);
  lcd.print("Temperatura: ");
  lcd.setCursor(14, 0);
  lcd.print(t);
  lcd.setCursor(16, 0);
  lcd.print((char)223);
  lcd.setCursor(17, 0);
  lcd.print('C');
    lcd.setCursor(2, 1);
  lcd.print("Humedad: ");
  lcd.setCursor(11, 1);
  lcd.print(h);
lcd.setCursor(13, 1);
  lcd.print("%");
 
  for(int c=0;c<3;c++){
  lcd.scrollDisplayLeft();
  delay(1500);
  }
  for(int c=0; c<3;c++){
  lcd.scrollDisplayRight();
  delay(1500); 
  }
  
}

