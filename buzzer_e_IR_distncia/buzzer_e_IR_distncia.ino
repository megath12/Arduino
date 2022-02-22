#include <math.h> //Librería de funciones matemáticas
int buzzPin = 8;
int sensorPin = 0;
int sensorRead = 0;
double dist = 0;
long tiempo_previo = 0; // Variable para medir tiempo (inicial)
int intervalo; // Variable
void setup() {
pinMode(buzzPin, OUTPUT);
Serial.begin(9600);
delay(3000);
}

void loop() {
sensorRead = analogRead(sensorPin); //Lectura de voltaje del sensor (lo que mide)
dist = pow(3027.4 / sensorRead, 1.2134); //Fórmula vista en ejemplo anterior
unsigned long tiempo_actual = millis(); //millis() mide el tiempo de ejecución del programa
intervalo = 36 * dist - 320 ; //nuestra función f(x)

if (intervalo <= 50) { //Condición para evitar números negativos y el siseo del buzzer en pequeñas distancias
intervalo = 50;
}

if (intervalo > 2500) { //Condición para evitar largos períodos de tiempo entre sonidos
intervalo = 2500;
}

if (tiempo_actual - tiempo_previo >= intervalo) {
tiempo_previo = tiempo_actual;
tone(buzzPin, 4000, 20);
Serial.print("Distancia: ");
Serial.print(dist);
Serial.println(" cm.");
}
}

