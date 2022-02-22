//Fotometro.ino

int e=PD_0,e1,e2=543,t,a;
float c;

void setup() {
	Serial.begin(9600);
}

void loop() {
	e1=analogRead(e);
	c=2.3*e1+121;
	t=e1/e2;
	a=-1*log(t);
	Serial.print("La concentración es ");
	Serial.println(c);
	Serial.print("La abosbancia es ");
	Serial.println(a);
	Serial.print("La transmitancia es ");
	Serial.print(t);
	delay(1000);
}

