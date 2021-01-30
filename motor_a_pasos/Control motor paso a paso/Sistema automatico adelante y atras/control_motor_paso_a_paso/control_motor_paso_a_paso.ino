// sistema automatico adelante y atras de un motor paso a paso
 int motorPin1 = 8;                             
 int motorPin2 = 9;          /* Pines del Arduino al integrado */  
 int motorPin3 = 10;      
 int motorPin4 = 11;
 int delayTime = 1000;                            // DelayTime determina la espera entre uno y otro paso
 int delayTime1 = 5;                              // DelayTime1 determina la velocidad de giro entre un paso y otro
 int count = 0;

void setup() {

  pinMode(motorPin1, OUTPUT);                      // Configuracion de los Pines como salida digital
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);}


void loop() {
  for (count = 0; count < 50; count++)  /* (variable)en donde podemos modificar la cantidad de pulsos que se desean asignar al motor,
                                            para variar la cantidad de giros o fraccion de giro en un sentido.
                                            (50 pulsos para 360°)(25 pulsos para 180°)(10 pulsos para 72°) ETC.....*/    
       { // Punto  A (Primero)
        digitalWrite(motorPin1, HIGH);       
        digitalWrite(motorPin2, LOW);       
        digitalWrite(motorPin3, LOW);        
        digitalWrite(motorPin4, HIGH);      
        delay(delayTime1); // Tiempo entre pulsos
        
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
        delay(delayTime1); }   
   
        delay(delayTime);
        
        for (count = 0; count < 50; count++)  /* (variable)en donde podemos modificar la cantidad de pulsos que se desean asignar al motor,
                                                  para variar la cantidad de giros o fraccion de giro en sentido contrario.
                                                 (50 pulsos para 360°)(25 pulsos para 180°)(10 pulsos para 72°) ETC.....*/  
        

       
         // Punto  D (Cuarto)
       {digitalWrite(motorPin1, LOW); 
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
        delay(delayTime1);}
        
        delay(delayTime);  }

