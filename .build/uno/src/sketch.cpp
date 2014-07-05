#include <Arduino.h>

void setup();
void loop();
#line 1 "src/sketch.ino"
void setup(){
	pinMode(13, OUTPUT);
}

void loop(){
	digitalWrite(13, LOW);        // GateとCKをLOWにする。
	delay(80);
	digitalWrite(13, HIGH);        // GateとCKをLOWにする。
	delay(80);
}
