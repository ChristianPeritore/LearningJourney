int buttonPin = 10;
int ledPin = 4;
bool ledState = false;
bool lastButtonState = false;
void setup () {
	pinMode(ledPin, OUTPUT);
	pinMode(buttonPin, INPUT_PULLUP);
}
void loop () {
	bool currentButtonState = digitalRead(buttonPin);

	if (currentButtonState == LOW and lastButtonState == HIGH) {
		ledState = !ledState;
		digitalWrite(ledPin, ledState);
		delay(10);
	}
	lastButtonState = currentButtonState;
}
