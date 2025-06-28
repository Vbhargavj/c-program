#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // your code goes here
    int n;
    scanf("%d", &n);
    int a, b, c, d, e, f, dis = 0;
    while (n--)
    {
        dis = 0;
        scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

        if ((a == c && b == d) || (b == c && a == d))
        {
            dis++;
        }
        if ((a == e && b == f) || (b == e && a == f))
        {
            dis++;
        }

        printf("%d\n", dis);
    }
    return 0;
}
