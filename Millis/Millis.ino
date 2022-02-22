double time;

void setup() {
Serial.begin(9600);
}

void loop() {
time=millis();

Serial.print("Tiempo: ");
Serial.println(millis());
}
