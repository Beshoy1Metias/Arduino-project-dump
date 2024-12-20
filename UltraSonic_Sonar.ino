const int trigpinr = A4;
const int echopinr = A5;
// Right US sensor.
const int trigpinf = A2;
const int echopinf = A3;
// Left US sensor.
const int trigpinl= A0;
const int echopinl = A1;
float durationr;
float distancer;
float durationl;
float distancel;
float durationf;
float distancef;
void setup(){
  Serial.begin(9600);
  pinMode(trigpinl, OUTPUT);
  pinMode(echopinl, INPUT);
  pinMode(trigpinr, OUTPUT);
  pinMode(echopinr, INPUT);
  pinMode(trigpinf, OUTPUT);
  pinMode(echopinf, INPUT);
}
void loop(){
ultrasonicr();
ultrasonicl();
ultrasonicf();
}
void ultrasonicr(){
  digitalWrite(trigpinr, 1);
delayMicroseconds(10);
digitalWrite(trigpinr, 0);
durationr= pulseIn(echopinr, 1);
distancer=(durationr/2)*0.0343; //343 m/s is the speed of sonar waves (ultrasonic waves)
Serial.println(distancer);
delay(100);
Serial.println("distance right=");
Serial.print(distancer);
}
void ultrasonicl(){
  digitalWrite(trigpinl, 1);
delayMicroseconds(10);
digitalWrite(trigpinl, 0);
durationl= pulseIn(echopinl, 1);
distancel=(durationl/2)*0.0343; //343 m/s is the speed of sonar waves (ultrasonic waves)
Serial.println(distancel);
delay(100);
Serial.println("distance left=");
Serial.print(distancel);
}
void ultrasonicf(){
  digitalWrite(trigpinf, 1);
delayMicroseconds(10);
digitalWrite(trigpinf, 0);
durationf= pulseIn(echopinf, 1);
distancef=(durationl/2)*0.0343; //343 m/s is the speed of sonar waves (ultrasonic waves)
Serial.println(distancef);
delay(100);
Serial.println("distance front=");
Serial.print(distancef);
}
