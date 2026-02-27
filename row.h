#define row_H
#define row_H

#include "pitches.h"
extern int buzzer_pin;

void row(int buzzer_pin) {
    int NOTE_DUR = 250;  // adjust tempo here

    // "Row, row, row your boat"
    tone(buzzer_pin, NOTE_C4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_C4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_C4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_D4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E4, NOTE_DUR * 2);
    delay(NOTE_DUR * 2.6);

    // "Gently down the stream"
    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_D4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_F4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_G4, NOTE_DUR * 2);
    delay(NOTE_DUR * 2.6);

    // "Merrily, merrily, merrily"
    tone(buzzer_pin, NOTE_C5, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_C5, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_C5, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_G4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_G4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_G4, NOTE_DUR * 2);
    delay(NOTE_DUR * 2.6);

    // "Life is but a dream"
    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_C4, NOTE_DUR * 2);
    delay(NOTE_DUR * 2.6);

    delay(NOTE_DUR * 4); // short pause at end
}

