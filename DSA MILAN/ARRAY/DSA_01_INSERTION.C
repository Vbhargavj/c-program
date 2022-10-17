#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }printf("\n");
}

int insertion(int arr[], int size, int index, int element, int capacity)
{

    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {2, 5, 6, 7, 8};
    int size = 5, element = 65, index = 3, capacity = 100;
    display(arr, 5);
    insertion(arr, size, index, element, capacity);
    size += 1;
    display(arr, size);

    return 0;
}
