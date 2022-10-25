// singular queue
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f, r;
    int *arr;
};
void insert(int ary[], int *r, int value)
{
    ary[r] = value;
}
int main()
{
    struct queue q  ;
    q.arr = (int *)malloc(sizeof(int) * 15);
    q.f = q.r = -1;

    return 0;
}