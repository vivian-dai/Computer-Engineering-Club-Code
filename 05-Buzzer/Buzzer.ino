/*
 * Buzzer
 * 
 * Plays Jingle Bells on a buzzer
 * 
 * The circuit:
 * Buzzer connected as OUTPUT to pin 8
 * 
 * Created 24 November 2021
 * By Vivian Dai
 * 
 * https://github.com/vivian-dai/Computer-Engineering-Club-Code/blob/main/05-Buzzer/Buzzer.ino
 * 
 */

#include "song.h";

#define buzzerPin 8
#define bmp 90
#define beatPerBar 4



void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0;i < sizeof(notes)/sizeof(Note);i++) {
    tone(buzzerPin, notes[i].pitch, int((4*60000/bmp)/notes[i].duration));
    delay((int)((4*60000/bmp)/notes[i].duration));
    noTone(buzzerPin);
  }
}