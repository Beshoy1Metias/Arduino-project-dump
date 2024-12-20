#include <LiquidCrystal_I2C.h>
int i=0;
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
lcd.init();
lcd.backlight();
lcd.print("sadco");
lcd.setCursor(1,1);
lcd.print("01277872568");
}

void loop() {
  for(i=0; i<15; i++){
    lcd.scrollDisplayLeft();
    delay(500);
  }
for(i=0; i>15; i++){
    lcd.scrollDisplayRight();
    delay(500);
  }
}
