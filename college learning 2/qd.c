#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int *ary;
    int r, f, size;
};

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));

    return 0;
}
