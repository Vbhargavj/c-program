#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
  float re(triangle * tr){
        int p = (tr->a + tr->b + tr->c) / 2;
        int s = sqrt((p) * (p - tr->a) * (p - tr->b) * (p - tr->c));
        return s;
    }
void sort_by_area(triangle *tr, int n)
{
    /**
     * Sort an array a of the length n
     */
    for (int  i = 0; i < n; i++)
    {
        if (re(i)<re(i+1))
        {
           
           
        }
        
    }
    
   
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}
