#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

String message = " EMA LEIBAK NA YAIPHARE ";

void setup() {
  lcd.begin(16, 2);
  lcd.print(message);
  delay(1000);
}

void loop() {
  lcd.scrollDisplayLeft();
  delay(300);
}
