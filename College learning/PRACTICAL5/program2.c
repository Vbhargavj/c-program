#include <stdio.h>

int main()
{
    int n, flag = 0;
    printf("Enter the number ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Non prime");
    }
    else
    {
        printf("PRIME");
    }

    return 0;
}