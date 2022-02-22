//Bipedo.ino


int k,q,le,tem;
int m11=8,m12=7,m21=10,m22=9,m31=15,m32=14,m41=17,m42=16,pw1=4,pw2=5,pw3=2,pw4=3,sen=2;
int dar=6,dab=7,iar=8,iab=9;
// m1=der_arriba     m2=der_abajo      m3=izq_arriba       m4=izq_abajo
// p1=der_arriba     p2=der_abajo      p3=izq_arriba       p4=izq_abajo
int vsd,vsi,vid,vii;
int o1,o2,o3,o4;

double kp=6,ki=0,kd=6;
unsigned long currentTime, previousTime,currentTime2, previousTime2,currentTime3, previousTime3,currentTime4, previousTime4; 
double elapsedTime,error, lastError,input, output, setPoint, cumError, rateError,elapsedTime2,error2, lastError2,input2, output2, setPoint2, cumError2, rateError2,elapsedTime3,error3, lastError3,input3, output3, setPoint3, cumError3, rateError3,elapsedTime4,error4, lastError4,input4, output4, setPoint4, cumError4, rateError4; 
//int	Ve[4]={45,0,-45,0};
/*int Ve1[8]={50,25,0,25,-50,-25,0,25};
int Ve2[8]={50,50,50,25,0,0,0,25};
int Ve3[8]={-50,-25,0,25,50,25,0,-25};
int Ve4[8]={0,0,0,25,50,50,50,25};*/
/*
int Ve1[8]={50,50,0,0,-50,-50,0,0};
int Ve2[8]={50,50,50,50,0,0,0,0};
int Ve3[8]={-50,-50,0,0,50,50,0,0};
int Ve4[8]={0,0,0,0,50,50,50,50};
*/
int Ve1[4]={50,0,-50,0};
int Ve2[4]={50,50,0,0};
int Ve3[4]={-50,0,50,0};
int Ve4[4]={0,0,50,50};


void setup(){
	pinMode(m11,OUTPUT);
	pinMode(m12,OUTPUT);
	pinMode(m21,OUTPUT);
	pinMode(m22,OUTPUT);
	pinMode(m31,OUTPUT);
	pinMode(m32,OUTPUT);
	pinMode(m41,OUTPUT);
	pinMode(m42,OUTPUT);
	pinMode(pw1,OUTPUT);
	pinMode(pw2,OUTPUT);
	pinMode(pw3,OUTPUT);
	pinMode(pw4,OUTPUT);
	Serial.begin(9600);
} 


void loop(){ 

le=analogRead(sen);
if(le>130){
for(k=0;k<4;k++){
	setPoint=Ve1[k];
	setPoint2=Ve2[k];
	setPoint3=Ve3[k];
	setPoint4=Ve4[k];
	for(q=1;q<21;q++){
///*
		vsd=map(analogRead(dar),586,943,0,90);
		input=vsd;
		output=computePID(input);
		o1=output;
		if(o1>255){
			o1=255;
		}
		else if(o1<-255){
			o1=-255;
		}
		if(o1<0){
			ap();	
			digitalWrite(m12,HIGH);
			analogWrite(pw1,abs(o1));
			delay(10);
		}
		else if(o1>0){
			ap();
			digitalWrite(m11,HIGH);
			analogWrite(pw1,abs(o1));
			delay(10);
		}
//		Serial.print(input);
//		Serial.print(" - ");
//		Serial.println(output);

///*
		vid=map(analogRead(dab),178,537,0,90);
		input2=vid;
		output2=computePID2(input2);
		o2=output2;
		if(o2>255){
			o2=255;
		}
		else if(o2<-255){
			o2=-255;
		}
		if(o2<0){
			ap();	
			digitalWrite(m21,HIGH);
			analogWrite(pw2,abs(o2));
			delay(10);
		}
		else if(o2>0){
			ap();
			digitalWrite(m22,HIGH);
			analogWrite(pw2,abs(o2));
			delay(10);
		}
//		Serial.print(input2);
//		Serial.print(" - ");
//		Serial.println(output2);
///*
		vsi=map(analogRead(iar),522,852,0,90);
		input3=vsi;
		output3=computePID3(input3);
		o3=output3;
		if(o3>255){
			o3=255;
		}
		else if(o3<-255){
			o3=-255;
		}
		if(o3<0){
			ap();	
			digitalWrite(m31,HIGH);
			analogWrite(pw3,abs(o3));
			delay(10);
		}
		else if(o3>0){
			ap();
			digitalWrite(m32,HIGH);
			analogWrite(pw3,abs(o3));
			delay(10);
		}		

//Serial.print(input3);
//Serial.print(" - ");
//Serial.println(output3);
//*
		vii=map(analogRead(iab),165,504,0,90);
		input4=vii;
		output4=computePID4(input4);
		o4=output4;
		if(o4>255){
			o4=255;
		}
		else if(o4<-255){
			o4=-255;
		}
		if(o4<0){
			ap();	
			digitalWrite(m42,HIGH);
			analogWrite(pw4,abs(o4));
			delay(10);
		}
		else if(o4>0){
			ap();
			digitalWrite(m41,HIGH);
			analogWrite(pw4,abs(o4));
			delay(10);
		}
//*/

//Serial.print(input4);
//Serial.print(" - ");
//Serial.println(o4);

//	delay(tem); 
/*Serial.print(vsd);
Serial.print("-");
Serial.print(vid);
Serial.print("-");
Serial.print(vsi);
Serial.print("-");
Serial.println(vii);*/

		}
	}
}
//	Serial.print(le);
//	Serial.print("-");
//	Serial.println(o2);
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

double computePID2(double inp2){ 
	currentTime2 = millis();
	elapsedTime2 = (double)(currentTime2 - previousTime2);
	error2 = setPoint2 - inp2;
	cumError2 += error2 * elapsedTime2;
	rateError2 = (error2 - lastError2)/elapsedTime2;
	double out2 = kp*error2 + ki*cumError2 + kd*rateError2;
	lastError2= error2;
	previousTime2 = currentTime2; 
return out2; 
}



double computePID3(double inp3){ 
	currentTime3 = millis();
	elapsedTime3 = (double)(currentTime3 - previousTime3);
	error3 = setPoint3 - inp3;
	cumError3 += error3 * elapsedTime3;
	rateError3 = (error3 - lastError3)/elapsedTime3;
	double out3 = kp*error3 + ki*cumError3 + kd*rateError3;
	lastError3= error3;
	previousTime3 = currentTime3; 
return out3; 
}




double computePID4 (double inp4){ 
	currentTime4 = millis();
	elapsedTime4 = (double)(currentTime4 - previousTime4);
	error4 = setPoint4 - inp4;
	cumError4 += error4 * elapsedTime4;
	rateError4 = (error4 - lastError4)/elapsedTime4;
	double out4 = kp*error4 + ki*cumError4 + kd*rateError4;
	lastError4= error4;
	previousTime4 = currentTime4; 
return out4; 
}



void ap(){
	digitalWrite(m11,LOW);
	digitalWrite(m12,LOW);
	digitalWrite(m21,LOW);
	digitalWrite(m22,LOW);
	digitalWrite(m31,LOW);
	digitalWrite(m32,LOW);
	digitalWrite(m41,LOW);
	digitalWrite(m42,LOW);
	digitalWrite(pw1,LOW);
	digitalWrite(pw2,LOW);
	digitalWrite(pw3,LOW);
	digitalWrite(pw4,LOW);
}



