#include <LiquidCrystal.h>

const int RS = 12;
const int EN = 11;
const int D5 = 5;
const int D4 = 4;
const int D3 = 3;
const int D2 = 2;

int count =0;
LiquidCrystal lcd(RS, EN, D5, D4, D3, D2);

void setup() {
  lcd.begin(16,2);
  }

void loop() {
  lcd.setCursor(5,0);
  lcd.print("Counter");
  
  for(count = 0; count <= 100; count++) {
    lcd.setCursor(7, 1);
    lcd.print(count);
    delay(1000);
  }
  
  lcd.clear();
}
