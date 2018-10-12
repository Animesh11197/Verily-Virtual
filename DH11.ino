#include<dht.h>
dht DHT;

// if you require to change the pin number, Edit the pin with your arduino pin.

#define DHT11_PIN 3

void setup() {

Serial.begin(9600);

Serial.println(">>>Animesh<<<"); }

void loop() { // READ DATA

int chk = DHT.read11(DHT11_PIN);

Serial.println(" Humidity " );

Serial.println(DHT.humidity, 1);

Serial.println(" Temparature ");

Serial.println(DHT.temperature, 1);

delay(2000);

}
