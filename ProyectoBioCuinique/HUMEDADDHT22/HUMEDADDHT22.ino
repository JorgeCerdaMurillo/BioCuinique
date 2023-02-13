#include <DHT.h>
#include <DHT_U.h>

#include "DHT.h"

#define DHTPIN 2     // Pin donde está conectado el sensor

//#define DHTTYPE DHT11   // Descomentar si se usa el DHT 11
#define DHTTYPE DHT22   // Sensor DHT22
const int AirValue = 588;   //you need to replace this value with Value_1
const int WaterValue = 308;  //you need to replace this value with Value_2
int soilMoistureValue = 0;
int soilmoisturepercent=0;
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  delay(1000);
  float h = dht.readHumidity(); //Leemos la Humedad
  float t = dht.readTemperature(); //Leemos la temperatura en grados Celsius

//HUMEDAD DEL SUSTRATO SUELO
  soilMoistureValue = analogRead(A0);  //put Sensor insert into soil
  soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);

  
  //--------Enviamos las lecturas por el puerto serial-------------
  //Serial.print("Humedad ");

 // Serial.print("Temperatura: ");
    Serial.print(t);
 // Serial.print(" *C ");
   Serial.print(",");
   Serial.print(h);
//  Serial.print(" %t");
  
  if(soilmoisturepercent >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent >0 && soilmoisturepercent < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent);
  Serial.println("%");
  }
  
}
