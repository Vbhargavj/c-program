#include <stdio.h>
int main()
{
    int a;
    do
    {
        printf("Enter the values");
        scanf("%d", &a);
        printf("You enter %d\n", a);
        if (a % 7 == 0)
        {
            break;
        }

    } while (1);
    printf("Thanks you enter the number is 7 mutliple");

    return 0;
}