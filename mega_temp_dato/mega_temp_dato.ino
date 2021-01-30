float temperatura; //variable para la temperatura
float Vtemp;
int S1=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin (115200); //inicia comunicacion serial
}

void loop() {
  S1=analogRead(0);
  temperatura = (500.0*S1)/1023.0;
  Vtemp=temperatura*10.0; 
  
Serial.print(1.00);
Serial.print(',');
Serial.println(temperatura);
//Serial.print(',');
//Serial.println(digitalRead(2));
//
//digitalWrite(7,HIGH);
//
////Serial.println (temperatura);
////Serial.println ("  ");
////Serial.println (Vtemp);
//delay (250); 
//digitalWrite(7,LOW);
//delay (250); 
}
