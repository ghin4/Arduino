 //ejemplo processing SimpleWrite
 // Wiring/Arduino code:
 // Read data from the serial and turn ON or OFF a light depending on the value
 
 char val; // Data received from the serial port
 int ledPin = 8; // Set the pin to digital I/O 8
 
 void setup() {
 pinMode(ledPin, OUTPUT); // Set pin as OUTPUT
 Serial.begin(9600); // Start serial communication at 9600 bps
 }
 
 void loop() {
 while (Serial.available()) { // If data is available to read,
 val = Serial.read(); // read it and store it in val
 }
 if (val == 'H') { // If H was received
 digitalWrite(ledPin, LOW); // turn the LED on
 } 
      else {
      digitalWrite(ledPin, HIGH); // Otherwise turn it OFF
      }
 delay(100); // Wait 100 milliseconds for next reading
 }
