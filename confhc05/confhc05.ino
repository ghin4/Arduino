#include <SoftwareSerial.h> 
SoftwareSerial serial2 (6,7); //(RX,TX)
void setup(){   
 Serial.begin(9600);   
 serial2.begin(38400);   
 pinMode(8,OUTPUT);    //key
 digitalWrite(8,HIGH);   
 Serial.println("Inicio de comandos AT: ");
 }   
 void loop(){    
  if(Serial.available())   
  serial2.write(Serial.read());  
 
  if(serial2.available())  
  Serial.write(serial2.read());  
  
 }
