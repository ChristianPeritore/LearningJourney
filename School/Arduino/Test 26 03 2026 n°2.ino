int greenLed = 8;
int yellowLed = 7;
int redLed = 4;
int greenButton = 12;
int yellowButton = 11;
int redButton = 2;
void setup() {
    pinMode(greenLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(redLed, OUTPUT);
    pinMode(greenButton, INPUT_PULLUP);
    pinMode(yellowButton, INPUT_PULLUP);
    pinMode(redButton, INPUT_PULLUP);
}
void loop() {
    if (digitalRead(greenButton) == LOW) {
        digitalWrite(greenLed, HIGH);
    } else {
        digitalWrite(greenLed, LOW);
    }
    if (digitalRead(yellowButton) == LOW) {
        digitalWrite(yellowLed, HIGH);
    } else {
        digitalWrite(yellowLed, LOW);
    }
    if (digitalRead(redButton) == LOW) {
        digitalWrite(redLed, HIGH);
    } else {
        digitalWrite(redLed, LOW);
    }
}
