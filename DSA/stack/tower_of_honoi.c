#include <stdio.h>
int honoi(int n, int a, int b, int c)
{
    if (n > 0)
    {
        honoi(n - 1, a, c, b);
        printf("Disk %d is moved from %d to %d\n", n,a, c);
        honoi(n - 1, b, a, c);
    }
}
int main()
{
    honoi(2, 1, 2, 3);
    return 0;
}