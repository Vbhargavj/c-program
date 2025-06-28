#include <stdio.h>

int main()
{

    for (int i = 'A'; i <= 'Z'; i++)
    {
        int b = i;
        printf("[%d-%c]", b, i);
    }

    return 0;
}