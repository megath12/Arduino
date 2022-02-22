
/*working variables*/
unsigned long lastTime;
double Input=T, Output=e, Setpoint=3;
double errSum, lastErr;
double kp=-1609, ki=7500, kd=-60.56;

void Compute(){
   /*How long since we last calculated*/
   unsigned long now = millis();
   double timeChange = (double)(now - lastTime);
  
   /*Compute all the working error variables*/
   double error = Setpoint - Input;
   errSum += (error * timeChange);
   double dErr = (error - lastErr) / timeChange;
  
   /*Compute PID Output*/
   Output = kp * error + ki * errSum + kd * dErr;
  
   /*Remember some variables for next time*/
   lastErr = error;
   lastTime = now;
}
  
void SetTunings(double Kp, double Ki, double Kd){
   kp = Kp;
   ki = Ki;
   kd = Kd;
}
