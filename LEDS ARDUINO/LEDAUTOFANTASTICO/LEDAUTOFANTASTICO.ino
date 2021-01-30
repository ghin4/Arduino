int tiempo1=100;
int tiempo2=100;
int pin;
void setup() {
for(pin=12;pin>=8;pin--){
    pinMode(pin,OUTPUT);
}

}

void loop() {
  for(pin=12;pin>=8;pin--){
    digitalWrite(pin,HIGH);
    delay(tiempo1);
    digitalWrite(pin,LOW);
}

  for(pin=8;pin<=12;pin++){
    digitalWrite(pin,HIGH);
    delay(tiempo2);
    digitalWrite(pin,LOW);
}
}
