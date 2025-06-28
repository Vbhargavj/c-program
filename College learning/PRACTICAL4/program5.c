#include <stdio.h>

int main()
{

    int n, sum = 0;
    printf("Enter the range");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 2)
    {

        sum = sum + i;
    }
    printf("The sum is %d", sum);
    return 0;
}