// count how many  numbers are repeated
#include <stdio.h>

int main()
{

    int n = 0;

    printf("Enter the number of values you are enter in program ");
    scanf("%d", &n);
    int ary[n];
    printf("Enter the values of numbers");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    int count = 0;

    for (int j = 0; j < n / 2; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == j) // same values is repeated
            {
                if (ary[i] == ary[j])
                {
                    count++;
                }
            }
        }
    }
    printf("%d", count);

    return 0;
}