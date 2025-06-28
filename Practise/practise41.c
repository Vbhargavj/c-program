#include<stdio.h>


int main(){


    int p,q,r,s;    
    printf("Enter the first values  ");
    scanf("%d",&p);
    printf("Enter the second values  ");
    scanf("%d",&q);
    printf("Enter the thhird values  ");
    scanf("%d",&r);
    printf("Enter the fourth values  ");
    scanf("%d",&s);
    if((q>r)&&(s>p)&&((r+s)>(p+q))&&(r>0)&&(s>0)&&(q>0)&&(p%2==0)){
        printf("Right values"); 
    }
    else
    printf("wrong values");



return 0;


}