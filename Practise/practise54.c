// enter number to revers
#include <stdio.h>

int main()
{

    int b;
    printf("Enter number ");
    scanf("%d",&b);
    int r=b%10;
    int d=b/10;
    printf("%d",r);
    printf("%d",d);

    return 0;
}