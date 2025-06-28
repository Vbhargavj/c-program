#include <stdio.h>

int main()
{
    int m, n, x, y, z;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        m = x / 3;
        if (x % 3 == 0)
        {
            m = m - 1;
        }
        m = m * z + x * y;
        printf("%d\n", m);
    }
    return 0;
}