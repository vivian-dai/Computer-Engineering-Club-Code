/*
 * ButtonBasic
 * 
 * Checks if a button is pressed or not
 * 
 * The circuit:
 * Buttons connected as INPUT to pin 8
 * 
 * Created 24 November 2021
 * By Vivian Dai
 * 
 * https://github.com/vivian-dai/Computer-Engineering-Club-Code/blob/main/04-Input/Button.ino
 * 
 */

#define buttonPin 8

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(buttonPin));
}