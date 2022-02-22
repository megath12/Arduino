//Silla3.ino


const int e11=7,e12=8,v1=9,v2=10,e21=11,e22=12,a=5,b=3,c=4,d=6,e=2;
int valor,vel,ad,at,de,iz,edo,q1=0,q2=1,q3=2,q4=3,a1,a2;

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
	a1=analogRead(q1);
	a2=analogRead(q2);


 	if(a1>280&&a1<300){
 		pe();
 		digitalWrite(e11,HIGH);
 		digitalWrite(e21,HIGH); 
 		delay(1000);		
 		apagar();
 	}
	if(a1>75&&a1<90){///////
 		pe();		
 		digitalWrite(e12,HIGH);
 		digitalWrite(e22,HIGH); 		
 		delay(1000);		
 		apagar();
 	}
 	if(a2>310&&a2<315){
 		pe(); 		
 		digitalWrite(e11,HIGH);
 		digitalWrite(e22,HIGH);	
 		delay(400);		
 		apagar();
 	}
 	if(a2>260&&a2<268){
 		pe();
 		digitalWrite(e12,HIGH);
 		digitalWrite(e21,HIGH);	
 		delay(400);		
 		apagar();
	}
	Serial.print(a1);
	Serial.print(" - ");
	Serial.println(a2);
	delay(200);
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


