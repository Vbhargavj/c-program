#include <stdio.h>

int main()
{

    int n, j, k, l;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &j, &k, &l);
        fflush(stdin);
        if (j%l==0 && j%l==0)
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
        
    }

    return 0;
}