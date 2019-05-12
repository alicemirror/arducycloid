#include <ArduinoIoTCloud.h>
#include <WiFiConnectionManager.h>

const char THING_ID[] = "878a5415-0ed8-4101-82b0-085b333df90d";

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

void onStartDrawingChange();
void onSpeedMotor1Change();
void onSpeedMotor2Change();
void onDirectionsChange();
void onLightDrawingChange();

bool StartDrawing;
int SpeedMotor1;
int SpeedMotor2;
int Directions;
bool LightDrawing;

void initProperties(){
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(StartDrawing, READWRITE, ON_CHANGE, onStartDrawingChange);
  ArduinoCloud.addProperty(SpeedMotor1, READWRITE, ON_CHANGE, onSpeedMotor1Change);
  ArduinoCloud.addProperty(SpeedMotor2, READWRITE, ON_CHANGE, onSpeedMotor2Change);
  ArduinoCloud.addProperty(Directions, READWRITE, ON_CHANGE, onDirectionsChange);
  ArduinoCloud.addProperty(LightDrawing, READWRITE, ON_CHANGE, onLightDrawingChange);
}

ConnectionManager *ArduinoIoTPreferredConnection = new WiFiConnectionManager(SSID, PASS);
