#include <time.h>

int main() {
    #define time_size 40
    /* static define variable static out of scope */
    static char time_buffer[time_size];
    /* const cant be modified the value, but can change where is point */
    const struct tm * time;
    time_t raw_time;


}
