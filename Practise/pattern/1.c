// *           *
// * *       * *
// * * *   * * *
// * * * * * * *

#include <stdio.h>

int main()
{

    int i = 0, j = 0, r;

    printf("Enter the number of row");
    scanf("%d", &r);

    for (i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r * 2 - 1; j++)
        {

            if (j <= i)
            {
                printf("*");
            }
            else if (j >= r * 2 - 1 - i + 1)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}