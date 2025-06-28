#include<stdio.h>
int fibbo(int);

int main()
{
    int n;
      printf("bhargav vadukar\n");
    printf("enrollment no: 210210116054\n");
    printf("Enter the term of fibbonacci series");
    scanf("%d",&n);
    int r=fibbo(n);    
    printf("the term of %d is %d",n,r);
    return 0;
} 
int fibbo(int a){
    if (a<=3)
    {
        return 1;
    }
    else{
        return fibbo(a-1)+fibbo(a-2);
    }
    
}