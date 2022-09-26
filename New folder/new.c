#include <stdio.h>
struct student
{
    int  no;
    char na[10];
};
struct student std[3];

int main()
{

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &std[i].no);
        scanf("%s", std[i].na);
    }
    for (int j = 0; j <= 3; j++)
    {
        if (std[i].no == std[j].no)
        {
            for (int k = j; k < 3; k++)
            {
                std[k] = std[k + 1];
            }
        }
    }
      for (int i = 0; i < 3; i++)
    {
        printf("%d", std[i].no);
        printf("%s", std[i].na);
    }
    return 0;
}

 