#include <stdio.h>

struct student
{
    int no;
    float cpi;
    char name[10];
};
struct student std[5];
int main()
{
    for (int j = 0; j < 2; j++)
    {
        fflush(stdin);
        scanf("%d%f%s", &std[j].no, &std[j].cpi, std[j].name);
    }

    FILE *f = fopen("vbj.bin", "wb");
    for (int k = 0; k < 2; k++)
    {
        fprintf(f, "%d%f%s", &std[k].no, &std[k].cpi, std[k].name);
    }

    fclose(f);

    return 0;
}