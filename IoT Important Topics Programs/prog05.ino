int switchPin = 2;
int ledPin = 8;

void setup()
{
    pinMode(switchPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    int state = digitalRead(switchPin);
    digitalWrite(ledPin, state);
}
