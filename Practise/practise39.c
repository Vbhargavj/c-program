#include <stdio.h>

int main()
{

    int n;
    printf("Enter the numbers of row ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("*******\n");

        for (int j = 1; j <= i; j++)
        {
            printf("      ");
        }
    }

    return 0;
}