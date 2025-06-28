#include<stdio.h>


int main(){

    int  n,m;
    printf("Enter uppon values\n");
    scanf("%d",&n);
    printf("Enter down  values\n");
    scanf("%d",&m);
    int d=n%m;

    if (d==0)
    {
        printf("the divident is %d",n/m);
    }
    else 
    printf("You are in error\n");



return 0;


}