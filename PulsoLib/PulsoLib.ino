// Analg A0
#define USE_ARDUINO_INTERRUPTS true
#include <PulseSensorPlayground.h>  
  
const int PulseWire = 0,LED = 13;          
int Threshold = 540;                                         
PulseSensorPlayground pulseSensor;  
// Analog A0


void setup() {   
  Serial.begin(9600);      
  pulseSensor.analogInput(PulseWire);   
  pulseSensor.blinkOnPulse(LED);      
  pulseSensor.setThreshold(Threshold);   
  if (pulseSensor.begin()) {
    Serial.println("We created a pulseSensor Object !");  
  }
}


void loop() {
int myBPM = pulseSensor.getBeatsPerMinute();  
if (pulseSensor.sawStartOfBeat()) {            
 Serial.println(" <3 "); 
 Serial.print("BPM: ");                       
 Serial.println(myBPM);                  
}
  delay(20);                   
}

