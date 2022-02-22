
int LED0=PB_3,LED1=PC_4,LED2=PC_5,LED3=PC_6,LED4=PC_7,LED5=PD_6;
int N=10;
float auxI=0,auxR=0;
float ENT=PE_0;
float x[10],k[6];
float X[10],pi=3.141592;

void setup() {
pinMode(LED0,OUTPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(ENT,INPUT);
}

void loop(){
for (int n=0;n<10;n++){ 
 x[n]=(analogRead(ENT)-2000.0)*0.001;
delay(5);
}
  for (int k=0;k<6;k++){
      for ( int n=0;n<10;n++){
      auxR= auxR+x[n]*cos(2*pi/N*(n*k));
      auxI= auxI-x[n]*sin(2*pi/N*(n*k));
      X[k]= auxR*auxR+auxI*auxI;
      }
}
  
for (float k=0;k<6;k++){
analogWrite(LED0,k[0]);
analogWrite(LED1,k[1]);
analogWrite(LED2,k[2]);
analogWrite(LED3,k[3]);
analogWrite(LED4,k[4]);
analogWrite(LED5,k[5]);
}
}

