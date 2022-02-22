/*
Este codigo de ejemplo muestra el uso del modulo bluetooth HC-06
- Permite configurar el modulo a traves de la consola serial
- Permite enviar datos desde la consola a un dispositivo bluetooth
- Permite recibir datos desde un dispositivo bluetooth y mostrarlos en concola
*/
//Se importa la biblioteca para crear puerto serial virtual
#include <SoftwareSerial.h>
/*Creacion de puerto serial virtual.
Se crea como una variable de tipo SoftwareSerial.
Esto se denomina un "objeto" de la clase SoftwareSerial*/

SoftwareSerial BT1(4, 2);
// El pin 4 es Rx y el pin 2 es Tx
/*Declaramos la variable que usaremos para guardar los datos
que recibimos del bluetooth*/
String command = "";


void setup()
{
// Inicializacion de puerto serial
Serial.begin(9600);
// Inicializacion puerto serial virtual BT1
BT1.begin(9600);
delay(1000);
// Escribimos en consola
Serial.println("Configuracion bluetooth");
pinMode(3,OUTPUT);
delay(4000);
}


void loop()
{
  digitalWrite(3,HIGH);
// Si hay datos en el puerto serial del bluetooth
if (BT1.available()>0){
// Leemos todo el buffer
command = BT1.readString();
// Enviamos el texto recibido en consola
Serial.println(command);
}
// Si hay datos en el puerto serial
if (Serial.available()>0){
// Leemos hasta encontrar el caracter '\n'(carriage return)
String S = Serial.readStringUntil('\n');
// Imprimimos en consola el texto leido
Serial.println("---> " + S);
// Enviamos el texto al puerto serial del bluetooth
BT1.print(S);
// Enviamos un carriage return al puerto serial del bluetooth
BT1.print('\n');
Serial.println("");
}
}
/*Comandos utiles:AT+NAMENOMBRE -> Cambia el nombre a NOMBRE
AT+BAUDBPS -> Cambia la tasa de datos a BPS
AT+PINXXXX -> Cambia el pin a XXXX
*/


