
/*
IN THIS PART OF THE CODE WE WILL DEFINE PINS AND THE CIRCUIT ELEMENTS THAT WE 
WILL BE USING 

define pins for button
define pins for buzzer
define pins for LCD screen 
inslude the pitches.h library
inldlude the luquid crystal library 
*/
#include <LiquidCrystal.h>
#include "pitches.h"
#include "row.h"
#include "odeToJoy.h"
#include "Despacito.h"


// uzzer and button pins define 
#define buzzer_pin A5
#define button_pin 12 

// defining the LCD screen and its connections 

const int rs=2,
        en = 3,
        d4 = 6,
        d5 = 7,
        d6 = 8,
        d7 = 9;      

    LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
    String Song_1 = "DESPACITO";
    String Song_2 = "MY LOVE";
    String song_3 = "ROW ROW";


// string of the states of button
    String Zero = "NO SONG SELECTED";
    String One = "DESPACITO";
    String Two = "MY LOVE";
    String Three = "ROW ROW";




// button statesdefined 
//int button_pressed_count = 0;
//int button_state = 0;
//int prev_button_state = 0;


volatile bool button_pressed = false;  // Set true in ISR
int button_pressed_count = 0;
unsigned long lastPress = 0;
const unsigned long debounceDelay = 200;  // debounce delay in ms

// defining our ISR function 

void buttonISR() {
  unsigned long now = millis();
  if (now - lastPress > 200) {
    button_pressed = true;
    lastPress = now;
  }
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void setup() {
/*

NOW WE DECLARE WHAT THE PROCESSOR SHALL DO AT THE SPECIFIC PINS,
DO WE WNAT IT TO OUTPUT, READ, SCAN ETC.. 

*/

// LCD module setup 
    Serial.begin(9600);
    lcd.begin(16,2);

// Button pins functions declared 
pinMode( button_pin,INPUT_PULLUP );
attachInterrupt(digitalPinToInterrupt(button_pin), buttonISR, FALLING);

// Buzzer pin mode declared 
pinMode( buzzer_pin, OUTPUT);


}

void loop() {
  /*
  NOW WE WRITE CODE FOR OUR PROGRAM TO DETECT THE STATE OF THE BUTTON, FROM THERE DISPLAY A SPECIFIC SONG NAME ON 
  LCD SCREEN, THEN PLAY THE SONG ON THE BUZZER.
  IF THE BUTTON IS PRESSED ONCE, THE BUTTON STATE IS CHANGED, A NEW SONG IS PLAYED AND DISPLAYED ON LCD SCREEN
  IF BUTTON IS PRESSED A THIRD TIME, WE RESET AND GO BACK TO SONG ZERO, AND SIPALY ZERO 
  */

// STATE 0, BUTTON IS NOT PRESSED YET 


//---------------------------------------------- omitted code -----------------------------------------
 //button_state = digitalRead(button_pin);

//if ( button_state == LOW && prev_button_state == HIGH){
//    button_pressed_count++;
//      if (button_pressed_count > 3) {
//          button_pressed_count = 0;
//      }//nested if statement
//delay(200);
//}// end if statement 
////---------------------------------------------omitted code--------------------------------------



// new code to handle what to do when ISR sets the flag


if (button_pressed){
  button_pressed = false; // reset flag 
  button_pressed_count++;

    if (button_pressed_count > 3){
        button_pressed_count = 0;

    }
    lcd.clear();
}















// update for next loop
//prev_button_state = button_state;

// switch starts here
switch(button_pressed_count) {

//-------------------------------------------------------------------STATE ZEROOOOOOOOOOOOOOOOOOOOOO------------------------------------------------------------------------------------------------------
case 0:{

  lcd.clear();
  lcd.setCursor(0,0);

// first scrolling effect

for (int i=0; i< Zero.length() ; i++){
    lcd.print(Zero.charAt(i));
    delay(100);
  }// end for loop 


// scroll effect when mesagge is being diplayed 
  lcd.setCursor(16,1);
  lcd.autoscroll();
  for(int i=0; i<Zero.length(); i++){
    lcd.print(Zero.charAt(i));
    delay (400);
  } // end second for loop 
  lcd.noAutoscroll();
  break;

} // end of state zero message and output


//----------------------------------------------------------------------------STATE 1 --------------------------------------------------------------------------------------------------------------

case 1: {
  lcd.clear();
  lcd.setCursor(0,0);



for (int i=0; i< One.length() ; i++){
    lcd.print(One.charAt(i));
    delay(100);
  }// end for loop 


// scroll effect when mesagge is being diplayed 
  lcd.setCursor(16,1);
  lcd.autoscroll();
  for(int i=0; i<One.length(); i++){
    lcd.print(One.charAt(i));
    delay (400);
  } // end second for loop 
  

// now playing despacito
  Despacito(buzzer_pin);

break;
}// end of if statement 


//--------------------------------------------------------------------------------STATE TWOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO-----------------------------------------------------------------------------------

case 2: {

  lcd.clear();
  lcd.setCursor(0,0);


for (int i=0; i< Two.length() ; i++){
    lcd.print(Two.charAt(i));
    delay(100);
  }// end for loop 

// scroll effect when mesagge is being diplayed 
  lcd.setCursor(16,1);
  lcd.autoscroll();
  for(int i=0; i<Two.length(); i++){
    lcd.print(Two.charAt(i));
    delay (400);
  }// end of if statement


//now playing MY Love
odeToJoy(buzzer_pin);

break;
} // end of state 2 if statement



// ---------------------------------------------------------------------------State threeeeeeeeeeeeeeeee--------------------------------------------------------------------------------------------------

case 3:  {

  lcd.clear();
  lcd.setCursor(0,0);


for (int i=0; i< Three.length() ; i++){
    lcd.print(Three.charAt(i));
    delay(100);
  }// end for loop 

// scroll effect when mesagge is being diplayed 
  lcd.setCursor(16,1);
  lcd.autoscroll();
  for(int i=0; i<Three.length(); i++){
    lcd.print(Three.charAt(i));
    delay (400);
  }// end of if statement


//now playing Boring pitches 
row(buzzer_pin);


} //  end if statement 

break;
} // end switch
}



