#include<Servo.h>


void setup() {
  Servo b1,b2,b3,b4,l1,l2,l3,l4;
  b1.attach(4);
  l1.attach(5);
  b2.attach(6);
  l2.attach(7);
  b3.attach(8);
  l3.attach(9);
  b4.attach(10);
  l4.attach(11);

b1.write(180);
  
}

void loop() {
  
}
