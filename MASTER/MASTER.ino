#include<SoftwareSerial.h>
SoftwareSerial bt(5,6);
#define ledPin 13
char state = 0;
int potValue = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  pinMode(6,OUTPUT);
  pinMode(5,INPUT);
  bt.begin(38400);
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}
void loop() {
 if(bt.available() > 0){ // Checks whether data is comming from the serial port
    state = bt.read(); // Reads the data from the serial port
 }
 // Controlling the LED
 if (state == 'd') {
  digitalWrite(ledPin, HIGH); // LED ON
  state = 0;
 }
 else if (state == 's') {
  digitalWrite(ledPin, LOW); // LED ON
  state = 0;
 }
 // Reading the potentiometer
 potValue = analogRead(A0);
 //int potValueMapped = map(potValue, 0, 1023, 0, 255);
// Serial.write(potValueMapped); // Sends potValue to servo motor
 delay(10);
}

