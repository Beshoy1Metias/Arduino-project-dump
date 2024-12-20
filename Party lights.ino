void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop() {
  digitalWrite(8, 1);
  delay(300);
  digitalWrite(11, 1);
  delay(300);
  digitalWrite(13, 1);
  delay(300);
  digitalWrite(8, 0);
  delay(300);
  digitalWrite(11, 0);
  delay(300);
  digitalWrite(13, 0);
  delay(300);
}
