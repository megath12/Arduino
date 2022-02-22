
#include <SoftwareSerial.h>
#include <TinyGPS.h> //Cargamos libreria del Gps
TinyGPS gps;
SoftwareSerial ss(4,3);// Hacemos un serial RX TX


void setup()
{
  Serial.begin(115200);//configuramos el serial 
  ss.begin(9600);
 }

void loop()
{
bool newData = false;
unsigned long chars;
 unsigned short sentences, failed;
{
 while (ss.available())
 {
      char c = ss.read();
Serial.write(c); // Esta linea es para ver los datos que fluyen en el gps
if (gps.encode(c)) // Vemos si los datos son valdos
newData = true;
    }
  }
  if (newData)
  {
    float flat, flon;
    unsigned long age;
    gps.f_get_position(&flat, &flon, &age);
    Serial.print("LAT=");// Imprimimos la latitud
    Serial.print(flat == TinyGPS::GPS_INVALID_F_ANGLE ? 0.0 : flat, 6);
    Serial.print(" LON=");//Imprimimos la longuitud 
    Serial.print(flon == TinyGPS::GPS_INVALID_F_ANGLE ? 0.0 : flon, 6);
  }
    Serial.println("---Sin datos---");
delay(1000);
}

