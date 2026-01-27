 #include "CytronMotorDriver.h"
  CytronMD motor(PWM_DIR, 3, 4);
  int  store,s;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly 
   s = Serial.parseInt();  
  if(s != 0) 
  {
    store = s;
   // Serial.println(store);
  }
  
 Serial.println(store);
  motor.setSpeed(store);
  delay(2000);
}
