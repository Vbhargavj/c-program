#include <stdio.h>

struct student
{
    int no;
    float x;
};
struct student std[4];

int main()
{

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &std[i].no);
        scanf("%f", &std[i].x);
    }
    int s;
    scanf("%d", &s);
    for (int i = 0; i < 4; i++)
    {
        if (s == std[i].no)
        {
            for (int j = 0; j < 4; j++)
            {
                std[j] = std[j + 1];
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", std[i].no);
        printf("%f\n", std[i].x);
    }

    return 0;
}