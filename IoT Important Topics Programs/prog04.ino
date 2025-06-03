int ldrPin = A0;
int ledPin = 8;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    int ldrValue = analogRead(ldrPin);

    if (ldrValue < 500)
    { 
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }

    delay(200);
}
