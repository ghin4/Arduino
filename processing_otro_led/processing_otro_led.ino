//programa envio "a" por medio del "Monitor Serie"
//se apaga y prende el led
int LedPin = 13;
boolean EstadoLed = false;

void setup() {
  Serial.begin(9600);
  pinMode(LedPin, OUTPUT);
  digitalWrite(LedPin, EstadoLed);
}

void loop() {

  if (Serial.available()) {
    char Letra = Serial.read();
    if (Letra == 'a') {
      EstadoLed = !EstadoLed;
    }
    digitalWrite(LedPin, EstadoLed);
  }
}
