#include <stdio.h>

int max(int a, int b)
{
    if (a < b)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int ary[] = {46, 45, 2, 33};
    int temp;

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i <= 2; i++)
        {
            if (max(ary[i], ary[i + 1]))
            {
                temp = ary[i];
                ary[i] = ary[i + 1];
                ary[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i <= 3; i++)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}