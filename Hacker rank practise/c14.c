#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int j, k, l, p, q, r,a=0,b=0;

        scanf("%d%d%d", &j, &k, &l);
        fflush(stdin);

        scanf("%d%d%d", &p, &q, &r);
        fflush(stdin);

        if (j>p)
        {
            a++;
        }
        else{
            b++;
        }if (k>q)
        {
            a++;
        }
        else{
            b++;
        }if (l>r)
        {
            a++;
        }
        else{
            b++;
        }
        
        if (a > b)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
    return 0;
}