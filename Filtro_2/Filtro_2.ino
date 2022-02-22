//Filtro_2.ino

float senv=0;

void setup(){
	Serial.begin(9600);
}

void loop(){
	senv=promedio(100,1);
	Serial.println(senv);
	delay(50);
}


float promedio(int nlect,int senpin){
	float aux=0.0;
	for(int con=1; con<=nlect; con++){
		aux=aux+analogRead(senpin);
		delayMicroseconds(10);
	}
	return (aux/nlect);
}


