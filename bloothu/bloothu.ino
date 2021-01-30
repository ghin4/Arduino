
const int s0 = 2;  
const int s1 = 3;  
const int s2 = 4;  
const int s3 = 5;  
const int out = 6;    
int rojo = 0;  
int verde = 0;  
int azul = 0; 
#include <Servo.h>
Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;


void setup() {
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
 Serial.begin(9600);
 servoMotor1.attach(10);
 servoMotor1.write(0);
  servoMotor2.attach(11);
 servoMotor2.write(0);
  servoMotor3.attach(12);
 servoMotor3.write(0);

 pinMode(s0,OUTPUT);  
  pinMode(s1,OUTPUT);  
  pinMode(s2,OUTPUT);  
  pinMode(s3,OUTPUT);  
  pinMode(out,INPUT);   
  digitalWrite(s0,HIGH);  
  digitalWrite(s1,HIGH); 
 
}
 int w;
void loop() {

 char dato = Serial.read();

if(dato == '1')
{
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  }

if(dato == '2')
{
  digitalWrite(7,LOW);
  servoMotor1.write(0);
    servoMotor2.write(0);
    servoMotor3.write(0);
  
}
if(dato == '3')
{
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
}

if(dato == '4')
{
  digitalWrite(8,LOW);
   servoMotor1.write(0);
    servoMotor2.write(0);
    servoMotor3.write(0);
}
if(dato == '5')
{
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
}

if(dato == '6')
{
  digitalWrite(9,LOW);
   servoMotor1.write(0);
    servoMotor2.write(0);
    servoMotor3.write(0);
}


color(); 
  Serial.print("   ");  
  Serial.print(rojo, DEC);  
  Serial.print("   ");  
  Serial.print(verde, DEC);  
  Serial.print("   ");  
  Serial.print(azul, DEC);  

  if (rojo < azul && verde > azul && rojo < 35) 
  {  
   Serial.println("   Rojo"); 
    w = 3;
  }   
  else if (azul < rojo && azul < verde && verde < rojo)  
  {  
   Serial.println("   Azul");  
      w = 2;  
  }  

  else if (rojo > verde && azul > verde)  
  {  
   Serial.println("   Verde");
  w = 1;      
 
  }  
  else{
  Serial.println("  ");  
  }
  delay(900);    
 if(dato == '1' && w == 1)
   {
    servoMotor1.write(60);
    servoMotor2.write(0);
    servoMotor3.write(0);
    delay(1000);
   } else {
          servoMotor1.write(0);
          servoMotor2.write(0);
          servoMotor3.write(0);
         }
   

 if(dato == '3' && w == 3)
   {
    servoMotor1.write(0);
    servoMotor2.write(60);
    servoMotor3.write(0);
    delay(1000);
   }else {
          servoMotor1.write(0);
          servoMotor2.write(0);
          servoMotor3.write(0);
         }
   

   if(dato == '5' && w == 2)
   {
    servoMotor1.write(0);
    servoMotor2.write(0);
    servoMotor3.write(60);
    delay(1000);
   }else {
          servoMotor1.write(0);
          servoMotor2.write(0);
          servoMotor3.write(0);
         }
   
   

   }
 



void color()  
{    
  digitalWrite(s2, LOW);  
  digitalWrite(s3, LOW);   
  rojo = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
  digitalWrite(s3, HIGH);   
  azul = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
  digitalWrite(s2, HIGH);    
  verde = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
}
