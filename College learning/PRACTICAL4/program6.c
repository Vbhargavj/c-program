#include<stdio.h>

int main(){

    float n;
    printf("1+1/2+1/3+1/4+.......+1/n");
    printf("\nEnter the n");
    scanf("%f",&n);
    float m,sum=0;
    for (float  i =1 ; i <=n; i++)
    {
        m=1/i;
        sum=sum+m;
    }
    printf("The sum is %f",sum);
return 0;

}