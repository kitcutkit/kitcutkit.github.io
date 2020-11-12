#include <VarSpeedServo.h> 

VarSpeedServo servo;

int pin = 8;
int deg = 0;
int speed = 50; // 1 - 255

void setup() {
  servo.attach(pin);
  Serial.begin(9600);
  move_servo(0);
} 

void move_servo(int deg) {
  servo.write(deg, speed, true);
}

int serialRead() {
  int i;
  char c[8];
  for (i = 0; i < 7; i++) {
    c[i] = Serial.read();
    if (c[i] == '\0') {
      break;
    }
  }
  return atoi(c);
}

void loop() {
  move_servo(deg);
  if (Serial.available() > 0) {
    delay(10);
    int input = serialRead();
    if ( input >= 0 && input <= 180 ) {
      deg = input;
    }
    Serial.print("000,");
  }
}
