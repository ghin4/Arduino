int i=10;    //MI CONTADOR
//7 SEGMENTOS
int led=13; 
int led1=12;
int led2=11;
int led3=10;
int led4=9;
int led5=8;
int led6=7;
//SEMAFORO
int rojo=2;
int amar=1;
int verde=0;
//SEMAFORO2
int rojo2=6;
int amar2=5;
int verde2=4;
//estados para el boton
int estado;
int t=300;
int t2=350;
int salida=0;

void setup() {
pinMode(3,INPUT);
  pinMode(led, OUTPUT);      
  pinMode(led1, OUTPUT);   
  pinMode(led2, OUTPUT);      
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT);      
  pinMode(led5, OUTPUT);  
  pinMode(led6, OUTPUT); 
  pinMode(rojo, OUTPUT);
  pinMode(amar, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(amar2, OUTPUT);
  pinMode(verde2, OUTPUT);
}
void s1(){
  digitalWrite(amar,HIGH);
  digitalWrite(rojo2,HIGH);
    digitalWrite(verde,LOW);
    digitalWrite(rojo,LOW);
    digitalWrite(amar2,LOW);
    digitalWrite(verde2,LOW);
    delay(t2);
    //numero1
  digitalWrite(led,LOW); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(t2);
}
void s2(){
 
  digitalWrite(rojo,HIGH);
    digitalWrite(verde,LOW);
    digitalWrite(amar,LOW);
    digitalWrite(rojo2,LOW);
    digitalWrite(amar2,LOW);
    digitalWrite(verde2,HIGH);
     numeros();
   
}
void s3(){
  digitalWrite(verde,LOW);
    digitalWrite(rojo,HIGH);
    digitalWrite(amar,LOW);
    
    digitalWrite(amar2,HIGH);
    digitalWrite(verde2,LOW);
    digitalWrite(rojo2,LOW);
    delay(t2);
    //numero1
    digitalWrite(led,LOW); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(t2);
    //NUMERO 0
  digitalWrite(led,HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  delay(t);
}
void s4(){
  
  digitalWrite(verde,HIGH);
    digitalWrite(rojo,LOW);
    digitalWrite(amar,LOW);
    digitalWrite(verde2,LOW);
    digitalWrite(amar2,LOW);
    digitalWrite(rojo2,HIGH);
    numeros();
   
}
void numeros(){
 
   //numero 9
 digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(t);
  //numero8
  digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(t);
  //numero7
  digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  delay(t);
//numero6
  digitalWrite(led,HIGH); 
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(t);
  //numero5
  digitalWrite(led,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(t);
  //numero 4
  digitalWrite(led,LOW); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(t);
    
  //numero3
  digitalWrite(led,HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(t);
   //numero2
  digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(t);
//numero1
  digitalWrite(led,LOW); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(t);
   //NUMERO 0
  digitalWrite(led,HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  delay(t);
    
}
void loop(){
 //estado=digitalRead(3);
 digitalWrite(3,LOW);
  
 if(digitalRead(3)==HIGH)
  {
    
    s1();
    s2(); 
    s3(); 
    //s4();
 }
 else
 {
   digitalWrite(verde,HIGH);
    digitalWrite(rojo,LOW);
    digitalWrite(amar,LOW);

    digitalWrite(verde2,LOW);
    digitalWrite(rojo2,HIGH);
    digitalWrite(amar2,LOW);
  }
  }



  


  

