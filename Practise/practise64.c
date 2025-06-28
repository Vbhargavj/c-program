#include <stdio.h>

int main()
{

    int p,sum=0;
    printf("Enter number ");
    scanf("%d", &p);
    for (int i = 1; i <= p; i++)
    {
        sum=sum+(i*i*i*i);
        
    }
    printf("%d",sum);

    return 0;
}