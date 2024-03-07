//************************************************************EXERCISE 1: BLINK LED************************************************************ 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output. Note that LED_BUILTIN also outputs to Pin 13 on the Arduino board 
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level which is 5V for our board)
  delay(1000);                      // wait for a second (1000ms = 1s)
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW (wihich is 0V for our board)
  delay(1000);                      // wait for a second (1000ms = 1s)
}
