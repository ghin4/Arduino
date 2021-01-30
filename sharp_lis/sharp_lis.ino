void setup() {
  // Comunicación seria a 9600 baudios
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}


void loop() {
  
    int D_cm=distancia(20); //lectura de distancia
  Serial.print("  Distancia: ");
  Serial.print(D_cm);
  Serial.println("  cm");
  delay(100);
}

float distancia(int n)
{
  long suma=0;
  for(int i=0;i<n;i++)
  {
    suma=suma+analogRead(A0);
  }  
  float adc=suma/n;
  float distancia_cm = 17569.7 * pow(adc, -1.2062);
  return(distancia_cm);
}
