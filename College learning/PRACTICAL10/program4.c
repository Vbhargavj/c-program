#include <stdio.h>

int main()
{

    int *ptr, bhargav[6], sum = 0; printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    printf("Enter the values \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &bhargav[i]);
    }
    ptr = &bhargav[0];
    for (int i = 0; i < 6; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf(" the value %d", sum);

    return 0;
}