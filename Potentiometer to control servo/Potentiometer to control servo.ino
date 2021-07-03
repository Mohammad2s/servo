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
int po1 = A1, po2 = A2, po3 = A3, po4 = A4, po5 = A5;    // attached the potentiometer is to analog pins
int pot1, pot2, pot3, pot4, pot5; 
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
 pot1 = analogRead(po1); 		// linking each potentiometer with its servo motor
    pot1 = map(pot1, 0, 1023, 0, 90);
    servo1.write(pot1); 
  
 pot2 = analogRead(po2);
    pot2 = map(pot2, 0, 1023, 0, 90);
    servo2.write(pot2);
  
 pot3 = analogRead(po3);
    pot3 = map(pot3, 0, 1023, 0, 90);
    servo3.write(pot3);
  
 pot4 = analogRead(po4);
    pot4 = map(pot4, 0, 1023, 0, 90);
    servo4.write(pot4);
  
 pot5 = analogRead(po5);
    pot5 = map(pot5, 0, 1023, 0, 90);
    servo5.write(pot5);
}