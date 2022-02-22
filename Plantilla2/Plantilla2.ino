//Plantilla2.ino

int led = 13,t,y,a=5,b=4;

void setup() {
	Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
    t=analogRead(a);
    y=analogRead(b);
    Serial.println(t);          // wait for a second
    Serial.println(y);
    delay(1000);
}
