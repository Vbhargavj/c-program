#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Enter the third number");
    scanf("%d",&c);
    int n=a*a*a+b*b*b+c*c*c;
    int p=a*100+b*10+c;
    if (p=a){
        printf("you enter number is armstrong number");
    }
    else{
        printf("You enter number is not armstrong number");
    }

return 0;
}