//OLED_goniom.ino



#include <SPI.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 Display(OLED_RESET);
int r = 0;
int i = 0;


void setup()   {

  Display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  
  // initialize with the I2C addr 0x3C (for the 128x32)
  // i'll follow the license agreement and display the Adafruit logo
  // and since they were nice enough to supply the libraries
  Display.clearDisplay();
  Display.display();
  delay (1000);
  DrawTitles();
}


void loop() {

  // get some dummy data to display
  r = rand() / 220;
  //r = analogRead(ADJ_PIN);
  //r = r / 7.98;
  Display.setTextSize(2);
  // note set the background color or the old text will still display
  Display.setTextColor(WHITE, BLACK);
  Display.setCursor(0, 33);
  Display.println(Format(r * 7.99 / 204.6, 3, 2));
  //draw the bar graph
  Display.fillRect(r, 50, 128 - r, 10, BLACK);
  Display.fillRect(3, 50, r, 10, WHITE);

  for (i = 1; i < 13; i++) {
    Display.fillRect(i * 10, 50, 2, 10, BLACK);
  }
  // now that the display is build, display it...
  Display.display();
}

void DrawTitles(void) {
  Display.setTextSize(1); //tamaño de letra
  Display.setTextColor(WHITE);
  Display.setCursor(45, 0);//fijar cursos(x,y)
  Display.println("ARDUINO");
  Display.setTextSize(1);
  Display.setTextColor(WHITE);
  Display.setCursor(25, 19);
  //Display.println("Measured Volts");
  Display.println("X-MEN ORIGENES");
  Display.display();
}


String Format(double val, int dec, int dig ) {
  // this is my simple way of formatting a number
  // data = Format(number, digits, decimals) when needed
  int addpad = 0;
  char sbuf[20];
  String fdata = (dtostrf(val, dec, dig, sbuf));
  int slen = fdata.length();
  for ( addpad = 1; addpad <= dec + dig - slen; addpad++) {
    fdata = " " + fdata;
  }
  return (fdata);
}


