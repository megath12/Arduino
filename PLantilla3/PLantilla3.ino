//PLantilla3.ino



#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);
int n,f,g,h,h1;



void setup(){
Serial.begin(9600);
Wire.begin();
lcd.begin(16, 2);
lcd.clear();
lcd.backlight();
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
pinMode(12,INPUT);
pinMode(13,INPUT);
pinMode(14,INPUT);
pinMode(15,INPUT);
pinMode(16,INPUT);
lcd.setCursor(3,0);
lcd.print("Plantilla");
lcd.setCursor(0,1);
lcd.print("Zonas Presionadas");
delay(2000);
lcd.clear();
}



void loop(){
g=0;
h=0;
h1=0;
for(int k=2;k<=16;k++){
	n=k;
	f=digitalRead(k);
	if(f==HIGH){
		g++;
		if(n<11){
			Serial.print("1");		
			lcd.setCursor(h, 0);
  			lcd.print(n-1);
  			h=h+2;	
		}
		else{
			Serial.print("1");		
			lcd.setCursor(h1, 1);
  			lcd.print(n-1);
  			h1=h1+3;	
		}
	}
	else{
		Serial.print("0");
		lcd.setCursor(0, 6);
  		lcd.print("0");
	}
}
Serial.println("");
delay(1000);
lcd.clear();
}


