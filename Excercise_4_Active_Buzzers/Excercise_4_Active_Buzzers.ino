//************************************************************ EXERCISE 4: Active & Passive Buzzers ************************************************************ 

// //Active Buzzers:

// //Part 1:
// int buzzerPin = 8; // buzzer pin 
// int buttonPin = 7; // button pin

// void setup() {
//   pinMode(buzzerPin, OUTPUT); // setting the buzzer pin as an output
//   pinMode(buttonPin, INPUT_PULLUP); // setting the button pin as an input pull up resistor 
// }

// void loop() {
//   int buttonState = digitalRead(buttonPin);
//   if (buttonState == LOW) {
//     digitalWrite(buzzerPin, HIGH);
//   }

//   if (buttonState == HIGH) {
//     digitalWrite(buzzerPin, LOW);
//   }
// }

  
// //Part2:
// //Alarm
// int buzzerPin =3; // Pin number for the buzzer
// int blue = 5; // Pin number for the blue LED
// int red =4; // Pin number for the red LED

// void togglecolor(int pin, int read, int ms){ // function used for toggling the buzzer
//   digitalWrite(pin, !digitalRead(read));
//   delay(ms);

// }

// void setup() {
//   pinMode(buzzerPin, OUTPUT); // Sets Pin number 3 as the output
//   pinMode(blue, OUTPUT); // Sets Pin number 5 as an output
//   pinMode(red,OUTPUT); // Sets pin number 4 as an output
//   digitalWrite(red,HIGH); //Initially sets red to on
// }

// void loop() { // loop again
//   togglecolor(blue,blue,0); // Turns on Blue
//   togglecolor(red,red,500); // Turns off Red
//   digitalWrite(buzzerPin,HIGH); // buzzer is on
//   togglecolor(blue,blue,0); // Turns off Blue
//   togglecolor(red,red,500); // Turns on Red
//   digitalWrite(buzzerPin,LOW); //buzzer if off 
// }
