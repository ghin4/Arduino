int rele=8;
int led=13;
// el modulo rele se activa con un LOW y se desactica con un OFF
void setup() {
  // put your setup code here, to run once:
pinMode(rele,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(rele,HIGH);
//digitalWrite(led,HIGH);
delay(4000);
digitalWrite(rele,LOW);
//digitalWrite(led,LOW);
delay(4000);
}
