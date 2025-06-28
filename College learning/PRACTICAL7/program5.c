#include <stdio.h>
#include<stdlib.h>

int main()
{

    int n;
    printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    printf("Enter the length of array");

    int *a;
    scanf("%d", &n);
    a = (int)malloc(n * 2);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value");
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n; j++)
    {
        //
    }

    return 0;
}