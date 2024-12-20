#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
byte Besho[8]= {
0b00000,0b00000,0b00000,0b00001,0b11111,0b00000,0b00100,0b00000};
byte Beshoy[8]= {
0b00000,0b00000,0b00000,0b00000,0b11111,0b00000,0b01010,0b00000};
byte Beshoyy[8]= {
0b00100,0b01010,0b00000,0b10101,0b11111,0b00000,0b00000,0b00000};
byte Beshoyyy[8]= {
0b00000,0b00000,0b01110,0b10001,0b11111,0b00001,0b00010,0b00100};

byte ahmed[8]= {
0b00110,0b00100,0b01110,0b00000,0b00100,0b00100,0b00100,0b00100};
byte ahmedd[8]= {
0b00000,0b00000,0b00000,0b11100,0b00010,0b00001,0b11111,0b00000};
byte ahmeddd[8]= {
0b00000,0b00000,0b00000,0b01100,0b10010,0b10001,0b11111,0b00000};
byte ahmedddd[8]= {
0b00000,0b00000,0b00000,0b00100,0b00010,0b00001,0b11111,0b00000};
void setup(){
 lcd.init(); //lcd.Init();//lcd.begin
 lcd.backlight();
 lcd.createChar(0,Besho);
 lcd.createChar(1,Beshoy);
 lcd.createChar(2,Beshoyy);
 lcd.createChar(3,Beshoyyy);
 lcd.createChar(4,ahmed);
 lcd.createChar(5,ahmedd);
 lcd.createChar(6,ahmeddd);
 lcd.createChar(7,ahmedddd);
lcd.clear(); 

}

void loop() {
 
lcd.setCursor(15,1);
lcd.write(byte(0));
lcd.setCursor(14,1);
lcd.write(byte(1));
lcd.setCursor(13,1);
lcd.write(byte(2));
lcd.setCursor(12,1);
lcd.write(byte(3));
lcd.setCursor(15,0);
lcd.write(byte(4));
lcd.setCursor(14,0);
lcd.write(byte(5));
lcd.setCursor(13,0);
lcd.write(byte(6));
lcd.setCursor(12,0);
lcd.write(byte(7));
}
