#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int *ary;
    int r, f, size;
};

void insert(struct queue ptr, int element)
{
    if (ptr.f == -1)
    {
        if (ptr.r == -1)
        {
            ptr.f = ptr.r = 0;
            ptr.ary[ptr.r] = element;
        }
    }
    else if (ptr.r < ptr.f)
    {
        printf("not insert\n");
    }
    else if (ptr.size - 1 >=  ptr.r)
    {
        ptr.r = -1;
    }

    else
    {
        ptr.r++;
        ptr.ary[ptr.r] = element;
    }
}

int main()
{
    struct queue q;
    q.size = 15;
    q.f = q.r = -1;
    q.ary = (int *)malloc(q.size * sizeof(int));
    insert(q, 12);
    return 0;
}