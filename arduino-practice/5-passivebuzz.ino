#include "pitches.h"
#define BUZZER 8
 
int duration = 200;
int melody[] = {
    NOTE_A2, NOTE_A2, 
    NOTE_A2, NOTE_D1, 
    NOTE_D1, NOTE_A2, 
    NOTE_A2, NOTE_D1
};
 
void setup() { }
 
void loop() {
    for (int note = 0; note < 8; note++) {
        tone(BUZZER, melody[note], duration);
        delay(200);
    }
    
    delay(500);
}
