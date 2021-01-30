//7 SEGMENTOS
int i=10;    //MI CONTADOR
int led=13; 
int led1=12;
int led2=11;
int led3=10;
int led4=9;
int led5=8;
int led6=7;
int estado;

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
  
}

void loop(){
  estado=digitalRead(3);
 if(estado==LOW)
  {
    i=i-1;
  }
  if(i==0){
  i=0;
  }


  
  if(i==0){ //NUMERO 0
  digitalWrite(led,HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  delay(250);
  }
  if(i==1){
    //numero1
  digitalWrite(led,LOW); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(250);
  }
  
  if(i==2){
  //numero2
  digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(250);}
  if(i==3){
  //numero3
  digitalWrite(led,HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(250);}
  if(i==4)
  {//numero 4
  digitalWrite(led,LOW); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
  }
 if(i==5)
 {
    //numero5
  digitalWrite(led,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
 }
  if(i==6)
  {//numero6
  digitalWrite(led,HIGH); 
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
  }
  if(i==7){
  //numero7
  digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
  delay(250);
  }
 if(i==8){ //numero8
  digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
 }
  if(i==9)//numero 9
{  digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
} 
}
  

