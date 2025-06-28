#include <stdio.h>

int main()
{
    // int a, b, c;
    // a = 1, b = 2;
    // c = a;
    // a = b;
    // b = c;

    // printf("%d\n", a);
    // printf("%d\n", b);

    int n, m;
    printf("Ener value of n\n");
    scanf("%d", &n);
    printf("Ener value of m\n");
    scanf("%d", &m);

    n = n * m;
    m = n / m;
    
    n = n / m;

    printf("The values of n is %d\n", n);
    printf("The values of m is %d\n", m);

    return 0;
}