  
#include <dht11.h>

dht11 DHT11;

#define DHT11PIN 17

void setup(){
   Serial.begin(9600);
   
}
 
void loop(){
  
   int chk = DHT11.read(DHT11PIN);

 
 Serial.print("    ");

  Serial.print("Read sensor: ");

  switch (chk)
  {
    case 0: Serial.print("OK"); break;
    case -1: Serial.print("Checksum error"); break;
    case -2: Serial.print("Time out error"); break;
    default: Serial.print("Unknown error"); break;
  }

  Serial.print("Humidity (%):    ");
  
  Serial.print((float)DHT11.humidity, 2);
   
 Serial.print("%    ");
 
 
 
  Serial.print("Temperature:    ");
  
  Serial.print((float)DHT11.temperature, 2);
  Serial.println("C     ");
 delay(1000);
}
