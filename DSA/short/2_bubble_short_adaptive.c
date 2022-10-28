// short the array
#include <stdio.h>

void printarray(int *ary, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ary[i]);
    }
}

void bubble_short(int *ary, int size)
{
    int tmp, adaptive = 0;
    for (int i = 0; i < size - 1; i++)
    {
        adaptive = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (ary[j] > ary[j + 1])
            {
                tmp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = tmp;
                adaptive = 0;
            }
        }
        if (adaptive)
        {
            return;
        }
    }
}

int main()
{
    int ary[] = {21, 34, 12, 2, 67};
    int size = 5;
    printarray(ary, size);
    bubble_short(ary, 5);
    printf("\n");
    printarray(ary, size);
    return 0;
}