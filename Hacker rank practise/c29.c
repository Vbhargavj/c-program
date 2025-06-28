#include <stdio.h>

int main(void)
{
    // your code goes here
    int n, a, b, c, d, k, i, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &k);

        if (b < d)
        {
            for (i = 0; b != d; i++)
            {
                b++;
                count++;
            }
        }
        else if (b > d)
        {
            count = count + b;
            b = 0;
            count = count + d;
        }
        if (a < c)
        {
            for (i = 0; c != a; i++)
            {
                a++;
                count++;
            }
        }
        else if (a > c)
        {
            count = count + a;
            a = 0;
            count = count + c;
        }
        if (k == count)
        {
            printf("YES\n");
            printf("%d\n", count);
        }
        else
        {
            printf("NO\n");
            printf("%d\n", count);
        }
    }
    return 0;
}
