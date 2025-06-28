/*  
 */

#include <stdio.h>

int main()
{

    int c, r;
    printf("Enter the number of row");
    scanf("%d", &r);
   
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (j == 1 || i == 1 || j == r || i == r || j==r-i+1||i==j )
            {
                printf("*");
            }
           
            else
            {
                printf(" ");
            }

            // printf("*");
        }

        printf("\n");
    }

    return 0;
}