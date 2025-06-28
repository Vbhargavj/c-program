#include <stdio.h>

int main()
{

    int n, m;
    printf("Enter first value\n");
    scanf("%d", &n);
    printf("Enter second value\n");
    scanf("%d", &m);

    for (int i = n + 1; i < m; i++)
    {
        if (i % 7 == 2 || i % 7 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}