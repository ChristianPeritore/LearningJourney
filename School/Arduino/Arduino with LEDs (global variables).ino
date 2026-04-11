int pin = 13;
int retard = 200;
void setup(){
pinMode(pin, OUTPUT);
}
void loop(){
digitalWrite(pin, HIGH);
delay(retard);
digitalWrite(pin, LOW);
delay(retard);
}
