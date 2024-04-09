#define LED 13
#define BALLSWITCH 12
 
void setup() {
    pinMode(LED, OUTPUT);
    pinMode(BALLSWITCH, INPUT);
    digitalWrite(BALLSWITCH, HIGH);
}
 
void loop() {
    if (digitalRead(BALLSWITCH) == LOW) {
        digitalWrite(LED, HIGH);
    }
    
    else {
        digitalWrite(LED, LOW);
    }
}
