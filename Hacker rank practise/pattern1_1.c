#include <stdio.h>

int main()
{

    int r;
    printf("Enter the numberof row");
    scanf("%d", &r);
    int st=1,end=r*2-1,p=r;

   while (  p!=0)
   {
    /* code */
   
    for (int i = st; i <=end ; i++)
    {
        for (int j = st; j <= end; j++)
        {
            if (i == st || i == end || j == st || j == end)
            {
                printf("%d", p);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
        end--;st++;
        p--;
   }

    return 0;
}