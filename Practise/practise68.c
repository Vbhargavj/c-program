#include <stdio.h>

int main()
{

    int i = 10, a, sum = 0;
    printf("Enter number for sum of digit ");
    scanf("%d", &a);

    while (a > 1)
    {

        sum = a % i;
        a = a / 10;
        sum=sum+sum;
    }
    
    printf("%d", sum);

    return 0;
}