int PULSADOR = 2; 
int LED=3; 
void setup(){ 
pinMode(PULSADOR, INPUT); 
pinMode(LED, OUTPUT); 
digitalWrite(LED, LOW);
 } 
void loop (){ 
while(digitalRead(PULSADOR) == LOW){  // espera hasta que se presione el pulsador
 }
digitalWrite(LED, HIGH);    // enciende el LED
delay(5000);        // pausa de aproximadamente 5 segundos
digitalWrite(LED, LOW);     // apaga el LED
while(digitalRead(PULSADOR) == HIGH){   // espera corta para evitar rebotes
 }
}
