#include "handler.hpp"


int handler::writePersistetn()
{
    //32 reserved for System
    ESP.rtcUserMemoryWrite(32, queue, sizeof(queue));
    
}




