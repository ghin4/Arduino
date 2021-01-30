
int estado;
int estadoanterior;
int salida=0;

void setup() {
  // put your setup code here, to run once:
pinMode(8,INPUT);
pinMode(4,OUTPUT);

}

void loop() {
 estado=digitalRead(8);
 if((estado==HIGH)&&(estadoanterior==LOW))
  {
  salida=1-salida;
   delay(20);
  } 
   estadoanterior=estado;
   if(salida==1){
    digitalWrite(4,HIGH);
     }
     else
     digitalWrite(4,LOW);
   

}
