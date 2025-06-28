#include <stdio.h>

int main()
{
    printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    int n;
    printf("Enter the length of array");

    int *ary;
    scanf("%d", &n);
    ary = (int)malloc(n * 2);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    printf("Reverse is ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", ary[i]);
    }

    return 0;
}