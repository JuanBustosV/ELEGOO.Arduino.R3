/*
 Name:		L07.ino
 Created:	3/14/2021 5:19:47 PM
 Author:	juana
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6 };
int duration = 400;  // 500 miliseconds
int lowDuration = 450;
int highDuration = 700;

// the setup function runs once when you press reset or power the board
void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {

    HappyBirthday();

    delay(6000);

    LaCucaracha();

    delay(6000);

    //for (int thisNote = 0; thisNote < 8; thisNote++) {
    //    // pin8 output the voice, every scale is 0.5 sencond
    //    tone(8, melody[thisNote], duration);

    //    // Output the voice after several minutes
    //    delay(1000);
    //}

    //// restart after two seconds 
    //delay(2000);
}

void HappyBirthday() {

    tone(8, NOTE_C5, duration);
    delay(lowDuration);
    tone(8, NOTE_C5, duration);
    delay(lowDuration);
    tone(8, NOTE_D5, highDuration);
    delay(lowDuration);
    tone(8, NOTE_C5, duration);
    delay(lowDuration);
    tone(8, NOTE_F5, duration);
    delay(lowDuration);
    tone(8, NOTE_E5, highDuration);
    delay(1000);

    tone(8, NOTE_C5, duration);
    delay(lowDuration);
    tone(8, NOTE_C5, duration);
    delay(lowDuration);
    tone(8, NOTE_D5, highDuration);
    delay(lowDuration);
    tone(8, NOTE_C5, duration);
    delay(lowDuration);
    tone(8, NOTE_G5, duration);
    delay(lowDuration);
    tone(8, NOTE_F5, highDuration);
    delay(1000);

    tone(8, NOTE_C5, duration);
    delay(lowDuration);
    tone(8, NOTE_C5, duration);
    delay(lowDuration);
    tone(8, NOTE_C6, duration);
    delay(lowDuration);
    tone(8, NOTE_A5, highDuration);
    delay(lowDuration);
    tone(8, NOTE_F5, duration);
    delay(lowDuration);
    tone(8, NOTE_E5, duration);
    delay(lowDuration);
    tone(8, NOTE_D5, highDuration);
    delay(1000);

    tone(8, NOTE_B5, duration);
    delay(lowDuration);
    tone(8, NOTE_B5, duration);
    delay(lowDuration);
    tone(8, NOTE_A5, duration);
    delay(lowDuration);
    tone(8, NOTE_F5, duration);
    delay(lowDuration);
    tone(8, NOTE_G5, duration);
    delay(lowDuration);
    tone(8, NOTE_F5, highDuration);
    delay(1000);
}

/// <summary>
/// https://www.youtube.com/watch?v=TPAax3YxzX0
/// </summary>
void LaCucaracha() {

    int duration0 = 200;
    int lowDuration0 = 300;

    for (int i = 0; i < 2; i++) {

        tone(8, NOTE_C5, duration0);
        delay(lowDuration0);
        tone(8, NOTE_C5, duration0);
        delay(lowDuration0);
        tone(8, NOTE_C5, duration0);
        delay(lowDuration0);
        tone(8, NOTE_F5, 400);
        delay(500);
        tone(8, NOTE_A5, duration);
        delay(1000);
    }

    tone(8, NOTE_F5, duration0);
    delay(lowDuration0);
    tone(8, NOTE_F5, 400);
    delay(450);
    tone(8, NOTE_E5, duration0);
    delay(lowDuration0);
    tone(8, NOTE_E5, duration0);
    delay(lowDuration0);
    tone(8, NOTE_D5, duration0);
    delay(lowDuration0);
    tone(8, NOTE_D5, duration0);
    delay(lowDuration0);
    tone(8, NOTE_C5, duration0);
    delay(1000);

    for (int i = 0; i < 2; i++) {

        tone(8, NOTE_C5, duration0);
        delay(lowDuration0);
        tone(8, NOTE_C5, duration0);
        delay(lowDuration0);
        tone(8, NOTE_C5, duration0);
        delay(lowDuration0);
        tone(8, NOTE_E5, 400);
        delay(500);
        tone(8, NOTE_G5, duration);
        delay(1000);
    }

    tone(8, NOTE_C6, 400);
    delay(500);
    tone(8, NOTE_D6, duration0);
    delay(lowDuration0);
    tone(8, NOTE_C6, duration0);
    delay(lowDuration0);
    tone(8, NOTE_AS5, duration0);
    delay(lowDuration0);
    tone(8, NOTE_A5, duration0);
    delay(lowDuration0);
    tone(8, NOTE_G5, 400);
    delay(450);
    tone(8, NOTE_F5, duration0);
    delay(1000);

    /*
    * sigue:
    *
    * DO DO FA FA LA LA DO' LA
    * DO' RE' DO' LA# LA DO' SI SOL
    * DO DO MI MI SOL SOL SI SOL
    * DO' RE' DO' LA# LA DO' SOL FA
    *
    */

}
