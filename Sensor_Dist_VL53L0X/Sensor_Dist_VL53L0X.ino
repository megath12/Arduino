/* This example shows how to use continuous mode to take
range measurements with the VL53L0X.
// Original Source from Adafruit https://github.com/adafruit/Adafruit_VL53L0X
Modefied by Ahmad Nejrabi for RoboJax.com
Date modefied: Sep 26, 2017
*/

#include "Adafruit_VL53L0X.h"
Adafruit_VL53L0X lox = Adafruit_VL53L0X();
double hy=0;

void setup() {
  Serial.begin(9600);
  // wait until serial port opens for native USB devices
  while (! Serial) {
    delay(1);
  }
  Serial.println("Robojax Test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
  }
  // power 
  Serial.println(F("VL53L0X API Simple Ranging example")); 
}


void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  Serial.print("Reading a measurement... ");
  lox.rangingTest(&measure, false); // pass in 'true' to get debug data printout!

  if (measure.RangeStatus != 4) {  // phase failures have incorrect data
    Serial.print("Distance (mm): "); 
    hy=measure.RangeMilliMeter;
    Serial.println(hy);
  } else {
    Serial.println(" out of range ");
  }
  delay(100);
}
 
 
