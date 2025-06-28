#include <stdio.h>

int main()
{

    int n, remaider, sum = 0;

    printf("Enter the number");
    scanf("%d", &n);
    int original = n;
    while (n != 0)
    {
        remaider = n % 10;
        sum = sum * 10 + remaider;
        n = n / 10;
    }
    printf("%d\n",sum);
    if (original == sum)
    {
        printf("This number is palindrome");
    }
    else
    {
        printf("This number is not palindrome");
    }
    return 0;
}