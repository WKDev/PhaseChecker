//This is uno-side firmware.
//It reads voltage of each power line, combines data, send to NodeMCU.
//Exceptional features are handled at NodeMCU.
//Coded at May 20th, 2021, Whiteknight,Chanhyeok Son

#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial s(5, 6);

void setup()
{
    s.begin(9600);
    Serial.begin(9600);
    pinMode(12, OUTPUT);
}

void loop()
{
    if (s.available() > 0)
    {
        int result = 0;
        result = s.read();
        Serial.println(result);
        if (result == 1)
        {
            digitalWrite(12, HIGH);
        }
        else if (result == 2)
        {
            digitalWrite(12, LOW);
        }
    }
    delay(100);
}
