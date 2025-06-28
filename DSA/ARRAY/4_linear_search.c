#include <stdio.h>
int search(int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return i + 1;
            // break;
        }
        // else
        // {
        //     return 0;
        // }
    }
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", search(array, 10, 4));

    return 0;
}
