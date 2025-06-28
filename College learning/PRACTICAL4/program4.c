#include <stdio.h>

int main()
{

    int k, sum = 0;
    printf("Enter the range");
    scanf("%d", &k);
    for (int i = 1; i <= k; i++)
    {
        sum = sum + i;
    }
    printf("The sum is %d", sum);
    return 0;
}