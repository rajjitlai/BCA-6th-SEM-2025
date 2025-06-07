#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
SoftwareSerial bluetoothSerial(2, 3);
const int ledPin = 13;

void setup()
{
    lcd.begin(16, 2);
    lcd.backlight();

    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);

    Serial.begin(9600);
    bluetoothSerial.begin(9600);
}

void loop()
{
    if (bluetoothSerial.available())
    {
        String received = bluetoothSerial.readStringUntil('\n');
        received.trim();
        received.toUpperCase();

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Received:");
        lcd.setCursor(0, 1);
        lcd.print(received);

        Serial.print("Received Data: ");
        Serial.println(received);

        if (received == "LEDON")
        {
            digitalWrite(ledPin, HIGH);
        }
        else if (received == "LEDOFF")
        {
            digitalWrite(ledPin, LOW);
        }
    }
}
