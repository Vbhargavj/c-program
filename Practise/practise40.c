// maximum of three intger numbers
#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter the first values ");
    scanf("%d", &a);
    printf("Enter the second values ");
    scanf("%d", &b);
    printf("Enter the third values ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d", a);
        }
        else if (b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {

            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}