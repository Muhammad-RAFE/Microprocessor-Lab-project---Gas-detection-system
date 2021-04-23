#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

int analogPin = A0;     
                       
int val = 0;           

void loop(){
 
  lcd.setCursor(0,1);
  delay(100);
  val = analogRead(analogPin);     
  Serial.println(val);            
      	lcd.clear();
  if (val >000 && val <= 306){
		lcd.print("Normal");
	}else if (val > 307 &&  val <= 420){
		lcd.print("Gas Detected");
	}else if (val > 421 && val <= 520){
		lcd.print("Heavy Gas Det");
    }else if (val > 521 && val <= 724){
		lcd.print(" EMERGENCY!");
    }
}




void setup() {
 
  lcd.begin(16, 2);
 
  lcd.print("Gas LIMITED!"); delay(1000);
  Serial.begin(9600);         
    lcd.display();
}

