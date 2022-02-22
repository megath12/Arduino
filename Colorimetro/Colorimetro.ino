//Colorimetro.ino


const int g=10,b=11,r=9;

void setup(){

pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
pinMode(b,OUTPUT);
}


void loop(){

magenta();
delay(500);
negro();
delay(500);
amarillo();
delay(500);
cian();
delay(500);
}



void rojo(){
	analogWrite(b,0);
	analogWrite(g,0);
	analogWrite(r,255);
}

void azul(){
	analogWrite(b,255);
	analogWrite(g,0);
	analogWrite(r,0);
}

void verde(){
	analogWrite(b,0);
	analogWrite(g,255);
	analogWrite(r,0);
}

void blanco(){
	analogWrite(b,255);
	analogWrite(g,255);
	analogWrite(r,255);
}

void amarillo(){
	analogWrite(b,0);
	analogWrite(g,255);
	analogWrite(r,233);
}

void cian(){
	analogWrite(b,255);
	analogWrite(g,255);
	analogWrite(r,0);
}

void magenta(){
	analogWrite(b,135);
	analogWrite(g,0);
	analogWrite(r,245);
}

void negro(){
	analogWrite(b,0);
	analogWrite(g,0);
	analogWrite(r,0);
}



