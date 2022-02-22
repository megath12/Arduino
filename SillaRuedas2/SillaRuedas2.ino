//SillaRuedas2.ino


const int e11=7,e12=8,v1=9,v2=10,e21=11,e22=12,a=5,b=3,c=4,d=6,e=2;
int valor;
bool vel,ad,at,de,iz,edo;

void setup() {
	Serial.begin(9600);
	pinMode(e11,OUTPUT);
	pinMode(e12,OUTPUT);
	pinMode(e21,OUTPUT);
	pinMode(e22,OUTPUT);
	pinMode(v1,OUTPUT);
	pinMode(v2,OUTPUT);
	pinMode(a,INPUT);
	pinMode(b,INPUT);
	pinMode(c,INPUT);
	pinMode(d,INPUT);
	pinMode(e,INPUT);
	delay(500);
	edo=0;
	apagar();
}

void loop() {
	vel=digitalRead(e);
	ad=digitalRead(a);
	at=digitalRead(b);
	iz=digitalRead(c);
	de=digitalRead(d);

	if(vel==HIGH){
		edo=!edo;		
		delay(1000);	
	}
 	
	valor=125+edo*125;

 	if(ad==HIGH){
 		pe();
 		digitalWrite(e11,HIGH);
 		digitalWrite(e21,HIGH); 
 		delay(1000);		
 		apagar();
 	}
	if(at==HIGH){
 		pe();		
 		digitalWrite(e12,HIGH);
 		digitalWrite(e22,HIGH); 		
 		delay(1000);		
 		apagar();
 	}
 	if(de==HIGH){
 		pe(); 		
 		digitalWrite(e11,HIGH);
 		digitalWrite(e22,HIGH);	
 		delay(400);		
 		apagar();
 	}
 	if(iz==HIGH){
 		pe();
 		digitalWrite(e12,HIGH);
 		digitalWrite(e21,HIGH);	
 		delay(400);		
 		apagar();
	}
}


void apagar(){
	digitalWrite(e11,LOW);
	digitalWrite(e12,LOW);
	digitalWrite(e21,LOW);
	digitalWrite(e22,LOW);
	digitalWrite(v1,LOW);
	digitalWrite(v2,LOW);
	delay(10);
}

void pe(){
  	analogWrite(v1,valor);
 	analogWrite(v2,valor); 	
}

