// enter number and print line 
// 123
// 456
// 789

#include <stdio.h>

int main()
{

    int n;
    printf("Enter number of lines ");
    scanf("%d", &n);
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = x; j < x + 3; j++)
        {
            printf("%d\t", j);
        }
        x = x + 3;
        printf("\n");
    }

    return 0;
}