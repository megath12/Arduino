
void setup() {
  Serial.begin(9600); /* Define baud rate for serial communication */
  pinMode(12, OUTPUT);
}

void loop() {
  
    if (Serial.available())  /* If data is available on serial port */
    {
      char data_received; 
      data_received = Serial.read();  /* Data received from bluetooth */
      if (data_received == '1')
      {
        digitalWrite(12, HIGH);
        Serial.write("LED turned ON");        
      }
      else if (data_received == '2')
      {
        digitalWrite(12, LOW);
        Serial.write("LED turned OFF");
      }
      else
      {
        Serial.write("Select either 1 or 2");
      }
    }
}
