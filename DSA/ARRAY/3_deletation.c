#include <stdio.h>

void display(int ary[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }
}

void delet(int size, int value, int array[])
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            flag = i;
        }
    }
    for (int i = flag; i < size; i++)
    {
        array[i] = array[i + 1];
    }
}
int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6};
    delet(10, 5, array);
    display(array, 6);
    return 0;
}
