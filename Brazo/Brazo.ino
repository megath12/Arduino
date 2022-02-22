//Brazo.ino

int e11=2,e12=3,e21=4,e22=5,e31=6,e32=7,p1=9,p2=10,p3=11;
int valor=160,v1,v2,v3;
int lec;

void setup() {
Serial.begin(9600);
pinMode(e11,OUTPUT);
pinMode(e12,OUTPUT);
pinMode(e21,OUTPUT);
pinMode(e22,OUTPUT);
pinMode(e31,OUTPUT);
pinMode(e32,OUTPUT);
pinMode(p3,OUTPUT);
pinMode(p2,OUTPUT);
pinMode(p1,OUTPUT);
apagar();
}


void loop() {

v1=map(analogRead(0),851,502,0,90);
v2=analogRead(1);
v3=map(analogRead(2),33,7,90,180);

if(Serial.available()>0){
	lec=Serial.read();
	if(lec=='1'){
		pe();
		digitalWrite(e11,LOW);
		digitalWrite(e12,HIGH);
		delay(100);
		apagar();
	}
	else if(lec=='2'){
		pe();
		digitalWrite(e12,LOW);
		digitalWrite(e11,HIGH);
		delay(100);
		apagar();
	}
	else if(lec=='3'){
		pe();
		digitalWrite(e21,LOW);
		digitalWrite(e22,HIGH);
		delay(100);
		apagar();
	}
	else if(lec=='4'){
		pe();
		digitalWrite(e22,LOW);
		digitalWrite(e21,HIGH);
		delay(100);
		apagar();
	}
	else if(lec=='5'){
		pe();
		digitalWrite(e31,LOW);
		digitalWrite(e32,HIGH);
		delay(100);
		apagar();
	}
	else if(lec=='6'){
		pe();
		digitalWrite(e32,LOW);
		digitalWrite(e31,HIGH);
		delay(100);
		apagar();
	}
}
/*Serial.print(v1);
Serial.print(" ");
Serial.print(v2);
Serial.print(" ");
Serial.println(v3);
*/
}




void apagar(){
	digitalWrite(e11,LOW);
	digitalWrite(e12,LOW);
	digitalWrite(e21,LOW);
	digitalWrite(e22,LOW);
	digitalWrite(e31,LOW);
	digitalWrite(e32,LOW);
	digitalWrite(p1,LOW);
	digitalWrite(p2,LOW);
	digitalWrite(p3,LOW);
}


void pe(){
  	analogWrite(p1,valor);
 	analogWrite(p2,valor); 	
 	analogWrite(p3,valor); 	
}

