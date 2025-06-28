#include<stdio.h>

int main(){

    int a,b,c, max ;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    printf("Enter third number ");
    scanf("%d",&c);
    

    if (a>b)
    {
        max==a;
    }
    else if (b>a)
    {
        max==b;
    }
    printf("%d",max);
    
    if (max>c)
    {
        printf("Loda lakhota moto se ,%d",max);
    }
    else if (max<c)
    {
        printf("Loda lakhota %d moto se",c);
        
    }
    else{
        printf("gand dhoyav mara bhai");
    }
    
    
    
    

return 0;

}