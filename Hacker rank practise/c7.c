#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // your code goes here
    int n, j;
    scanf("%d", &n);

    int *ary = (int *)malloc(n * sizeof(int));
    int *s = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &ary[i * 2 + j]);
            fflush(stdin);
        }
        j--;
        if (ary[i * 2 + j] > ary[i * 2 + j - 1])
        {
            s[i] = 1;
        }
        else if (ary[i * 2 + j] == ary[i * 2 + j - 1])
        {
            s[i] = 0;
        }
        else
        {
            s[i] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 1)
        {
            printf("FIRST\n");
        }
        else if (s[i] == 0)
        {
            printf("ANY\n");
        }
        else
        {
            printf("SECOND\n");
        }
    }

    return 0;
}