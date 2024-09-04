
#include<DNSServer.h>

#include<ESP8266WiFi.h>
#include<WiFiManager.h>
WiFiManager wifi;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(2,OUTPUT);
wifi.autoConnect("MARITIM HOME");
Serial.println("Connected to the Network");
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);
delay(300);

digitalWrite(2,LOW);
delay(1000);
}
