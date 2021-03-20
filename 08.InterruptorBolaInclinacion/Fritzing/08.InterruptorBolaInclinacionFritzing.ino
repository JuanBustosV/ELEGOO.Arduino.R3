/*
 Name:		_08.ino
 Created:	3/20/2021 11:13:59 AM
 Author:	Juan Bustos
*/

const int ledPin = 13;//the led attach to

void setup()
{ 
  pinMode(ledPin,OUTPUT);//initialize the ledPin as an output
  pinMode(2,INPUT);
  digitalWrite(2, HIGH);
} 

void loop() 
{ 
  int digitalVal = digitalRead(2); //read pin 2
  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW);//turn the led off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//turn the led on 
  }
}