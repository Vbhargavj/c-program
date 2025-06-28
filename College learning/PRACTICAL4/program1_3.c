#include <stdio.h>

int main()
{

    int i = 1, sum = 0, n;
    do
    {
        sum = sum + i;
        i++;
    } while (i <101);
    printf("%d", sum);

    return 0;
}