#include<stdio.h>


int main(){


    int r,c;    
    printf("Enter the row of pattern");
    scanf("%d",&r);
    printf("Enter the collunm of pattern");
    scanf("%d",&c);
for (int  i = 0; i < r; i++)
{
    printf("\n");
    for (int  i = 0; i < c; i++)
    {
       printf("*");
    }
    
}


    // for (int  i = 0; i < c; i++)
    // {
    //    printf("*");
    // }
    
     
      
 

return 0;


}