const int ledRed = 4; 
const int ledYellow = 2; 
const int ledGreen = 7; 
const int button = 8; 
void setup(){
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(button, INPUT_PULLUP); // Fundamental!
}
void loop(){
  int state = digitalRead(button);
  if (state == LOW){ // If I press the button
    digitalWrite(ledGreen, LOW);    // Turn off Green
    digitalWrite(ledYellow, HIGH);   // Turn on Yellow
    delay(2000); 
    digitalWrite(ledYellow, LOW);    // Turn off Yellow
    digitalWrite(ledRed, HIGH);   // Turn on Red
    delay(5000); 
    digitalWrite(ledRed, LOW);    // Turn off Red at the end
    delay(1000);
  } else { 
    digitalWrite(ledGreen, HIGH);   // Only Green turned on
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledRed, LOW);
  }
}
