#include "DHT.h"

#define DHTPIN A1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
  Serial.begin(9600);
  delay(3000);
  Serial.println("Project initialization");
  Serial.println("-----------Welcome-----------\n");
}

void loop() 
{
  double dTempExt = dht.readTemperature();

  Serial.print("Température de l'air: ");
  Serial.print(dTempExt);
  Serial.println("°C");

  double dHumidExt = dht.readHumidity();
  
  Serial.print("Humidité de l'air: ");
  Serial.print(dHumidExt);
  Serial.println("%");

  Serial.println("-----");

  delay(5000);
}
