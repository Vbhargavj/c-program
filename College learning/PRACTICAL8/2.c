#include <stdio.h>

int sod(int);

int main()
{

    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    int result=sod(n);
    printf("The sum of digit is %d", result);

    return 0;
}

int sod(int a){
    // int a;
    int sum=0,r;
    for (int i = 0; a!=0; i++)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    
    return sum;
}