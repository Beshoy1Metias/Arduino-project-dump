int counter = 0;
int currentState1 = 0;
int previousState1 = 0;
int currentState2 = 0;
int previousState2 = 0;
int inside = 0;
int outside = 0;
int echopin;
int trigpin;
float duration;
float distance;
void setup(){
  pinMode(echopin, INPUT);
  pinMode(trigpin, OUTPUT);
}
void loop(){
delayMicroseconds(2);
digitalWrite(trigpin, 1);
delayMicroseconds(10);
digitalWrite(trigpin, 0);
duration= pulseIn(echopin, 1);
distance=(duration/2)*0.0343;


if (distance <= 90){
currentState1 = 1;
}
else {
currentState1 = 0;
}
delay(100);
if(currentState1 != previousState1 && currentState1 == 1){
counter++;
inside++;
}
if (distance > 90 && distance <= 180){
currentState2 = 1;
}
else {
currentState2 = 0;
}
delay(100);
if(currentState2 != previousState2 && currentState2 == 1){
counter--;
outside++;
}
  
}
