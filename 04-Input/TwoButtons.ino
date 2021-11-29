/*
 * TwoButtons
 * 
 * Has two buttons, each of which controls a different LED
 * 
 * The circuit:
 * Buttons connected as INPUT to pin 7 and 8
 * LEDs connected as OUTPUT to pin 12 and 13
 * 
 * Created 28 November 2021
 * By Vivian Dai
 * 
 * https://github.com/vivian-dai/Computer-Engineering-Club-Code/blob/main/04-Input/TwoButtons.ino
 * 
 */

#define rightButton 7
#define leftButton 8
#define rightLight 12
#define leftLight 13


bool leftButtonPressed = false; // Assume that left button not being pressed means right button is pressed

void setup() {
  // put your setup code here, to run once:
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
  pinMode(leftLight, OUTPUT);
  pinMode(rightLight, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(leftButton)) {
    leftButtonPressed = true;
  } else if (digitalRead(rightButton)) {
    leftButtonPressed = false;
  }
  
  if (leftButtonPressed) {
    digitalWrite(leftLight, HIGH);
    digitalWrite(rightLight, LOW);
  } else {
	digitalWrite(leftLight, LOW);
    digitalWrite(rightLight, HIGH);
  }
}