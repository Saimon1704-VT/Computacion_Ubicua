int SENSOR;          // Guarda el valor leído del pin A0 (0 a 1023)
float TEMPERATURA;  // Guarda la temperatura calculada en °C
float SUMA;         // Acumula las lecturas para sacar el promedio

void setup() {
  Serial.begin(9600); // Inicia la comunicación serial a 9600 baudios
}

void loop() {
  SUMA = 0; // Reinicia la suma en cada ciclo

  // Bucle para tomar 5 lecturas del sensor
  for (int i = 0; i < 5; i++) {

    SENSOR = analogRead(A0); // Lee el valor analógico del pin A0

    // Convierte la lectura a temperatura:
    // 1. Convierte a milivoltios (0 - 5000 mV)
    // 2. Divide entre 10 para obtener °C (sensor tipo LM35)
    TEMPERATURA = ((SENSOR * 5000.0) / 1023) / 10;

    // Acumula la temperatura en la variable SUMA
    SUMA = TEMPERATURA + SUMA;

    delay(500); // Espera 500 ms antes de la siguiente lectura
  }

  // Calcula el promedio de las 5 lecturas
  // El "1" indica que se muestra con 1 decimal
  Serial.println(SUMA / 5.0, 1);
}