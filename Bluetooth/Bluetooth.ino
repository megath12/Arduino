
const int LED =13,data_received;
const int BTPWR=12;

char nombreBT[]="RedBULL";
char pin[5]="1289";
char velocidad='4';//9600
char modo='1';

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BTPWR, OUTPUT);

  Serial.begin(38400); //velocidad de BT en modo configuracion

  digitalWrite(BTPWR, HIGH);
  delay(3000);
  Serial.print("AT\r\n");
  digitalWrite(LED, HIGH);

  Serial.print("AT+NAME");
  Serial.print(nombreBT);
  Serial.print("\r\n");

  Serial.print("AT+PIN:"); //AT+PSWD:
  Serial.print(pin);
  Serial.print("\r\n");

  Serial.print("AT+BAUD:");
  Serial.print(velocidad);
  Serial.print("\r\n");

  Serial.print("AT+MODE:");
  Serial.print(modo);
  Serial.print("\r\n");

  digitalWrite(LED,LOW);
  
}

void loop(){
//  if (Serial.available()){
//      data_received = Serial.read();  
//      if (data_received == '1')
//      {
//        digitalWrite(13,HIGH);
//        delay(1000);  
//        digitalWrite(13,LOW);
//        }
//      else{        
//      digitalWrite(13,LOW);
//          }
//  }
  /*
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX, TX


void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.println("Goodnight moon!");
  // set the data rate for the SoftwareSerial port
  mySerial.begin(38400);
  mySerial.println("Hello, world?");
}
   void loop() 
   if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
  */
}
