/*
 * Calculator
 * 
 * Takes in numbers and performs math on it
 * 
 * The circuit:
 * Arduino plugged into board
 * 
 * Created 17 November 2021
 * By Vivian Dai
 * 
 * https://github.com/vivian-dai/Computer-Engineering-Club-Code/blob/main/03-Serial%20Monitor/Calcultor.ino
 * 
 */

int firstNumber;
int secondNumber;
char arithmetic;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Serial.begin sets the baud rate (number of bits transferred per second, a bit is a 0 or a 1)
  Serial.println("Input your first number");
  while (Serial.available() == 0) {} // blocking while loop (does nothing until the serial is available)
  firstNumber = Serial.parseInt();

  Serial.println("Input your second number");
  while (Serial.available() == 0) {} // blocking while loop (does nothing until the serial is available)
  secondNumber = Serial.parseInt();

  Serial.println("Input your operation (+, -, *, /)");
  while (Serial.available() == 0) {} // blocking while loop (does nothing until the serial is available)
  arithmetic = Serial.read();
  
  Serial.print("Your results: ");
  if (arithmetic == '+') {
      Serial.println(firstNumber + secondNumber);
  } else if (arithmetic == '-') {
      Serial.println(firstNumber - secondNumber);
  } else if (arithmetic == '*') {
      Serial.println(firstNumber * secondNumber);
  } else if (arithmetic == '/') {
      Serial.println(firstNumber / secondNumber);
  } else {
      Serial.println("calculator does not support whatever you inputted :(");
  }

}

void loop() {
  // put your main code here, to run repeatedly:
}