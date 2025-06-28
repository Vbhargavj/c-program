#include <stdio.h>

int main()
{
    int n;
    printf("Enter the integer ");
    scanf("%d", &n);
    if (0 < n && n < 20)
    {
        printf("the range of integers is [0,20]");
    }
    else if (20 < n && n <= 40)
    {

        printf("the range of integers is [21,40]");
    }
    else if (40 < n && n <= 60)
    {
        printf("the range of integers is [41,60]");
    }
    else if (61 < n && n <= 80)
    {
        printf("the range of integers is [61,80]");
    }
    else
    {
        printf("Enter the number which in range of 0 to 80");
    }
    return 0;
}
