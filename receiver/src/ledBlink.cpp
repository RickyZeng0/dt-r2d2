#include "ledBlink.h"

void blinkBuildInLED(){
  digitalWrite(LED_BUILTIN,HIGH);
  Serial.println("HIGH");
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  Serial.println("LOW");
  delay(1000);
}
