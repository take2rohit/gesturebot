#include<SoftwareSerial.h>
#define ledPin 13
int state = 0;
int lft_mtr_frnt = 2;
int lft_mtr_bkwd = 3;
int rght_mtr_frnt = 4;
int rght_mtr_bkwd = 5;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  digitalWrite(13 ,LOW);
pinMode(lft_mtr_frnt,OUTPUT);
pinMode(lft_mtr_bkwd,OUTPUT);
pinMode(rght_mtr_frnt,OUTPUT);
pinMode(rght_mtr_bkwd,OUTPUT);

//Serial.begin(38400);
}

void forw()
{
  
    digitalWrite(lft_mtr_frnt, HIGH); // right
    digitalWrite(lft_mtr_bkwd, LOW); // left
    digitalWrite(rght_mtr_frnt, HIGH); // left
    digitalWrite(rght_mtr_bkwd, LOW);
    Serial.println("FRwd");
}
void left()
{
    digitalWrite(lft_mtr_frnt, HIGH); // right
    digitalWrite(lft_mtr_bkwd, LOW); // left
    digitalWrite(rght_mtr_frnt, LOW); // left
    digitalWrite(rght_mtr_bkwd, HIGH);
    Serial.println("rgt");
}  

void right()
{
    digitalWrite(lft_mtr_frnt, LOW); // right
    digitalWrite(lft_mtr_bkwd, HIGH); // left
    digitalWrite(rght_mtr_frnt, HIGH); // left
    digitalWrite(rght_mtr_bkwd, LOW);
    Serial.println("lft");
}

void bkwd()
{
    digitalWrite(lft_mtr_frnt, LOW); // right
    digitalWrite(lft_mtr_bkwd, HIGH); // left
    digitalWrite(rght_mtr_frnt, LOW) ;// left
    digitalWrite(rght_mtr_bkwd, HIGH);
    Serial.println("bkwd");
}

void stopp()
{
    digitalWrite(lft_mtr_frnt, LOW);
    digitalWrite(lft_mtr_bkwd, LOW);
    digitalWrite(rght_mtr_frnt, LOW);
    digitalWrite(rght_mtr_bkwd, LOW);
    Serial.println("stp");
}


void loop()
{ 
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 }
 if (state == '0') {
  stopp(); // LED ON
  state = 0;
 }
 else if (state == '1') {
  forw(); // LED ON
  state = 0;
 }
 else if (state == '2') {
  bkwd(); // LED ON
  state = 0;
 }
 else if (state == '3') {
  right(); // LED ON
  state = 0;
 }
 else if (state == '4') {
  left(); // LED ON
  state = 0;
 }
}
