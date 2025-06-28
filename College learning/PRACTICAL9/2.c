#include <stdio.h>

int sum(num)
{
    if (num != 0)
    {
        return (num % 10 + sum(num / 10));
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("\nbhargav vadukar\n");
    printf("enrollment number :210210116054\n ");

    printf("enter 5 digits number : \n");
    scanf("%d", &num);
    printf("sum of digits of number is : %d\n", sum(num));

    return 0;
}