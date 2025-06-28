#include <stdio.h>

int gcd(int *arr, int n)
{
    int temp, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    i = 0,j=i+1;
    while (i++)
    {
        if (arr[j]%arr[i]!=0)
        {
            break;
        }
                
    }
}

int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int ary[n];
    return 0;
}
// here code is remain