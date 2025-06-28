#include <stdio.h>

int main()
{

    int bhargav[60], n;
    int max[60];
    printf("Enter hte number of student");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bhargav[i]);
    }
    int ma = bhargav[0];

    for (int k = 0; k <= n; k++)
    {

        for (int i = 1; i <= n; i++)
        {
            if (ma < bhargav[i])
            {
                printf("%d",bhargav[i]);
                ma = bhargav[i];
            }
        }
printf("%d",ma);
        max[k] = ma;
    printf("%d\n", max[k]);
    }

    return 0;
}