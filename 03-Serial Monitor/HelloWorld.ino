/*
 * HelloWorld
 * 
 * "Hello world" with serial monitor
 * 
 * The circuit:
 * Arduino plugged into board
 * 
 * Created 17 November 2021
 * By Vivian Dai
 * 
 * https://github.com/vivian-dai/Computer-Engineering-Club-Code/blob/main/03-Serial%20Monitor/HelloWorld.ino
 * 
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Serial.begin sets the baud rate (number of bits transferred per second, a bit is a 0 or a 1)
  Serial.println("Hello world!");
}
void loop() {
  // put your main code here, to run repeatedly:
}