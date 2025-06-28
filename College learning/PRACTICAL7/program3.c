#include <stdio.h>
#include <stdlib.h>

int main()
{

    int bhargav[10], sum = 0, max = 0;
    printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    for (int i = 0; i < 10; i++)
    {
        // store value in array

        printf("Enter the value ");
        scanf("%d", &bhargav[i]);

        // find sum of given even number
        if (bhargav[i] % 2 == 0)
        {
            sum = sum + bhargav[i];
        }

        // find maximum of number
        if (max < bhargav[i])
        {
            max = bhargav[i];
        }
        else if (max > bhargav[i])
        {
            /* code */
        }
        else
        {
            printf("Enter the different value");
            break;
        }
    }

    // print result value
    printf("Sum of even number is = %d\n", sum);
    printf("max of  number is = %d", max);

    return 0;
}