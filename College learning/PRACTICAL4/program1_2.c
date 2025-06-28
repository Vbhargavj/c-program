#include <stdio.h>

int main()
{

    int i = 1, sum = 0;
    while (i < 101)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("%d", sum);

    return 0;
}