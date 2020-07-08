void setup() {
  // Each pin which is used for INPUT or OUTPUT has to be initialized.
  // Otherwise its's "floating" and might not work as expected.
  
  // Remember: every Arduino has a LED on it's board which is connected
  // to one of the digital I/O pins.
  // By selecting your board and CPU in the Arduino IDE the corresponding
  // libraries for your board will be included during the build process
  // and the constant LED_BUILTIN will point to the correct pin.
  // Usually this is PIN D13.

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Your task is to write a function that uses the LED to send
  // the morse code of "HELLO WORLD"
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
