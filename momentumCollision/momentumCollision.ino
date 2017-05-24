#include <Servo.h>

int pinLA = 9;
int pinLB = 10;
int pinRA = 11;
int pinRB = 12;

int button = 2;

bool pushed = false;

Servo servoLA;
Servo servoLB;
Servo servoRA;
Servo servoRB;

void setup() {
  pinMode(pinLA, OUTPUT);
  pinMode(pinLB, OUTPUT);
  pinMode(pinRA, OUTPUT);
  pinMode(pinRB, OUTPUT);

  pinMode(button, INPUT);
  
  servoLA.attach(pinLA);
  servoLB.attach(pinLB);  
  servoRA.attach(pinRA);  
  servoRB.attach(pinRB);  
}

void loop() {
 if(digitalRead(button) == HIGH) { pushed = true; }
 while(!pushed){
  servoLA.write(180);
  servoLB.write(180);
  servoRA.write(180);
  servoRB.write(180);
  }
}
