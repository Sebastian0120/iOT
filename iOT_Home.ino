//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

/*/Define the relay pins
#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3
*/

#define BLYNK_TEMPLATE_ID "TMPLwbsiQDUl"
#define BLYNK_DEVICE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "p-OZNj0BZjpZ5p1Kbuv5a2y-VBQMRjya"
//#define BLYNK_AUTH_TOKEN "" //Enter your blynk auth token

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "INFINITUM9388_2.4";//Enter your WIFI name
char pass[] = "%SebasUnlocker%";//Enter your WIFI password

//Get the button values
BLYNK_WRITE(V0) {
  bool value1 = param.asInt();
  // Check these values and turn the relay1 ON and OFF
  if (value1 == 1) {
    digitalWrite(D0, HIGH);
  } else {
    digitalWrite(D0, LOW);
  }
}

//Get the button values
BLYNK_WRITE(V1) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(D1, HIGH);
  } else {
    digitalWrite(D1, LOW);
  }
}

//Get the button values
BLYNK_WRITE(V2) {
  bool value3 = param.asInt();
  // Check these values and turn the relay1 ON and OFF
  if (value3 == 1) {
    digitalWrite(D2, HIGH);
  } else {
    digitalWrite(D2, LOW);
  }
}

//Get the button values
BLYNK_WRITE(V3){
  bool value4 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value4 == 1) {
    digitalWrite(D3, HIGH);
  } else {
    digitalWrite(D3, LOW);
  }
}

void setup(){
  //Set the relay pins as output pins
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);

  // Turn OFF the relay
  digitalWrite(D0, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);

  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop(){
  //Run the Blynk library
  Blynk.run();
}
