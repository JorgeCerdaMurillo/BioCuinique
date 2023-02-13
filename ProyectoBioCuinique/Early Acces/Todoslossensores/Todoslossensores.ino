#include <DHT.h>
#include <DHT_U.h>
#include "DHT.h"
#define DHTPIN 2     // Pin donde está conectado el sensor
#define DHTPIN 3
#define DHTPIN 4
#define DHTPIN 5
#define DHTPIN 6
#define DHTPIN 7
#define DHTPIN 8


//#define DHTTYPE DHT11   // Descomentar si se usa el DHT 11
#define DHTTYPE DHT22   // Sensor DHT22
DHT dht1(DHTPIN, DHTTYPE);
DHT dht2(DHTPIN, DHTTYPE);
DHT dht3(DHTPIN, DHTTYPE);
DHT dht4(DHTPIN, DHTTYPE);
DHT dht5(DHTPIN, DHTTYPE);
DHT dht6(DHTPIN, DHTTYPE);
DHT dht7(DHTPIN, DHTTYPE);
DHT dht8(DHTPIN, DHTTYPE);


const int AirValue = 588;   
const int WaterValue = 308;  
int soilMoistureValue = 0;
int soilmoisturepercent=0;


const int AirValue1 = 588;   
const int WaterValue1 = 308;  
int soilMoistureValue1 = 0;
int soilmoisturepercent1=0;


const int AirValue2 = 588;   
const int WaterValue2 = 308;  
int soilMoistureValue2 = 0;
int soilmoisturepercent2=0;


const int AirValue3 = 588;   
const int WaterValue3 = 308;  
int soilMoistureValue3 = 0;
int soilmoisturepercent3=0;


const int AirValue4 = 588;   
const int WaterValue4 = 308;  
int soilMoistureValue4 = 0;
int soilmoisturepercent4=0;


const int AirValue5 = 588;   
const int WaterValue5 = 308;  
int soilMoistureValue5 = 0;
int soilmoisturepercent5=0;


const int AirValue6 = 588;   
const int WaterValue6 = 308;  
int soilMoistureValue6 = 0;
int soilmoisturepercent6=0;


const int AirValue7 = 588;   
const int WaterValue7 = 308;  
int soilMoistureValue7 = 0;
int soilmoisturepercent7=0;


const int AirValue8 = 588;   
const int WaterValue8 = 308;  
int soilMoistureValue8 = 0;
int soilmoisturepercent8=0;


const int AirValue9 = 588;   
const int WaterValue9 = 308;  
int soilMoistureValue9 = 0;
int soilmoisturepercent9=0;


const int AirValue10 = 588;   
const int WaterValue10 = 308;  
int soilMoistureValue10 = 0;
int soilmoisturepercent10=0;


const int AirValue11 = 588;   
const int WaterValue11 = 308;  
int soilMoistureValue11 = 0;
int soilmoisturepercent11=0;


const int AirValue12 = 588;   
const int WaterValue12 = 308;  
int soilMoistureValue12 = 0;
int soilmoisturepercent12=0;


void setup() {
  Serial.begin(9600);
  dht1.begin();
  dht2.begin();
  dht3.begin();
  dht4.begin();
  dht5.begin();
  dht6.begin();
  dht7.begin();
  dht8.begin();
}


void loop() {
  delay(1000);

  float h1 = dht1.readHumidity(); //Leemos la Humedad
  float t1 = dht1.readTemperature(); //Leemos la temperatura en grados Celsius

  float h2 = dht2.readHumidity(); //Leemos la Humedad
  float t2 = dht2.readTemperature(); //Leemos la temperatura en grados Celsius

  float h3 = dht3.readHumidity(); //Leemos la Humedad
  float t3 = dht3.readTemperature(); //Leemos la temperatura en grados Celsius

  float h4 = dht4.readHumidity(); //Leemos la Humedad
  float t4 = dht4.readTemperature(); //Leemos la temperatura en grados Celsius

  float h5 = dht5.readHumidity(); //Leemos la Humedad
  float t5 = dht5.readTemperature(); //Leemos la temperatura en grados Celsius

  float h6 = dht6.readHumidity(); //Leemos la Humedad
  float t6 = dht6.readTemperature(); //Leemos la temperatura en grados Celsius

  float h7 = dht7.readHumidity(); //Leemos la Humedad
  float t7 = dht7.readTemperature(); //Leemos la temperatura en grados Celsius

  float h8 = dht8.readHumidity(); //Leemos la Humedad
  float t8 = dht8.readTemperature(); //Leemos la temperatura en grados Celsius

//HUMEDAD DEL SUSTRATO SUELO
  soilMoistureValue = analogRead(A0);  //put Sensor insert into soil
  soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
  //------------------------------------------------------------------------------//
  soilMoistureValue1 = analogRead(A1);  //put Sensor insert into soil
  soilmoisturepercent1 = map(soilMoistureValue1, AirValue1, WaterValue1, 0, 100);
  //------------------------------------------------------------------------------//
    soilMoistureValue2 = analogRead(A2);  //put Sensor insert into soil
  soilmoisturepercent2 = map(soilMoistureValue2, AirValue2, WaterValue2, 0, 100);
  //------------------------------------------------------------------------------//
    soilMoistureValue3 = analogRead(A3);  //put Sensor insert into soil
  soilmoisturepercent3 = map(soilMoistureValue3, AirValue3, WaterValue3, 0, 100);
  //------------------------------------------------------------------------------//
    soilMoistureValue4 = analogRead(A4);  //put Sensor insert into soil
  soilmoisturepercent4 = map(soilMoistureValue4, AirValue4, WaterValue4, 0, 100);
  //------------------------------------------------------------------------------//
    soilMoistureValue5 = analogRead(A5);  //put Sensor insert into soil
  soilmoisturepercent5 = map(soilMoistureValue5, AirValue5, WaterValue5, 0, 100);
  //------------------------------------------------------------------------------//
    soilMoistureValue6 = analogRead(A6);  //put Sensor insert into soil
  soilmoisturepercent6 = map(soilMoistureValue6, AirValue6, WaterValue6, 0, 100);
  //------------------------------------------------------------------------------//
    soilMoistureValue7 = analogRead(A7);  //put Sensor insert into soil
  soilmoisturepercent7 = map(soilMoistureValue7, AirValue7, WaterValue7, 0, 100);
  //------------------------------------------------------------------------------//
    soilMoistureValue8 = analogRead(A8);  //put Sensor insert into soil
  soilmoisturepercent8 = map(soilMoistureValue8, AirValue8, WaterValue8, 0, 100);
  //------------------------------------------------------------------------------//
    soilMoistureValue9 = analogRead(A9);  //put Sensor insert into soil
  soilmoisturepercent9 = map(soilMoistureValue9, AirValue9, WaterValue9, 0, 100);
  //------------------------------------------------------------------------------//
  soilMoistureValue10 = analogRead(A10);  //put Sensor insert into soil
  soilmoisturepercent10 = map(soilMoistureValue10, AirValue10, WaterValue10, 0, 100);
  //------------------------------------------------------------------------------//
  soilMoistureValue11 = analogRead(A11);  //put Sensor insert into soil
  soilmoisturepercent11 = map(soilMoistureValue11, AirValue11, WaterValue11, 0, 100);
  //------------------------------------------------------------------------------//
  soilMoistureValue12 = analogRead(A12);  //put Sensor insert into soil
  soilmoisturepercent12 = map(soilMoistureValue12, AirValue12, WaterValue12, 0, 100);
 
  
  
  //--------Enviamos las lecturas por el puerto serial-------------
  //Serial.print("Humedad ");

 // Serial.print("Temperatura: ");
    Serial.print(t1);
 // Serial.print(" *C ");
   Serial.print(",");
   Serial.print(h1);
//  Serial.print(" %t");
//-----------------------------------------------------------------------//
   Serial.print(t2);
   Serial.print(",");
   Serial.print(h2);
//-----------------------------------------------------------------------//
//-----------------------------------------------------------------------//
   Serial.print(t3);
   Serial.print(",");
   Serial.print(h3);
//-----------------------------------------------------------------------//
//-----------------------------------------------------------------------//
   Serial.print(t4);
   Serial.print(",");
   Serial.print(h4);
//-----------------------------------------------------------------------//
//-----------------------------------------------------------------------//
   Serial.print(t5);
   Serial.print(",");
   Serial.print(h5);
//-----------------------------------------------------------------------//
//-----------------------------------------------------------------------//
   Serial.print(t6);
   Serial.print(",");
   Serial.print(h6);
//-----------------------------------------------------------------------//
//-----------------------------------------------------------------------//
   Serial.print(t7);
   Serial.print(",");
   Serial.print(h7);
//-----------------------------------------------------------------------//
//-----------------------------------------------------------------------//
   Serial.print(t8);
   Serial.print(",");
   Serial.print(h8);
//-----------------------------------------------------------------------//



 //----------------------------------------------------------------------// 
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
//----------------------------------------------------------------------//
    if(soilmoisturepercent1 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent1 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent1 >0 && soilmoisturepercent1 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent1);
  Serial.println("%");
  }
  //----------------------------------------------------------------------// 
  if(soilmoisturepercent2 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent2 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent2 >0 && soilmoisturepercent2 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent2);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent3 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent3 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent3 >0 && soilmoisturepercent3 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent3);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent4 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent4 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent4 >0 && soilmoisturepercent4 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent4);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent5 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent5 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent5 >0 && soilmoisturepercent5 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent5);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent6 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent6 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent6 >0 && soilmoisturepercent6 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent6);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent7 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent7 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent7 >0 && soilmoisturepercent7 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent7);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent8 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent8 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent8 >0 && soilmoisturepercent8 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent8);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent9 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent9 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent9 >0 && soilmoisturepercent9 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent9);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent10 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent10 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent10 >0 && soilmoisturepercent10 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent10);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent11 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent11 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent11 >0 && soilmoisturepercent11 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent11);
  Serial.println("%");
  }
//----------------------------------------------------------------------//
//----------------------------------------------------------------------// 
  if(soilmoisturepercent12 >= 100)
  {
       Serial.print(",");
  Serial.println("100%");
  }
  else if(soilmoisturepercent12 <=0)
  {
       Serial.print(",");
  Serial.println("0%");
  }
  else if(soilmoisturepercent12 >0 && soilmoisturepercent12 < 100)
  {
       Serial.print(",");
  Serial.print(soilmoisturepercent12);
  Serial.println("%");
  }
//----------------------------------------------------------------------//

}
