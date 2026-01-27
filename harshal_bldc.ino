

#include <Servo.h>

Servo myservo;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

int pos = 0,s;    // variable to store the servo position

void setup() {
  myservo.attach(9,1000,2000);  // attaches the servo on pin 9 to the Servo object
  myservo.writeMicroseconds(1000);
  Serial.begin(9600);
}

void loop() {

if (Serial.available() > 0 )
 { 

  s = Serial.parseInt();
 // Serial.println(s);
  if (s <= 1500 && s>= 1000) {
  
    if(s != 0)
   {
     pos = s;
     Serial.println();
    }
   myservo.writeMicroseconds(pos);
   Serial.println(pos);

 }
 }
}
