//Lectura.ino

const int u=0;
int tempo=10,f;

void setup() {
	Serial.begin(9600);
	pinMode(u,INPUT);
}

void loop() {           
	f=analogRead(u);
	Serial.println(f);
	delay(tempo);
}
