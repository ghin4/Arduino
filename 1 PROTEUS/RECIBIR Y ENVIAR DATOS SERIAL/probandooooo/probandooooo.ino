  int msg=0;
 void setup(){
 Serial.begin(9600);
 }
 void loop(){
 if(Serial.available()>0){
 msg=Serial.read();
 Serial.print("Recibi: ");
 Serial.println(msg);
 }
 }
