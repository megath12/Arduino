//MovPerp3.ino



int h0=0,j0=1,j,j1,h,h1,o2,k,q,le,tem;
double kp=1,ki=0,kd=1;
unsigned long currentTime, previousTime; 
double elapsedTime,error, lastError,input, output, setPoint, cumError, rateError; 
bool edo;
int	Ve[32]={90,90,150,150,90,90,30,30,90,90,150,150,90,90,30,30,90,90,150,150,90,90,30,30,90,90,150,150,90,90,30,30};
//int Ve1[40]={90,99,108,117,126,135,126,117,108,99,90,75,64,53,45,22,44,55,67,81,90,99,108,117,126,135,126,117,108,99,90,75,64,53,45,22,44,55,67,81};
//int	Ve[40]={90,130,90,40,90,130,90,40,90,130,90,40,90,130,90,40,90,130,90,40,90,130,90,40,90,130,90,40,90,130,90,40,90,130,90,40,90,130,90,90};
//1int Ve[20]={90,99,108,117,126,135,126,117,108,99,90,81,72,63,54,45,54,63,72,81};


void setup(){
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(5,INPUT);
	Serial.begin(9600);
} 


void loop(){ 
edo=digitalRead(5);
if(edo==HIGH){
	tem=10;
}
else{
	tem=30;
}
le=analogRead(4);
if(le>500){
for(k=0;k<32;k++){
	setPoint=Ve[k];
	for(q=1;q<21;q++){
	h=analogRead(h0);
	h1=map(h,341,706,30,140);
	j=analogRead(j0);
	j1=map(h,296,638,150,40);
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
		delay(70);
	}
	else if(o2>0){
		ap();
		digitalWrite(7,LOW);
		digitalWrite(8,HIGH);
		analogWrite(3,abs(o2));
		delay(70);
	}
	delay(tem); 
	Serial.println("");
	}
}
}
	Serial.print(le);
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
	digitalWrite(,LOW);

}


