#include<stdio.h>

int main(){

    int n,r,sum=0;
    printf("Enter the number ");
    scanf("%d",&n);

    while(n!=0){
        r=n%10;
        printf("%d",r);
        n=n/10;
    }

return 0;

}