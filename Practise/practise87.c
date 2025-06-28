#include <stdio.h>
#include <math.h>

int main()
{

    int a, n, p, r, sum = 0;
    printf("Enter the number ");
    scanf("%d", &n);
    printf("Enter the power");
    scanf("%d", &p);
    int square = pow(n, p);
    a = square;
    printf("%d", a);
    while (square != 0)
    {
        r = square % 10;
        sum = r + sum;
        square = square / 10;
    }
    printf("\nThe sum is %d", sum);

    if (sum == n)
    {
        printf("\nThis number is neon number");
    }
    else
    {
        printf("\nThis number is no neon number");
    }

    return 0;
}