#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(7, 8); // CE, CSN
const byte address[]="besho";
#define vrx A0
void setup() {
Serial.begin(9600);
radio.begin();
radio.openWritingPipe(address); // 00002
radio.setPALevel(RF24_PA_MIN);
pinMode(vrx, INPUT);
radio.stopListening();
}
void loop() {
delay(5);

int potValue= analogRead(vrx);
int angleValue= map(potValue, 0, 1023, 0, 170);
radio.write(&angleValue, sizeof(angleValue));
delay(5);
}
