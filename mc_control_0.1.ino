

#include "OneButton.h"

// Setup a new OneButton on pin A1. ==> Turn left
OneButton button1(A1, true);
// Setup a new OneButton on pin A2. ==> Turn right
OneButton button2(A2, true);
// Setup a new OneButton on pin A3. ==> High beam
OneButton button3(A3, true);
// Setup a new OneButton on pin A4. ==> Horn
OneButton button4(A4, true);
// Setup a new OneButton on pin A5. ==> Start Engine
OneButton button5(A5, true);

const int breakSwitch = 7;
const int ledPin =  13; // sim blink
int breakSwitchVal = 0;

const int neutralSwitch = 8;
int neutralSwitchVal = 0;

const int clutchSwitch = 9;
int clutchSwitchVa0 = 0;

const int sideStandSwitch = 10;
int sideStandSwitchVal = 0;

// setup code here, to run once:
void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(breakSwitch, INPUT_PULLUP);
  pinMode(neutralSwitch, INPUT_PULLUP);
  pinMode(clutchSwitch, INPUT_PULLUP);
  pinMode(sideStandSwitch, INPUT_PULLUP);

  Serial.begin(115200);
  while (!Serial) {
  }
  Serial.println("Starting MC Control 0.1...");

  // link the button 1 functions.
  button1.attachClick(click1);
  button1.attachDoubleClick(doubleclick1);
  button1.attachLongPressStart(longPressStart1);
  button1.attachLongPressStop(longPressStop1);
  button1.attachDuringLongPress(longPress1);

  // link the button 2 functions.
  button2.attachClick(click2);
  button2.attachDoubleClick(doubleclick2);
  button2.attachLongPressStart(longPressStart2);
  button2.attachLongPressStop(longPressStop2);
  button2.attachDuringLongPress(longPress2);

  // link the button 3 functions.
  button3.attachClick(click3);
  button3.attachDoubleClick(doubleclick3);
  button3.attachLongPressStart(longPressStart3);
  button3.attachLongPressStop(longPressStop3);
  button3.attachDuringLongPress(longPress3);

  // link the button 4 functions.
  button4.attachClick(click4);
  button4.attachDoubleClick(doubleclick4);
  button4.attachLongPressStart(longPressStart4);
  button4.attachLongPressStop(longPressStop4);
  button4.attachDuringLongPress(longPress4);

  // link the button 5 functions.
  button5.attachClick(click5);
  button5.attachDoubleClick(doubleclick5);
  button5.attachLongPressStart(longPressStart5);
  button5.attachLongPressStop(longPressStop5);
  button5.attachDuringLongPress(longPress5);

}



void loop() {
  button1.tick();
  button2.tick();
  button3.tick();
  button4.tick();
  button5.tick();  
}


// ----- button 1 callback functions

// This function will be called when the button1 was pressed 1 time (and no 2. button press followed).
void click1() {
  Serial.println("Button 1 click.");
} // click1


// This function will be called when the button1 was pressed 2 times in a short timeframe.
void doubleclick1() {
  Serial.println("Button 1 doubleclick.");
} // doubleclick1


// This function will be called once, when the button1 is pressed for a long time.
void longPressStart1() {
  Serial.println("Button 1 longPress start");
} // longPressStart1


// This function will be called often, while the button1 is pressed for a long time.
void longPress1() {
  Serial.println("Button 1 longPress...");
} // longPress1


// This function will be called once, when the button1 is released after beeing pressed for a long time.
void longPressStop1() {
  Serial.println("Button 1 longPress stop");
} // longPressStop1


// ... and the same for button 2:

void click2() {
  Serial.println("Button 2 click.");
} // click2


void doubleclick2() {
  Serial.println("Button 2 doubleclick.");
} // doubleclick2


void longPressStart2() {
  Serial.println("Button 2 longPress start");
} // longPressStart2


void longPress2() {
  // Serial.println("Button 2 longPress...");
} // longPress2

void longPressStop2() {
  Serial.println("Button 2 longPress stop");
} // longPressStop2

// ... and the same for button 3:

void click3() {
  Serial.println("Button 3 click.");
} // click3


void doubleclick3() {
  Serial.println("Button 3 doubleclick.");
} // doubleclick3


void longPressStart3() {
  Serial.println("Button 3 longPress start");
} // longPressStart3


void longPress3() {
  Serial.println("Button 3 longPress...");
} // longPress3

void longPressStop3() {
  Serial.println("Button 3 longPress stop");
} // longPressStop3

// ... and the same for button 4:

void click4() {
  Serial.println("Button 4 click.");
} // click4


void doubleclick4() {
  Serial.println("Button 4 doubleclick.");
} // doubleclick4


void longPressStart4() {
  Serial.println("Button 4 longPress start");
} // longPressStart4


void longPress4() {
  Serial.println("Button 4 longPress...");
} // longPress4

void longPressStop4() {
  Serial.println("Button 4 longPress stop");
} // longPressStop4

// ... and the same for button 5:

void click5() {
  Serial.println("Button 5 click.");
} // click5

void doubleclick5() {
  Serial.println("Button 5 doubleclick.");
} // doubleclick5


void longPressStart5() {
  Serial.println("Button 5 longPress start");
} // longPressStart5


void longPress5() {
  Serial.println("Button 5 longPress...");
} // longPress5

void longPressStop5() {
  Serial.println("Button 5 longPress stop");
} // longPressStop5


// End
