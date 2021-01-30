void setup(){
Serial.begin(9600);}
void loop() {
  int adc=analogRead(A3);
  Serial.println(adc);
  delay(300);
}


