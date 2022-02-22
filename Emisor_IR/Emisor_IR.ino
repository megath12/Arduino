#include <IRLremote.h>

int INTERRUPCION = 0; //PIN 2

uint8_t protocolo = 0;
uint16_t direccion = 0;
uint32_t tecla = 0;

uint8_t oldSREG;

void setup(){
  IRLbegin<IR_ALL>(INTERRUPCION);
  Serial.begin(115200);
}


void IREvent (uint8_t protocol, uint16_t address, uint32_t command){
  protocolo = protocol;
  direccion = address;
  tecla = command;
}

void loop(){
  oldSREG = SREG;
  cli();

  if(protocolo!=0){
    Serial.print("Protocolo: ");
    Serial.print(protocolo);
    Serial.print(" Direccion: ");
    Serial.print(direccion, HEX);
    Serial.print(" Tecla: ");
    Serial.println(tecla, HEX);
    protocolo=0;
  }

  SREG = oldSREG;
  
}
