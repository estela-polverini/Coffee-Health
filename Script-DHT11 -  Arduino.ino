#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>

#include <DHT.h>
#include <DHT_U.h>

#include "DHT.h"
 
#define DHTPIN A1 // pino que estamos conectado
#define DHTTYPE DHT11 // DHT 11
 

DHT dht(DHTPIN, DHTTYPE);
int pinosensor=A1;
void setup()

{
  pinMode(pinosensor,INPUT);
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  dht.begin();
}
 
void loop() 
{
  // A leitura da temperatura e umidade pode levar 250ms!
  // O atraso do sensor pode chegar a 2 segundos.
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  // testa se retorno é valido, caso contrário algo está errado.
  if (isnan(t) || isnan(h)) 
  {
    Serial.println("Falha no sensor DHT");
  } 
  else
  {
    //Serial.print("Umidade: ");
    Serial.print(h);
    Serial.print(";");
   // Serial.print("Temperatura: ");
    Serial.print(t);
    Serial.print(";");
   //Serial.println();
  }

int sensorPin=A0;
int sensorValue=0;

int sensorLM35 = A5;
float valorLM35 = analogRead(sensorLM35);
//delay(3000);
valorLM35 = analogRead(sensorLM35);
float temperatura = valorLM35*0.00488;
temperatura*=100;

//void loop(){
  sensorValue = analogRead(sensorPin);
  Serial.print(sensorValue);
  Serial.print(";");
  Serial.print(temperatura);
  Serial.print(";");

//sensor de proximidade
int objeto = 0;  
   
//void setup()  

  pinMode(7, INPUT); //Pino ligado ao coletor do fototransistor  
  Serial.begin(9600);  
   
//void loop() 
{
  objeto = digitalRead(7);  
  if (objeto == 0)  
  {  
    Serial.println(1);  
  }  
  else  
  {  
    Serial.println(0);  
  }  
delay(3000);
}

}
