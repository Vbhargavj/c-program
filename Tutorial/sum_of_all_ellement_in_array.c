#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
int sum3(int a, int b, int c)
{
    return a + b + c;
}
int main(void)
{
    // your code goes here
    int n;
    scanf("%d", &n);

    int *ary = (int *)malloc(n * 4 * sizeof(int));
    int *a = (int *)malloc(n * 7 * sizeof(int));

    // how to sum of all element
    // a ={1,2}    t=total element
    // sum(a)= 2                    t=1
    //  a ={ 1,2,3 }
    // sum(a)= 2,3,2+3              t=3
    // a = {1,2,3,4}
    // sum(a) = 2,3,4,2+3,2+4,3+4,2+3+4   t=7

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &ary[i * 4 + j]);
            fflush(stdin);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            a[j-1] = ary[i*4+j];
            /* code */
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}