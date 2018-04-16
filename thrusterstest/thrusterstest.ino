#include <Servo.h>

Servo esc;
Servo esc1;
Servo esc2;
Servo esc3;
Servo esc4;
Servo esc5;

void setup()
{
esc.attach(6);
esc1.attach(7);
esc2.attach(8);
esc3.attach(9);
esc4.attach(10);
esc5.attach(11);
esc.writeMicroseconds(1500); // send "stop" signal to ESC
esc1.writeMicroseconds(1500);
esc2.writeMicroseconds(1500);
esc3.writeMicroseconds(1500);
esc4.writeMicroseconds(1500);
esc5.writeMicroseconds(1500);
delay(2000);
}
 
void loop()
{
int signal = 1550; // Set signal value, which should be between 1100 and 1900
esc.writeMicroseconds(signal); 
esc1.writeMicroseconds(signal);
esc2.writeMicroseconds(signal);
esc3.writeMicroseconds(signal); 
esc4.writeMicroseconds(signal);
esc5.writeMicroseconds(signal);
}
