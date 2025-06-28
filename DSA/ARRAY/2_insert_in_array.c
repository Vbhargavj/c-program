#include <stdio.h>


void display(int ary[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }
}
void insert(int ary[], int index, int element, int size)
{
    if (size <= index + 1)
    {
        printf("this array is full so you can't insert\n");
    }
    else
    {
        for (int i = index; i < size; i++)
        {
            ary[i + 1] = ary[i];
        }
        ary[index] = element;
    }
}

int main()
{

    int ary[34] = {1, 45, 54, 2, 332};
    insert(ary, 4, 54, 34);
    display(ary, 6);

    return 0;
}  