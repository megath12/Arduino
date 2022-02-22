void setup()
{
  Serial.begin(9600);
}
 
char cadena[30]; //Creamos un array que almacenará los caracteres que escribiremos en la consola del PC. Le asignamos  un tope de caracteres, en este caso 30
byte posicion=0;  //Variable para cambiar la posición de los caracteres del array
int valor;  //Variable del valor entero
 
void loop()
{
  if(Serial.available()) //Nos dice si hay datos dentro del buffer
  {
    memset(cadena, 0,sizeof(cadena));//memset borra el contenido del array  "cadena" desde la posición 0 hasta el final sizeof
 
    while(Serial.available()>0) //Mientras haya datos en el buffer ejecuta la función
    {
      delay(5); //Poner un pequeño delay para mejorar la recepción de datos
      cadena[posicion]=Serial.read();//Lee un carácter del string "cadena" de la "posicion", luego lee el siguiente carácter con "posicion++"
      posicion++;
    }
 
    valor=atoi(cadena);//Convertimos la cadena de caracteres en enteros
    Serial.println(valor+2);//Imprimimos el valor sumandole un valor +2
    posicion=0;//Ponemos la posicion a 0
  }
 
}
