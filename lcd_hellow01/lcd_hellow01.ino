// FizzBuzz for Arduino LCD Keypad Shield
//
// include the library code:
#include <LiquidCrystal.h>
 
unsigned int t;
 
int adc_key_in ;
 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
 
void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Hello NINA! ^^");
  lcd.setCursor(0,1);
  lcd.print("    123456789");
}

void loop() {
}
