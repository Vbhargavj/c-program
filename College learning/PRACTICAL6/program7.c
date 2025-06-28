#include <stdio.h>

int main()
{
    int row;
    printf("Enter the row");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}