
//crucecero.ino

int t,t1,s=5;

void setup() {
attachInterrupt(digitalPinToInterrupt(3),funcion,RISING);
pinMode(s,OUTPUT);
}

void loop() {
}

void funcion(){
	t=analogRead(0);
	t1=map(t,0,1023,100,1000);	 
	delay(t1);
	digitalWrite(s,HIGH);
	delayMicroseconds(200);
	digitalWrite(s,LOW);
}




