void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  // Every I2C hardware has an address. The one of your LCD display MIGHT be 0x27.
  // The LCD display has 16 columns and 2 rows.
  LiquidCrystal_I2C lcd(0x27, 16, 2);
  lcd.init();
  lcd.backlight();
  // setCursor(column, row)
  lcd.setCursor(0, 0);
  lcd.print("Hello world");
}

void loop() {
  // Your task is to update the LCD display every second and show
  // in the second line how many times the LED blinked already
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
