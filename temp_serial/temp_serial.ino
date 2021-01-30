float temperatura; //variable para la temperatura
float Vtemp;
int S1=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600); //inicia comunicacion serial
}

void loop() {
  S1=analogRead(0);
  temperatura = (500.0*S1)/1023.0;
  Vtemp=temperatura*10.0; 
Serial.println (temperatura);
Serial.println ("  ");
Serial.println (Vtemp);
delay (250); 
}
