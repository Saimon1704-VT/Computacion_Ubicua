#include <DHT.h>  // Librería del sensor DHT

#define DHTPIN 2      // Pin donde conectas el sensor
#define DHTTYPE DHT11 // Tipo de sensor

DHT dht(DHTPIN, DHTTYPE); // Se crea el objeto del sensor

void setup() {
  Serial.begin(9600); // Inicia el monitor serial
  dht.begin();        // Inicia el sensor
}

void loop() {

  // Leer datos del sensor
  float humedad = dht.readHumidity();        // Humedad en %
  float temperatura = dht.readTemperature(); // Temperatura en °C

  // Verifica si el sensor falló
  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer el sensor");
    return; // Sale y vuelve a intentar
  }

  // Mostrar temperatura
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print(" °C  ");

  // Mostrar humedad
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.println(" %");

  delay(2000); // Espera 2 segundos (el sensor lo necesita)
}