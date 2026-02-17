void setup(){
  pinMode(13, OUTPUT);      // configura el pin 13 como salida digital
}

void loop(){
  digitalWrite(13, HIGH);    // activa el LED conectado al pin 13
  delay(1000);               // espera aproximadamente 1 segundo
  digitalWrite(13, LOW);     // desactiva el LED en el pin 13
  delay(1000);               // espera aproximadamente 1 segundo
}