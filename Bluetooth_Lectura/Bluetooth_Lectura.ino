//Bluetooth_Lectura.ino

const int e11=7,e12=8,v1=9,v2=10,e21=11,e22=12,le=13;
int valor,ch,suma;
char a1,a2,a3;
bool vel,ad,at,de,iz,edo;
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3); // RX, TX
String data;
//char* a="adelante ";
String a,b,c,d;

void setup(){
	Serial.begin(9600);
    mySerial.begin(9600);      
	pinMode(e11,OUTPUT);
	pinMode(e12,OUTPUT);
	pinMode(e21,OUTPUT);
	pinMode(e22,OUTPUT);
	pinMode(v1,OUTPUT);
	pinMode(v2,OUTPUT);
	pinMode(le,OUTPUT);
	delay(500);
	edo=0;
	valor=0;
	suma=0;
//	apagar();
}


void loop(){ 
	while (mySerial.available()>0){
//    	data=mySerial.readString();
	   	data=mySerial.read();
	   	ch=data.toInt();
//	   	valor=data.toFloat();
//		ch=atoi(data);
	  	a=data[0];
  		b=data+b;
//		Serial.print(a);
//		Serial.print(valor);
//		Serial.print(ch);
	   	suma=suma+ch;
	   	valor++;
  	}
  	Serial.println(suma);
//	if(a1=="1"){
//		digitalWrite(le,edo);
//		edo=!edo;
//	}
	
	suma=0;
	b="0";
	delay(1000);
}




