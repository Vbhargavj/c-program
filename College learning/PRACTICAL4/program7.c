#include<stdio.h>

int main(){

    int sum=0;

    for(int i=101; i<200; i++ )
    {
        if (i%5==0)
        {
            sum=sum+i;
        }
            
    }
    printf("%d",sum);

return 0;

}