      // uultrasonic distance sensor - infrared fire alarm sensor - line follower - buzzer - led (tone(pin, freq, duration))
int LEDRED=13;
int BUZZER=11;
int FS=10;
int trigpin=9;
int echopin=8;
float duration;
float distance;
char reading;
int LEDYELLOW=12;
int BUZZERF=7;
int BUZZERD=6;
int LEDWHITE=5;
void setup(){
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(LEDRED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(FS, INPUT);
}
void loop(){
  digitalWrite(trigpin, 1);
  delayMicroseconds(10);
  digitalWrite(trigpin, 0);
  duration=pulseIn(echopin, 1);
  distance=(duration/2)*0.0343; // cm/microseconds
  if(distance>90 || distance<110){
  digitalWrite(LEDRED, 1);
  delay(100);
  digitalWrite(BUZZERD, 1);
  delay(100);
  digitalWrite(LEDRED, 0);
  delay(100);
  digitalWrite(BUZZERD, 0);
  delay(100);
  }
  if(digitalRead(FS)==1){
    digitalWrite(LEDYELLOW, 1);
    delay(100);
    digitalWrite(BUZZERF, 1);
    delay(100);
    digitalWrite(LEDYELLOW, 0);
    delay(100);
    digitalWrite(BUZZERF, 0);
    delay(100);
  }
  reading=Serial.read();
  if(reading=='a'){
    digitalWrite(LEDWHITE, 1);
  }
  if(reading=='s'){
    digitalWrite(LEDWHITE, 0);
  }
}
