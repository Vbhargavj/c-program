#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    int n, max = 0, min = 10000000, sum = 0;

    printf("Enter the length of array");
    int *ary;
    scanf("%d", &n);
    ary = (int)malloc(n * 2);
    // declare array of n length

    for (int i = 0; i < n; i++)
    {
        // input value from user
        printf("Enter the value");
        scanf("%d", &ary[i]);

        // for maximum of array
        if (max > ary[i])
        {
            max = max;
        }
        else if (max < ary[i])
        {
            max = ary[i];
        }
        else
        {
            printf("Enter the different value");
            break;
        }

        // for minimum of array
        if (min > ary[i])
        {
            min = ary[i];
        }
        else
        {
            min = min;
        }
        sum = sum + ary[i];
    }

    // PRINT RESULT VALUES
    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);
    printf("SUM = %d\n", sum);
    printf("AVG = %d", sum / n);

    return 0;
}