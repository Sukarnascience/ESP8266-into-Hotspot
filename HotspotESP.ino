/*
 * Use Your ESP8266 -01/12/12E... as a Hotspot
 * 
 * Made By:- Sukarna Jana
 */

#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  boolean Out = WiFi.softAP("LocalNetwork","sukarna jana");

  if(Out==true)
  {
    Serial.println("Hotspot is activated");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(255);
    digitalWrite(LED_BUILTIN, LOW);
    delay(255);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(255);
    digitalWrite(LED_BUILTIN, LOW);
    delay(255);
  }
  else
  {
    Serial.println("Hotspot is fail to activated");
    digitalWrite(LED_BUILTIN, LOW);
  }
  digitalWrite(LED_BUILTIN, LOW);
}

void loop()
{
  Serial.print("No. of Connection:-");
  Serial.println(WiFi.softAPgetStationNum());
  int Connection = WiFi.softAPgetStationNum();
  for(int i=0; i<Connection; i++)
  {
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
  }
  delay(5000);
}
