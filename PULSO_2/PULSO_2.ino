

/*  Design by Carlos Iturbe Gil      
 *  email -  megath@live.com
 *  PHRACKJ_Labs
 *  This code can be modified, there is a obviously difference with values of an oximeter but works good as a project 
 *  The values depend from the pressure apply to the sensor and the conditions of the pacient
*/


int pc=A5,led=13,b,K;
double R1,R2;


void setup() {
  Serial.begin(9600);
  Serial.println("Medidor de Pulso Cardiaco");
  pinMode(pc,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  R1=millis();
  delay(2000);
}


void loop() {
  b=analogRead(pc);
    if (b>520&b<580){
      R2=millis(); 
      K=60/((R2-R1)/1000);
      R1=millis();
      digitalWrite(led,HIGH);
      delay(200);
      digitalWrite(led,LOW);
      Serial.print("FC: ");
      Serial.println(K);
    }
}



