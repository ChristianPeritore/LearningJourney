const int led = 9;
const int butt = 2;
void setup(){
  pinMode(led, OUTPUT);
  pinMode(butt, INPUT_PULLUP);
}
void loop(){
  digitalWrite(led, LOW);
  int buttState = digitalRead(butt);
  if (buttState == LOW) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW); 
  }
}
