#include <stdio.h>

struct student
{
    long long int eno, mo;
    char name[25], branch[15];
    float cpi;
} std[2], temp;

void view()
{
    long long int a, m;
    char name[25], branch[15];
    float c;

    FILE *fp = fopen("filesave.txt", "r");
    do
    {
        fscanf(fp, "%s %lld %lld %s %f\n", name, &a, &m, branch, &c);
        printf("%s %lld %lld %s %0.2f\n", name, a, m, branch, c);
    } while (fscanf(fp, "%s %lld %lld %s %f\n", name, &a, &m, branch, &c) != EOF);
}

int main()
{
    view();
    return 0;
}