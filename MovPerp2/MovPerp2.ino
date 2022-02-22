//MovPerp2.ino



int h0=0,j0=1,j,j1,h,h1,o2;
double kp=1,ki=0,kd=1;
unsigned long currentTime, previousTime; 
double elapsedTime,error, lastError,input, output, setPoint=120, cumError, rateError; 

void setup(){
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);
} 


void loop(){ 
h=analogRead(h0);
h1=map(h,341,706,30,140);
j=analogRead(j0);
j1=map(h,296,638,150,40);
//Serial.println(j1);
input=j1;
output=computePID(input);
o2=output;
if(o2>255){
	o2=255;
}
else if(o2<-255){
	o2=-255;
	}
if(o2<0){
	ap();	
	digitalWrite(7,HIGH);
	digitalWrite(8,LOW);
	analogWrite(3,abs(o2));
	delay(100);
}
else if(o2>0){
	ap();
	digitalWrite(7,LOW);
	digitalWrite(8,HIGH);
	analogWrite(3,abs(o2));
	delay(100);
}
delay(20); 
Serial.print(j1);
Serial.print("-");
Serial.println(o2);
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


void ap(){
	digitalWrite(7,LOW);
	digitalWrite(8,LOW);
	digitalWrite(2,LOW);
}

