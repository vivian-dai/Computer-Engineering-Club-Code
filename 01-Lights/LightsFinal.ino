/*
 * Lights (final)
 * 
 * Turns LEDs on and off after certain time intervals
 * 
 * The circuit:
 * LEDs connected as OUTPUTs on pins 6, 7, 8
 * 
 * Created 17 November 2021
 * By Vivian Dai
 * 
 * https://github.com/vivian-dai/Computer-Engineering-Club-Code/blob/main/01-Lights/LightsFinal.ino
 * 
 */
#define delayTime 1000 // 1000 milliseconds is one second

int lights[] = {6, 7, 8};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0;i < sizeof(lights);i++) {
    pinMode(lights[i], OUTPUT);
  }
  // sets all of the LEDs to outputs through a loop

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0;i < sizeof(lights);i++) {
    digitalWrite(lights[i], HIGH);
    delay(delayTime);
    digitalWrite(lights[i], LOW);
  }
}
