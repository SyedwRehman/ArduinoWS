//************************************************************ EXERCISE 4: Active & Passive Buzzers ************************************************************ 

//Passive Buzzers:
//Part 1:
// (NOTE TONE FUNCTIONS SHOULD NOT BE USED ON ACTIVE BUZZERS)

int buzzerPin = 11;
void setup(){
  pinMode(buzzerPin, OUTPUT);
}

void loop(){
  // Tone() Functions 
  tone(buzzerPin, 261); //Middle C
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 277); //C#
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 294); //D
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 311); //D#
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 330); //E
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 349); //F
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 370); //F#
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 392); //G
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 415); //G#
  delay(1000);
  noTone(buzzerPin);
  delay(1000);

  tone(buzzerPin, 440); //A
  delay(1000);
  noTone(buzzerPin);
  delay(1000);
}  



#include "pitches.h" // Includes the pitches.h file content into this .ino file (Don't comment out for the passive buzzer files)

// int bpin = 11;  // Defining variable for buzzer pin as the output
// #define C 262
// #define CSH 277
// #define D 294
// #define DSH 311
// #define E 330
// #define F 349
// #define FSH 370
// #define G 392
// #define GSH 415
// #define A 440
// #define ASH 466
// #define B 494
// #define NOTE_C5  523
// #define HF 750
// #define HFD HF+HF/2
// #define QT 375
// #define QTD QT+QT/2
// #define ET WH/8
// #define ETD ET+ET/2
// #define ST 94
// #define WH 1500



// void tlet(int pin, int let, int del){ // function for playing the Tone with the Letter input
//   tone(pin,let,del); // plays tone on a specific pin, frequency, and delay
//   int pause = del *1.30; // calculates the pause needed before the next tone
//   delay(pause); // plays the pause with the tone so that there is enough room for another tone to play after
//   noTone(pin); // stops the current tone being played at that frequency
// }

// void setup(){
//   pinMode(bpin,OUTPUT); // Setting up the buzzer pin as the output
// }

// //Twinkle Twinkle Little Star
// void loop(){
//   tlet(bpin,NOTE_C4,QT);
//   tlet(bpin,NOTE_C4,QT);
//   tlet(bpin,NOTE_G4,QT);
//   tlet(bpin,NOTE_G4,QT);
//   tlet(bpin,NOTE_A4,QT);
//   tlet(bpin,NOTE_A4,QT);
//   tlet(bpin,NOTE_G4,HF);
//   tlet(bpin,NOTE_F4,QT);
//   tlet(bpin,NOTE_F4,QT);
//   tlet(bpin,NOTE_E4,QT);
//   tlet(bpin,NOTE_E4,QT);
//   tlet(bpin,NOTE_D4,QT);
//   tlet(bpin,NOTE_D4,QT);
//   tlet(bpin,NOTE_C4,HF);

//   tlet(bpin,NOTE_G4,QT);
//   tlet(bpin,NOTE_G4,QT);
//   tlet(bpin,NOTE_F4,QT);
//   tlet(bpin,NOTE_F4,QT);
//   tlet(bpin,NOTE_E4,QT);
//   tlet(bpin,NOTE_E4,QT);
//   tlet(bpin,NOTE_D4,HF);

//   tlet(bpin,NOTE_G4,QT);
//   tlet(bpin,NOTE_G4,QT);
//   tlet(bpin,NOTE_F4,QT);
//   tlet(bpin,NOTE_F4,QT);
//   tlet(bpin,NOTE_E4,QT);
//   tlet(bpin,NOTE_E4,QT);
//   tlet(bpin,NOTE_D4,HF);

//   tlet(bpin,NOTE_C4,QT);
//   tlet(bpin,NOTE_C4,QT);
//   tlet(bpin,NOTE_G4,QT);
//   tlet(bpin,NOTE_G4,QT);
//   tlet(bpin,NOTE_A4,QT);
//   tlet(bpin,NOTE_A4,QT);
//   tlet(bpin,NOTE_G4,HF);

//   tlet(bpin,NOTE_F4,QT);
//   tlet(bpin,NOTE_F4,QT);
//   tlet(bpin,NOTE_E4,QT);
//   tlet(bpin,NOTE_E4,QT);

//   tlet(bpin,NOTE_D4,QT);
//   tlet(bpin,NOTE_D4,QT);
//   tlet(bpin,NOTE_C4,HF);
// }

// // Keep setup the same but comment out last loop

//This code is for O Canada
// void loop(){
//   tlet(bpin,E,HF);//O
//   tlet(bpin,G,QTD);//Can
//   tlet(bpin,G,ET);//a
//   tlet(bpin,C,HFD);//da!
//   tlet(bpin,D,QT);//Our
//   tlet(bpin,E,QT);//home
//   tlet(bpin,F,QT);//and
//   tlet(bpin,G,QT);//na
//   tlet(bpin,A,QT);//-tive
//   tlet(bpin,D,HFD);//land!
//   delay(QT);
//   tlet(bpin,E,HF);//True
//   tlet(bpin,FSH,QTD);//pa
//   tlet(bpin,FSH,ET);///-triot
//   tlet(bpin,G,HFD);//love
//   tlet(bpin,A,QT);//in
//   tlet(bpin,B,QT);//all
//   tlet(bpin,B,QT);//thy
//   tlet(bpin,A,QT);//sons
//   tlet(bpin,A,QT);//com
//   tlet(bpin,G,HFD);//mand
//   tlet(bpin,D,ETD);//With___
//   tlet(bpin,E,ST);//___
//   tlet(bpin,F,QTD);//glow-
//   tlet(bpin,E,ET);//ing
//   tlet(bpin,D,QT);//hearts
//   tlet(bpin,E,ETD);//we__
//   tlet(bpin,F,ST);//__
//   tlet(bpin,G,QTD);//see
//   tlet(bpin,F,ET);//the
//   tlet(bpin,E,QT);//rise
//   tlet(bpin,F,ETD);//The__
//   tlet(bpin,G,ST);//__
//   tlet(bpin,A,QT);//True
//   tlet(bpin,G,QT);//North
//   tlet(bpin,F,QT);//strong
//   tlet(bpin,E,QT);//and
//   tlet(bpin,D,HFD);//free!
//   tlet(bpin,D,ETD);//from__
//   tlet(bpin,E,ST);//__
//   tlet(bpin,F,QTD);//far
//   tlet(bpin,E,ET);//and
//   tlet(bpin,D,QT);//wide.
//   tlet(bpin,E,ETD);//O__
//   tlet(bpin,F,ST);//__
//   tlet(bpin,G,QTD);//Can
//   tlet(bpin,F,ET);//a
//   tlet(bpin,E,QT);//da
//   tlet(bpin,E,QT);//we
//   tlet(bpin,D,QT);//stand
//   tlet(bpin,G,QT);//on
//   tlet(bpin,G,ET);//gaurd___
//   tlet(bpin,FSH,ET);//___
//   tlet(bpin,E,ET);//for___
//   tlet(bpin,FSH,ET);//___
//   tlet(bpin,G,HFD);//thee
//   delay(QT);
//   tlet(bpin,E,HF);//God
//   tlet(bpin,G,QTD);//keep
//   tlet(bpin,G,ET);//our
//   tlet(bpin,C,HFD);//land
//   delay(QT);
//   tlet(bpin,F,HF);//glo
//   tlet(bpin,A,QTD);//-rious
//   tlet(bpin,A,ET);//and
//   tlet(bpin,D,HFD);//free
//   delay(QT);
//   tlet(bpin,G,HF);//O
//   tlet(bpin,GSH,QTD);//Can
//   tlet(bpin,GSH,ET);//a
//   tlet(bpin,A,QT);//da
//   tlet(bpin,F,QT);//we
//   tlet(bpin,E,QT);//stand
//   tlet(bpin,D,QT);//on
//   tlet(bpin,C,HF);//gaurd
//   tlet(bpin,D,HF);//for 
//   tlet(bpin,E,HFD);//thee
//   delay(QT);
//   tlet(bpin,G,HF);//O
//   tlet(bpin,NOTE_C5,QTD);//Can
//   tlet(bpin,NOTE_C5,ET);//a
//   tlet(bpin,A,QT);//da
//   tlet(bpin,F,QT);//we
//   tlet(bpin,E,QT);//stand
//   tlet(bpin,D,QT);//on
//   tlet(bpin,G,HF);//gaurd
//   tlet(bpin,B,HF);//for
//   tlet(bpin,C,HFD);//thee
//   delay(QT);
// }


// // Part 2:
// // Comment the setup and definitions from before out since we are redefining them here with additional info

// int bp = 11; // buzzer pin variable defineing which pin we are going to use
// #define R 4
// #define G 3
// #define B 2
// #define NA 7 // value for nothing
// #define W 10 // value for white

// #define HF WH/2     //Half Note (length of the note from a whole is /2)
// #define HFD HF+HF/2 //Hlaf Note Dotted (means the note length + note length/2)
// #define QT WH/4     //Quarter Note (length of the note from a whole is /4)
// #define QTD QT+QT/2 //Quarted Note Dotted (means the note length +note length/2)
// #define ET WH/8     //Eight Note (length of the note from a whole is /8)
// #define ETD ET+ET/2 //Eight Note Dotted (means the note length + note length/2)
// #define ST WH/16    //Sixteenth Note (length of the note from a whole is /16)
// #define WH 1500     //Whole Note which is the length of time a full note would take

// void tlet(int pin, int let, int del, int CL){
//   if(CL==W){
//     tone(pin,let,del);
//     int pause = del *1.30;
//     digitalWrite(R,HIGH);
//     digitalWrite(G,HIGH);
//     digitalWrite(B,HIGH);
//     delay(pause);
//     digitalWrite(R,LOW);
//     digitalWrite(G,LOW);
//     digitalWrite(B,LOW);
//   noTone(pin);
//   }
//   else{
//     tone(pin,let,del);
//     int pause = del *1.30;
//     digitalWrite(CL,HIGH);
//     delay(pause);
//     digitalWrite(CL,LOW);
//     noTone(pin);
//   }
// }


// void setup(){ // used to play the song only once
//   pinMode(R,OUTPUT);
//   pinMode(G,OUTPUT);
//   pinMode(B,OUTPUT);
//   tlet(bp,NOTE_C4,ETD,R);//Hap
//   tlet(bp,NOTE_C4,ST,R);//py
//   tlet(bp,NOTE_D4,QT,R);//birth
//   tlet(bp,NOTE_C4,QT,R);//day
//   tlet(bp,NOTE_F4,QT,R);//to
//   tlet(bp,NOTE_E4,HF,R);//you
//   tlet(bp,NOTE_C4,ETD,R);//hap
//   tlet(bp,NOTE_C4,ST,R);//py
//   tlet(bp,NOTE_D4,QT,R);//birth
//   tlet(bp,NOTE_C4,QT,R);//day
//   tlet(bp,NOTE_G4,QT,R);//to
//   tlet(bp,NOTE_F4,HF,R);//you
//   tlet(bp,NOTE_C4,ETD,R);//hap
//   tlet(bp,NOTE_C4,ST,R);//py
//   tlet(bp,NOTE_C5,QT,R);//birth
//   tlet(bp,NOTE_A4,QT,R);//day
//   tlet(bp,NOTE_F4,QT,R);//dear
//   tlet(bp,NOTE_E4,QT,R);//...
//   tlet(bp,NOTE_D4,QT,R);//...
//   tlet(bp,NOTE_B4,ETD,R);//hap
//   tlet(bp,NOTE_B4,ST,R);//py
//   tlet(bp,NOTE_A4,QT,R);//birth
//   tlet(bp,NOTE_F4,QT,R);//day
//   tlet(bp,NOTE_G4,QT,R);//to
//   tlet(bp,NOTE_F4,HF,R);//you
//   delay(QT);//rest
// }

// void loop(){} // no functions used here since the code plays once in th setup only in this example but its still required to be called


// void setup(){ // used to setup the outputs without the song playing and it being expected to play in the loop function
//   pinMode(R,OUTPUT);
//   pinMode(G,OUTPUT);
//   pinMode(B,OUTPUT);
// }


// // Merry Christmas
// void loop(){
//   tlet(bp,NOTE_D4,QT,R); //We
//   tlet(bp,NOTE_G4,QT,G); //Wish
//   tlet(bp,NOTE_G4,ET,R); //You
//   tlet(bp,NOTE_A4,ET,G); //a
//   tlet(bp,NOTE_G4,ET,W); //mer-
//   tlet(bp,NOTE_FS4,ET,W); //-ry
//   tlet(bp,NOTE_E4,QT,W); //Christ-
//   tlet(bp,NOTE_E4,QT,W); //-mas
//   tlet(bp,NOTE_E4,QT,R); //we
//   tlet(bp,NOTE_A4,QT,G); //wish
//   tlet(bp,NOTE_A4,ET,R); //you
//   tlet(bp,NOTE_B4,ET,G); //a
//   tlet(bp,NOTE_A4,ET,W); //mer-
//   tlet(bp,NOTE_G4,ET,W); //-ry
//   tlet(bp,NOTE_FS4,QT,W); //christ-
//   tlet(bp,NOTE_D4,QT,W); //-mas
//   tlet(bp,NOTE_D4,QT,G); //we
//   tlet(bp,NOTE_B4,QT,R); //wish
//   tlet(bp,NOTE_B4,ET,G); //you
//   tlet(bp,NOTE_C5,ET,R); //a
//   tlet(bp,NOTE_B4,ET,W); //mer-
//   tlet(bp,NOTE_A4,ET,W); //-ry
//   tlet(bp,NOTE_G4,QT,W); //christ-
//   tlet(bp,NOTE_E4,QT,W); //-mas
//   tlet(bp,NOTE_D4,ET,G); //and
//   tlet(bp,NOTE_D4,ET,R); //a
//   tlet(bp,NOTE_E4,QT,W); //hap-
//   tlet(bp,NOTE_A4,QT,W); //-py
//   tlet(bp,NOTE_FS4,QT,G); //New
//   tlet(bp,NOTE_G4,HF,R); //Year!
// }

// // Happy Birthday
// void loop(){
//   tlet(bp,NOTE_C4,ETD,R);//Hap
//   tlet(bp,NOTE_C4,ST,R);//py
//   tlet(bp,NOTE_D4,QT,R);//birth
//   tlet(bp,NOTE_C4,QT,R);//day
//   tlet(bp,NOTE_F4,QT,R);//to
//   tlet(bp,NOTE_E4,HF,R);//you
//   tlet(bp,NOTE_C4,ETD,R);//hap
//   tlet(bp,NOTE_C4,ST,R);//py
//   tlet(bp,NOTE_D4,QT,R);//birth
//   tlet(bp,NOTE_C4,QT,R);//day
//   tlet(bp,NOTE_G4,QT,R);//to
//   tlet(bp,NOTE_F4,HF,R);//you
//   tlet(bp,NOTE_C4,ETD,R);//hap
//   tlet(bp,NOTE_C4,ST,R);//py
//   tlet(bp,NOTE_C5,QT,R);//birth
//   tlet(bp,NOTE_A4,QT,R);//day
//   tlet(bp,NOTE_F4,QT,R);//dear
//   tlet(bp,NOTE_E4,QT,R);//...
//   tlet(bp,NOTE_D4,QT,R);//...
//   tlet(bp,NOTE_B4,ETD,R);//hap
//   tlet(bp,NOTE_B4,ST,R);//py
//   tlet(bp,NOTE_A4,QT,R);//birth
//   tlet(bp,NOTE_F4,QT,R);//day
//   tlet(bp,NOTE_G4,QT,R);//to
//   tlet(bp,NOTE_F4,HF,R);//you
//   delay(QT);//rest
// }


// Intro Rick Roll
// void loop(){
//   tlet(bp,NOTE_D5,QTD,R);
//   tlet(bp,NOTE_E5,QTD,R);
//   tlet(bp,NOTE_A4,QT,R);
//   tlet(bp,NOTE_E5,QTD,R);
//   tlet(bp,NOTE_FS5,QTD,R);
//   tlet(bp,NOTE_A5,ST,R);
//   tlet(bp,NOTE_G5,ST,R);
//   tlet(bp,NOTE_FS5,ET,R);
//   tlet(bp,NOTE_D5,QTD,R);
//   tlet(bp,NOTE_E5,QTD,R);
//   tlet(bp,NOTE_A4,QT,R);
//   tlet(bp,NOTE_A4,QTD,R);
//   delay(QT);
//   tlet(bp,NOTE_A4,ST,R);
//   tlet(bp,NOTE_A4,ST,R);
//   tlet(bp,NOTE_B4,ST,R);
//   tlet(bp,NOTE_D5,ET,R);
//   tlet(bp,NOTE_D5,ST,R);
// }


// // Part 3:
// // Don't know if we will have time for this but it combines everything we learned

// #define R 4
// #define G 3
// #define B 2
// #define NA 0
// #define W 10 //


// #define HF WH/2     //Half Note (length of the note from a whole is /2)
// #define HFD HF+HF/2 //Hlaf Note Dotted (means the note length + note length/2)
// #define QT WH/4     //Quarter Note (length of the note from a whole is /4)
// #define QTD QT+QT/2 //Quarted Note Dotted (means the note length +note length/2)
// #define ET WH/8     //Eight Note (length of the note from a whole is /8)
// #define ETD ET+ET/2 //Eight Note Dotted (means the note length + note length/2)
// #define ST WH/16    //Sixteenth Note (length of the note from a whole is /16)
// #define WH 1500     //Whole Note which is the length of time a full note would take

// void tlet(int pin, int let, int del, int CL){
//   if(CL==W){
//     tone(pin,let,del);
//     int pause = del *1.30;
//     digitalWrite(R,HIGH);
//     digitalWrite(G,HIGH);
//     digitalWrite(B,HIGH);
//     delay(pause);
//     digitalWrite(R,LOW);
//     digitalWrite(G,LOW);
//     digitalWrite(B,LOW);
//     noTone(pin);
//   }
//   else{
//     tone(pin,let,del);
//     int pause = del *1.30;
//     digitalWrite(CL,HIGH);
//     delay(pause);
//     digitalWrite(CL,LOW);
//     noTone(pin);
//   }
// }


// int bp = 11; // buzzer pin variable defineing which pin we are going to use
// int buttonPin = 7; // button pin input
// int ledState = HIGH; // LEDstate [I THINK WE CAN PROBABLY REMOVE THIS]
// int lastButtonState = LOW; // input from last button set to low from the start
// int buttonState; // state of the current button input
// const int ledPin = 13;    // the number of the LED pin [I THINK WE CAN PROBABLY REMOVE THIS]


// unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
// unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers


// void setup() {
//   pinMode(R,OUTPUT);
//   pinMode(G,OUTPUT);
//   pinMode(B,OUTPUT);
//   pinMode(bp, OUTPUT);
//   pinMode(buttonPin, INPUT);
//   pinMode(ledPin, OUTPUT);
//   digitalWrite(ledPin, ledState);
// }

// void loop() {
//   int reading = digitalRead(buttonPin);
//   if (reading != lastButtonState) {
//     lastDebounceTime = millis(); // reset the debouncing timer
//   }

//   if ((millis() - lastDebounceTime) > debounceDelay) { // whatever the reading is at, it's been there for longer than the debounce delay, so take it as the actual current state:
//     // if the button state has changed:
//     if (reading != buttonState) {
//       buttonState = reading;
//       // only toggle the LED if the new button state is HIGH
//       if (buttonState == HIGH) {
//         tlet(bp,NOTE_D5,QTD,R);
//         tlet(bp,NOTE_E5,QTD,G);
//         tlet(bp,NOTE_A4,QT,B);
//         tlet(bp,NOTE_E5,QTD,R);
//         tlet(bp,NOTE_FS5,QTD,G);
//         tlet(bp,NOTE_A5,ST,B);
//         tlet(bp,NOTE_G5,ST,R);
//         tlet(bp,NOTE_FS5,ET,G);
//         tlet(bp,NOTE_D5,QTD,B);
//         tlet(bp,NOTE_E5,QTD,R);
//         tlet(bp,NOTE_A4,QT,G);
//         tlet(bp,NOTE_A4,QTD,B);
//         delay(QT);
//       }
//     }
//   }
//   lastButtonState = reading;
// }


