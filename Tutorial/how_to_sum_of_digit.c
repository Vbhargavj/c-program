#include<stdio.h>

int main(){

    int n,r,sum=0,i=1;
    printf("Enter hte number ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        sum=r+sum;
        n=n/10;

    }
printf("%d",sum);
return 0;

}