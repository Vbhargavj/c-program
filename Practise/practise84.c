// recursion use for sum of n number
#include <stdio.h>
int sum(int a);

int main()
{

    int n;
    printf("Enter the  number ");
    scanf("%d", &n);
    printf("The sum of %d", sum(n));

    return 0;
}
int sum(int a)
{
    if (a != 1)
    {
        return a + sum(a - 1);
    }
    else
    {
        return a;
    }
}