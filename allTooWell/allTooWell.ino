#include "pitches.h"

int switchVar = A5;
int switchValue;



void setup() 
{
  Serial.begin(9600);
  
}

void loop() 
{
  switchValue = analogRead(switchVar);
  Serial.println(switchValue);
  if (switchValue == 675 || switchValue == 676)
  {
    Serial.println("lol");
    runMelody();
    delay(1000);
  }
  delay(100);

}
