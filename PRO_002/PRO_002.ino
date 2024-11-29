#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClientSecure.h>

const char* ssid = "INTERNET1";
const char* pass = "PASSWORD";


const char* api = "IuD8frDTeG6W";
const char* ID = "115";
const char* Mobile = "7676184400";
const char* var1 = "Car";
const char* var2 = "Alcohol Detection";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (WiFi.status() != WL_CONNECTED) {
    delay(250);
    Serial.println(".");
  }
  Serial.println("CONNECTED.!");
}

void loop() {
  // put your main code here, to run repeatedly:

}

void SMS() {
  if (WiFi.status) == WL_CONNECTED) {
    WiFiClientSecure client;
    client.setInsecure;
    HTTPClient http;
  }

  http.begin(client, apiUrl);
  http.addHeader("Authorization", apiKey);
  http.addHeaderC"Content - Type", "application / json");

  //String payload = "(\"mobiles\":\"" + String(mobileNumber
  int httpResponseCode = http. POST(pay Load);

  if (httpResponseCode == 200) {
  Serial.println("SMS sent successfully!");
    Serial.println(http.getString());
  } else {
    Serial print("Failed to send SMS. Error code: ");
    Serial.println(httpResponseCode);
  }
  http.end();

}
