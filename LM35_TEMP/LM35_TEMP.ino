//LM35 vita plana     VCC-Analog-Ground


float P=0;
int F=A2;

void setup() {
pinMode(F,INPUT);
Serial.begin(9600);
}

void loop() {
//P=(analogRead(F)*500.0)/943.0;       
P=(analogRead(F)*500.0)/1023.0;
Serial.print("Temperatura: ");
Serial.print(P);
Serial.println(" °C");
delay(1000);
}


