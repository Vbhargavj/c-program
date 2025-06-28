#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter first value");
    scanf("%d", &n);
    printf("Enter second value");
    scanf("%d", &m);

    printf("Addition= %d\n", n + m);
    printf("Subtraction= %d\n", n - m);
    printf("Multipication= %d\n", n * m);
    printf("Division= %d\n", n / m);
    printf("Modulo= %d\n", n % m);

    return 0;
}