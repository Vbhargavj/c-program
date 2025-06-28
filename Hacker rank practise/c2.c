#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int *ary, *arr, *ar;
    ary = (int *)malloc(n * sizeof(int));
    arr = (int *)malloc(n * sizeof(int));
    ar = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
        scanf("%d", &arr[i]);
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ary[i] * 4 + arr[i] * 2);
    }

    // your code goes here
    return 0;
}