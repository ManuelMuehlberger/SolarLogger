#include "Arduino.h"
//#include <SoftwareSerial.h>

//https://arduino-esp8266.readthedocs.io/en/latest/reference.html#serial

/*
    use #include <HardwareSerial.h> instead of SoftwareSerial
*/

/*
Some comments from https://docs.arduino.cc/learn/built-in-libraries/software-serial
*/

struct esp_config
{
  	const byte rxPin = 999; //pin to read from
    const byte txPin = 9999;//pin to write to
    const u_int64_t baudrate = 9600;
    //SERIAL_8N1
};



class Reader
{
private:

    esp_config config;

    u_int64_t counter = 0;

public:

    Reader();
    
          
    void serial_begin();

    /**
     * Get the number of bytes (characters) available for reading from a software serial port. 
     * This is data that has already arrived and stored in the serial receive buffer.
     */
    int get_available();

    void read_data();

};


