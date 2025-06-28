#include <stdio.h>

int main()
{

    int n, r, max = 0, sub = 1;

    printf("Enter the number");
    scanf("%d", &n);

    for (int i = 0; n >= 0; i++)
    {
        r = n % 10;
        if (max <= r)
        {
            max = r;
            sub = sub * 10;
        }
        else
        {
        }
        printf("%d\t",n);
        


        n=n-max*sub/10;
        // if (n>=0)
        // {
        //     n=-1*n;
        // }
        printf("%d\t",n);
        printf("\n");
        

                              

        // n = n / 10;
    }
    printf("%d\n", max);
    printf("%d\n", sub);

    return 0;
}