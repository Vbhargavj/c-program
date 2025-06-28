#include<stdio.h>
int main()
{
  int a,sum=0;
    do
    {
        
       printf("Enter the number need for sum ");
       scanf("%if",&a);
       
       sum+=a;
       if (a==0)
       {
           break;
       }
       
    } while (1);
       printf("%d",sum);
    

return 0;
}