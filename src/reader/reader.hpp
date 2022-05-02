#include "Arduino.h"
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
