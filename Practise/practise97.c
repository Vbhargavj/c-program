#include <stdio.h>

int main()
{

    int n, sum = 0;
    printf("Enter the number");
    scanf("%d", &n);

    for (int i = 1; sum < n; ++i)
    {

        sum = sum + i;
    }
    // printf("%d",sum);
    if (sum == n)
    {
        printf("Perfact number");
    }
    else
    {
        printf("non perfact");
    }
    return 0;
}