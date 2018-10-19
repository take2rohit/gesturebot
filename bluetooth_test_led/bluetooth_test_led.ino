void setup() 
{
Serial.begin(38400);
 pinMode(13, OUTPUT);
 }

void loop()
{
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case '1': digitalWrite(13, HIGH);break; 
        case '0': digitalWrite(13, LOW);break; 
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
