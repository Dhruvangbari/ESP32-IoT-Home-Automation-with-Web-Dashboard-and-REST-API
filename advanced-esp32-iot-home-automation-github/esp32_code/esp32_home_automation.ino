
#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

WebServer server(80);

#define RELAY 26

void handleRoot() {
  server.send(200, "text/plain", "ESP32 IoT Home Automation Running");
}

void turnOn() {
  digitalWrite(RELAY, HIGH);
  server.send(200, "text/plain", "Device ON");
}

void turnOff() {
  digitalWrite(RELAY, LOW);
  server.send(200, "text/plain", "Device OFF");
}

void setup() {

  Serial.begin(115200);

  pinMode(RELAY, OUTPUT);
  digitalWrite(RELAY, LOW);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi Connected");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.on("/on", turnOn);
  server.on("/off", turnOff);

  server.begin();
}

void loop() {
  server.handleClient();
}
