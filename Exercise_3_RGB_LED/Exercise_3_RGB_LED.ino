//****************************************************************EXERCISE 3: RGB LED******************************************************************** 


// This exercise helps with understanding how the RGB works
// Part 1 is to connect the LED with a power supply to turn it on (this is more easily done using a push button)


//Part 2:
//Initalize RGB LED output pins on the arduino
int RED = 2;    
int GREEN = 3;   
int BLUE = 4;   


void setup() { // This setup is needed for both functions
  //Assinging the pins to outputs from the arduino
  pinMode(RED,OUTPUT); 
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
}

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
State change code in the different file






