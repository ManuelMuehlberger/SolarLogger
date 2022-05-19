#include <reader/reader.hpp>

Reader::Reader()
{

}

void Reader::serial_begin()
{
    u_int64_t b = Serial.detectBaudrate(500);
    if(config.baudrate != b || b == 0)
    {
        //TODO: set errorstate
        return;
    }
    Serial.begin(b, SERIAL_8N1, SERIAL_RX_ONLY); //we only want to read
    counter++;
}

void Reader::read_data()
{
    int n = Serial.available();
    if(n == 0)
    {
        //no data to read

    }

    uint8_t arr[n];
    Serial.readBytes(arr, n);
}


