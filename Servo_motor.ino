#include <Servo.h>
Servo arm; //orange input brown gnd
int i;
void setup(){
  arm.attach(11);
}
void loop(){
arm.write(0);
for(i=0; i<=180; i++){ //counterclockwise , start; end; update
  arm.write(i);
  delay(15);
}
}
