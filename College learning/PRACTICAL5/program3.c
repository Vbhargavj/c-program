#include<stdio.h>

int main(){

    int n,fibo=0,n1=0,n2=1 ;
    fibo=n1+n2;

    for (int  i = 2; i < n; i++)
    {
        n1=n2;
        n2=fibo;
        fibo=n1+n2;

        
    }
    
    printf("%d",fibo);

return 0;

}