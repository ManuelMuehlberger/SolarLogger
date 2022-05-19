#include "Arduino.h"
<<<<<<< HEAD

=======
#include <queue>
#include <ctime>
>>>>>>> f2f1fa23467605b7ae44c4adc589aa7db4005fac
//receives pair<time_t, u_int16_t value>
/*
WRITTEN TO EEPROM
-Errors


WRITTEN TO RTC
-last 100 datapoints


*/
<<<<<<< HEAD
class Handler
{
public:

    Handler();    

    
=======
class handler
{

    //TODO: 4-byte align queue
    std::queue<std::pair<std::time_t, u_int16_t>> queue;
>>>>>>> f2f1fa23467605b7ae44c4adc589aa7db4005fac


    int writePersistetn();


<<<<<<< HEAD

};



=======
    handler(/* args */);
    ~handler();
};

handler::handler(/* args */)
{
}

handler::~handler()
{
    //free littlefs disk space
}
>>>>>>> f2f1fa23467605b7ae44c4adc589aa7db4005fac
