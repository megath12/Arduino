
int f1,f2,f3,f4,f5,f6,f7,f8,f9;
int s1=PD_0,s2=PD_1,s3=PD_2,s4=PD_3,s5=PE_1;//pin 1-5
int r,g,b;
int s6=PE_2,s7=PE_3,s8=PE_4,s9=PE_5;

void setup() {
    
  Serial.begin(9600);
}


void loop() {  

f1=analogRead(s1);
f2=analogRead(s2);
f3=analogRead(s3);
f4=analogRead(s4);
f5=analogRead(s5);
f6=analogRead(s6);
f7=analogRead(s7);
f8=analogRead(s8);
f9=analogRead(s9);

  

/*Serial.println(f1);
Serial.println(f2);
Serial.println(f3);
Serial.println(f4);
Serial.println(f5);
Serial.println(f6);
Serial.println(f7);
Serial.println(f8);
Serial.println(f9);
Serial.println(" ");
Serial.println(" ");
delay(1000);
/*
/*
if(){
  
}
else if(){
 
}

else if(){
 
}

else if(){
 
}

else if(){
 
}
else if(){
 
}
*/
}












void rojo(){
  r=255;
  g=0;
  b=0;
}

void azul(){
  r=0;
  g=0;
  b=255;
}

void verde(){
  r=0;
  g=255;
  b=0;
}

void blanco(){
  r=255;
  g=255;
  b=255;
}

void amarillo(){
  r=235;
  g=255;
  b=0;
}

void cian(){
  r=0;
  g=255;
  b=255;
}

void magenta(){
  r=245;
  g=0;
  b=135;
}

void negro(){
  r=0;
  g=0;
  b=0;
}




