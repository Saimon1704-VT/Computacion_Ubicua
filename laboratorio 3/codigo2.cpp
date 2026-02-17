int LED = 3;				// LED conectado al pin 3
int BRILLO;
int POT = 0;				// potenciómetro conectado a A0

void setup(){
	pinMode(LED, OUTPUT);		// configura el pin 3 como salida PWM
	// las entradas analógicas no requieren configuración inicial
}

void loop(){
	BRILLO = analogRead(POT) / 4;	// lectura analógica escalada al rango 0-255
	analogWrite(LED, BRILLO);	// ajusta el brillo del LED según el potenciómetro
}