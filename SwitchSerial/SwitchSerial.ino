
bool y=0;
char k;
int f=13;

void setup(){
Serial.begin(9600);
pinMode(f,OUTPUT);
delay(2000);
//Serial.println("Escribe...");
}

void loop(){
if(Serial.available()>0){
  k=Serial.read(); 
  //Serial.println(k);
  switch(k){
  case '1':
    //Serial.println("El num 1 prro");
    y=!y;
    digitalWrite(f,y);
    Serial.println(k);
    delay(500);
    break;
  case '2':
    //Serial.println("El 2 come arroz");
    break;
  case '3':
    //Serial.println("El 3 le pega al reves");
    break;
  default: 
    Serial.print(k);
    delay(500);
    //Serial.println(" Escribe bien cabro reweon culiao");
  }
  }
else{
Serial.println("120");
delay(500);
}
}




