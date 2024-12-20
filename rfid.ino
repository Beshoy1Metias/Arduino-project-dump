#include <RFID.h>
#include <SPI.h>
        //SDA---DIGITAL 10
        //SCK---DIGITAL 13 (CLOCK)
        //MOSI---DIGITAL 11
        //MISO---DIGITAL 12
        //IRQ--- UNCONNECTED
        //GND---GND
        //RST---DIGITAL 9 (RESET)
     //3.3V---3.3V
RFID rf(10,9); //(sda, rst)
void setup() {
  Serial.begin(9600);
  SPI.begin();
  rf.init();
}
void loop() {
 if(rf.isCard()){
  if(rf.readCardSerial()){
    Serial.println("okay");
    delay(200);
  }
 }
}
