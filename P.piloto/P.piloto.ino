//P.piloto.ino

int y=1,N=20,n;
float L1=0.0;

void setup(){
	Serial.begin(9600);
	delay(2000);
}


void loop(){
	L1=prom();
	Serial.println(L1);
	delay(20);
}


float prom(){
	int L=0; 
	for(int p=1;p<=N;p++){
		L=analogRead(y);
		delayMicroseconds(50);	
		L1=L1+L;
	}
	L1=L1/N;
	return L1;
}

