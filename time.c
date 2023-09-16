#include <stdio.h>
#include <time.h>

int main() {
    time_t seconds;
    int minutes = 0, hours = 0, days = 0, years = 0;
    seconds     = time(0);
    minutes     = seconds / 60;
    hours	= minutes / 60;
    days	= hours / 24;
    years	= days / 365;
    printf("Seconds since January 1st, 1970 = %ld\n", seconds);
    printf("Minutes                         =  %d\n", minutes);
    printf("Hours                           =  %d\n",   hours);
    printf("Days                            =  %d\n",    days);
    printf("Years                           =  %d\n",   years);
    printf("%d\n", 1970 + years);
}
