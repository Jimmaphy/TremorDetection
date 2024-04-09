// Define the pin
#define BUZZ 12
 
// Setup, runs once
// Set the pin to a certain frequency
void setup() {
    pinMode(BUZZ, OUTPUT);
    analogWrite(BUZZ, 150);
}
 
// Loop, runs over and over
// Nothing to update
void loop() { }
