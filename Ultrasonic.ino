int trigpin=13;
int echopin=12;
float duration;
float distance;
int LED=11;
void setup(){
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(LED, OUTPUT);
}
void loop(){
digitalWrite(trigpin, 1);
delayMicroseconds(10);
digitalWrite(trigpin, 0);
duration= pulseIn(echopin, 1);
distance=(duration/2)*0.0343; //343 m/s is the speed of sonar waves (ultrasonic waves)
delay(100);
if(distance>10){
  digitalWrite(LED, 1);
}
else{ digitalWrite(LED, 0);

}
}
