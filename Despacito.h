#define DESPACITO_H
#define DESPACITO_H

extern int buzzer_pin;

void Despacito(int buzzer_pin) {


    int NOTE_DUR = 150;   // tempo (adjust this to change speed)

    // Example structure:
    // tone(buzzer_pin, NOTE, duration);
    // delay(duration * 1.3);   // small gap

    tone(buzzer_pin, NOTE_D4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_FS4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_B4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_D5, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_CS5, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_B4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_AS4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_B4, NOTE_DUR * 2);
    delay(NOTE_DUR * 2);

    delay(NOTE_DUR * 6); // rest

    tone(buzzer_pin, NOTE_B4, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_CS5, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_D5, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    tone(buzzer_pin, NOTE_E5, NOTE_DUR);
    delay(NOTE_DUR * 1.3);

    
}

