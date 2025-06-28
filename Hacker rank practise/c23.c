#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, count = 0, count1 = 0, n, *ary;
    scanf("%d", &n);
    ary = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
        (ary[i] % 2 == 0) ? (count++) : (count1++);
    }
    (count1 < count) ? printf("READY FOR BATTLE") : printf("NOT READY\n");
    return 0;
}