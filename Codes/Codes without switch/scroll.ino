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
  lcd.print("Hello World");
  }

void loop() {
    for(int i=0; i<16; i++){
    lcd.scrollDisplayRight();
    delay(250);
  }
  for(int i=16; i>0; i--){
    lcd.scrollDisplayLeft();
    delay(250);
  }
}
