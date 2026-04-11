int ledRed = 13;
int ledWhite = 12;
int ledGreen = 8;
void setup(){
  pinMode(ledRed, OUTPUT);
  pinMode(ledWhite, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  delay(800);
  digitalWrite(ledRed, HIGH);
  delay(800);
  digitalWrite(ledWhite, HIGH);
  delay(800);
  digitalWrite(ledGreen, HIGH);
  delay(3500);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledWhite, LOW);
  digitalWrite(ledGreen, LOW);
}
void loop(){
}
