//Movperpe.ino

/*
int h0=0,j0=1,j,j1,h,h1;

void setup() {
	Serial.begin(9600);
}



void loop() {
	h=analogRead(h0);
	h1=map(h,341,706,30,140);
	j=analogRead(j0);
	j1=map(h,296,638,150,40);
	Serial.println(j1);
	delay(200);
}

*/


double kp=1,ki=0,kd=1;
unsigned long currentTime, previousTime; 
double elapsedTime; 
double error, lastError,input, output, setPoint=100, cumError, rateError; 

void setup(){
Serial.begin(9600);
} 


void loop(){ 
input = analogRead(A0);
output = computePID(input); 
delay(50); 
analogWrite(3, output);
} 


double computePID(double inp){ 
currentTime = millis();
elapsedTime = (double)(currentTime - previousTime);
error = setPoint - inp;
cumError += error * elapsedTime;
rateError = (error - lastError)/elapsedTime;
double out = kp*error + ki*cumError + kd*rateError;
lastError = error;
previousTime = currentTime;
return out;
}


//Copiado de: https://descubrearduino.com/
//https://descubrearduino.com/como-hacer-un-pid-con-arduino/



