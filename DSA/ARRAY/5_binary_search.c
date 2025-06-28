// for binary search array must be shorted
#include <stdio.h>
void binarysearch(int array[], int size, int element, int end)
{
    int low = 0, high = end,mid;
    while (1)
    {
        mid = (low + high) / 2;
        if (array[mid] == element)
        {
            printf("%d", mid+1);
            break;
        }
        else if (array[mid] < element)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
}

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6};
    binarysearch(array, 10,2,7);

    return 0;
}