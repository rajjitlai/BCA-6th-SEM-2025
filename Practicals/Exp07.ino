#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
SoftwareSerial bluetoothSerial(2, 3);
void setup()
{
    lcd.begin(16, 2);
    lcd.backlight();
    Serial.begin(9600);
    bluetoothSerial.begin(9600);
}
void loop()
{
    if (bluetoothSerial.available() > 0)
    {
        char data = bluetoothSerial.read();
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Received Data:");
        lcd.setCursor(0, 1);
        lcd.print(data);
        Serial.print("Received Data: ");
        Serial.println(data);
    }
}

// LED ON / OFF
char data = 0;
void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}
void loop()
{
    if (Serial.available() > 0)
    {
        data = Serial.read();
        Serial.print(data);
        Serial.print("\ ");
        if(data == '1')
            digitalWrite(13, HIGH);
        else if (data == '0')
            digitalWrite(13, LOW);
    }
}