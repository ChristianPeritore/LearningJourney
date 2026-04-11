int NumeroPin = 13;
int Ritardo = 200;
void setup()
{
pinMode(NumeroPin, OUTPUT);
}
void loop()
{
digitalWrite(NumeroPin, HIGH);
delay(Ritardo);
digitalWrite(NumeroPin, LOW);
delay(Ritardo);
}
