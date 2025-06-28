#include <stdio.h>

int main()
{

    int n, flag = 1;
    printf("Enter the number");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("This number is prime");
    }
    else
    {
        printf("This number is non prime");
    }

    return 0;
}