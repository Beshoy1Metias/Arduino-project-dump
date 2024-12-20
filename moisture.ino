int sensorpin= A0;
int sensorvalue;
int limit=300;

void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
sensorvalue= analogRead(sensorpin);
Serial.println("Sensor value:");
Serial.println(sensorvalue);
if(sensorvalue<limit){
  digitalWrite(13, 1);
}
else{
  digitalWrite(13, 0);
}
delay(1000);
}
