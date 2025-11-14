#include <SoftwareSerial.h>
SoftwareSerial mySerial(8, 9); // RX, TX
const int dc1=3;  
const int dc2=2; 
const int dc3=5;
const int dc4=4; 
 
char x=0; 
void setup()
{
  pinMode(dc1,OUTPUT);
  pinMode(dc2,OUTPUT);
  pinMode(dc3,OUTPUT);    
  pinMode(dc4,OUTPUT); 
  mySerial.begin(9600); 
  Serial.begin(9600);
  digitalWrite(dc1,LOW);
  digitalWrite(dc2,LOW);
  digitalWrite(dc3,LOW);   
  digitalWrite(dc4,LOW);
  Serial.println("WELCOME");

}
void loop() 
{
  
  if(mySerial.available()>0)  // Send data only when you receive data:
  {
    x = mySerial.read();      //Read the incoming data and store it into variable data
      Serial.println(x);
    if(x == 'F')            
    {
    digitalWrite(dc2,LOW);  
    digitalWrite(dc1,HIGH);    
    digitalWrite(dc4,LOW);  
    digitalWrite(dc3,HIGH); 
    } 
    if(x == 'B')            
    {
    digitalWrite(dc2,HIGH);  
    digitalWrite(dc1,LOW);    
    digitalWrite(dc4,HIGH);  
    digitalWrite(dc3,LOW);     
    } 
    if(x == 'L')            
    {
    digitalWrite(dc2,HIGH);  
    digitalWrite(dc1,LOW);    
    digitalWrite(dc4,LOW);  
    digitalWrite(dc3,HIGH);      

    } 
    if(x == 'R')            
    {
    digitalWrite(dc2,LOW);  
    digitalWrite(dc1,HIGH);    
    digitalWrite(dc4,HIGH);  
    digitalWrite(dc3,LOW);
    } 
    if(x == 'S')            
    {
    digitalWrite(dc1,LOW);  
    digitalWrite(dc2,LOW);    
    digitalWrite(dc3,LOW);  
    digitalWrite(dc4,LOW);
    } 
 
  }  

}
