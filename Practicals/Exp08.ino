#include <SoftwareSerial.h>

SoftwareSerial bluetoothSerial(2, 3); 
const int relayPin = 7;

void setup()
{
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, LOW);

    Serial.begin(9600);         
    bluetoothSerial.begin(9600);
}

void loop()
{
    if (bluetoothSerial.available() > 0)
    {
        char command = bluetoothSerial.read();

        if (command == '1')
        {
            digitalWrite(relayPin, HIGH);
            Serial.println("Relay turned ON");
        }
        else if (command == '0')
        {
            digitalWrite(relayPin, LOW);
            Serial.println("Relay turned OFF");
        }
    }
}
