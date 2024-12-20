int LEDPin=11;
int PB=10;
int FS=12;
int BUZZER=13;

void setup() {
  pinMode(LEDPin, OUTPUT);
  pinMode(PB, INPUT);
  pinMode(FS, INPUT);
  pinMode(BUZZER, OUTPUT);

}

void loop() {
  if( digitalRead(PB) == 0 && digitalRead(FS)==0){
  digitalWrite(LEDPin, 1);
  delay(100);
  digitalWrite(BUZZER, 1);
  delay(100);
  digitalWrite(LEDPin, 0);
  delay(100);
  digitalWrite(BUZZER, 0);
  delay(100);
    
  }
  else{
    digitalWrite(LEDPin, 0);
  digitalWrite(BUZZER, 0);
  }
  
}
