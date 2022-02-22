
int const se[]={67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,70,74,78,82,86,88,87,85,82,77,73,69,67,67,67,67,67,67,67,67,67,64,59,53,47,41,37,36,51,83,126,171,213,243,255,241,206,158,105,55,17,0,3,11,24,37,51,61,67,67,67,67,67,67,67,67,67,71,76,83,89,94,98,98,95,90,84,77,71,68,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67},sa=PF_3,sad=PB_3;
int es,r,t=10;


void setup(){
  Serial.begin(9600);
  pinMode(sa,OUTPUT);
  delay(1500);
}

void loop(){
  if(Serial.available()>0){
    es=Serial.read();
    es=es-48;
    t=map(es,0,9,12,3);
  }
  for(int k=0;k<=99;k++){
    r=se[k];
    //analogWrite(sad,r);
    delay(t);
//    Serial.println(r);
//    Serial.println(t*20);
//    analogWrite(sa,t*20);
  }
}
