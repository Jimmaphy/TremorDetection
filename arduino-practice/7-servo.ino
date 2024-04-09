#include <Servo.h>
 
#define SERVO 9
Servo myservo;
 
void setup() {
    myservo.attach(SERVO);
}
 
void loop() {
    myservo.write(90);
    delay(500);
    myservo.write(30);
    delay(500);
}