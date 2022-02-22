
int vel=9,ad=6,at=7,val=0,bal=0,data=0,pa=1,data1=0;

void setup(){
	pinMode(ad,OUTPUT);
	pinMode(at,OUTPUT);
	pinMode(vel,OUTPUT);
	Serial.begin(9600);
	delay(2000);
}


void loop(){
	if(Serial.available()>0){
		while(1){ 
			data=Serial.read();
			//Serial.println(data);
			if(data>0){
				data1=data;
				val=map(data1,48,57,0,255);
				Serial.print(data1);
				Serial.print(" - ");
				Serial.println(val);
				digitalWrite(ad,HIGH);
				digitalWrite(at,LOW);
				analogWrite(vel,val);
				arranque();
			}			
			else{
				Serial.print(data1);
				Serial.print(" - ");
				Serial.println(val);
				digitalWrite(ad,HIGH);
				digitalWrite(at,LOW);
				analogWrite(vel,val);
				arranque();
			}
		}
	}
	bal=analogRead(pa);	
	val=map(bal,0,1023,0,255);
	analogWrite(vel,val);
	digitalWrite(ad,HIGH);
	digitalWrite(at,LOW);
	Serial.print(bal);
	Serial.print(" - ");
	Serial.println(val);
	arranque();
}


void arranque(){
	delay(100);
	digitalWrite(ad,LOW);
	digitalWrite(at,LOW);
}


