#include <SoftwareSerial.h>

char incomingData;
int relayPin = 8;

// RX = Arduino D2, TX = Arduino D3
SoftwareSerial bluetoothSerial(2, 3); // RX, TX

void setup()
{
    Serial.begin(9600);          // Serial Monitor
    bluetoothSerial.begin(9600); // Bluetooth
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, LOW); // Relay OFF by default
}

void loop()
{
    // Check for Serial Monitor input
    if (Serial.available())
    {
        incomingData = Serial.read();
        handleCommand(incomingData);
    }

    // Check for Bluetooth input
    if (bluetoothSerial.available())
    {
        incomingData = bluetoothSerial.read();
        handleCommand(incomingData);
    }
}

void handleCommand(char cmd)
{
    if (cmd == '1')
    {
        digitalWrite(relayPin, HIGH); // Turn ON relay
        Serial.println("Relay ON");
    }
    else if (cmd == '0')
    {
        digitalWrite(relayPin, LOW); // Turn OFF relay
        Serial.println("Relay OFF");
    }
}
