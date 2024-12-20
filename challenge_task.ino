int trigpinn=13;
int echopinn=12;
float durationn;
float distancee;
float duration;
float distance;
int trigpin=11;
int echopin=10;
int in=0;
int out=0;
int now=0;
void setup(){
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(trigpinn, OUTPUT);
  pinMode(echopinn, INPUT);
}
void loop(){
delayMicroseconds(2);
digitalWrite(trigpinn, 1);
delayMicroseconds(10);
digitalWrite(trigpinn, 0);
durationn= pulseIn(echopinn, 1);
distancee=(durationn/2)*0.0343; //343 m/s is the speed of sonar waves (ultrasonic waves)
delayMicroseconds(2);
digitalWrite(trigpin, 1);
delayMicroseconds(10);
digitalWrite(trigpin, 0);
duration= pulseIn(echopin, 1);
distance=(duration/2)*0.0343; //343 m/s is the speed of sonar waves (ultrasonic waves)


if(distance<15 && distancee>15){
  in++;
  digitalWrite(trigpinn, 0);
  delay(250);
  }
  if(distance>15 && distancee<15){
  out++;
  digitalWrite(trigpin, 0);
  delay(250);
  }
  now=in-out;
  Serial.println(now);
  delay(100);
}
