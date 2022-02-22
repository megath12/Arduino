
void setup() {
Serial.begin(9600);
}

void loop(){
Serial.println(analogRead(1));
delay(50);

}
