/*
 * How to configure and pair two HC-05 Bluetooth Modules
 * by Dejan Nedelkovski, www.HowToMechatronics.com
 * 
 *                 == SLAVE CODE ==
 */
 #include<SoftwareSerial.h>
 SoftwareSerial bt(5,6);
#include <Servo.h>
#define button 8
Servo myServo;
char state = 20;
int buttonState = 0;
void setup() {
  pinMode(button, INPUT);
  myServo.attach(9);
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);
  bt.begin(38400);
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}
void loop() {
 if(bt.available() > 0){ // Checks whether data is comming from the serial port
    state = bt.read(); // Reads the data from the serial port
 }
 // Controlling the servo motor
 myServo.write(state);
 delay(10);
 
 // Reading the button
 buttonState = digitalRead(button);
 //if (buttonState == HIGH) {
   Serial.write('0'); // Sends '1' to the master to turn on LED
 //}
 //else {
   //Serial.write('s');
 //}  
}
