const int redPin = 3;
const int greenPin = 5;
const int bluePin = 6;
const int redPot = A0;
const int greenPot = A1;
const int bluePot = A2;
void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    Serial.begin(9600);
}
void loop() {
    int redValue = analogRead(redPot);
    int greenValue = analogRead(greenPot);
    int blueValue = analogRead(bluePot);
    int red = map(redValue, 0, 1023, 0, 255);
    int green = map(greenValue, 0, 1023, 0, 255);
    int blue = map(blueValue, 0, 1023, 0, 255);
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
    Serial.println(red);
    Serial.println(green);
    Serial.println(blue);
    //delay(100);
}
