#include<stdio.h>

int main(){

    int a,b,c,max;
    printf("Enter the first value");
    scanf("%d",&a);
    printf("Enter the second value");
    scanf("%d",&b);
    printf("Enter the third value");
    scanf("%d",&c);

    if (a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    if (max>c)
    {
        /* code */
    printf("%d",max);
    }
    else{
        printf("%d",c);
    }
    

    

return 0;

}