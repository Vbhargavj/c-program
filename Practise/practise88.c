#include<stdio.h>

int main(){

    int n,fl=0;
    scanf("%d",&n); 
    for (int  i = 2 ; i < n; i++)
    {
    
        if (n%i==0)
        {
            fl=0;
            break;
        }
        else{

            fl=1;
        }
    }

    if (fl==0)
    {
        printf("%d is not prime",n);
    }
    if (fl==1)
    {
        printf("%d is  prime",n);
        /* code */
    }
    
return 0;

}