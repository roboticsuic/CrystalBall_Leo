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
        lcd.begin(16,2);
        lcd.print("It is");
        lcd.setCursor(0,1); 
        lcd.print("Certain :)");
        delay (2500);
        // we maintain the first message
        lcd.clear();
        //clear the last message
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!");
        break;
        case 1:
        lcd.begin(16, 2);
        lcd.print("As I see it,");
        lcd.setCursor(0,1); 
        lcd.print("yes!!!");
        delay (2500);
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!");  
        break;
        case 2:
        lcd.begin(16, 2);
        lcd.print("Maybe..."); 
        lcd.setCursor(0,1); 
        lcd.print("try again :/");
       delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!");  
        break;
        case 3:
        lcd.begin(16, 2);
        lcd.print("Don't count"); 
        lcd.setCursor(0,1); 
        lcd.print("on it :(");
        delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!"); 
        break;
        case 4:
        lcd.begin(16, 2);
        lcd.print("could be"); 
        lcd.setCursor(0,1); 
        lcd.print("try harder !!!");
        delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!");
        break;
        case 5:
        lcd.begin(16, 2);
        lcd.print("Don't"); 
        lcd.setCursor(0,1);
        lcd.print("think about it..."); 
       delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!"); 
        break; 
        case 6:
        lcd.begin(16, 2);
        lcd.print("My answer is"); 
        lcd.setCursor(0,1); 
        lcd.print("no :(");
        delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!"); 
        break;
        case 7:
        lcd.begin(16, 2);
        lcd.print("Without a"); 
        lcd.setCursor(0,1);
        lcd.print("doubt :)");
       delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!");
        break;
        case 8:
        lcd.begin(16, 2);
        lcd.print("Better not tell"); 
        lcd.setCursor(0,1); 
        lcd.print("you now... :/");
        delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!"); 
        break;
        case 9:
        lcd.begin(16, 2);
        lcd.print("My sources"); 
        lcd.setCursor(0,1);
        lcd.print("say Yes do it!");
        delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!"); 
        break;
        case 10:
        lcd.begin(16, 2);
        lcd.print("Cannot"); 
        lcd.setCursor(0,1); 
        lcd.print("predict now :/");
        delay (2500); 
        lcd.clear();
        lcd.print("Ask another"); 
        lcd.setCursor(0,1); 
        lcd.print("question!"); 
        break;
      }
    }
  }
  prevSwitchState = switchState; //this will helps us to detect the values that are changing. 
}
