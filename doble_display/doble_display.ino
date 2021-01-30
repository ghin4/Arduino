int a=0;      //memoria
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
//int t=150;
int t=1000;
void loop() {
  
  
  
  
  Serial.println(t);
  
digitalWrite(2,HIGH); //enable primer dgito
digitalWrite(3,LOW);  //desable segundo digito
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
delay(t);
digitalWrite(2,LOW);//desable primer dgito
digitalWrite(3,HIGH);//enable segundo digito
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
delay(t);
}
