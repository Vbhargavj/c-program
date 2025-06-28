#include <stdio.h>

int main()
{

    int row;
    printf("Enter the number of row");
    scanf("%d", &row);
    char x = 'A';

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 1 + row - i; j++)
        {
            printf("%c", x);
            x++;
        }
        x = 'A';
        printf("\n");
    }
    return 0;
}