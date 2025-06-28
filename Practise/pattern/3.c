#include <stdio.h>

int main()
{

    int c, r;
    printf("Enter the number of row");
    scanf("%d", &r);

    for (int i = r; i >=1; i--)
    {
        for (int j = 1; j < i;j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= r; k++)
        {
            for (int l = 1; l <= r; l++)
            {
                if (k==1)
                {
                    /* code */
                }

                printf("*");
            }

        }

            printf("* * * * *\n");

    }


    return 0;
}
