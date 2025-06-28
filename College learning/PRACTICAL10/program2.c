#include <stdio.h>

int main()
{

    int m[10];
    printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    printf("Enter the values");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &m[i]);
    }
    int *ptr;
    ptr = &m[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}