int gasSensor = A0;
int redLED = 8;
int greenLED = 9;
int buzzer = 10;

void setup()
{
    pinMode(redLED, OUTPUT);
    pinMode(greenLED, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(gasSensor, INPUT);
}

void loop()
{
    int gasLevel = analogRead(gasSensor);

    if (gasLevel > 400)
    {
        digitalWrite(redLED, HIGH);
        digitalWrite(greenLED, LOW);
        digitalWrite(buzzer, HIGH);
    }
    else
    {
        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, HIGH);
        digitalWrite(buzzer, LOW);
    }

    delay(500);
}
