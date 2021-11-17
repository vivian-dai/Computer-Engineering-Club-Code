/*
 * Input
 * 
 * Takes in some input and does stuff with it
 * 
 * The circuit:
 * Arduino plugged into board
 * 
 * Created 17 November 2021
 * By Vivian Dai
 * 
 * https://github.com/vivian-dai/Computer-Engineering-Club-Code/blob/main/03-Serial%20Monitor/Input.ino
 * 
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Serial.begin sets the baud rate (number of bits transferred per second, a bit is a 0 or a 1)
  Serial.println("What's your name?");
  while (Serial.available() == 0) {} // blocking while loop (does nothing until the serial is available)
  String name = Serial.readString();
  Serial.println("Hello " + name + "!");
}

void loop() {
  // put your main code here, to run repeatedly:
}