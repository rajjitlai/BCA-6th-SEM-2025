#include <dht.h>
#include <LiquidCrystal.h>

dht DHT;

#define dataPin 2

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup()
{
    lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("Initializing...");
    delay(1000);
}

void loop()
{
    int readData = DHT.read11(dataPin);

    if (readData == DHTLIB_OK)
    {
        float temperature = DHT.temperature;
        float humidity = DHT.humidity;

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("T: ");
        lcd.print(temperature);
        lcd.print((char)223);
        lcd.print("C");

        lcd.setCursor(0, 1);
        lcd.print("H: ");
        lcd.print(humidity);
        lcd.print("%");
    }
    else
    {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Read Error");
    }

    delay(2000);
}
