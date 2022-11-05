#include <stdio.h>

void insert_sort(int *ary, int n);

int main()
{
    int ary[] = {35, 12, 5, 8, 13};
    int n = 5;

    insert_sort(ary, n);

    return 0;
}
void insert_sort(int *ary, int n)
{
    // ary[1]=12 compare with 35
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ary[i] < ary[j])
            {

            }
        }
    }
}