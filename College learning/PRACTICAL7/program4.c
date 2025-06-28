#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    int n, odmax = 0, evmax = 0;
    printf("Enter the length of array");

    int *bhargav;
    scanf("%d", &n);
    bhargav = (int)malloc(n * 2);
   
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value");
        scanf("%d", &bhargav[i]);

        if (bhargav[i] % 2 == 0)
        {
            if (evmax < bhargav[i])
            {
                evmax = bhargav[i];
            }
        }
        else
        {
            if (odmax < bhargav[i])
            {
                odmax = bhargav[i];
            }
        }
    }
    printf("In odd number largest is = %d\n", odmax);
    printf("In even number largest is = %d", evmax);

    return 0;
}