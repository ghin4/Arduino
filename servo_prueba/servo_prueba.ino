#include <Servo.h>
Servo myservo1;  // create servo object to control a servo
int serv10=10;//asocio EL SERVO1 al pin11 del arduino
char estado=0;
void setup() {
  Serial.begin(9600); //inicializa el puerto serial a 9600 bps de velocidad
 //Servomotores
  myservo1.attach(10);  //ASOCIA el puerto al servo1 
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0){ //Verifica el primer caracter que ingresa al puerto serial
  estado = Serial.read();
  }
  
//botones de servo1
  if(estado=='1'){ 
 myservo1.write(50);
    delay(1000);
  }
if(estado=='2'){ 
 myservo1.write(90);
    delay(1000);
  }
}
