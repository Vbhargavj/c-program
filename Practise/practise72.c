// enter number nagative and positive give output positive
#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    if (0 < n)
    {
        printf("%d", n);
    }
    else if (n < 0)
    {
        n = n - 2 * n;
        printf("%d", n);
    }
    else
        printf("%d", n);

    return 0;
}