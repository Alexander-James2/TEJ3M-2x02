// Created by: Alexander James
// Created on: Sept 2023
// This code increases the amount of time the LED is on by 1000ms every loop

int blinkTime = 1000; // this sets the variable value to 1000

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(blinkTime);                       // wait for the variable value
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for variable value

  blinkTime = blinkTime + 1000; // adds 1000 to the variable value every loop
}
