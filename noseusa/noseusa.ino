
#include <Wire.h>							//comunicacion de arduino con dispostivos I^2C
#include <LiquidCrystal_I2C.h>				//
LiquidCrystal_I2C lcd (0x27, 16, 2);		//LCD de 16 columnas por 2 filas
const int L=1;
int y,y1;									//declaracion de variablesconstantes


void setup() {
  pinMode(L,INPUT);							//puerto como salida
  Serial.begin(9600);						//comunicacion serial a 9600 baudios
  Wire.begin();								//inicia comunicacion con dispositivo I^2C
  lcd.begin(16, 2);							//iniciar comunicacion con lcd
  lcd.clear();								//
  lcd.backlight();							//
  lcd.setCursor(3,0);						//
  lcd.print("Goniometro");					//propiedades de LCD
  delay(2000);								//espera de 2s
  lcd.clear();								//
}


void loop() {
  y=analogRead(L);							//lectura analogica
  y1=map(y,1023,393,169,5);					//modifica el valor de y de un rango 1(1023,393) a un rango 2(169,5)
  Serial.println(y1);						//imprimir el valor de y1
  lcd.setCursor(4, 0);						//posicion LCD
  lcd.print("Angulo");						//escribir en LCD
  lcd.setCursor(3, 1);						//
  lcd.print(y1);							//mandar mediante comunicacion serial el valor de y1
  lcd.setCursor(7, 1);						//
  lcd.print("Grados");						//
  delay(400);								//espera 0.4s
  lcd.clear();								//limpiar LCD
}







