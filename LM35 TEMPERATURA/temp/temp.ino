
float temperatura = 0; //variable para la temperatura
 
void setup(){

 Serial.begin (9600); //inicia comunicacion serial
}
 
void loop(){
//Calcula la temperatura usando como referencia 5v
temperatura = (500 * analogRead(0))/1023;
Serial.println (temperatura); //escribe la temperatura en el serial
delay (500); //espera MEDIO segundos para la siguiente medicion           RECOMENDACION: DEJAR EN 500
}

