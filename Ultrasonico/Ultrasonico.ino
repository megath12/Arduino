
const int trigPin = 6, echoPin = 7;
long duration;
int distance=0;

void setup() {
pinMode(trigPin, OUTPUT);      // Sets the trigPin as an Output
pinMode(echoPin, INPUT);       // Sets the echoPin as an Input
Serial.begin(9600);            // Starts the serial communication
delay(500);
}

void loop() {
                                  // Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
                                  // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
                                  // Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;

if(distance<500){
  //Serial.print("Distancia: ");
  Serial.println(distance);
  delay(100);
}

}

