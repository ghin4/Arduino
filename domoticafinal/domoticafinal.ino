/*  UNIVERSIDAD TECNICA DE AMBATO
            NTIC II
INTEGRANTES: CULCAY GIANCARLO      ELIZALDE PAOLA
             RUANO BRYAN           PEREZ JULIO
             SALVADOR ISMAEL                        */
#include <Servo.h>
Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo

int led2=2;
int led3=3;
int led4=4;
int led5=5;
int led6=6;
int ventilador7=7;
int led8 = 8 ;    //El LED esta conectado en el pin 9 
int LDR = 0  ;   //El LDR esta conectador en el pin A0
int luz = 0;       
int valor_sensor = 0;
char estado=0;
int serv11=11;//asocio EL SERVO1 al pin11 del arduino
int serv12=12;//asocio EL SERVO2 al pin12 del arduino
String readString;//asignacion  de la palabra readString a una variable tipo cadena


  void setup() { //ESTE ES EL MAIN DEL PROGRAMA
  Serial.begin(9600); //inicializa el puerto serial a 9600 bps de velocidad
  //Leds
  pinMode(led2,OUTPUT);//determinan a los pines del arduino como señal de salida
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT); 
  //ventilador
  pinMode(ventilador7,OUTPUT);
   pinMode(led8,OUTPUT);
   pinMode(LDR, INPUT);
   
  //Servomotores
  myservo1.attach(11);  //ASOCIA el puerto al servo1 
  myservo2.attach(12);  //ASOCIA el puerto al servo2  
 }
  void loop() { //ESTE ES EL BUCLE LOOP
//fotoresistor
   valor_sensor = analogRead(LDR); 
  if (luz <= 490)   //Si la resistendia que produce el ldr es menor o igual que 490
  {
    digitalWrite (led8, LOW);  //El led se apaga
  luz = (valor_sensor)/2.048;  
  Serial.println("");             
  delay(300);                       
  }
  
  if (luz > 490)   //Si es mayor que 490
  {
    digitalWrite (led8, HIGH);  //El led se enciende
  }
  //PARTE BLUETOOH
  if(Serial.available()>0){ //Verifica el primer caracter que ingresa al puerto serial
  estado = Serial.read();
  }
  if (estado == '1'){
   digitalWrite(led2,HIGH);//enciende led 1
  }
  if(estado=='2' ){
  digitalWrite(led2,LOW);//apaga led 1
  }
  if(estado =='3'){
  digitalWrite(led3,HIGH);//enciende led 2
  }
  if(estado=='4'){    
  digitalWrite(led3,LOW); //apaga led 2
  }
  if(estado=='5'){
  digitalWrite(led4,HIGH); //enciende led 3
  }
  if(estado=='6'){         
  digitalWrite(led4,LOW); //apaga led 3
  }
  if(estado=='7'){
  digitalWrite(led5,HIGH);  //enciende led 4
  }
  if(estado=='8'){
  digitalWrite(led5,LOW); //apaga led 4
  }
  if(estado=='a'){
  digitalWrite(led6,HIGH); // enciende led 5
  }
  if(estado=='V'){
  digitalWrite(led6,LOW);   //apaga led 5
  }
  //Ventilador
  if(estado=='e'){
  digitalWrite(ventilador7,HIGH);//Enciende ventilador
  }
  if(estado=='F'){
  digitalWrite(ventilador7,LOW);//Apaga ventilador
  }                              
  
  //botones de servo1
  if(estado=='G'){ 
 myservo1.write(30);
    delay(1000);
  }
  if(estado=='H'){
 myservo1.write(90);
    delay(700);
  }  

//botones de servo2
  if(estado=='m'){ 
 myservo2.write(20);
    delay(500);
  }
  if(estado=='n'){
 myservo2.write(90);
    delay(500);
  }  
 }

 
  
 
 
