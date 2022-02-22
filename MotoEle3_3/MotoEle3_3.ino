//MotoEle3_3.ino

int vel=9,ad=6,at=7,val=0,bal=0,data=0,pa=1,data1=0;

void setup(){
	pinMode(ad,OUTPUT);
	pinMode(at,OUTPUT);
	pinMode(vel,OUTPUT);
	Serial.begin(9600);
	delay(500);
}


void loop(){
	if(Serial.available()>0){
		while(1){ 
			data=Serial.read();
			if(data>0){
				data1=data;
				val=map(data1,1,9,0,255);				
//				val=map(data1,48,57,0,255);
				Serial.println(data1);
				digitalWrite(ad,HIGH);
				digitalWrite(at,LOW);
				analogWrite(vel,val);
				arranque();
			}			
			else{
				Serial.println(data1);
				digitalWrite(ad,HIGH);
				digitalWrite(at,LOW);
				analogWrite(vel,val);
				arranque();
			}
		}
	}
	bal=analogRead(pa);	
	val=map(bal,0,740,0,100);
	analogWrite(vel,val);
	digitalWrite(ad,HIGH);
	digitalWrite(at,LOW);
	Serial.println(val);
	arranque();
}


void arranque(){
	delay(500);
	digitalWrite(ad,LOW);
	digitalWrite(at,LOW);
}


/*
clear all
delete(instrfind);
clc
*/
