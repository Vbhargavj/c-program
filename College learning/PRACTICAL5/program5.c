#include <stdio.h>

int main()
{

    int n, r, sum = 0;

    printf("Enter the number");
    scanf("%d", &n);

    for (int i = 0; n != 0; i++)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    printf("The reverse numbewr is %d", sum);

    return 0;
}