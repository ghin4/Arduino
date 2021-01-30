#include <Servo.h>
Servo myservo1;  
Servo myservo2;
Servo myservo3;
const int posinicial=0;
const int tiempollegada=1000;

void setup() {
Serial.begin(9600); //inicializa el puerto serial a 9600 bps de velocidad
  
//Servomotores
  myservo1.attach(10);  //ASOCIA el puerto al servo1 
  myservo2.attach(11);  //ASOCIA el puerto al servo2  
  myservo3.attach(12);  //ASOCIA el puerto al servo3

}

void loop() {

//PARTE BLUETOOH
  if(Serial.available()>0){ //Verifica el primer caracter que ingresa al puerto serial
  estado = Serial.read();
  }
  
//botones de servo1
if(estado=='A'){ 
  delay(tiempollegada); //tiempo en el q sensa el color y llega el objeto sensado al servo para ser movido
 myservo1.write(45);
    delay(500);
 myservo1.write(posinicial);
  }
  
//botones de servo2
  if(estado=='B'){ 
    delay(tiempollegada); //tiempo en el q sensa el color y llega el objeto sensado al servo para ser movido
 myservo2.write(45);
    delay(500);
    myservo2.write(posinicial);
  }
 
  //botones de servo3
  if(estado=='R'){ 
    delay(tiempollegada); //tiempo en el q sensa el color y llega el objeto sensado al servo para ser movido
 myservo3.write(45);
    delay(500);
    myservo3.write(posinicial);
  }
}
