//Manobio4.ino

int l,r,r1;

void setup() {
Serial.begin(9600);
}

void loop() {
r=map(analogRead(0),512,296,90,145);
r1=map(analogRead(1),850,1024,0,50);
Serial.println(r1);
delay(500);
}


