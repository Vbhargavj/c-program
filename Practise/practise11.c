#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number for sum of all ");
    scanf("%d", &a);
    // for (int i = a; i > 0; i--)
    // {
    //     printf("%d\n", i);
    // }
    // int sum=0;
    // for (int i = 1; i <=a; i++)
    // {
    //     int sum = sum + i;
        
    // }
    //     printf("%d\n",sum);
    int sum=0;
    for (int i = 1, j=a; i <= a && j>=1; i++,j--)
    {
        /* code */sum=sum+i;
        printf("%d\n",j);
    }
    
    printf("%d\n",sum);

    return 0;
}