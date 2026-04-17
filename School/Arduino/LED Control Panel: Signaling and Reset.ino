int buttRed = 2;
int buttGreen = 4;
int buttBlue = 7;
int buttBlack = 8;
int redLed = 13;
int greenLed = 12;
int blueLed = 9;
int stateButtRed, stateButtGreen, stateButtBlue, stateButtBlack;
void setup(){
  pinMode(buttRed, INPUT);
  pinMode(buttGreen, INPUT);
  pinMode(buttBlue, INPUT);
  pinMode(buttBlack, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}
void loop(){
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
  int stateButtRed = digitalRead(buttRed);
  int stateButtGreen = digitalRead(buttGreen);
  int stateButtBlue = digitalRead(buttBlue);
  int stateButtBlack = digitalRead(buttBlack);
  if (stateButtBlack == HIGH) {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(blueLed, LOW);
  }
  if (stateButtRed == HIGH) {
    digitalWrite(redLed, HIGH);
  }
  if (stateButtGreen == HIGH) {
    digitalWrite(greenLed, HIGH); 
  }
  if (stateButtBlue == HIGH) {
    digitalWrite(blueLed, HIGH); 
  }
}
