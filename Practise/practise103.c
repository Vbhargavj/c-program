#include <stdio.h>

int main()
{

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        i++;

        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
         if (i!=5)
            {
                break;
            }
    }

    return 0;
}