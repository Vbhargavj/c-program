#include <stdio.h>

int main()
{

    int p, r;
    printf("Enter the number of row");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        p = i;

        for (int j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (p > 0)
            {
                printf("%d", p);
            }
            p--;
        }
        p=i;

        for (int k = 1; k < 2 * i ; k++)
        {
            p--;
            if (p <= i)
            {
                printf("%d", p);
            }
        }
        printf("\n");
    }

    return 0;
}
