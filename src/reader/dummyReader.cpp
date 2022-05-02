#include "Arduino.h"
#include <ctime>
#include <time.h>





class dummyReader
{
private:

    const u_int16_t FACTOR = 100;

    u_int16_t value = 0;

    std::time_t now;

    

public:
    dummyReader(/* args */);
    ~dummyReader();

    void read();
};

dummyReader::dummyReader(/* args */)
{
}

dummyReader::~dummyReader()
{
}

void dummyReader::read()
{
    
}