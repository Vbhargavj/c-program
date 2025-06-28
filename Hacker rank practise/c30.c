#include <stdio.h>

int main(void)
{
    // your code goes here
    int n;
    long int a, b, c, max;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%ld%ld%ld", &a, &b, &c);

        max = a + b;
        if (max < b + c)
        {
            max = b + c;
        }
        if (max < a + c)
        {
            max = a + c;
        }
        printf("%ld\n", max);
        fflush(stdin);
    }
    return 0;
}
