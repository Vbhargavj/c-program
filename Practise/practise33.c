#include <stdio.h>

int main()
{

    int n=0;

    printf("Enter the number of values you are enter in program ");
    scanf("%d", &n);
    int ary[n];
    printf("Enter the values of numbers");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("you ARE enter this numbers %d\n", ary[i]);
    }

    return 0;
}