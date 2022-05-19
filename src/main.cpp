<<<<<<< HEAD
//#pragma once
//#include <Arduino.h>
#include <reader/reader.hpp>
#include <handler/handler.hpp>
#include <sender/sender.hpp>
#include "ArduinoJson.hpp"


#include <string>
#include <memory>
#include <fstream>
#include <sstream>



//#include <plog/Log.h> //logger
//#include <plog/Initializers/RollingFileInitializer.h>

//#include <string_view>
//#include <iostream>



const std::string CONFIG_LOCATION{"config/config.json"};

ArduinoJson::StaticJsonDocument<256> config;

std::shared_ptr<Reader> reader;
std::shared_ptr<Handler> handler;
std::shared_ptr<Sender> sender;

int try_config()
{
  //load file into stringstream
  std::ifstream t(std::move(CONFIG_LOCATION));
  std::stringstream buffer;
  buffer << t.rdbuf();

  using namespace ArduinoJson;

  DeserializationError error = deserializeJson(config, buffer);
  
  return error? 1 : 0;
}

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);

  if(try_config() != 0)
  {
    exit(EXIT_FAILURE);
  }

  //getting parameters
  ArduinoJson::JsonObject root_0 = config[0];
  const char* root_0_ssid = root_0["ssid"]; // "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
  const char* root_0_password = root_0["password"]; // "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
  const char* root_0_name = root_0["name"]; // "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
  bool root_0_logging = root_0["logging"]; // true


  reader = std::make_shared<Reader>();
  handler = std::make_shared<Handler>();
  sender = std::make_shared<Sender>();

=======
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
  
>>>>>>> f2f1fa23467605b7ae44c4adc589aa7db4005fac
}

void loop() {
  // put your main code here, to run repeatedly:
  
<<<<<<< HEAD

}

int log()
{
  //plog::init(plog::warning, "hello.txt");

  return 0;
}





=======
  
  generateVector();

}

>>>>>>> f2f1fa23467605b7ae44c4adc589aa7db4005fac






