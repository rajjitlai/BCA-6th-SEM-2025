#include <dht.h>
#define dataPin 2

dht DHT;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int status = DHT.read22(dataPin); // Use read11() for DHT11

    Serial.print(F("Temperature: "));
    Serial.print(DHT.temperature);
    Serial.print(F("°C   Humidity: "));
    Serial.print(DHT.humidity);
    Serial.println(F("%"));

    delay(2000);
}
