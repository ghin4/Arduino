int led=13; 
int led1=12;
int led2=11;
int led3=10;
int led4=9;
int led5=8;
int led6=7;
int estado;
int estadoanterior;
int salida=0;
int i;
void setup() {

  pinMode(led, OUTPUT);      
  pinMode(led1, OUTPUT);   
  pinMode(led2, OUTPUT);      
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT);      
  pinMode(led5, OUTPUT);  
  pinMode(led6, OUTPUT); 
  pinMode(6,INPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop(){
  
  digitalWrite(6,LOW);
 if(digitalRead(6)==HIGH)
  {
  
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
digitalWrite(led,HIGH); //primero
  digitalWrite(led1,HIGH);//1RO DERF4CHA
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);//el ultimo
  digitalWrite(led4,LOW);//ULTIMO IZQUIERDA
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);

    digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
digitalWrite(led,HIGH); //primero
  digitalWrite(led1,HIGH);//1RO DERF4CHA
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);//el ultimo
  digitalWrite(led4,HIGH);//ULTIMO IZQUIERDA
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
  
  

  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
digitalWrite(led,HIGH); //primero
  digitalWrite(led1,HIGH);//1RO DERF4CHA
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);//el ultimo
  digitalWrite(led4,LOW);//ULTIMO IZQUIERDA
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  delay(250);
  
  
  
  //3
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
digitalWrite(led,HIGH); //primero
  digitalWrite(led1,LOW);//1RO DERF4CHA
  digitalWrite(led2,HIGH);//ULTIMO DERECHA
  digitalWrite(led3,HIGH);//el ultimo
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
  
  
 
  //4
    digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
digitalWrite(led,HIGH); //primero
  digitalWrite(led1,LOW);//1RO DERF4CHA
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);//el ultimo
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);//MEDIO
  delay(250);
 
    //5
    digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(led,LOW); //primero
  digitalWrite(led1,HIGH);//1RO DERF4CHA
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);//el ultimo
  digitalWrite(led4,LOW);//ULTIMO IZQUIERDA
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
//6
    digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(led,HIGH); //primero
  digitalWrite(led1,HIGH);//1RO DERF4CHA
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);//el ultimo
  digitalWrite(led4,LOW);//ULTIMO IZQUIERDA
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(250);
  
  
  //7
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(led,HIGH); //primero
  digitalWrite(led1,HIGH);//1RO DERF4CHA
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);//el ultimo
  digitalWrite(led4,HIGH);//ULTIMO IZQUIERDA
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(250);
  
  //8
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(led,LOW); //primero
  digitalWrite(led1,HIGH);//1RO DERF4CHA
  digitalWrite(led2,HIGH);//ULTIMO DERECHA
  digitalWrite(led3,LOW);//el ultimo
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(250);
 
 //9
  
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(led,HIGH); //primero
  digitalWrite(led1,HIGH);//1RO DERF4CHA
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);//el ultimo
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);//MEDIO
  delay(250);
  }
   else{
 digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
 }
 
 }   

