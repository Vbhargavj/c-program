#include <stdio.h>

void insert_sort(int ary[], int n)
{
    int temp, j, i;
    for (i = 1; i < n; i++)
    {
        temp = ary[i];
        j = i - 1;
        while (j >= 0 && ary[j] > temp)
        {
            ary[j + 1] = ary[j];
            j = j - 1;
        }
        ary[j + 1] = temp;
    }
}
void prinet(int *ary, int n)
{
    printf("\n%d\n\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ary[i]);
    }
}

int main()
{
    int ary[] = {35, 12, 5, 8, 13};
    int k = 5;
    // fflush(stdout);
    insert_sort(ary, k);
    prinet(ary, k);
    return 0;
}
/*
    ary[] = {35, 12, 5, 8, 13};
    35,| 12, 5, 8, 13  35>12
*/
