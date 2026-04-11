#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20, 16, 2);
const int pinPot = A0;
const int pinLed = 6;
void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(pinLed, OUTPUT);
  lcd.setCursor(0,0);
  lcd.print("Hi / hello! :)");
  delay(2000);
  lcd.clear();
}
void loop() {
  int analogValue = analogRead(pinPot);
  int perc = map(analogValue, 0, 1023, 0, 100);
  int brightness = map(analogValue, 0, 1023, 0, 255);
  analogWrite(pinLed, brightness);
  lcd.setCursor(0, 0);
  lcd.print("Pot: ");
  lcd.print(perc);
  lcd.print("%   ");
  lcd.setCursor(0, 1);
  int squareNumbers = map(perc, 0, 100, 0, 16);
    for (int i = 0; i < 16; i++) {
      if (i < squareNumbers) {
        lcd.print((char)(255));
    } else {
        lcd.print(" ");
    }
  }
  delay(50);
}
