/*
 * Lights (easy)
 * 
 * Turns LEDs on and off after certain time intervals
 * 
 * The circuit:
 * LEDs connected as OUTPUTs on pins 6, 7, 8
 * 
 * Created 11 November 2021
 * By Vivian Dai
 * 
 * https://github.com/vivian-dai/Computer-Engineering-Club-Code/tree/main/01-Lights
 * 
 */
int DELAY_TIME = 1000; // 1000 milliseconds is one second
int RED_LED = 8;
int GREEN_LED = 7;
int BLUE_LED = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  // sets all of the LEDs to outputs

}

void loop() {
  // put your main code here, to run repeatedly:

  // turn red LED on and off
  digitalWrite(RED_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(RED_LED, LOW);

  // turn green LED on and off
  digitalWrite(GREEN_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(GREEN_LED, LOW);

  // turn blue LED on and off
  digitalWrite(BLUE_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(BLUE_LED, LOW);
}