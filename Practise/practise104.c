#include <stdio.h>

int main()
{
    printf("Enter the space to terminated program");
    int n, ncount = 0, pcount = 0, zcount = 0;
    while (n!=2)
    {
        printf("Enter the number");
        scanf("%d", &n);
        if (n > 0)
        {
            pcount++;
        }
        else if (n < 0)
        {
            ncount++;
        }
        else
        {
            zcount++;
        }
    }
    printf("You enter \npositive number=%d\n negative number=%d\nYou enter zero =%d\n", pcount,ncount, zcount);

    return 0;
}