// short the array
#include <stdio.h>

void printarray(float *ary, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%f\n", ary[i]);
    }
}

void bubble_short(float *ary, int size)
{
    float tmp, adaptive = 0;
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
    float ary[60];
    int size = 60;
    for (int i = 0; i < size; i++)
    {
        scanf("%f", &ary[i]);
    }
    
    printarray(ary, size);
    bubble_short(ary, size);
    printf("\n");
    printarray(ary, size);
    return 0;
}