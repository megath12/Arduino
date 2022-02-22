
#include <Adafruit_MLX90614.h>
Adafruit_MLX90614 tempSensor;
double t;
void setup() {
Serial.begin(9600);
Wire.begin();
}

void loop() {
t=tempSensor.readObjectTempF();
Serial.println(t);
delay(1000);
}
