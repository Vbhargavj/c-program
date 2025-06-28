#include <stdio.h>
int main()
{
    int a, m;
    printf("Enter the number you need of you table\n");
    scanf("%d", &a);
    printf("Enter the number you decide how long need  you table\n");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", a * i);
    }

    return 0;
}