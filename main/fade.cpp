#include "Arduino.h"

int Led = 9;
void setup() {
  pinMode(Led, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {

  for(int angle = 0; angle <= 180; angle += 1){
    float s = sin(angle * 3.141592 / 180.0);
    int on = s * 1000;

    for(int i = 0; i < 10; i++){
        digitalWrite(Led, HIGH);
        delayMicroseconds(on);
        digitalWrite(Led, LOW);
        delayMicroseconds(1000 - on);
    }
  }
  // put your main code here, to run repeatedly:

}
