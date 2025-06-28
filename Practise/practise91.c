#include <stdio.h>

int main()
{

    int n, sample, count = 0;
    printf("Ente the length of array\n");
    scanf("%d", &n);

    int ary[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value");
        scanf("%d", &ary[i]);
    }
    printf("Enter the value for count ");
    scanf("%d", &sample);

    for (int i = 0; i < n; i++)
    {
        if (sample == ary[i])
        {
            count++;
        }
    }
    if (sample > 0)
    {
        printf("%d this number is repeated by %d time", sample, count);
    }
    else
    {
        printf("Please enter the valid number");
    }

    return 0;
}