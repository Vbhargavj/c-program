// maX IN ARRAYS
#include <stdio.h>

int main()
{

    int next, max[6];
    printf("Enter the number ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &max[i]);
    }
    for (int j = 0; j < 6; j++)
    {
        if (max[j] > max[j + 1])
        {
            next = max[j];
        }
        else if (max[j + 1] > max[j])
        {
            next = max[j + 1];
        }
        else
        {
            printf("please enter different number ");
        }
    }
    printf("\n%d this is big number ", next);

    return 0;
}