#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(4,2);

int threshold = 25; //Set up variable for sensing the threshold for the lamp turning on.
const int ledPin = 12; //Define the pin the led will be on

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
   long sensorValue = capSensor.capacitiveSensor(30);
   Serial.println(sensorValue);

   if(sensorValue > threshold)
   {
    digitalWrite(ledPin, HIGH);
   }
   else
   {
    digitalWrite(ledPin, LOW);
   }
   delay(10);
}
