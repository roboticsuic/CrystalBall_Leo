To be able to use the different functions we have to include the liquid crystal library. 
Remember that this code is for the IDE of ARDUINO

--> Code Starts

#include <LiquidCrystal.h>

const int RS = 12;
const int EN = 11;
const int D5 = 5;
const int D4 = 4;
const int D3 = 3;
const int D2 = 2;

LiquidCrystal lcd(RS, EN, D5, D4, D3, D2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16,2);
  pinMode(switchPin,INPUT);
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Magic 8Ball!");
}

void loop() {
  switchState= digitalRead(switchPin);
  if (switchState != prevSwitchState){
    if(switchState == LOW) {
      reply = random(8);
      lcd.clear(); // clears the writing
      lcd.setCursor(0,0);
      lcd.print("The ball says:");
      lcd.setCursor(0,1);

      switch(reply){ // the program will enter the case assigned to the switch
        case 0:
        lcd.print("Yes..");
        break;
        case 1:
        lcd.print("Most Likely");
        break;
        case 2:
        lcd.print("Certainly");
        break;
        case 3:
        lcd.print("Outlook good");
        break;
        case 4:
        lcd.print("Is Unsure");
        break;
        case 5:
        lcd.print("Ask again");
        break;
        case 6:
        lcd.print("Really Doubtful");
        break;
        case 7:
        lcd.print("No");
        break;
        case 8:
        lcd.print("Maybe");
        break;
        case 9:
        lcd.print("Really??");
        break;
        case 10:
        lcd.print("ask again please");
        break;
        case 11:
        lcd.print("poor baby...";
        break;
      }
    }
  }
  prevSwitchState = switchState; //this will helps us to detect the values that are changing. 
}
