int PULSADOR = 2; 
int LED=3; 
int ESTADO=LOW; 
void setup(){ 
pinMode(PULSADOR, INPUT); 
pinMode(LED, OUTPUT); 
digitalWrite(LED, LOW);
 } 
void loop (){ 
while(digitalRead(PULSADOR) == LOW){  // bloquea hasta que se pulse el botón
 }
ESTADO = digitalRead(LED);    // obtiene el estado actual del LED
digitalWrite(LED, !ESTADO);     // alterna el estado del LED
while(digitalRead(PULSADOR) == HIGH){   // breve espera para evitar rebotes
 }
}
