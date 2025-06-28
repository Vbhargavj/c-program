#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter the one number for use this code");
    scanf("%d",&a);
    
    printf("Enter the  two number for use this code");
    scanf("%d",&b);

    printf("Enter the three number for use this code");
    scanf(" %d",&c);
  
    if(a==b){
        printf("You enter the number: %d and %d",a,b);  
    }
    else {
        printf("Wow you  enter ther number is totally wrong ");
        
    }


return 0;
}