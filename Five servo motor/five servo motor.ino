#include <Servo.h>
int servosignal = 1; 	//aattached first servo to pin1
Servo servo1;
int servosignal2 = 2;	//aattached second servo to pin2
Servo servo2;
int servosignal3 = 3;	//aattached third servo to pin3
Servo servo3;
int servosignal4 = 4;	//aattached fourth servo to pin4
Servo servo4;
int servosignal5 = 5;	//aattached fith servo to pin 5
Servo servo5;
void setup()
{
  servo1.attach (servosignal);
  servo2.attach (servosignal2);
  servo3.attach (servosignal3);
  servo4.attach (servosignal4);
  servo5.attach (servosignal5);
}

void loop()
{
  servo1.write(90); 	//making each servo to move to 90 degree, then after one seconf iy will get back to 0 degree
  delay(1000);
  servo1.write(0);
  delay(1000);
   servo2.write(90);
  delay(1000);
   servo2.write(0);
  delay(1000);
   servo3.write(90);
  delay(1000);
   servo3.write(0);
  delay(1000);
   servo4.write(90);
  delay(1000);
   servo4.write(0);
  delay(1000);
   servo5.write(90);
  delay(1000);
   servo5.write(0);
  delay(1000);
}