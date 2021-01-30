int tiempo1=100;
int tiempo2=100;
int pin=7;
void setup() {
for(pin=12;pin>=8;pin--){
    pinMode(pin,OUTPUT);
}
}
void secuencia(){
  for(pin=12;pin>=8;pin--){
    digitalWrite(pin,HIGH);
    delay(tiempo1);
    digitalWrite(pin,LOW);
}
}
void secuencia2(){
   for(pin=8;pin<=12;pin++){
    digitalWrite(pin,HIGH);
    delay(tiempo2);
    digitalWrite(pin,LOW);
}
}
void loop() {
  
secuencia();
secuencia2();
 
}
