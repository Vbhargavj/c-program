#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d", i, i * i, i * i * i);
        printf("\n");
    }

    return 0;
}