#include <LiquidCrystal.h>

// LCD Keypad Shield uses fixed pin mappings:
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup()
{
    lcd.begin(16, 2); // Initialize LCD (16 columns, 2 rows)

    lcd.setCursor(0, 0);     // Set cursor to first row
    lcd.print("RAJJIT L"); // Display your name
}

void loop()
{
    // No need for updates, text stays on screen
}