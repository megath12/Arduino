float xn,xn1=0,xn2=0,xn3=0,xn4=0,xn5=0,xn6=0,xn7=0,xn8=0,xn9=0,xn10=0
int en=,sa=,Fs=1000/100;

void setup() {
pinMode(en,INPUT);
pinMode(sa,OUTPUT);
}

void loop() {
xn=analogRead();

delay(Fs);
ysal=0.33*xn+0.33*xn1+0.33*xn2
xn2=xn1;
xn1=xn;
analogWrite(,ysal);
}
