int greenLed = 13;
int amberLed = 8;
int blueLed = 6;
const int potentiometer = A1;
void setup() {
    pinMode(greenLed, OUTPUT);
    pinMode(amberLed, OUTPUT);
    pinMode(blueLed, OUTPUT);
    Serial.begin(9600);
}
void loop() {
    digitalWrite(greenLed, HIGH);
    int potValue = analogRead(potentiometer);
    int percentage = map(potValue, 0, 1023, 0, 100);
    Serial.print("Pot: ");
    Serial.print(potValue);
    Serial.print(" (");
    Serial.print(percentage);
    Serial.println("%)");
    if (potValue > 614) {
        digitalWrite(amberLed, HIGH);
    } else {
        digitalWrite(amberLed, LOW);
    }
    int blueLedBrightness = map(potValue, 0, 1023, 0, 255);
    analogWrite(blueLed, blueLedBrightness);
}
