#include <stdio.h>

int main()
{

    float n;
    scanf("%f", &n);
    if (n/9 <= 1)
    {
        // printf("%f\n",n/9);
        printf("%d\n", 1);
    }
    else if (n / 10 >= 1 && n / 99 <= 1)
    {
        printf("%d\n", 2);
    }
    else if (n / 100 >= 1 && n / 999 <= 1)
    {
        printf("%d\n", 3);
    }
    else
    {
        printf("More than 3 digits\n");
    }

    return 0;
}