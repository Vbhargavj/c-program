#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        fflush(stdin);

        if (a % b == 0)
        {
            printf("%.0f\n", (float)a / b);
        }
        else if (a % b != 0)
        {
            printf("%d\n", -1);
        }
        else if ((float)a / b == 0)
        {
            printf("%d\n", 0);
        }
    }

    return 0;
}