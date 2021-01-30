//MOTOR A PASOS NUEVO
//MORETA JONATHAN
#include <LiquidCrystal.h>
#include <Keypad.h>
LiquidCrystal lcd(13,12,11,10,9,8);//RS-ENABLE-D4-D5-D6-D7

//KEYPAD:
const byte ROWS = 4; //filas
const byte COLS = 4; //columnas

char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {44,45,46,47}; //filas
byte colPins[COLS] = {48,49,50,51}; //columnas
char k;
//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

char dato1, dato2, dato3, dato4;                 //variables metodos utilizados
long int numero1, numero2;      //para ingreso de teclado
long int numero = 0;
int der = 22;     //sentido horario
int izq = 24;     //sentido antihorario
int ledder = 23;  //led sentido horario
int ledizq = 25;  //led sentido antihorario
float dutysal;
int salidaPWM;
int PWM = 7;
int num;
int i=1;
int tie=10;




void setup(){
  
  lcd.begin(16,2);   
  lcd.setCursor(3,0);
  lcd.print("Bienvenido");      
  lcd.setCursor(0,1);     //(columna) , (0 para fila1 - 1 para fila2)
  lcd.print("MOTOR A PASOS");
  delay (2000);
  lcd.clear(); 
}

void loop(){   
  inicio: //REGRESO AL MENU PULSANDO * 
  lcd.setCursor(0,0);    
  lcd.print("Paso doble");
  lcd.setCursor(0,1);     
  lcd.print("1 Der    2 Izq");
  k = customKeypad.getKey() ;

  if (k!= 0){ //Si el valor es 0 es que no se ha pulsado ninguna tecla
      if(k=='1'){
      lcd.begin(16,2);
          while(1){            
          paso_doble_derecha(); 
          k=customKeypad.getKey() ;
             if (k!=0 && k=='*'){ 
             lcd.clear();
             goto inicio;
             } delay(10); 
           }
       }
      if(k=='2'){
      lcd.begin(16,2);
          while(1){            
          paso_doble_izquierda(); 
          k=customKeypad.getKey() ;
             if (k!=0 && k=='*'){ 
             lcd.clear();
             goto inicio;
             } delay(10); 
           }  
      }

   }     
 }//////////Fin del Void Loop




/////**********METODOS PARA MOTOR A PASOS*********
//************************************************

////////////PASO SIMPLE IZQUIERDA
void paso_simple_izquierda(){
   for(int s=30;s<=33;s++){
      digitalWrite(s,HIGH);
      delay(10);
      digitalWrite(s,LOW);
      delay(10);
   }
}

////////////PASO SIMPLE DERECHA
void paso_simple_derecha(){
   for(int s=33;s>=30;s--){
      digitalWrite(s,HIGH);
      delay(10);
      digitalWrite(s,LOW);
      delay(10);
   }
}

///////////PASO MEDIO IZQUIERDA
void paso_medio_izquierda(){
  for(int s=30; s<=33; s++){
    if(s==33){
      digitalWrite(s,HIGH);
      delay(10);
      digitalWrite(s,LOW);
      delay(10);
      digitalWrite(s,HIGH);
      digitalWrite(s-3,HIGH);
      delay(10);
      digitalWrite(s,LOW);
      digitalWrite(s-3,LOW);
      delay(10);
    }else{
            digitalWrite(s,HIGH);
            delay(10);
            digitalWrite(s,LOW);
            delay(10);
            digitalWrite(s,HIGH);
            digitalWrite(s+1,HIGH);
            delay(10);
            digitalWrite(s,LOW);
            digitalWrite(s+1,LOW);
            delay(10);
         }
  }
}

///////////PASO MEDIO DERECHA
void paso_medio_derecha(){
   for(int s=33; s>=30; s--){
    if(s==33){
      digitalWrite(s,HIGH);
      digitalWrite(s-3,HIGH);
      delay(10);
      digitalWrite(s,LOW);
      digitalWrite(s-3,LOW);
      delay(10);
      digitalWrite(s,HIGH);
      delay(10);
      digitalWrite(s,LOW);
      delay(tie);
    }else{
            digitalWrite(s,HIGH);
            digitalWrite(s+1,HIGH);
            delay(10);
            digitalWrite(s,LOW);
            digitalWrite(s+1,LOW);
            delay(10);
            digitalWrite(s,HIGH);
            delay(10);
            digitalWrite(s,LOW);
            delay(10);
         }     
  }
}

//////////////PASO DOBLE IZQUIERDA
void paso_doble_izquierda(){
  lcd.clear();
  lcd.setCursor(0,0);    
  lcd.print("Girando Izquierda");
   for(int s=30; s<=33; s++){
      digitalWrite(s,HIGH);
      digitalWrite(s+1,HIGH);
      delay(5);
      digitalWrite(s,LOW);
      digitalWrite(s+1,LOW);
      if(s==33){
        digitalWrite(s,HIGH);
        digitalWrite(s-3,HIGH);
        delay(5);
        digitalWrite(s,LOW);
        digitalWrite(s-3,LOW);
      }
   }
}

//////////////PASO DOBLE DERECHA
void paso_doble_derecha(){
  lcd.clear();
  lcd.setCursor(0,0);    
  lcd.print("Girando Derecha");
   for(int s=33; s>=30; s--){
      if(s==33){
        digitalWrite(s,HIGH);
        digitalWrite(s-3,HIGH);
        delay(10);
        digitalWrite(s,LOW);
        digitalWrite(s-3,LOW);
      }else{
              digitalWrite(s,HIGH);
              digitalWrite(s+1,HIGH);
              delay(10);
              digitalWrite(s,LOW);
              digitalWrite(s+1,LOW);
           } 
   }
}



//////////DELAY DERECHA 
void retardosDER(){
   for(int s=30; s<=33; s++){
      digitalWrite(s,HIGH);
      digitalWrite(s+1,HIGH);
      delay(numero);
      digitalWrite(s,LOW);
      digitalWrite(s+1,LOW);
      if(s==33){
        digitalWrite(s,HIGH);
        digitalWrite(s-3,HIGH);
        delay(numero);
        digitalWrite(s,LOW);
        digitalWrite(s-3,LOW);
      }
   }
}
//////////DELAY IZQUIERDA
void retardosIZQ(){ 
for(int s=33; s>=30; s--){
      digitalWrite(s,HIGH);
      digitalWrite(s-1,HIGH);
      delay(numero);
      digitalWrite(s,LOW);
      digitalWrite(s-1,LOW);
      if(s==30){
        digitalWrite(s,HIGH);
        digitalWrite(s+3,HIGH);
        delay(numero);
        digitalWrite(s,LOW);
        digitalWrite(s+3,LOW);
      }
   }
}
