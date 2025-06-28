#include <stdio.h>
int main(void)
{
    int n, ary[3] = {10, 21, 42};
    scanf("%d", &n);
    int a, b, c, d, e, count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
        for (int j = 0; j < 3; j++)
        {
            if (a * b >= ary[j])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
