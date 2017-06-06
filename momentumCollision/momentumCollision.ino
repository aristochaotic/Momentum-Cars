#include <Servo.h>

int pinL = 8;
int pinR = 9;

int button = 7;

bool pushed = false;

Servo servoL;
Servo servoR;

void setup() {
  pinMode(pinL, OUTPUT);
  pinMode(pinR, OUTPUT);

  pinMode(button, INPUT_PULLUP);
  
  servoL.attach(pinL);
  servoR.attach(pinR);  
}

void loop() {
 if(digitalRead(button) == HIGH) { pushed = true; }
 while(!pushed){
  servoL.write(180);
  servoR.write(180);

  }
}
