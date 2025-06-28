#include <stdio.h>

int main()
{

    int n, m;
    printf("Enter first number\n");
    scanf("%d", &n);
    printf("Enter second number\n");
    scanf("%d", &m);
    
    int sum = 0;

    if (n < m)
    {
        for (int i = n; i <= m; i++)
        {
            if (i % 17 != 0)
            {
                sum = sum + i;
            }
            else
            {
                continue;
            }
        }
        printf("%d\n", sum);
    }
    
    else
    {
        printf("Enter valid detail dump\n");
    }

    return 0;
}