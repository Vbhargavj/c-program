
/*
 * C program to accept N numbers and arrange them in an ascending order
 */

#include <stdio.h>
void main()
{

    int i, j, a, n, number[30];
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
}