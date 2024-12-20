 int in1 = 9;
 int in2 = 8;

 int in3 = 7;
 int in4 = 6;

 int enA = 10;
 int enB = 5;
 
long disf;
 float disr;
 float disl;
 long timef;
 float timer;
 float timel;
 float limit=5;     //edit
 
 int time90=90;   //edit time for 90 degrees
 int time180=180; //edit time for 180 degrees
 
 int sp=255;        //edit speed right
 int spl=81;        //edit speed left
 int trigpinf = A2;
 int echopinf = A3;

 int trigpinr = A4;
 int echopinr = A5;

 int trigpinl = A0;
 int echopinl = A1;
void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  pinMode(trigpinf, OUTPUT);
  pinMode(trigpinr, OUTPUT);
  pinMode(trigpinl, OUTPUT);
  pinMode(echopinf, INPUT);
  pinMode(echopinr, INPUT);
  pinMode(echopinl, INPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
}
void loop(){
forward();

}


void ultrasonicf(){
  digitalWrite(trigpinf, 0);
  delayMicroseconds(2);
  digitalWrite(trigpinf, 1);
  delayMicroseconds(10);
  digitalWrite(trigpinf, 0);
  timef= pulseIn(echopinf, 1);
  disf=timef*(0.0343/2); 
}
void ultrasonicr(){
  digitalWrite(trigpinr, 0);
  delayMicroseconds(2);
  digitalWrite(trigpinr, 1);
  delayMicroseconds(10);
  digitalWrite(trigpinr, 0);
  timer= pulseIn(echopinr, 1);
  disr=timer*(0.0343/2);
}
void ultrasonicl(){
  digitalWrite(trigpinl, 0);
  delayMicroseconds(2);
  digitalWrite(trigpinl, 1);
  delayMicroseconds(10);
  digitalWrite(trigpinl, 0);
  timel= pulseIn(echopinl, 1);
  disl=timel*(0.0343/2);
}

void stopp()

{

 digitalWrite(in1, 0);
 digitalWrite(in2, 0);

 digitalWrite(in3, 0);
 digitalWrite(in4, 0);

 analogWrite(enA, 0);
 analogWrite(enB, 0);
delay(100);
}
void reverse ()

{

 digitalWrite(in1, 1);
 digitalWrite(in2, 0);

 digitalWrite(in3, 1);
 digitalWrite(in4, 0);

 analogWrite(enA, spl);
 analogWrite(enB, sp);
 delay(time180);

}
void right () 

{

 digitalWrite(in1, 1); 
 digitalWrite(in2, 0);

 digitalWrite(in3, 0);
 digitalWrite(in4, 1);

 analogWrite(enA, spl);
 analogWrite(enB, sp);
 delay(time90);

}
void left () 

{

 digitalWrite(in1, 0);
 digitalWrite(in2, 1);

 digitalWrite(in3, 1);
 digitalWrite(in4, 0);

 analogWrite(enA, spl); 
 analogWrite(enB, sp);
 delay(time90);

}
void forward ()

{

 digitalWrite(in1, 0);
 digitalWrite(in2, 0);

 digitalWrite(in3, 1);
 digitalWrite(in4, 0);

 analogWrite(enA, spl); 
 analogWrite(enB, sp);

}
