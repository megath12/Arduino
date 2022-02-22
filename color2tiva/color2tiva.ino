

int f1,f2,f3,f4,f5,f6,f7,f8,f9;
int s1=PB_4,s2=PB_5,s3=PK_0;
int s4=PK_1,s5=PK_2,s6=PK_3;
int s7=PD_2,s8=PD_4,s9=PD_5;
int r,g,b;

int r1=PF_1,g1=PF_2,b1=PF_3;
int r2=PL_4,g2=PL_5,b2=PD_1;//PWM
int r3=PL_0,g3=PL_1,b3=PL_2;

int r4=PG_1,g4=PK_4,b4=PK_5;
int r5=PM_0,g5=PM_1,b5=PM_2;//PWM
int r6=PM_7,g6=PA_7,b6=PM_6;//PWM
 
int r7=PC_5,g7=PC_6,b7=PE_5;
int r8=PD_3,g8=PB_2,b8=PB_3;//PWM
int r9=PA_6,g9=PM_4,b9=PM_5;//PWM

int s1u=1,s1d=2;
int s2u=2,s2d=3;
int s3u=3,s3d=4;
int s4u=4,s4d=5;
int s5u=5,s5d=6;
int s6u=6,s6d=7;
int s7u=7,s7d=8;
int s8u=8,s8d=9;
int s9u=9,s9d=10;



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
  pinMode(r4,OUTPUT);    
  pinMode(g4,OUTPUT);    
  pinMode(b4,OUTPUT); 
  pinMode(r5,OUTPUT);    
  pinMode(g5,OUTPUT);    
  pinMode(b5,OUTPUT); 
  pinMode(r6,OUTPUT);    
  pinMode(g6,OUTPUT);    
  pinMode(b6,OUTPUT); 
  pinMode(r7,OUTPUT);    
  pinMode(g7,OUTPUT);    
  pinMode(b7,OUTPUT); 
  pinMode(r8,OUTPUT);    
  pinMode(g8,OUTPUT);    
  pinMode(b8,OUTPUT); 
  pinMode(r9,OUTPUT);    
  pinMode(g9,OUTPUT);    
  pinMode(b9,OUTPUT);   
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


  for(int k=1;k<=1;k++){               // SENSOR 1   DIGITAL
     if(f1>3740&& f1<3790){        //  1 Magenta
        digitalWrite(g1,LOW);
        digitalWrite(r1,HIGH);
        digitalWrite(b1,HIGH);
        delay(2*255/255);
        digitalWrite(r1,LOW); 
        digitalWrite(b1,LOW);  
     }
     else if(f1>4038 && f1<4070){   //  2 Azul
        digitalWrite(g1,LOW);
        digitalWrite(r1,LOW);
        digitalWrite(b1,HIGH);
        delay(2*255/255);
        digitalWrite(b1,LOW); 
     }
     else if(f1>3690 && f1<3730){   //  3 Amarillo
        digitalWrite(b1,LOW);
        digitalWrite(g1,HIGH);
        digitalWrite(r1,HIGH);
        delay(2*233/255);
        digitalWrite(g1,LOW);  
        delay(2*22/255);
        digitalWrite(r1,LOW);  
     }
     else if(f1>3885 && f1<3920){   //  4 Rojo
        digitalWrite(g1,LOW);
        digitalWrite(b1,LOW);
        digitalWrite(r1,HIGH);
        delay(2*255/255);
        digitalWrite(r1,LOW);      
     }
     else if(f1>3140 && f1<3190){   //  5 Verde
        digitalWrite(r1,LOW);
        digitalWrite(b1,LOW);
        digitalWrite(g1,HIGH);
        delay(2*255/255);
        digitalWrite(g1,LOW); 
     }
     else if(f1>3850 && f1<3897){   //  6 Cian
        digitalWrite(g1,LOW);
        digitalWrite(b1,HIGH);
        digitalWrite(r1,HIGH);
        delay(2*255/255);
        digitalWrite(b1,LOW);
        digitalWrite(r1,LOW);
     }
     else if(f1>3500 && f1<3580){   //  7 Blanco
        digitalWrite(r1,HIGH);
        digitalWrite(b1,HIGH);
        digitalWrite(g1,HIGH);
        delay(2*255/255);
        digitalWrite(r1,LOW);
        digitalWrite(g1,LOW);  
        digitalWrite(b1,LOW);
        }
     else{
        digitalWrite(r1,LOW);
        digitalWrite(g1,LOW);  
        digitalWrite(b1,LOW);
     }
  }
for(int k2=1;k2<=1;k2++){               // SENSOR 2   PWM
     if(f2>3740 && f2<3790){        //  1 Magenta
        analogWrite(r2,255);
        analogWrite(g2,0);
        analogWrite(b2,255);
        delay(2);
        digitalWrite(r2,LOW);
        digitalWrite(g2,LOW);  
        digitalWrite(b2,LOW); 
     }
     else if(f2>4038 && f2<4070){   //  2 Azul
        analogWrite(r2,0);
        analogWrite(g2,0);
        analogWrite(b2,255);
        delay(2);
        digitalWrite(r2,LOW);
        digitalWrite(g2,LOW);  
        digitalWrite(b2,LOW); 
     }
     else if(f2>3690 && f2<3730){   //  3 Amarillo
        analogWrite(r2,255);
        analogWrite(g2,235);
        analogWrite(b2,0);
        delay(2);
        digitalWrite(r2,LOW);
        digitalWrite(g2,LOW);  
        digitalWrite(b2,LOW); 
     }
     else if(f2>3885 && f2<3920){   //  4 Rojo
        analogWrite(r2,255);
        analogWrite(g2,0);
        analogWrite(b2,0);
        delay(2);
        digitalWrite(r2,LOW);
        digitalWrite(g2,LOW);  
        digitalWrite(b2,LOW);     
     }
     else if(f2>3140 && f2<3190){   //  5 Verde
        analogWrite(r2,0);
        analogWrite(g2,255);
        analogWrite(b2,0);
        delay(2);
        digitalWrite(r2,LOW);
        digitalWrite(g2,LOW);  
        digitalWrite(b2,LOW);  
     }
     else if(f2>3850 && f2<3897){   //  6 Cian
        analogWrite(r2,255);
        analogWrite(g2,0);
        analogWrite(b2,255);
        delay(2);
        digitalWrite(r2,LOW);
        digitalWrite(g2,LOW);  
        digitalWrite(b2,LOW); 
     }
     else if(f2>3260 && f2<3300){   //  7 Blanco
        analogWrite(r2,255);
        analogWrite(g2,255);
        analogWrite(b2,255);
        delay(2);
        digitalWrite(r2,LOW);
        digitalWrite(g2,LOW);  
        digitalWrite(b2,LOW); 
        }
     else{
        digitalWrite(r2,LOW);
        digitalWrite(g2,LOW);  
        digitalWrite(b2,LOW);
     }
     
  }

for(int k3=1;k3<=1;k3++){               // SENSOR 3   DIGITAL
     if(f3>3740 && f3<3790){        //  1 Magenta
        digitalWrite(g3,LOW);
        digitalWrite(r3,HIGH);
        digitalWrite(b3,HIGH);
        delay(2*255/255);
        digitalWrite(r3,LOW); 
        digitalWrite(b3,LOW);  
     }
     else if(f3>4050&& f3<4097){   //  2 Azul
        digitalWrite(g3,LOW);
        digitalWrite(r3,LOW);
        digitalWrite(b3,HIGH);
        delay(2*255/255);
        digitalWrite(b3,LOW); 
     }
     else if(f3>3690&& f3<3730){   //  3 Amarillo
        digitalWrite(b3,LOW);
        digitalWrite(g3,HIGH);
        digitalWrite(r3,HIGH);
        delay(2*233/255);
        digitalWrite(g3,LOW);  
        delay(2*22/255);
        digitalWrite(r3,LOW);  
     }
     else if(f3>3885 && f3<3890){   //  4 Rojo
        digitalWrite(g3,LOW);
        digitalWrite(b3,LOW);
        digitalWrite(r3,HIGH);
        delay(2*255/255);
        digitalWrite(r3,LOW);      
     }
     else if(f3>4000 && f3<4040){   //  5 Verde
        digitalWrite(r3,LOW);
        digitalWrite(b3,LOW);
        digitalWrite(g3,HIGH);
        delay(2*255/255);
        digitalWrite(g3,LOW); 
     }
     else if(f3>3920&& f3<3970){   //  6 Cian
        digitalWrite(g3,LOW);
        digitalWrite(b3,HIGH);
        digitalWrite(r3,HIGH);
        delay(2*255/255);
        digitalWrite(b3,LOW);
        digitalWrite(r3,LOW);
     }
     else if(f3>3700 && f3<3750){   //  7 Blanco
        digitalWrite(r3,HIGH);
        digitalWrite(b3,HIGH);
        digitalWrite(g3,HIGH);
        delay(2*255/255);
        digitalWrite(r3,LOW);
        digitalWrite(g3,LOW);  
        digitalWrite(b3,LOW);
        }
     else{
        digitalWrite(r3,LOW);
        digitalWrite(g3,LOW);  
        digitalWrite(b3,LOW);
     }
}

for(int k4=1;k4<=1;k4++){               // SENSOR 4   DIGITAL
     if(f4>3480 && f4<3529){        //  1 Magenta
        digitalWrite(g4,LOW);
        digitalWrite(r4,HIGH);
        digitalWrite(b4,HIGH);
        delay(2*255/255);
        digitalWrite(r4,LOW); 
        digitalWrite(b4,LOW);  
     }
     else if(f4>3935 && f4<3970){   //  2 Azul
        digitalWrite(g4,LOW);
        digitalWrite(r4,LOW);
        digitalWrite(b4,HIGH);
        delay(2*255/255);
        digitalWrite(b4,LOW); 
     }
     else if(f4>3230 && f4<3280){   //  3 Amarillo
        digitalWrite(b4,LOW);
        digitalWrite(g4,HIGH);
        digitalWrite(r4,HIGH);
        delay(2*233/255);
        digitalWrite(g4,LOW);  
        delay(2*22/255);
        digitalWrite(r4,LOW);  
     }
     else if(f4>3620 && f4<3680){   //  4 Rojo
        digitalWrite(g4,LOW);
        digitalWrite(b4,LOW);
        digitalWrite(r4,HIGH);
        delay(2*255/255);
        digitalWrite(r4,LOW);      
     }
     else if(f4>3910 && f4<3980){   //  5 Verde
        digitalWrite(r4,LOW);
        digitalWrite(b4,LOW);
        digitalWrite(g4,HIGH);
        delay(2*255/255);
        digitalWrite(g4,LOW); 
     }
     else if(f4>3610 && f4<3650){   //  6 Cian
        digitalWrite(g4,LOW);
        digitalWrite(b4,HIGH);
        digitalWrite(r4,HIGH);
        delay(2*255/255);
        digitalWrite(b4,LOW);
        digitalWrite(r4,LOW);
     }
     else if(f4>3000 && f4<3100){   //  7 Blanco
        digitalWrite(r4,HIGH);
        digitalWrite(b4,HIGH);
        digitalWrite(g4,HIGH);
        delay(2*255/255);
        digitalWrite(r4,LOW);
        digitalWrite(g4,LOW);  
        digitalWrite(b4,LOW);
        }
     else{
        digitalWrite(r4,LOW);
        digitalWrite(g4,LOW);  
        digitalWrite(b4,LOW);
     }
}
for(int k5=1;k5<=1;k5++){               // SENSOR 5   PWM
     if(f5>s5d && f5<s5u){        //  1 Magenta
        analogWrite(r5,255);
        analogWrite(g5,0);
        analogWrite(b5,255);
        delay(2);
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW); 
     }
     else if(f5>s5d && f5<s5u){   //  2 Azul
        analogWrite(r5,0);
        analogWrite(g5,0);
        analogWrite(b5,255);
        delay(2);
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW); 
     }
     else if(f5>s5d && f5<s5u){   //  3 Amarillo
        analogWrite(r5,255);
        analogWrite(g5,235);
        analogWrite(b5,0);
        delay(2);
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW); 
     }
     else if(f5>s5d && f5<s5u){   //  4 Rojo
        analogWrite(r5,255);
        analogWrite(g5,0);
        analogWrite(b5,0);
        delay(2);
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW);     
     }
     else if(f5>s5d && f5<s5u){   //  5 Verde
        analogWrite(r5,0);
        analogWrite(g5,255);
        analogWrite(b5,0);
        delay(2);
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW);  
     }
     else if(f5>s5d && f5<s5u){   //  6 Cian
        analogWrite(r5,255);
        analogWrite(g5,0);
        analogWrite(b5,255);
        delay(2);
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW); 
     }
     else if(f5>s5d && f5<s5u){   //  7 Blanco
        analogWrite(r5,255);
        analogWrite(g5,255);
        analogWrite(b5,255);
        delay(2);
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW); 
        }
     else if(f5>s5d && f5<s5u){   //  8 Negro
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW);
     }
     else{
        digitalWrite(r5,LOW);
        digitalWrite(g5,LOW);  
        digitalWrite(b5,LOW);
     }
     
  }

for(int k6=1;k6<=1;k6++){               // SENSOR 6   PWM
     if(f6>s6d && f6<s6u){        //  1 Magenta
        analogWrite(r6,255);
        analogWrite(g6,0);
        analogWrite(b6,255);
        delay(2);
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW); 
     }
     else if(f6>s6d && f6<s6u){   //  2 Azul
        analogWrite(r6,0);
        analogWrite(g6,0);
        analogWrite(b6,255);
        delay(2);
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW); 
     }
     else if(f6>s6d && f6<s6u){   //  3 Amarillo
        analogWrite(r6,255);
        analogWrite(g6,235);
        analogWrite(b6,0);
        delay(2);
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW); 
     }
     else if(f6>s6d && f6<s6u){   //  4 Rojo
        analogWrite(r6,255);
        analogWrite(g6,0);
        analogWrite(b6,0);
        delay(2);
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW);     
     }
     else if(f6>s6d && f6<s6u){   //  5 Verde
        analogWrite(r6,0);
        analogWrite(g6,255);
        analogWrite(b6,0);
        delay(2);
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW);  
     }
     else if(f6>s6d && f6<s6u){   //  6 Cian
        analogWrite(r6,255);
        analogWrite(g6,0);
        analogWrite(b6,255);
        delay(2);
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW); 
     }
     else if(f6>s6d && f6<s6u){   //  7 Blanco
        analogWrite(r6,255);
        analogWrite(g6,255);
        analogWrite(b6,255);
        delay(2);
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW); 
        }
     else if(f6>s6d && f6<s6u){   //  8 Negro
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW);
     }
     else{
        digitalWrite(r6,LOW);
        digitalWrite(g6,LOW);  
        digitalWrite(b6,LOW);
     }
     
  }

  for(int k7=1;k7<=1;k7++){               // SENSOR 7   DIGITAL
     if(f7>s7d && f7<s7u){        //  1 Magenta
        digitalWrite(g7,LOW);
        digitalWrite(r7,HIGH);
        digitalWrite(b7,HIGH);
        delay(2*255/255);
        digitalWrite(r7,LOW); 
        digitalWrite(b7,LOW);  
     }
     else if(f7>s7d && f7<s7u){   //  2 Azul
        digitalWrite(g7,LOW);
        digitalWrite(r7,LOW);
        digitalWrite(b7,HIGH);
        delay(2*255/255);
        digitalWrite(b7,LOW); 
     }
     else if(f7>s7d && f7<s7u){   //  3 Amarillo
        digitalWrite(b7,LOW);
        digitalWrite(g7,HIGH);
        digitalWrite(r7,HIGH);
        delay(2*233/255);
        digitalWrite(g7,LOW);  
        delay(2*22/255);
        digitalWrite(r7,LOW);  
     }
     else if(f7>s7d && f7<s7u){   //  4 Rojo
        digitalWrite(g7,LOW);
        digitalWrite(b7,LOW);
        digitalWrite(r7,HIGH);
        delay(2*255/255);
        digitalWrite(r7,LOW);      
     }
     else if(f7>s7d && f7<s7u){   //  5 Verde
        digitalWrite(r7,LOW);
        digitalWrite(b7,LOW);
        digitalWrite(g7,HIGH);
        delay(2*255/255);
        digitalWrite(g7,LOW); 
     }
     else if(f7>s7d && f7<s7u){   //  6 Cian
        digitalWrite(g7,LOW);
        digitalWrite(b7,HIGH);
        digitalWrite(r7,HIGH);
        delay(2*255/255);
        digitalWrite(b7,LOW);
        digitalWrite(r7,LOW);
     }
     else if(f7>s7d && f7<s7u){   //  7 Blanco
        digitalWrite(r7,HIGH);
        digitalWrite(b7,HIGH);
        digitalWrite(g7,HIGH);
        delay(2*255/255);
        digitalWrite(r7,LOW);
        digitalWrite(g7,LOW);  
        digitalWrite(b7,LOW);
        }
     else if(f7>s7d && f7<s7u){   //  8 Negro
        digitalWrite(r7,LOW);
        digitalWrite(g7,LOW);  
        digitalWrite(b7,LOW);
     }
     else{
        digitalWrite(r7,LOW);
        digitalWrite(g7,LOW);  
        digitalWrite(b7,LOW);
     }
  }

for(int k8=1;k8<=1;k8++){               // SENSOR 8   PWM
     if(f8>s8d && f8<s8u){        //  1 Magenta
        analogWrite(r8,255);
        analogWrite(g8,0);
        analogWrite(b8,255);
        delay(2);
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW); 
     }
     else if(f8>s8d && f8<s8u){   //  2 Azul
        analogWrite(r8,0);
        analogWrite(g8,0);
        analogWrite(b8,255);
        delay(2);
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW); 
     }
     else if(f8>s8d && f8<s8u){   //  3 Amarillo
        analogWrite(r8,255);
        analogWrite(g8,235);
        analogWrite(b8,0);
        delay(2);
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW); 
     }
     else if(f8>s8d && f8<s8u){   //  4 Rojo
        analogWrite(r8,255);
        analogWrite(g8,0);
        analogWrite(b8,0);
        delay(2);
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW);     
     }
     else if(f8>s8d && f8<s8u){   //  5 Verde
        analogWrite(r8,0);
        analogWrite(g8,255);
        analogWrite(b8,0);
        delay(2);
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW);  
     }
     else if(f8>s8d && f8<s8u){   //  6 Cian
        analogWrite(r8,255);
        analogWrite(g8,0);
        analogWrite(b8,255);
        delay(2);
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW); 
     }
     else if(f8>s8d && f8<s8u){   //  7 Blanco
        analogWrite(r8,255);
        analogWrite(g8,255);
        analogWrite(b8,255);
        delay(2);
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW); 
        }
     else if(f8>s8d && f8<s8u){   //  8 Negro
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW);
     }
     else{
        digitalWrite(r8,LOW);
        digitalWrite(g8,LOW);  
        digitalWrite(b8,LOW);
     }
  }


for(int k9=1;k9<=1;k9++){               // SENSOR 9   PWM
     if(f9>s9d && f9<s9u){        //  1 Magenta
        analogWrite(r9,255);
        analogWrite(g9,0);
        analogWrite(b9,255);
        delay(2);
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW); 
     }
     else if(f9>s9d && f9<s9u){   //  2 Azul
        analogWrite(r9,0);
        analogWrite(g9,0);
        analogWrite(b9,255);
        delay(2);
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW); 
     }
     else if(f9>s9d && f9<s9u){   //  3 Amarillo
        analogWrite(r9,255);
        analogWrite(g9,235);
        analogWrite(b9,0);
        delay(2);
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW); 
     }
     else if(f9>s9d && f9<s9u){   //  4 Rojo
        analogWrite(r9,255);
        analogWrite(g9,0);
        analogWrite(b9,0);
        delay(2);
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW);     
     }
     else if(f9>s9d && f9<s9u){   //  5 Verde
        analogWrite(r9,0);
        analogWrite(g9,255);
        analogWrite(b9,0);
        delay(2);
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW);  
     }
     else if(f9>s9d && f9<s9u){   //  6 Cian
        analogWrite(r9,255);
        analogWrite(g9,0);
        analogWrite(b9,255);
        delay(2);
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW); 
     }
     else if(f9>s9d && f9<s9u){   //  7 Blanco
        analogWrite(r9,255);
        analogWrite(g9,255);
        analogWrite(b9,255);
        delay(2);
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW); 
        }
     else if(f9>s9d && f9<s9u){   //  8 Negro
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW);
     }
     else{
        digitalWrite(r9,LOW);
        digitalWrite(g9,LOW);  
        digitalWrite(b9,LOW);
     }
  }

}


