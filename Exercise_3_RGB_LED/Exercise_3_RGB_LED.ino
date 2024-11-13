//****************************************************************EXERCISE 3: RGB LED******************************************************************** 


// This exercise helps with understanding how the RGB works
// Part 1 is to connect the LED with a power supply to turn it on (this is more easily done using a push button)


//Part 2:
//Initalize RGB LED output pins on the arduino
// int RED = 2;    
// int GREEN = 3;   
// int BLUE = 4;   


// void setup() { // This setup is needed for both functions
//   //Assinging the pins to outputs from the arduino
//   pinMode(RED,OUTPUT); 
//   pinMode(GREEN,OUTPUT);
//   pinMode(BLUE,OUTPUT);
// }

// void loop() {
//   digitalWrite(RED,HIGH);         // Red LED is on
//   delay(1000);                    // 1s delay
//   digitalWrite(GREEN,HIGH);       // Now Green LED is on
//   delay(1000);                    // 1s delay (for us to notice it turning on)
//   digitalWrite(BLUE,HIGH);        // Finally Blue LED is on (Should be seeing some sort of white color from the LED with all 3 colors being on)
//   delay(OnOff(0,0,1));            // Using the OnOff function as an input for the delay (its used more in the other function)
//   digitalWrite(RED,LOW);
//   delay(1000);
//   digitalWrite(GREEN,LOW);
//   delay(1000);
//   digitalWrite(BLUE,LOW);
//   delay(1000);
// }


// void loop(){
//   //Calling the function OnOff with different inputs
//   OnOff(1,RED,0);               //Red
//   delay(1000);
//   OnOff(1,GREEN,0);             //Red with Green
//   delay(1000);

//   OnOff(0,RED,1);               //Red off now Just Green
//   //delay(1000);
//   OnOff(1,BLUE,1);              //Green with Blue
//   //delay(1000);

//   OnOff(0,GREEN,0);             //Green off now Just Blue
//   OnOff(5,0,1);//delay(1000);
//   OnOff(1,RED,0);               //Blue with Red
//   OnOff(5,0,1);//delay(1000);

//   OnOff(0,BLUE,0);              //Blue off now Just Red 
//   delay(1000);
//   OnOff(0,RED,0);               //LED is OFF
//   delay(2000);

//   OnOff(1,RED,0);OnOff(1,GREEN,0);OnOff(1,BLUE,0); //Should see a white color since all the colors are on (Red with Green and Blue)
//   delay(1000);

//   OnOff(0,RED,0);OnOff(0,BLUE,0);OnOff(0,GREEN,0);// Turn off All colors (LED is OFF)
//   delay(1000);
// }


// //Decleration of the OnOff function (Doesn't have to be at the top of the file)
// int OnOff(int OptIn,int Pin,int del){ // Input parameters are Option input, Pin number for the LED, and the optional delay
//   if(OptIn==1 & del>0 ){
//     digitalWrite(Pin,HIGH);           // Turn on the LED that is given
//     delay(del*1000);                 // Multiply the del input by 1000 to get it in the units of Seconds instead of miliseconds.
//   }
//   else if (OptIn ==0 & del>0){
//     digitalWrite(Pin,LOW);
//     delay(del*1000);
//   }
//   else if(OptIn==1){                       // If the input for the function is 1
//     digitalWrite(Pin,HIGH);           // Turn on the LED that is given
//   }
//   else if(del>0){                    // And if the delay is given which is more than 0
//     delay(del*1000);                 // Multiply the del input by 1000 to get it in the units of Seconds instead of miliseconds.
//     return del;                      // Return the delay value (we can do this because the function has an int parameter but it is- 
//                                      // -not needed for the fucntionality of the code)
//   }
//   else{                              // Otherwsie do this (this happens when the Option is not 1, and the delay is less than or equal to 0)
//     digitalWrite(Pin,LOW);           // Turn off the LED pin
//   }
// }







//Part 3:
//******************************************************************* RGB LED COUNTER MODULE *****************************************************************
// // This constant won't change:
// const int buttonPin = 2;  // the pin that the pushbutton is attached to
// const int ledPinR = 5;    // the pin that the LED is attached to
// const int ledPinG = 3;
// const int ledPinB = 4;

// // Variables will change:
// int buttonPushCounter = 0;  // counter for the number of button presses
// int buttonState = 0;        // current state of the button
// int lastButtonState = 0;    // previous state of the button

// void setup() {
//   // initialize the button pin as a input:
//   pinMode(buttonPin, INPUT);
//   // initialize the LED as an output:
//   pinMode(ledPinR, OUTPUT);
//   pinMode(ledPinG, OUTPUT);
//   pinMode(ledPinB, OUTPUT);
//   // initialize serial communication:
//   Serial.begin(9600);// turn on serial output at a rate of 9600 bits per second (baud rate)
// }


// void loop() {
//   // read the pushbutton input pin:
//   buttonState = digitalRead(buttonPin);

//   // compare the buttonState to its previous state
//   if (buttonState != lastButtonState) {
//     // if the state has changed, increment the counter
//     if (buttonState == HIGH) {
//       // if the current state is HIGH then the button went from off to on:
//       if (buttonPushCounter < 5){ //Counting the button pushes until it reaches 5
//         buttonPushCounter++; // increment button count
//         Serial.println("on"); // print on serial  
//         Serial.print("number of button pushes: ");
//         Serial.println(buttonPushCounter);        
//       }
//       else{
//         buttonPushCounter = 0;
//         buttonPushCounter++;
//         Serial.println("on");
//         Serial.print("number of button pushes: ");
//         Serial.println(buttonPushCounter);
//       }
//     } else {
//       // if the current state is LOW then the button went from on to off:
//       Serial.println("off");
//     }
//     // Delay a little bit to avoid bouncing
//     delay(50);
//   }
//   // save the current state as the last state, for next time through the loop
//   lastButtonState = buttonState;


//   // turns on the LED every four button pushes by checking the modulo of the
//   // button push counter. the modulo function gives you the remainder of the
//   // division of two numbers:
//   if(buttonPushCounter>1 & buttonPushCounter % 4 == 0){
//     digitalWrite(ledPinB, HIGH); // Turns on blue when the value has no remainder when divided by 4
//   }
//   else if (buttonPushCounter>1 & buttonPushCounter % 2 == 0) {
//     digitalWrite(ledPinR, HIGH); // Turns on Red when the value has no remainder when divided by 2
//   }
//   else if(buttonPushCounter>1 & buttonPushCounter % 3 == 0){
//     digitalWrite(ledPinG, HIGH); // Turns on Green when the value has no remainder when divided by 3

//   } 
//   else {
//     // when anything else like 1 or 5 turns off all of the colors
//     digitalWrite(ledPinR, LOW);
//     digitalWrite(ledPinG, LOW);
//     digitalWrite(ledPinB, LOW);
//   }
// }






