#include<SoftwareSerial.h>                                                                                                                                               
#define ledPin 13
int state = 0;
int lft_mtr_frnt = 8;
int lft_mtr_bkwd = 9;
int rght_mtr_frnt = 10;
int rght_mtr_bkwd = 11;


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


void loop()
{ 
   right();
}

void back()
{
  
    digitalWrite(lft_mtr_frnt, HIGH); // right
    digitalWrite(lft_mtr_bkwd, LOW); // left
    digitalWrite(rght_mtr_frnt, HIGH); // left
    digitalWrite(rght_mtr_bkwd, LOW);
    Serial.println("FRwd");
}
void right()
{
    digitalWrite(lft_mtr_frnt, HIGH); // right
    digitalWrite(lft_mtr_bkwd, LOW); // left
    digitalWrite(rght_mtr_frnt, LOW); // left
    digitalWrite(rght_mtr_bkwd, HIGH);
    Serial.println("rgt");
}  

void left()
{
    digitalWrite(lft_mtr_frnt, LOW); // right
    digitalWrite(lft_mtr_bkwd, HIGH); // left
    digitalWrite(rght_mtr_frnt, HIGH); // left
    digitalWrite(rght_mtr_bkwd, LOW);
    Serial.println("lft");
}

void forw()
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
