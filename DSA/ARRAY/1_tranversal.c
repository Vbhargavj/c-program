#include <stdio.h>

void display(int ary[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }
}

int main()
{

    int ary[10] = {1, 2, 45, 100};
    display(ary, 4);

    return 0;
}

