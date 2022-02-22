#include <Time.h>//Incluimos la librería Time

void setup()
{   
  Serial.begin(115200);//Inicializamos el puerto serie.
  //Anotamos la hora y la fecha desde la que nuestro programa empezará a contar.
  //Formato: hora, minutos, segundos, días, mes, año
  setTime(19,28,50,20,10,2015);
}
void loop()
{   
  time_t t = now();//Declaramos la variable time_t t

//Imprimimos la fecha y lahora
  Serial.print(day(t));
  Serial.print(+ "/") ;
  Serial.print(month(t));
  Serial.print(+ "/") ;
  Serial.print(year(t)); 
  Serial.print( " ") ;
  Serial.print(hour(t));  
  Serial.print(+ ":") ;
  Serial.print(minute(t));
  Serial.print(":") ;
  Serial.println(second(t));
  delay(1000);//Esperamos 1 segundo

}
