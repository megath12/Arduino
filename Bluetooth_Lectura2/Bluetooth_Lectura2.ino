//Bluetooth_Lectura2.ino


#include <SoftwareSerial.h>
SoftwareSerial dSerial(2,3); // RX, TX
const int valor=200,e11=7,e12=8,v1=9,v2=10,e21=11,e22=12,le=13,ad=830,an=539,iz=974,de=716,ad1=8,an1=5,iz1=9,de1=7;
int vl=0,ch,suma;
String dato;
// adelante, antes, izquierda, derecha 


void setup(){
	Serial.begin(9600);
    dSerial.begin(9600);      
	pinMode(e11,OUTPUT);
	pinMode(e12,OUTPUT);
	pinMode(e21,OUTPUT);
	pinMode(e22,OUTPUT);
	pinMode(v1,OUTPUT);
	pinMode(v2,OUTPUT);
	pinMode(le,OUTPUT);
	delay(500);
	suma=0;
	apagar();
}


void loop(){ 
	while (dSerial.available()>0){
		dato=dSerial.read();
		ch=dato.toInt();
		Serial.print(ch);
		suma=suma+ch;
		vl++;
  	}
	if(suma==an&&vl==an1){
 		digitalWrite(e11,HIGH);
 		digitalWrite(e21,HIGH);
 		pe();		 
 		delay(1000);		
 		apagar();
 	}
	if(suma==ad&&vl==ad1){
 		digitalWrite(e12,HIGH);
 		digitalWrite(e22,HIGH); 		
 		pe();		
 		delay(1000);		
 		apagar();
 	}
 	if(suma==de&&vl==de1){
 		digitalWrite(e11,HIGH);
 		digitalWrite(e22,HIGH);
 		pe();			
 		delay(400);		
 		apagar();
 	}
 	if(suma==iz&&vl==iz1){
 		digitalWrite(e12,HIGH);
 		digitalWrite(e21,HIGH);	 
 		pe();		
 		delay(400);		
 		apagar();
	}
	suma=0;
	vl=0;
	delay(100);
}


void apagar(){
	digitalWrite(e11,LOW);
	digitalWrite(e12,LOW);
	digitalWrite(e21,LOW);
	digitalWrite(e22,LOW);
	digitalWrite(v1,LOW);
	digitalWrite(v2,LOW);
}


void pe(){
  	analogWrite(v1,valor);
 	analogWrite(v2,valor); 	
}



//simscape multibodylink 
