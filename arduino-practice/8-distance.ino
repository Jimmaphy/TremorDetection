#include <HCSR04.h>
 
#define T 12
#define E 11
UltraSonicDistanceSensor sensor(T, E);
long a;
 
void setup() {
    Serial.begin(9600);
}
 
void loop() {
    a = sensor.measureDistanceCm();
    Serial.print(a);
    Serial.println(" cm");
    delay(1000);
}
