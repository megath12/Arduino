//modif.ino

int l=3;

void setup() {
  pinMode(l, OUTPUT);
}

void loop() {

for(int k=0;k<=250;k=k+2){
	analogWrite(l,k);
	delay(10);
}
for(int k=250;k>=0;k=k-2){
	analogWrite(l,k);
	delay(10);
}

}
