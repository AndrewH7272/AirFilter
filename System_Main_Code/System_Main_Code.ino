void setup() {
  // Add DS3231 library by jarzebski (library)
  #include <Wire.h>
  #include "DS3231.h"
  #include "Adafruit_BMP280.h"
  #include <SharpDustSensor.h>
  #include <RunningAverage.h>
  #include <Wifi.h>
  #include <HTTPClient.h>
  bool badFilter = false;
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // put your main code here, to run repeatedly:
  //FUNCTION sendAlert(dust, pressure):
  //IF dust/pressure reaches thresholdValue
  //send HTTPS post
  
  //if avgpressure > pressureThreshold:
    //bool badFilter = true;
    //alert()

  //if avgConcentration > concentrationThreshold:
    //bool badFilter = true;
    //alert()

}
