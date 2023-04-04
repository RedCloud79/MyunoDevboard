#include "pitches.h"

const int button_0 = 3;  // or pin 4
const int button_1 = 4;
const int ledPin_5 = 5;
const int ledPin_6 = 6;
const int ledPin_7 = 7;
int sensorPin = A0;    
int amp = 0;

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int buttonState = 0;  

void setup() {
  pinMode(ledPin_5, OUTPUT);
  pinMode(ledPin_6, OUTPUT);
  pinMode(ledPin_7, OUTPUT);
  pinMode(button_0, INPUT);
  pinMode(button_1, INPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  amp = analogRead(sensorPin)/10;
  delayMicroseconds(amp);
  digitalWrite(11, sensorPin);

  if (digitalRead(button_0) == HIGH) {
    digitalWrite(ledPin_5, HIGH);
    delay(500);
    digitalWrite(ledPin_6, HIGH);
    delay(500);
    digitalWrite(ledPin_7, HIGH);
    delay(500);
  } else {
    digitalWrite(ledPin_5, LOW);
    digitalWrite(ledPin_6, LOW);
    digitalWrite(ledPin_7, LOW);
  }

  if (digitalRead(button_1) == HIGH) {
    for (int thisNote = 0; thisNote < 8; thisNote++) {
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(11, melody[thisNote], noteDuration); // change pin number
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(8);  
    }
  }
}