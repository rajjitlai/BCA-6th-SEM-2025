const int button = 2;
const int ledPin = 13;
void setup()
{
    pinMode(2, INPUT);
    pinMode(13, OUTPUT);
}
void loop()
{
    if (digitalRead(button) == 1)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);
    }
}