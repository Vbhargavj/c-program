#include <stdio.h>

int main()
{
    int r, c, x = 1;
    printf("Enter number of row line ");
    scanf("%d", &r);
    printf("Enter number of collumn line ");
    scanf("%d", &c);
    for (int i = 1; i <= c; i++)
    {
        for (int j = x; j <= x + r; j++)
        {
            printf("%d ", j);
        }
        x = x + r + 1;
        printf("\n");
    }
    return 0;
}