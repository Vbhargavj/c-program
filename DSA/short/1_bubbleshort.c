// short the array
#include <stdio.h>

void printarray(int *ary, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ary[i]);
    }
}
void bubble_short(int *ary, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int tmp;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (ary[j] > ary[j + 1])
            {
                tmp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = tmp;
            }
        }
    }
}

void bubble_short2(int *ary, int size)
{
    for (int i = 0; i < size; i++)
    {
        int tmp;
        for (int j = i + 1; j < size; j++)
        {
            if (ary[i] > ary[j])
            {
                tmp = ary[i];
                ary[i] = ary[j];
                ary[j] = tmp;
            }
        }
    }
}
/*
    FOR BUBBLE SHORT 2
    a={12,34,1,5}
    here first loop is target (i) i=0
    a[0]=12;
    so j=i+1=>1;
    12>34 condition is false
    j++ so j=2;
    a[2]=1
    12>1 so condition is true
    so both interchange a[i=0]=1<=>a[j=2]=12;
    now array is a={1,12,34,5}
    j++ so j=3;
    all condition is false for a[0]=1;
    now i++ i=1 and j=i+1=>2
    a[1]=12 a[2]=34;
    12>34 ->condition is false
    j++ j=3
    12>5 ->codndition is true
    so both interchange a[i=0]=5<=>a[j=2]=12;
    now array a={1,5,34,12}
    for all  condition is false
    now as 12 and 34 both interchange
    final array  is a={1,5,12,34}
*/
int main()
{
    int ary[50];
    int size = 50;
    for (int i = 0; i < 50; i++)
    {
        scanf("%d", &ary[i]);
    }

    printarray(ary, size);
    bubble_short2(ary, 50);
    printf("\n");
    printarray(ary, size);
    return 0;
}