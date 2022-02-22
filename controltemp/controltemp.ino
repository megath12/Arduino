//controltemp.ino


#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);


int h0=0,j0=1,j,j1,h,h1,o2,k,q,le,tem;
double kp=.5,ki=.001,kd=.2;
unsigned long currentTime, previousTime; 
double elapsedTime,error, lastError,input, output, setPoint, cumError, rateError; 
bool edo;
int	Ve=30;


void setup(){
	Wire.begin();
    lcd.begin(16, 2);
    lcd.clear();
    lcd.backlight();
    lcd.setCursor(2,0);
	pinMode(6,OUTPUT);
	Serial.begin(9600);
} 


void loop(){ 

	setPoint=Ve;
	for(q=1;q<21;q++){
		le=(analogRead(3)*500.0)/1023.0;
		input=le;
		output=computePID(input);
		o2=output;
		if(o2>255){
			o2=255;
		}
		else if(o2<0){
			o2=0;
		}
		analogWrite(o2,6);
		delay(50); 
		Serial.println("");
	}
	delay(5);
	lcd.setCursor(6, 1);
    lcd.print(le);
    Serial.println(o2);
}


double computePID(double inp){ 
	currentTime = millis();
	elapsedTime = (double)(currentTime - previousTime);
	error = setPoint - inp;
	cumError += error * elapsedTime;
	rateError = (error - lastError)/elapsedTime;
	double out = kp*error + ki*cumError + kd*rateError;
	lastError = error;
	previousTime = currentTime; 
	return out; 
}





