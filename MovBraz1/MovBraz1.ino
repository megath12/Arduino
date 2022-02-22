//MovBraz1.ino
/*

int 
int h0=0,j0=1,j,j1,h,h1,o2,k,q,le,tem;
double kp=1,ki=0.2,kd=1;
unsigned long currentTime, previousTime; 
double elapsedTime,error, lastError,input, output, setPoint, cumError, rateError; 
bool edo;


void setup(){
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(9,OUTPUT);
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




*/

int const se[]={67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,70,74,78,82,86,88,87,85,82,77,73,69,67,67,67,67,67,67,67,67,67,64,59,53,47,41,37,36,51,83,126,171,213,243,255,241,206,158,105,55,17,0,3,11,24,37,51,61,67,67,67,67,67,67,67,67,67,71,76,83,89,94,98,98,95,90,84,77,71,68,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67},sa=5;
int es,r,t=10;


void setup(){
	Serial.begin(9600);
	pinMode(sa,OUTPUT);
	delay(1500);
}

void loop(){
	if(Serial.available()>0){
		es=Serial.read();
		es=es-49;
		t=map(es,0,9,12,3);
		/*if(es==){

		}	
		else if(){

		}*/
	}
	for(int k=0;k<=99;k++){
		r=se[k];
		//analogWrite(r,sa);
		delay(t);
		Serial.println(t);
	}
}


