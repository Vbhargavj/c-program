#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // your code goes here
    int n, j;
    scanf("%d", &n);

    int *ary = (int *)malloc(n * 3 * sizeof(int));
    int *s = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &ary[i * 3 + j]);
            fflush(stdin);
        }
        j--;
        if (ary[i * 3 + j] >= ary[i * 3 + j - 2] && ary[i * 3 + j] < ary[i * 3 + j - 1])
        {
            s[i] = 1;
        }
        else
        {
            s[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 1)
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