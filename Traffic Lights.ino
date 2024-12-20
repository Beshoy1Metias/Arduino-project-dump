void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(13, 1);
   delay(5000);
   digitalWrite(13, 0);
   digitalWrite(11, 1);
   delay(1000);
   digitalWrite(11, 0);
  digitalWrite(8, 1);
  delay(3000);
  digitalWrite(8, 0);
  
}
