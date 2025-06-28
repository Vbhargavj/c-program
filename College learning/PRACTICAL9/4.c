#include <stdio.h>

int sum(int);

int main()
{

    int n;
    printf("\nbhargav vadukar\n");
    printf("enrollment number :210210116054\n ");
    printf("Enter the number");
    scanf("%d", &n);
    printf("The sum of first %d number is %d", n, sum(n));

    return 0;
}
int sum(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
        return a + sum(a - 1);
}