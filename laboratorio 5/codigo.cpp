#include <DHT.h>

#define DHTPIN 2      // pin OUT
#define DHTTYPE DHT11 // tipo de sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {

  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();

  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer el sensor");
    return;
  }

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print(" °C  ");

  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.println(" %");

  delay(2000); // el DHT11 necesita ~2 segundos entre lecturas