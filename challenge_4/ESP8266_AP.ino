//Get the ESP8266 wifi library.
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

//Creates a server that listens for connections on a specified port.
ESP8266WebServer server(80);

//Test web server content.
void handleRoot() {
  server.send(200, "text/html", "<h1>You are connected</h1>");
}

//Setup used to initialise the libraries and other variables needed within the code.
void setup() {
  //baud rate is the data rate in bits per second communicated over the serial port
  Serial.begin(115200);
  delay(2000);

  Serial.println("Setting up AP...");
  boolean result = WiFi.softAP("TestAP","123456789");
  if(result == true){
    Serial.println("Ready.");
  }
  else{
    Serial.println("AP not setup");
  }

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server started");

}

void loop() {
  //Print the number of stations connected to the softAP.
  Serial.printf("Stations connected = %d\n", WiFi.softAPgetStationNum());
  delay(3000);

  server.handleClient();

}
