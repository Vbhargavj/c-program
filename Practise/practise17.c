#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number you want factoril");
    scanf("%d",&n);
    int fact=1;
    for (int  i = 1; i <=n ; i++)
    {
       fact=fact*i; 
    }
    printf("%d",fact);
return 0;
}