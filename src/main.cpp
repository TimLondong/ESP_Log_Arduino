#include <Arduino.h>

#include "esp32-hal-log.h"

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  log_v("Verbose");
  log_d("Debug");
  log_i("Info");
  log_w("Warning");
  log_e("Error");
  delay(5000);
}