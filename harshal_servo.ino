

#include <Servo.h>

Servo myservo;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

int pos = 0,s;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the Servo object
  Serial.begin(9600);
}

void loop() {

  s = Serial.parseInt();
 // Serial.println(s);
   if(s != 0)
  {
    pos = s;
    Serial.println();
   }
   myservo.write(pos);
   Serial.println(pos);

  
}
