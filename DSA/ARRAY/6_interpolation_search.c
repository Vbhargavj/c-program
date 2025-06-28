#include <stdio.h>

void interpolation(int *ary, int value, int n)
{
    int low = 0, high = n - 1;
    int mid = low + (high - low) * (value - ary[low]) / (ary[high] - ary[low]);
    if (ary[mid] == value)
    {
        printf("Value %d is found on %d\n", value, mid);
    }
    else if (ary[mid + 1] == value)
    {
        printf("Value %d is found on %d\n", value, mid + 1);
    }
    else if (ary[mid - 1] == value)
    {
        printf("Value %d is found on %d\n", value, mid - 1);
    }
    else{
        printf("Value is not found\n");
    }
}

int main()
{
    int arr[10000];
    for (int i = 0; i < 10000; i++)
    {
        arr[i] = i ;
    }
    interpolation(arr, 1000, 1000);
    return 0;
}