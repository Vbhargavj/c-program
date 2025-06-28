#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j, spaces, stars;

    for (i = 1; i <= rows; i++)
    {
        if (i <= (rows + 1) / 2)
        {
            spaces = (rows + 1) / 2 - i;
            stars = i;
        }
        else
        {
            spaces = i - (rows + 1) / 2;
            stars = rows - i + 1;
        }
        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= stars; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
