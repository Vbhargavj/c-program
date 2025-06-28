#include <stdio.h>

int main()
{

    int n, m;
    printf("Enter first number\n");
    scanf("%d", &n);
    printf("Enter second number\n");
    scanf("%d", &m);
    if (n % m == 0)
    {
        printf("%d is a multiple of %d", n, m);
    }
    else{
        printf("There is no multiple");
    }

    return 0;
}