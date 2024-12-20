#define IN1 4 //youssef bakr was here
#define IN2 5 //saleep
#define IN3 6
#define IN4 7
#define IN5 18
#define IN6 19
#define IN7 20
#define IN8 21
#define ENAR 2
#define ENBR 3
#define ENAL 4
#define ENBL 5
int irl=12;
int irr=11;
int irm=10;
void setup(){
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);
  pinMode(speedL, OUTPUT);
  pinMode(speedR, OUTPUT);
  pinMode(irl, INPUT);
  pinMode(irm, INPUT);
  pinMode(irr, INPUT);
}
void forward(){
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  digitalWrite(IN5, 1);
  digitalWrite(IN6, 0);
  digitalWrite(IN7, 1);
  digitalWrite(IN8, 0);
  analogWrite(speedL, 255); 
  analogWrite(speedR, 255);
}
void stopp(){
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  digitalWrite(IN5, 0);
  digitalWrite(IN6, 0);
  digitalWrite(IN7, 0);
  digitalWrite(IN8, 0);
  analogWrite(speedR, 0); 
  analogWrite(speedL, 0);
}
void left(){
digitalWrite(IN1, 0);
digitalWrite(IN2, 0);
digitalWrite(IN3, 0);
digitalWrite(IN4, 0);
digitalWrite(IN5, 0);
digitalWrite(IN6, 0);
digitalWrite(IN7, 0);
digitalWrite(IN8, 1);
analogWrite(speedL, 255); 
analogWrite(speedR, 255);
}
void right(){
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  digitalWrite(IN5, 0);
  digitalWrite(IN6, 0);
  digitalWrite(IN7, 0);
  digitalWrite(IN8, 0);
  analogWrite(speedL, 255); 
  analogWrite(speedR, 255);
}
void loop(){
forward();

}
/*
int irr_state=digitalRead(irr);
int irm_state=digitalRead(irm);
int irl_state=digitalRead(irl);
if(irr_state==0 && irm_state==1 && irl_state==0){
  forward();
}
else if(irr_state==0 && irm_state==0 && irl_state==1){
  left();
}
else if(irr_state==1 && irm_state==0 && irl_state==0){
  right();
}
else if(irr_state==0 && irm_state==0 && irl_state==0){
  forward();
}


*/

/*
  
  sl=digitalRead(sensorl);
  sr=digitalRead(sensorr);
  if(sl==0 && sr==0){
    forword();
  }
  if(sl==0 && sr==1){
    right();
  }
  if(sl==1 && sr==0){
    left();
  }
  if(sl==1 && sr==1){
    stopp();
  }
*/
