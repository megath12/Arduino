//CArroPendulo.ino



const int ad=7,dd=8,v1=5,v2=6,ai=9,di=10;
int vel=0,r=300;

void setup(){
	pinMode(v1,OUTPUT);
	pinMode(v2,OUTPUT);
	pinMode(ad,OUTPUT);
	pinMode(ai,OUTPUT);
	pinMode(dd,OUTPUT);
	pinMode(di,OUTPUT);
}


void loop(){	
	vel=100;
	adelante();
	med();
	atras();
	med();
}


void med(){
	digitalWrite(ad,LOW);
	digitalWrite(ai,LOW);
	digitalWrite(di,LOW);
	digitalWrite(dd,LOW);
}


void adelante(){
	digitalWrite(ad,LOW);
	digitalWrite(ai,LOW);
	digitalWrite(dd,HIGH);
	digitalWrite(di,HIGH);
	analogWrite(v1,vel);
	analogWrite(v2,vel);
	delay(r);
}


void atras(){	
	digitalWrite(ad,LOW);
	digitalWrite(ai,LOW);
	digitalWrite(di,HIGH);
	digitalWrite(dd,HIGH);
	analogWrite(v1,vel);
	analogWrite(v2,vel);
	delay(r);
}





