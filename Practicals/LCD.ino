// Connection
/* 
RS → D8  
EN → D9  
D4 → D4  
D5 → D5  
D6 → D6  
D7 → D7
*/

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
  // nothing here
}
