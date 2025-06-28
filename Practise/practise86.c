#include <stdio.h>

int main()
{

    int number, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number ");
        scanf("%d", &number);
        if (0 < number)
        {
            sum = sum + number;
        }
        else
        {
            continue;
        }
    }
    printf("The sum is =%d", sum);

    return 0;
}