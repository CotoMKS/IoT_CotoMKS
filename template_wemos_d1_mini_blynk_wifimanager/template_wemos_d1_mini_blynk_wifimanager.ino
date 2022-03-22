/*
 *  Template IoT Wemos D1 mini
 *  Dibuat menggunakan Library Blynk dan WiFiManager
 *  
 *  Sebelum menggunakan template ini, pastikan kalian sudah menginstall Library yang diperlukan.
 *  Library, Source Code dan Dokumentasi cara menggunakan Template ini tersedia di Repository github https://github.com/CotoMKS/IoT_CotoMKS
 *  
 *  Ada beberapa Hal yang perlu kalian ganti sebelum menggunakan template ini, yaitu
 *  - TEMPLATE_ID
 *  - DEVICE_NAME
 *  - AUTH_KEY
 */

#define BLYNK_TEMPLATE_ID "TMPLzaOwrN_R"
#define BLYNK_DEVICE_NAME "Kunci Kamar"

#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>

#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

char auth[] = "X6Nbcf4RSYRNvbY4VFjwQefEiRjIaDmm";
WiFiManager wifimanager;

BLYNK_WRITE(V0) {
  int pinValue = param.asInt();
  digitalWrite(4, pinValue);
}

void setup() {
  Serial.begin(115200);
  pinMode(4, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  if (!wifimanager.autoConnect("MarzyahLock")) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("failed to connect, we should reset as see if it connects");
    delay(1000);
    ESP.reset();
    delay(3000);
  }

  Serial.println("Connected to WiFi!");
  Serial.println("");
  Serial.println("");

  Blynk.config(auth);
  Blynk.connect();
}

void loop() {
  Blynk.run();
  if (WiFi.status() != WL_CONNECTED) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    wifimanager.autoConnect("MarzyahLock");
  }
}
