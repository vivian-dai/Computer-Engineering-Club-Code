/*
 * Lights (advanced)
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
#define delayTime 1000 // 1000 milliseconds is one second
#define redLight 8
#define greenLight 7
#define blueLight 6

void setup() {
  // put your setup code here, to run once:
  pinMode(redLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(blueLight, OUTPUT);
  // sets all of the LEDs to outputs

}

void loop() {
  // put your main code here, to run repeatedly:

  // turn red LED on and off
  toggleLight(redLight);

  // turn green LED on and off
  toggleLight(greenLight);

  // turn blue LED on and off
  toggleLight(blueLight);
}

/**
 * turns the light on, waits some time, turns it off
 * 
 * @param light the number of the pin of the light to toggle
 */
void toggleLight(int light) {
  digitalWrite(light, HIGH);
  delay(delayTime);
  digitalWrite(light, LOW);
}
