#include <stdio.h>

int main()
{
    // printf("\x033[31m");
    printf("1BHARGAV\n");
    printf("\x1B[30m");
    printf("\e[1m2BHARGAV\e[m\n");
    printf("3BHARGAV\n");
    printf("\x1B[33m");
    printf("4BHARGAV\n");
    printf("\x1B[34m");
    printf("5BHARGAV\n");
    printf("\x1B[35m");
    // printf("\e[1mBHARGAV\e[m");
    // printf("\x1B[36m");

    printf("6BHARGAV\n");

    return 0;
}