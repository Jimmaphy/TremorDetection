#define SWITCHA 3
#define SWITCHB 7
#define LED 12
 
void setup() {
    pinMode(SWITCHA, INPUT_PULLUP);
    pinMode(SWITCHB, INPUT_PULLUP);
}
 
void loop() {
    if (digitalRead(SWITCHA) == LOW) {
        digitalWrite(LED, HIGH);
    }
 
    if (digitalRead(SWITCHB) == LOW) {
        digitalWrite(LED, LOW);
    }
}
