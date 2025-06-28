// TO FIND REMINDER FOR
#include <stdio.h>

int main()
{

    int n, m;
    printf("Enter the intiger ");
    scanf("%d", &n);
    printf("Enter the reminder you want");
    scanf("%d", &m);

    for (int i = 1; i < 101; i++)
    {
        if (n % i == m)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}