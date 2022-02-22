
#include<SoftwareSerial.h>
SoftwareSerial mys(2,3);
int ad=5,at=6,val=127,data=0,pa=1;

void setup(){
	pinMode(at,OUTPUT);
	pinMode(ad,OUTPUT);
	mys.begin(9600);
	delay(2000);
}

void loop(){
	//val=analogRead(pa);
	if(mys.available()>=0){
		data=mys.read();
		val=(data*2.5);
	}
	analogWrite(val,ad);
	arranque();
	mys.println(val);
}

void arranque(){
	delay(100);
	digitalWrite(ad,LOW);
	digitalWrite(at,LOW);
}
