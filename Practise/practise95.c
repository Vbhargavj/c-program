#include <stdio.h>

int main()
{

    int row;
    // printf("Enter the row");
    // scanf("%d", &row);
    row = 6;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9 - 1; j++)

        {
            if (6 == i + j || j==10-i)
            {
                printf("*");
                // printf("\n");
            }
            else if (j > 2 * row - 1 - row + i)
            {
                printf(" ");
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