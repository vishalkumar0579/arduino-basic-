#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ThingSpeak.h>
const char* ssid = "Enter your Wifi name";
const char* password = "Enter your Wifi password";
WiFiClient client;
unsigned long myChannelNumber = 561042;
const char * myWriteAPIKey = "UY47OILGY9AP2AGU";
int val1=1;
int val2=0;
int state = 1;
void setup() {
Serial.begin(115200);
// Connect to WiFi network
Serial.println();
Serial.println();
Serial.print("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED)
{
delay(500);
Serial.print(".");
}
Serial.println("");
Serial.println("WiFi connected");
// Print the IP address
Serial.println(WiFi.localIP());
ThingSpeak.begin(client);
}

void loop() {
if (state==1) {
ThingSpeak.writeField(myChannelNumber, 1, val1, myWriteAPIKey);
state = state+1;
val1=val1+2; // val1 prints a set of odd numbers
Serial.println(state);
Serial.println("Channel 1 transmitted");
}

else {
ThingSpeak.writeField(myChannelNumber, 2, val2, myWriteAPIKey);
Serial.println(state);
Serial.println("channel 2 transmitted");
state = 1;
val2=val2+2; //val2 prints a set of even numbers
}
Serial.println(state);
delay(30000);

}
