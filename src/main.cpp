#include <Arduino.h>
#include <ctime>
#include <chrono>


/*
        1) sleep

        2) Interrupt is sent

        3) fetch queue of last 100 events, load latest event

        4) get latest event: pair<s_time, s_value>

        5) l_time > s_time?

            5.1a) add std::make_pair<l_time, value> to queue, pop_front

            5.1b) else begin recovery process

        6) send queue to server

        7) goto 1    

    */



void setup() {
  // put your setup code here, to run once:
  //std::cout << "Hello World!" << std::endl;
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);             //establish Serial connection
}

void generateVector()
{
  
  //digitalWrite(LED_BUILTIN, HIGH);
  //delay(10);
  //digitalWrite(LED_BUILTIN, LOW);
  //Serial.printf("((%i, %i)),", vec.size(), ESP.get);
  Serial.printf("%ld, ", std::time(0));
  //delay(10);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  generateVector();

}







