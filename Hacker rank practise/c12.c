#include <stdio.h>

int main()
{
    int n, so, ni, ri, sa;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int S = 0, N = 0;

        scanf("%d", &so);
        scanf("%d", &ni);
        scanf("%d", &ri);
        scanf("%d", &sa);
        fflush(stdin);

        if (so > ni)
        {
            S++;
            ni = ni + ri;
        }
        else
        {
            N++;
            so = so + ri;
        }
        printf("1n,%d\n", N);
        printf("1s,%d\n", S);
        if (so > ni)
        {
            S++;
            ni = ni + sa;
        }
        else
        {
            N++;
            so = so + sa;
        }
        printf("2n,%d\n", N);
        printf("2s,%d\n", S);
        if (so > ni)
        {
            S++;
            // ni=ni+sa;
        }
        else
        {
            N++;
            // so=so+sa;
        }
        printf("3n,%d\n", N);
        printf("3s,%d\n", S);
        if (S > N)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
