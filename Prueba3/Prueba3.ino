

int sensorPin = A1,sensorPin2=A3,k,y,e,g=3;
double dist=0,dist2=0,se172nsorRead=0,sensorRead2=0,T,sum=0,sum2=0,t1,t2;
////volatile char k=4,y;
bool p=LOW;



/*working variables*/
unsigned long lastTime;
double Input=T, Output=e, Setpoint=12;
double errSum, lastErr;
double kp=-111609/3, ki=777500/3, kd=-600089.56/3;
int SampleTime = 1000; //1 sec



void setup() {
Serial.begin(9600);
pinMode(g,OUTPUT);
k=4;
}


void loop(){
if(Serial.available()>0){
  y=Serial.read();
  switch (y){
    case '1':
     e=abs(y-48)*50; // 20%
     break;
    case '2':
     e=abs(y-48)*50; //40%
     break;
    case '3':
     e=abs(y-48)*50; // 60%
     break;
    case '4':
     e=abs(y-48)*50; // 80%
     break;
    default:
     e=125; // 50%
     break;
  }
  //Serial.println(e);
  Serial.println('\n');
  analogWrite(g,e);
  k=e;
  }

//else{
//  Serial.println(k);
//  Serial.write(27);       // ESC command
//  Serial.print("[2J");    // clear screen command
//  Serial.write(27);
//  Serial.print("[H");
//}

  sensorRead = analogRead(sensorPin);
  sensorRead2 = analogRead(sensorPin2);
  dist = pow(3027.4/sensorRead, 1.2134);
  dist2 = pow(3027.4/sensorRead2, 1.2134);
  T=((dist2)+(dist))/2;
  Serial.println(T);
  delay(10);
  Serial.write(27);       // ESC command
   Serial.print("[2J");    // clear screen command
   Serial.write(27);
   Serial.print("[H");
}


void Compute(){
   unsigned long now = millis();
   int timeChange = (now - lastTime);
   if(timeChange>=SampleTime)
   {
      /*Compute all the working error variables*/
      double error = Setpoint - Input;
      errSum += error;
      double dErr = (error - lastErr);

      /*Compute PID Output*/
      Output = kp * error + ki * errSum + kd * dErr;

      /*Remember some variables for next time*/
      lastErr = error;
      lastTime = now;
   }
}

void SetTunings(double Kp, double Ki, double Kd)
{
  double SampleTimeInSec = ((double)SampleTime)/1000;
   kp = Kp;
   ki = Ki * SampleTimeInSec;
   kd = Kd / SampleTimeInSec;
}

void SetSampleTime(int NewSampleTime)
{
   if (NewSampleTime > 0)
   {
      double ratio  = (double)NewSampleTime
                      / (double)SampleTime;
      ki *= ratio;
      kd /= ratio;
      SampleTime = (unsigned long)NewSampleTime;
   }
}


