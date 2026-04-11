#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20, 16, 2);
void setup(){
  lcd.init();
  lcd.backlight();
}
void loop(){
  lcd.setCursor(0, 0);
  lcd.print("Works? yes :)");
  lcd.setCursor(0, 1);
  lcd.print("Helloooooo");
  delay(3000);
  lcd.clear();
  delay(1000);
}
