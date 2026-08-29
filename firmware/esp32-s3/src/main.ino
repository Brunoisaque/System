#include <WiFi.h>
#include <PubSubClient.h>
#include <WiFiClientSecure.h>

// Solaris Lillypad - ESP32-S3 firmware skeleton
// Configure via GitHub Secrets / env vars

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_WIFI_PASSWORD";
const char* mqtt_server = "YOUR_MQTT_HOST";
const int mqtt_port = 8883;

WiFiClientSecure espClient;
PubSubClient client(espClient);

void setup_wifi() {
  delay(10);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void reconnect() {
  while (!client.connected()) {
    if (client.connect("SolarisLillypad")) {
      client.subscribe("solaris/v3/command");
    } else {
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
  espClient.setInsecure(); // TODO: use CA cert
  client.setServer(mqtt_server, mqtt_port);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
  // TODO: read sensors and publish to solaris/v3/telemetry
  delay(10000);
}
