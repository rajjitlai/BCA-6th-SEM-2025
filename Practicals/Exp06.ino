#include<Wire.h> 
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int mq135Pin = A0;
void setup()
{
    lcd.begin(16, 2);        
    lcd.backlight();         
    pinMode(ledPin, OUTPUT); 
    Serial.begin(9600); 
}
void loop()
{
    int mq135Value = analogRead(mq135Pin);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Air Quality:");
    lcd.setCursor(0, 1);
    lcd.print(mq135Value);
    if (mq135Value > thresholdValue)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW); 
    }
    Serial.print("Air Quality: ");
    Serial.println(mq135Value);
    delay(2000);
}