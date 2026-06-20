#include <Arduino.h>
#include "ledBlink.h"

// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkBuildInLED();
}

// put function definitions here:
