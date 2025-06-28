#include <stdio.h>

struct short_array
{
    int v, b, j;
};
typedef struct short_array sa;

int main()
{
    sa b[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d%d%d", &b->b, &b->j, &b->v);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d%d%d", b->b, b->j, b->v);
    }

    return 0;
}
