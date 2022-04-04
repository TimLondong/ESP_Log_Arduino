#include <Arduino.h>

#include "esp32-hal-log.h"

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  log_v("Verbose"); //use this for description 
  log_d("Debug");   //use this to print out Variabels
  log_i("Info");    //use this for Informations
  log_w("Warning"); //should be clear
  log_e("Error");   //should be clear
  delay(10000);
}