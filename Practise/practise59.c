#include <stdio.h>

int main()
{

    int multi[5], n;
    printf("Enter number of arrays ");
    scanf("%d", &n);

    /* code */ int x = n;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", x);
        x = x * 3;
    }

    return 0;
}