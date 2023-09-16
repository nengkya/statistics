#include <stdio.h>
#include <time.h>

int main() {
    time_t this_time = time(NULL);
    struct tm * struct_time = localtime(&this_time);

    printf("%d %d %d %d\n",
	struct_time->tm_year  + 1900,
	struct_time->tm_mon   + 1
    );
}
