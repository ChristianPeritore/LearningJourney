#include <EEPROM.h>
const int pinPot = A0;
const int pinLamp = 9;
const int pinWarning = 13;
const int pinButt = 3;
int rawValue = 0;
int PWMvalue = 0;
int perc = 0;
int memoryAddress = 0;
void setup() {
  pinMode(pinLamp, OUTPUT);
  pinMode(pinWarning, OUTPUT);
  pinMode(pinButt, INPUT);  
  Serial.begin(9600);
  PWMvalue = EEPROM.read(memoryAddress);
  analogWrite(pinLamp, PWMvalue);
  Serial.print("Value taken from memory: ");
  Serial.println(PWMvalue);
}
void loop() {
  rawValue = analogRead(pinPot);
  PWMvalue = map(rawValue, 0, 1023, 0, 255);
  perc = map(rawValue, 0, 1023, 0, 100);
  analogWrite(pinLamp, PWMvalue);
  if (perc > 70) {
    digitalWrite(pinWarning, HIGH);
  } else {
    digitalWrite(pinWarning, LOW);
  }
  if (digitalRead(pinButt) == LOW) {
    EEPROM.update(memoryAddress, PWMvalue);
    Serial.println("\nValue saved in memory.");
    delay(500);
  }
  Serial.print("Raw: "); Serial.print(rawValue);
  Serial.print(" | PWM: "); Serial.print(PWMvalue);
  Serial.print(" | Perc: "); Serial.print(perc);
  Serial.print("% | Allarm: ");
  Serial.println(perc > 70 ? "ACTIVE" : "OFF");
  delay(500);
}
