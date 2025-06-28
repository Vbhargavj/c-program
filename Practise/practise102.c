#include <stdio.h>

int main()
{

    int bh[1][1];
    int b = &bh[1][1];
    *(*(b + 0) + 0) = 3;
    printf("%d", bh[1][1]);

    return 0;
}