#include <time.h>

int main() {
    #define time_size 40
    /* static define variable static out of scope */
    static char time_buffer[time_size];
    /* const cant be modified the value, but can change where is point to */
    /*
    member of struct tm or time {
	tm_second .. tm_year
    }
    */
    const struct tm * time;
    time_t raw_time;


}
