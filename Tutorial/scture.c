#include <stdio.h>

struct test
{
    int no;
    int cpi;
};
void scaner(struct test *);
void print(struct test *);

int main()
{

    struct test t1[1];
    scaner(t1);
    print(t1);

    return 0;
}
void scaner(struct test *t1)
{
    scanf("%d", &t1->cpi);
    scanf("%d", &t1->no);
}
void print(struct test *t1)
{
    printf("%d\n", t1->cpi);
    printf("%d\n", t1->no);
}
