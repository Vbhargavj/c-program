// enter correct password to close program
#include <stdio.h>

int main()
{

    int n;
    printf("Enter the correct password ");
    scanf("%d", &n);

    while (1)
    {
        if (n == 1234)
        {
            printf("correct password ");
            break;
        }
        else
        {
            printf("You enter wrong password\nplease try again\n ");
            scanf("%d", &n);
        }
    }
    return 0;
}