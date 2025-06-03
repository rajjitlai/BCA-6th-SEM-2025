const int ldrPin = A0;
const int ledPin = 13;
const int threshold = 500;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int ldrValue = analogRead(ldrPin);
    Serial.println(ldrValue);
    
    if (ldrValue < threshold)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }

    delay(1000);
}
