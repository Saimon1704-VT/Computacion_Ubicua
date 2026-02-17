int LED = 3;				// LED conectado al pin 3
int BRILLO;

void setup(){
	pinMode(LED, OUTPUT);		// configura el pin 3 como salida PWM
}

void loop(){
for (BRILLO = 0; BRILLO < 256; BRILLO++){	// incrementa brillo de 0 a 255
	analogWrite(LED, BRILLO);		// aplica valor PWM al LED
	delay(15);				// pequeña pausa entre pasos
	}

for (BRILLO = 255; BRILLO >= 0; BRILLO--){	// reduce brillo de 255 a 0
	analogWrite(LED, BRILLO);		// aplica valor PWM al LED
	delay(15);				// pequeña pausa entre pasos
	}
}