/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

int pos = 0,s;    // variable to store the servo position

void setup() {
  myservo.attach(9,1000,2000);  // attaches the servo on pin 9 to the Servo object
  myservo.writeMicroseconds(1500);
  Serial.begin(9600);
}

void loop() {
 // for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
 //   myservo.write(pos);              // tell servo to go to position in variable 'pos'
 //   delay(15);                       // waits 15 ms for the servo to reach the position
 /// }
 // for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
 //   myservo.write(pos);              // tell servo to go to position in variable 'pos'
 //   delay(15);                       // waits 15 ms for the servo to reach the position
//  }
if (Serial.available() > 0 )
 { 

  s = Serial.parseInt();
 // Serial.println(s);
  if (s <= 2000 && s>= 1000) {
  
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
