#include "Arduino.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <HCSR04.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
// for the ultraSonic sensor I used digital pins 5 and 6
// but you can use other ones as well
// Attention: first parameter is the "trigger" pin and second the "echo" pin!
UltraSonicDistanceSensor hc(5, 6);

void setup() {
  Serial.begin(9600);
  while(!Serial);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print(F("Distance [cm]: "));
}

void loop() {
  // Your task is to let the LED blink fast if the distance is < 100cm
  // If the distance is >= 100cm < 200cm it should blink slow
  // >= 200cm it should not blink
  // Does this remind you on something? Yes your car when driving backwards ;-)
  
  lcd.setCursor(0, 1);
  lcd.print(int(hc.measureDistanceCm()));
  lcd.print(F("    "));
  delay(500);
}
