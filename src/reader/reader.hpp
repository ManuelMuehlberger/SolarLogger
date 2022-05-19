#include "Arduino.h"
<<<<<<< HEAD
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


=======
#include <ctime>


struct data
{
   const u_int32_t value;
   const std::time_t l_time;
} pair;



class dummyReader
{
private:

    const u_int16_t FACTOR;

    u_int16_t value = 0;

    std::time_t l_time = std::time(0);

public:
    dummyReader(const u_int16_t);
    ~dummyReader();
};

dummyReader::dummyReader(const u_int16_t FACTOR) : FACTOR(FACTOR) 
{
}

dummyReader::~dummyReader()
{
    
}
>>>>>>> f2f1fa23467605b7ae44c4adc589aa7db4005fac
