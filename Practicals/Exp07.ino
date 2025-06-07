#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
SoftwareSerial bluetoothSerial(0, 1); 

void setup()
{
    lcd.begin(16, 2);
    lcd.backlight();
    Serial.begin(9600);
    bluetoothSerial.begin(9600);
}

void loop()
{
    if (bluetoothSerial.available())
    {
        String received = bluetoothSerial.readStringUntil('\n'); 
        received.trim();                                         

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Received:");

        lcd.setCursor(0, 1);
        lcd.print(received);

        Serial.print("Received Data: ");
        Serial.println(received);
    }
}