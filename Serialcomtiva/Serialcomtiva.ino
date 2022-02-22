int l=PF_2,p2,p3;
String p;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    p=Serial.read();
    p3=p.toInt();
    p2=(p3-48)*(255/9);
    analogWrite(l,p2);
    Serial.println(p);
  }
}


