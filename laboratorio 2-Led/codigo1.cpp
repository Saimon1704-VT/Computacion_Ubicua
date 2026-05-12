void setup() {
  pinMode(2, INPUT);     // configura el pin 2 como entrada digital
  pinMode(3, OUTPUT);    // configura el pin 3 como salida
}
void loop() {
  if (digitalRead(2) == HIGH) {   // comprueba si el pulsador está en alto
    digitalWrite(3, HIGH);        // activa el LED
  }
  else {
    digitalWrite(3, LOW);         // desactiva el LED
  }
}