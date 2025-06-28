#include <stdio.h>
#include <math.h>

int main(void)
{
    // your code goes here
    int t, a, b, c, d, k, ans;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &k);
        ans = abs(a - c) + abs(b - d);
        if (ans <= k)
        {
            if (ans == k)
            {
                printf("YES\n");
            }
        }
        else if (k > ans && (k - ans) % 2 == 0)
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
