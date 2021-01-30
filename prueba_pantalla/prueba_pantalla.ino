#include <SoftwareSerial.h>

    int estadorojo = 255;
     int  estadoverde = 255;
      int estadoazul = 0;
void setup() {
 Serial.begin(9600); // Comienzo de la comunicación serie
   //pinMode(ledRojo, OUTPUT);  // configuramos los pines digitales como salida
   //pinMode(ledVerde, OUTPUT);
   //pinMode(ledAzul, OUTPUT);
}
void loop() {
 Serial.println("ROJO");
 Serial.println(estadorojo, DEC) ;
  Serial.println("VERDE");
  Serial.println(estadoverde, DEC);
  Serial.println("AZUL");
  Serial.println(estadoazul, DEC);
  delay(500);
  
  if (estadorojo==255 && estadoverde==255 && estadoazul==255) //OJO
   {
      Serial.print("COLOR:");
      Serial.println("Blanco #ffffff");
   }
   /*if (180<estadorojo<=255&&estadoazul<50&&estadoverde<50) //OJO
   {
      Serial.print("COLOR:");
      Serial.println("ROJO #ff0000");
   }*/
   if (estadorojo==255 && estadoverde==255 && estadoazul==0)
   {
    Serial.print("COLOR:");
    Serial.println("Amarillo #ffff00");  
   }
   if (estadorojo==128&&estadoverde==0&&estadoazul==0)
   {
    Serial.print("COLOR:");
    Serial.println("Marrón #800000");  
   }
   if (estadorojo==0&&estadoverde==255&&estadoazul==0)
   {
    Serial.print("COLOR:");
    Serial.println("Verde #00FF00");  
   }
    if (estadorojo==0&&estadoverde==0&&estadoazul==255)
   {
    Serial.print("COLOR:");
    Serial.println("Azul #0000FF");  
   }
    if (estadorojo==0&&estadoverde==255&&estadoazul==255)
   {
    Serial.print("COLOR:");
    Serial.println("Celeste #00ffff");  
   }
   if (estadorojo==255&&estadoverde==0&&estadoazul==255)
   {
    Serial.print("COLOR:");
    Serial.println("Fucsia #ff00ff");  
   }
   delay(300);
}


