#define pinPot A0
#define Led1 12
#define Led2 8
#define Led3 7
int a = 0;
void setup () {
 Serial.begin(9600);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
}
void loop () {
 a = analogRead(pinPot);
 Serial.println(a);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  if (a > 341) {
   digitalWrite(Led1, HIGH); 
  }
  if (a > 682) {
   digitalWrite(Led2, HIGH); 
  }
  if (a > 900) {
   digitalWrite(Led3, HIGH); 
  }
  delay(20);
}
