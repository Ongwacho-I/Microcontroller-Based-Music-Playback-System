#define ODE_TO_JOY_H
#define ODE_TO_JOY_H

#include "pitches.h"
extern int buzzer_pin;

void odeToJoy(int buzzer_pin) {
    int NOTE_DUR = 200;  // adjust tempo here

    // First phrase
    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_F4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_G4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_G4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_F4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_D4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    // Second phrase
    tone(buzzer_pin, NOTE_C4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_C4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_D4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E4, NOTE_DUR * 2); // slightly longer note
    delay(NOTE_DUR * 2.6);

    tone(buzzer_pin, NOTE_D4, NOTE_DUR * 2);
    delay(NOTE_DUR * 2.6);

    tone(buzzer_pin, NOTE_C4, NOTE_DUR * 2);
    delay(NOTE_DUR * 2.6);
}