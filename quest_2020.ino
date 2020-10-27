#include <DHT.h> 

#define DHT11_DHTPIN D2 
#define DHTTYPE DHT11

float hum; 
float temp;

void setup () 
{
  Serial.begin(9600);   
  DHT.begin();

   
}

void loop()
{ 
hum = DHT.readHumidity; 
temp= DHT.readTemperature; 

Serial.print("Sensor 1: Humidity; ");
Serial.print(hum);
Serial.print(" %, temp: ");
Serial.print (temp);
Serial.println(" Celcius");

}
