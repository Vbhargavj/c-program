#include <stdio.h>

int main()
{
    int r, n;
    printf("Enter the number of row");
    scanf("%d", &r);
    int c = r * 2 - 1;
    int start = 0, end = c;

    int bhargav[r][c];

    while (n != 0)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {

                bhargav[i][j] = r;
            }
        }
        end--;
        start++;
        r--;
    }

    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            printf("%d", bhargav[i][j]);
        }
        printf("\n");
    }

    return 0;
}