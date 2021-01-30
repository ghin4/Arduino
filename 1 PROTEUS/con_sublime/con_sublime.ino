int led=8;
int led2=10;
void setup()
{
	Serial.begin(9600);
	pinMode(led, OUTPUT);
	pinMode(led2, OUTPUT);
	
}
void leds(){
	digitalWrite(led, HIGH);
	delay(500);
	digitalWrite(led ,LOW);
	delay(500);
	digitalWrite(led2, HIGH);
	delay(500);
	digitalWrite(led2, LOW);
}

void loop()
{
	int a=analogRead(A5);
	Serial.print("El valor del pot es: ");
	Serial.println(a);
	delay(500);
	//leds();
}

