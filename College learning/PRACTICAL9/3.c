#include <stdio.h>
int fact(int);

int main()
{
    int n;
    printf("\nbhargav vadukar\n");
    printf("enrollment number :210210116054 \n ");
    printf("Enter the number");
    scanf("%d", &n);
    printf("The factorial of %d is  %d", n, fact(n));
    return 0;
}
int fact(int x)
{
    if (x < 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}
