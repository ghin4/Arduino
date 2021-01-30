int led1=12;
int led2=11;
int led3=10;
int led4=9;
int led5=8;
void setup() {
  // put your setup code here, to run once:
pinMode (led1,OUTPUT);
pinMode (led2,OUTPUT);
pinMode (led3,OUTPUT);
pinMode (led4,OUTPUT);
pinMode (led5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,HIGH);
delay(100);
digitalWrite(led1,LOW);
delay(100);
digitalWrite(led2,HIGH);
delay(100);
digitalWrite(led2,LOW);
delay(100);
digitalWrite(led3,HIGH);
delay(100);
digitalWrite(led3,LOW);
delay(100);
digitalWrite(led4,HIGH);
delay(100);
digitalWrite(led4,LOW);
delay(100);
digitalWrite(led5,HIGH);
delay(100);
digitalWrite(led5,LOW);
delay(100);
}
