
#include "DHT.h"
#define DHTPIN 4 //pin conecta rsensor
#define DHTTYPE DHT11 //selecciona dht11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
Serial.begin(9600);
dht.begin();//inicia sensor
pinMode(13,OUTPUT);
}

void loop() {
digitalWrite(13,HIGH);
int h = dht.readHumidity();//leer humedad
int t = dht.readTemperature();// leer temperatura
Serial.print("  Humedad: ");
Serial.print(h);
Serial.println("%");
Serial.print("  Temperatura: ");
Serial.print(t);
Serial.println("°C");
Serial.println(" ");
Serial.println(" ");
delay(2000);
}




