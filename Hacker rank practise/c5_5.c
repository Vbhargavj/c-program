#include <stdio.h>

int main()
{
    int n, j, k, l, m;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &j, &k, &l, &m);
        if (j == k)
        {
            printf("YES\n");
        }
        else if (j == l)
        {
            printf("YES\n");
        }
        else if (j == m)
        {
            printf("YES\n");
        }
        else if (j == k + l)
        {
            printf("YES\n");
        }
        else if (j == m + l)
        {
            printf("YES\n");
        }
        else if (j == k + l + m)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}