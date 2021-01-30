
// giro de motor con pulsadores en ambos sentidos segun la catidad de giros o grados que determinemos.
 
 int pulsador = 0;                                 
 int entrada = 2;
 int pulsador1 = 0;
 int entrada1 = 3;

 int motorPin1 = 8;                                //Pin 1 del motor ... pin A del puente H
 int motorPin2 = 9;                                //Pin 2 del motor ... pin B del puente H    
 int motorPin3 = 10;                               //Pin 3 del motor ... pin C del puente H  
 int motorPin4 = 11;                               //Pin 4 del motor ... pin D del puente H
 int delayTime1 = 30;          // DelayTime1 determina la velocidad de giro entre uno y otro paso
 int count = 0;

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
        for (count = 0; count < 25; count++)    /* (variable)donde podemos modificar la cantidad de pulsos que se desean asignar al motor                                                    
                                                    para modificar la cantidad de giros o fraccion de giro, en sentido contrario de las manesillas del reloj.
                                                   (50 pulsos para 360°)(25 pulsos para 180°)(10 pulsos para 72°) ETC.....  */ 
        
        // Punto  A (Primero)
       {digitalWrite(motorPin1, HIGH);        
        digitalWrite(motorPin2, LOW);         
        digitalWrite(motorPin3, LOW);         
        digitalWrite(motorPin4, HIGH);        
        delay(delayTime1); // tiempo de espera 
        
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
   
        pulsador1 = digitalRead(entrada1);
  
        if (pulsador1 == HIGH)
        for (count = 0; count < 25; count++)    /* (variable)donde podemos modificar la cantidad de pulsos que se desean asignar al motor                                                    
                                                    para modificar la cantidad de giros o fraccion de giro, en sentido de las manesillas del reloj.
                                                   (50 pulsos para 360°)(25 pulsos para 180°)(10 pulsos para 72°) ETC.....  */        
        
        { // Punto  D (Cuarto)
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
        
      } 

        
        
        
        
         
       
