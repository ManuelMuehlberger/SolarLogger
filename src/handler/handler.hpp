#include "Arduino.h"
#include <queue>
#include <ctime>
//receives pair<time_t, u_int16_t value>
/*
WRITTEN TO EEPROM
-Errors


WRITTEN TO RTC
-last 100 datapoints


*/
class handler
{

    //TODO: 4-byte align queue
    std::queue<std::pair<std::time_t, u_int16_t>> queue;


    int writePersistetn();


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
