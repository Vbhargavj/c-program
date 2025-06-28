#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c, d, m, count;
    while (n--)
    {
        count = 0;
        fflush(stdin);
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &m);
        // (1,1)→(1,2)→(2,2)
        // (1,1)→(1,0)→(0,0)→(1,0).
        if (b < d)
        {
            count = count + d - b;
        }
        else
        {
            count = count + b-d;
        }
        if (a < c)
        {
            count = count + c - a;
        }
        else
        {
            count = count + a - c;
        }
        if (count == m)
        {
            printf("YES\n");
        }
    
        
    }

    return 0;
}