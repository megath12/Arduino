
/*
const int c[300]={58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,59.0283,59.558,60.4042,61.5365,62.9249,64.5393,66.3495,68.3255,70.437,72.654,74.9462,77.2837,79.6363,81.9738,84.266,86.483,88.5945,90.5705,92.3807,93.9951,95.3835,96.5158,97.362,97.8917,98.075,97.7906,96.9766,95.6918,93.9951,91.9453,89.6013,87.0219,84.266,81.3924,78.46,75.5276,72.654,69.8981,67.3187,64.9747,62.9249,61.2282,59.9434,59.1294,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.4701,57.4153,55.7851,53.6841,51.2169,48.4883,45.6027,42.6648,39.7792,37.0506,34.5834,32.4824,30.8522,29.7974,29.4225,31.0579,35.7385,43.126,52.882,64.6682,78.1462,92.9776,108.824,125.347,142.209,159.07,175.593,191.44,206.271,219.749,231.535,241.291,248.679,253.36,254.995,254.164,251.746,247.855,242.604,236.106,228.476,219.825,210.267,199.916,188.885,177.288,165.237,152.846,140.228,127.497,114.767,102.149,89.7582,77.7074,66.1098,55.0789,44.728,35.1704,26.5195,18.8885,12.3909,7.13986,3.24883,0.831095,0,6.11988,20.7134,38.1316,52.7251,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.845,58.9366,59.2015,59.6246,60.1907,60.885,61.6922,62.5973,63.5852,64.641,65.7495,66.8956,68.0644,69.2406,70.4094,71.5555,72.664,73.7198,74.7077,75.6128,76.42,77.1143,77.6804,78.1035,78.3684,78.46,78.3684,78.1035,77.6804,77.1143,76.42,75.6128,74.7077,73.7198,72.664,71.5555,70.4094,69.2406,68.0644,66.8956,65.7495,64.641,63.5852,62.5973,61.6922,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58};
int S=3,p;


void setup() {                
  pinMode(S,OUTPUT); 
  Serial.begin(9600);
  delay(1500);
}


void loop() {
  for(int r=0;r<300;r++){
    p=c[r];
    analogWrite(S,p);  
    Serial.println(p);
    delay();              
  }
}
*/








const int ad[100]={78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,79,81,85,89,93,96,98,98,96,92,88,84,81,79,78,78,78,78,78,78,78,78,76,71,66,59,54,50,49,63,94,134,177,216,244,255,242,209,164,114,67,32,16,18,26,38,51,63,73,78,78,78,78,78,78,78,78,79,82,87,93,99,104,107,108,105,100,94,88,83,79,78,78,78,78,78,78,78,78,78,78,78,78,78,78};
const int ne[100]={184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,187,190,194,199,202,204,204,201,198,194,190,186,184,184,184,184,184,184,184,184,184,190,201,215,230,243,252,255,238,200,150,97,49,14,0,10,35,70,108,144,171,183,184,184,184,184,184,184,184,184,188,193,200,206,211,214,214,210,205,199,193,187,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184,184};
int pa[100];
//vectores  de ECG de Neonato[ne] y Adulto[ad]
const int p1=0,p2=1,d1=12,d2=11,d3=10,d4=6,d5=5,d6=4,out=3;  //declaracion de GPIO
int ds1,ds2,ds3,ds4,ds5,ds6,vf,ff;
double vp1,vp2;            //vp1-pot1,amplitud   vp2-pot2,frecuencia
double k1,k2,br,ta,no;     // variables, taquicardia, bradicardia, paro y normal



void setup() {                
  pinMode(d1,INPUT);
  pinMode(d2,INPUT);
  pinMode(d3,INPUT);     //definir pines digitales como entrada
  pinMode(d4,INPUT);     
  pinMode(d5,INPUT);
  pinMode(d6,INPUT);
  Serial.begin(9600);
}



void loop() {
  vp1=analogRead(p1); 
  vp2=analogRead(p2);
  ds1=digitalRead(d1);
  ds2=digitalRead(d2);    //lectura de pines digitales y analogicos
  ds3=digitalRead(d3);  
  ds4=digitalRead(d4);
  ds5=digitalRead(d5);
  ds6=digitalRead(d6);

  if(ds1==HIGH){  //Alto es Paciente Adulto 
  	  if(ds2==HIGH){  //Alto - parametros Predifinidos
	    no=8;           //freq 78        
	    ta=5;           //freq 120
	    br=12;          //freq 50
	    //pa=8;           
	    vp1=1;
	  }
	  else{           //Bajo - parametros Variables
	 	vp1=map(vp1,0,255,0,1);   //modificar la amplitud mediante potenciometro
	  	vp1=round(vp1);
		vp2=map(vp2,0,255,0,10);     //modificar la frecuencia 
		no=map(vp2,0,10,10,6);       // normal 60 a 100 bpm
		ta=map(vp2,0,10,6,4);        // taquicardia 100 a 150 bpm
		br=map(vp2,0,10,10,16);      // bradicardia 37.5 a 60 bm 
		//pa=8;
	                //(1000/(100*x))*60     Formula para obtener frecuencia cardiaca 
	  }

	  if(ds3==HIGH && ds4==LOW && ds5==LOW && ds6==LOW){ //normal
	  	for(int r=0;r<100;r++){
	    	vf=ad[r]*vp1;                    //amplitud
	    	analogWrite(vf,out);            
	    	Serial.println(vf);
	    	delay(no);                  //freuencia
	  	}	
	  }
	  else if(ds3==LOW && ds4==HIGH && ds5==LOW && ds6==LOW){ //taquicardia
	  	for(int r=0;r<100;r++){
	    	vf=ad[r]*vp1;                  //amplitud
	    	analogWrite(vf,out);            
	    	Serial.println(vf);
	    	delay(ta);                  //freuencia
	  	}
	  }  
	  else if(ds3==LOW && ds4==LOW && ds5==HIGH && ds6==LOW){ //bradicardia
	  	for(int r=0;r<100;r++){
	    	vf=ad[r]*vp1;                  //amplitud
	    	analogWrite(vf,out);            
	    	Serial.println(vf);
	    	delay(br);                  //freuencia
	  	}
	  } 
	  else{    // paro
	  	for(int r=0;r<100;r++){
	    	analogWrite(80,out);            
	    	Serial.println(80);
	    	delay(5);                  //freuencia
	  	}
	  }



	  }
  else{           //Bajo es Paciente Neonato
	  if(ds2==HIGH){  //Alto - parametros Predifinidos
	    no=5;           //freq 120        
	    ta=3.5;           //freq 171
	    br=10;          //freq 60
	    //pa=8;           
	    vp1=1;
	  }
	  else{           //Bajo - parametros Variables
	 	vp1=map(vp1,0,255,0,1);   //modificar la amplitud mediante potenciometro
	  	vp1=round(vp1);
		vp2=map(vp2,0,255,0,10);     //modificar la frecuencia 
		no=map(vp2,0,10,10,6);       // normal 60 a 100 bpm
		ta=map(vp2,0,10,6,4);        // taquicardia 100 a 150 bpm
		br=map(vp2,0,10,10,16);      // bradicardia 37.5 a 60 bm 
		//pa=8;
	                //(1000/(100*x))*60     Formula para obtener frecuencia cardiaca 
	  }

	  if(ds3==HIGH && ds4==LOW && ds5==LOW && ds6==LOW){ //normal
	  	for(int r=0;r<100;r++){
	    	vf=ne[r]*vp1;                    //amplitud
	    	analogWrite(vf,out);            
	    	Serial.println(vf);
	    	delay(no);                  //freuencia
	  	}	
	  }
	  else if(ds3==LOW && ds4==HIGH && ds5==LOW && ds6==LOW){ //taquicardia
	  	for(int r=0;r<100;r++){
	    	vf=ne[r]*vp1;                  //amplitud
	    	analogWrite(vf,out);            
	    	Serial.println(vf);
	    	delay(ta);                  //freuencia
	  	}
	  }
	  else if(ds3==LOW && ds4==LOW && ds5==HIGH && ds6==LOW){ //bradicardia
	  	for(int r=0;r<100;r++){
	    	vf=ne[r]*vp1;                  //amplitud
	    	analogWrite(vf,out);            
	    	Serial.println(vf);
	    	delay(br);                  //freuencia
	  	}
	  } 
	  else{    // paro
	  	for(int r=0;r<100;r++){
	    	analogWrite(80,out);            
	    	Serial.println(80);
	    	delay(5);                  //freuencia
	  	}
	  }

  }
  

}

