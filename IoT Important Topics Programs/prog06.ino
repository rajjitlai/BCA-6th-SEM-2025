#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

int ledPin = 8;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    dht.begin();
}

void loop()
{
    float temp = dht.readTemperature();

    if (!isnan(temp))
    {
        Serial.print("Temp: ");
        Serial.println(temp);

        if (temp > 30.0)
        {
            digitalWrite(ledPin, HIGH);
        }
        else
        {
            digitalWrite(ledPin, LOW);
        }
    }

    delay(2000);
}
