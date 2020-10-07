#include <SoftwareSerial.h>



const byte rxPin = 2;
const byte txPin = 3;

SoftwareSerial BTSerial(rxPin,txPin);

void setup() {
  Serial.begin(115200);
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
  BTSerial.begin(38400);
  Serial.println("AT command");
  
}


void loop(){
 
 
  if(BTSerial.available()){
    Serial.write(BTSerial.read());}

  if(Serial.available()){
    BTSerial.write(Serial.read());}
}
