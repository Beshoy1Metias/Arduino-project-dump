#define vrx A0
#define vry A1
int SW=2;
int xpos=0;
int ypos=0;
int SWs=0;
int mapx;
int mapy;
int counter=0;

void setup() {
  Serial.begin(9600);
  pinMode(vrx, INPUT);
  pinMode(vry,INPUT);
  pinMode(SW, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  xpos= analogRead(vrx);
  ypos= analogRead(vry);
  SWs=digitalRead(SW);
  mapx= map(xpos, 0, 1023, -512, 512);
  mapy= map(ypos, 0, 1023, -512, 512);
  Serial.print("x:");
  Serial.print(mapx);
  Serial.print("|y:");
  Serial.print(mapy);
  Serial.print("|Button:");
  Serial.println(SWs);
  delay(100);
  
  }
