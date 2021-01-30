const int a=1000;
void setup()
 { // put your setup code here, to run once:
 Serial.begin(9600);
 }

void loop(){ 
 for(int i=0;i<a;i++){
 Serial.println(i);
 delay(10);
 }
 }
