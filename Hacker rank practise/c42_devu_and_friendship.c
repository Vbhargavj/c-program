#include <stdio.h>
#include <stdlib.h>

int shot(int *ary, int n)
{
    int count = 0, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ary[i] > ary[j])
            {
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
}

int main(void)
{
    // your code goes here
    int t, *ary, n, count = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        ary = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ary[i]);
        }

        shor(ary, n);
        count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (ary[i] == ary[i + 1])
            {
                count++;
            }
        }
        printf("%d\n", n - count);
    }
    return 0;
}
