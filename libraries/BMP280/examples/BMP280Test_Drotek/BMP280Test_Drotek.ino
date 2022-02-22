#include <Wire.h>
#include <SPI.h>
#include <Sensor_Master.h>
#include <BMP280.h>

/*******************************************************************************************
This is an exemple for the BMP280 library 
Drotek BMP280 breakout board can be found here:
http://www.drotek.com/shop/en/home/751-bmp280-breakout-board.html
Please follow the 3 step configuration below.
*******************************************************************************************/

//////////////////////////////////Configuration//////////////////////////////////////////////
                                                                                           //
//First step, select your arduino board type by incomment the right line//                 //
//#define Arduino_UNO                                                                      //
#define Arduino_MEGA2560                                                                   //                                                                
/////////////////////////////////////////////////////////////////////////////////////////////                                                            
                                                                                           //
//Second step, select your wiring by incomment the right line//                            //
#define I2C                                                                                //
//#define Hardware_SPI                                                                     //
//#define Software_SPI                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////////
                                                                                           //
//Last step(only for software SPI), write the Pin used for software SPI//                  //
#define BMP_SCK 52                                                                         //
#define BMP_MISO 50                                                                        //
#define BMP_MOSI 51                                                                        //
#define BMP_CS 53                                                                          //
/////////////////////////////////////////////////////////////////////////////////////////////

#ifdef I2C
  Adafruit_BMP280 bme;
#endif //I2C

#ifdef Hardware_SPI
  #ifdef Arduino_UNO
    #define BMP_CS 10
  #endif //Arduino_UNO
  
  #ifdef Arduino_MEGA2560
    #define BMP_CS 53
  #endif //Arduino_MEGA2560
  
  Adafruit_BMP280 bme(BMP_CS);
#endif //Hardware_SPI
  
#ifdef Software_SPI
  Adafruit_BMP280 bme(BMP_CS, BMP_MOSI, BMP_MISO,  BMP_SCK);
#endif //Software_SPI

  
void setup() {
  Serial.begin(9600);
  Serial.println(F("BMP280 test"));
  
  if (!bme.begin()) {  
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
    while (1);
  }
}
  
void loop() {
    Serial.print("Temperature = ");
    Serial.print(bme.readTemperature());
    Serial.println(" *C");
    
    Serial.print("Pressure = ");
    Serial.print(bme.readPressure());
    Serial.println(" Pa");

    Serial.print("Approx altitude = ");
    Serial.print(bme.readAltitude(1013.25)); // this should be adjusted to your local forcase
    Serial.println(" m");
    
    Serial.println();
    delay(2000);
}
