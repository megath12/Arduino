

int r1=PF_1,g1=PF_3,b1=PF_2;
int r2=PB_3,g2=PC_4,b2=PC_5;//PWM
int r3=PC_6,g3=PC_7,b3=PD_6;
int tt=2,ta,r,g,b;
float r0,g0,b0;

void setup() {
  pinMode(r1,OUTPUT);    
  pinMode(g1,OUTPUT);    
  pinMode(b1,OUTPUT);    
  pinMode(r2,OUTPUT);    
  pinMode(g2,OUTPUT);    
  pinMode(b2,OUTPUT); 
  pinMode(r3,OUTPUT);    
  pinMode(g3,OUTPUT);    
  pinMode(b3,OUTPUT); 
  Serial.begin(9600);
  delay(3000);
}

void loop(){
  

//magenta
  digitalWrite(b1,LOW);
  digitalWrite(r1,HIGH);
  digitalWrite(g1,HIGH);
  delay(2*255/255);
  digitalWrite(g1,LOW);  
  delay(2*0/255);
  digitalWrite(r1,LOW);  

  blanco();
  analogWrite(r2,r);
  analogWrite(g2,g);
  analogWrite(b2,b);
  delay(10);
  digitalWrite(r2,LOW);
  digitalWrite(g2,LOW);  
  digitalWrite(b2,LOW);

 //amarillo
  digitalWrite(b3,LOW);
  digitalWrite(g3,HIGH);
  digitalWrite(r3,HIGH);
  delay(2*233/255);
  digitalWrite(g3,LOW);  
  delay(2*22/255);
  digitalWrite(r3,LOW);  
//  digitalWrite(r3,LOW);  

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

