#include<Keypad.h>//inclyude keypad library
#include<LiquidCrystal.h>
//lcd
LiquidCrystal lcd(10,11,12,13,A0,A1);
//keypad
const byte COLS=4;
const byte ROWS=4;
char keys[ROWS][COLS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPin[ROWS]={2,3,4,5};
byte colPin[ROWS]={6,7,8,9};
Keypad keypad=Keypad(makeKeymap(keys),rowPin,colPin,ROWS,COLS);
char password[5]="1947";
  char entered[5];//because for null character (\0)
int index=0;//counter


void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("***WELCOME TO***");
  lcd.setCursor(0,1);
  lcd.print("SMART ACCESS");
  delay(2000);
  lcd.clear();
  lcd.print("ENTER PIN");
    
  
}
void loop()
{
  char key=keypad.getKey();
  if(key)
  {if(key=='*')//clear lcd
{
    index=0;
   lcd.clear();
   lcd.print("ENTER PIN");
             
  }
            else if(key=='#')
             {
               if(index==4)
               {
                 entered[index]='\0';
                 if(strcmp(entered,password)==0)
                 {
                   lcd.clear();
                   lcd.print("ACCESS GRANTED!!!");
                   lcd.setCursor(0,1);
                     lcd.print("THANK YOU!!!");
                 }
                 else
                 {lcd.clear();
                  
                   lcd.print("ACCESS DENIED");
                  lcd.setCursor(0,1);
                    lcd.print("TRY AGAIN?!");
}
                  delay(2000);
                  index=0;
   lcd.clear();
   lcd.print("ENTER PIN");
             }}
             
                  else
             {
               if(index<4)
               {
                 entered[index]=key;
                 index++;
                 lcd.setCursor(index-1,1);
                 lcd.print("*");
               }
}
}
 


}
