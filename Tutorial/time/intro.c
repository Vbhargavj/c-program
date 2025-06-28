#include <stdio.h>
#include <time.h>
int main()
{
    time_t seconds, sec;
    seconds = time(NULL);
    sleep(10);
    sec = time(NULL);
    printf("%d", sec-seconds);

    return 0;
}