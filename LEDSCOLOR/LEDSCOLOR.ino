//LEDSCOLOR.ino


int R=3, G = 5, B = 6;
int Ri=9, Gi=10, Bi =11;


int Re = 0; 
int Gr = 255;
int Bl = 255;

int Red = 255; 
int Gre = 0;
int Blu = 0;


void setup(){
 Serial.begin(9600);
}
void loop(){
//Serial.write(red);
//if (Serial.available()>0) {
//  
//red = Serial.read();
//
////Serial.write(red);
//// do it again:
//green = Serial.read();
////   // do it again:
//blue = Serial.read();
//
analogWrite(R,Re); // 
analogWrite(G,Gr); //
analogWrite(B,Bl);

analogWrite(Ri,Red); // 
analogWrite(Gi,Gre); //
analogWrite(Bi,Blu);


//analogWrite(G,green); // 
//analogWrite(B,blue); // 

//   Serial.print(red);
//   Serial.print(green);
//   Serial.print(blue);
 }
 //}


