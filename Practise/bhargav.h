#include <stdio.h>
#include <stdlib.h>

// this header file is created by bhargav don't change anything in file to  avoid A Error
// all right reserved in this header file to respected owner

// take an array pointer and it's size
// this function is use to scanarray

void scanIntArray(int *ary, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ary[i]);
    }
}

// take an array pointer and it's size
// this function is use to printarray
void printIntArray(int *ary, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ary[i]);
    }
}
// take an array pointer and it's size for float
// this function is use to scanarray
void scanFloatArray(int *ary, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%f", &ary[i]);
    }
}

// take an array pointer and it's size for float
// this function is use to printarray
void printFloatArray(int *ary, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%f\n", ary[i]);
    }
}

// take an array pointer and it's size
// shorting the array in decreasing order
void shotdeco(int *ary, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (ary[i] > ary[j])
            {
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
}

// take an array pointer and it's size
// shorting the array in increasing order
void shotinc(int *ary, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (ary[i] < ary[j])
            {
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
}

// this function take a size of memory block and return int datatype memory
int *int_Memo(int size)
{
    return (int *)malloc(size * sizeof(int));
}

// this function take a size of memory block and return char datatype memory
char *char_Memo(int size)
{
    return (char *)malloc(size * sizeof(char));
}

// this function take a size of memory block and return float datatype memory
float *float_Memo(int size)
{
    return (float *)malloc(size * sizeof(float));
}
