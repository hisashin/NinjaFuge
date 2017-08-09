#include <Servo.h>

#define PIN_VR 0
#define PIN_MAGNET 2
#define PIN_ESC 3
#define PIN_LED 13
#define SPEED_STOP 500
#define SPEED_MIN 1150
#define SPEED_MAX 1500

Servo myservo;

boolean doorOpen;

void setup() { 
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);
  pinMode(PIN_MAGNET, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PIN_MAGNET), checkDoor, CHANGE);
  myservo.attach(PIN_ESC);
  calib();
  doorOpen = !isMagExists();
  Serial.begin(9600);
  if(doorOpen) {
    Serial.println("initial door=open" );
  } else {
    Serial.println("initial door=closed" );
  }
}

int val;

void loop() { 
  delay(400);
  if(doorOpen) {
    val = SPEED_STOP;
  } else {
    val = analogRead(PIN_VR);
    val = map(val, 1023, 0, SPEED_MIN, SPEED_MAX);
  }
  //Serial.println("val=" + val);
  myservo.writeMicroseconds(val);
}

boolean isMagExists() {
  return !digitalRead(PIN_MAGNET);
}

void checkDoor() {
  doorOpen = !isMagExists();
  if(doorOpen) {
    Serial.println("checkDoor door=open" );
  } else {
    Serial.println("checkDoor door=closed" );
  }
  digitalWrite(PIN_LED, !doorOpen);
}

void calib() {
  myservo.write(0);
  //myservo.writeMicroseconds(SPEED_MIN);
  delay(1000);
  myservo.write(30);
  //myservo.writeMicroseconds(SPEED_MAX);
  delay(3000);
}
