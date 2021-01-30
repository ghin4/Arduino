
//control motor paso a paso, con un pulsador gira en un sentido y con otro pulsador gira en sentido contrario por el tiempo que los tengamos pulsados


 int pulsador = 0;                                 
 int entrada = 2;
 int pulsador1 = 0;
 int entrada1 = 3;
 
 int motorPin1 = 8;                                // Pines del Motor
 int motorPin2 = 9;
 int motorPin3 = 10;
 int motorPin4 = 11;                               
 int delayTime1 = 5;          // delayTime1 determina la velocidad de giro entre uno y otro paso
 

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(motorPin1, OUTPUT);                      // Configuración de los Pines como salida digital
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);}


void loop() {
 
   
  
  
       pulsador = digitalRead(entrada);
       
       
        if (pulsador == HIGH)    
       {  // Punto  D (Cuarto)
        digitalWrite(motorPin1, LOW);  
        digitalWrite(motorPin2, LOW); 
        digitalWrite(motorPin3, HIGH);  
        digitalWrite(motorPin4, HIGH);  
        delay(delayTime1);   
        
          
        // Punto  C (Tercero)
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, HIGH);
        digitalWrite(motorPin4, LOW);
        delay(delayTime1); 
        
         // Punto  B (Segundo)        
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, LOW);
        digitalWrite(motorPin4, LOW);
        delay(delayTime1);
        
        // Punto  A (Primero)
        digitalWrite(motorPin1, HIGH);       
        digitalWrite(motorPin2, LOW);        
        digitalWrite(motorPin3, LOW);        
        digitalWrite(motorPin4, HIGH);        
        delay(delayTime1); }       
       
        
        pulsador1 = digitalRead(entrada1);
        
        if (pulsador1 == HIGH)    
       { // Punto  A (Primero)
        digitalWrite(motorPin1, HIGH);       
        digitalWrite(motorPin2, LOW);        
        digitalWrite(motorPin3, LOW);        
        digitalWrite(motorPin4, HIGH);        
        delay(delayTime1);  
        
         // Punto  B (Segundo)        
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, LOW);
        digitalWrite(motorPin4, LOW);
        delay(delayTime1);
        
        // Punto  C (Tercero)
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, HIGH);
        digitalWrite(motorPin4, LOW);
        delay(delayTime1);         
 
        // Punto  D (Cuarto)
        digitalWrite(motorPin1, LOW);   
        digitalWrite(motorPin2, LOW);   
        digitalWrite(motorPin3, HIGH);  
        digitalWrite(motorPin4, HIGH);  
        delay(delayTime1);  }
       
       }
        
      
        
   
        
       
