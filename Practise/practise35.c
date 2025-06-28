// sum of all element in arrays

#include<stdio.h>


int main(){

    int n;
    printf("Enter the values of need of ");
    scanf("%d",&n);
    int ary[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ary[i]);
    }

    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum=sum+ary[i];
    }
    printf("%d",sum);

    printf("THE sum of all values is %d\n");

  

    
    


    




return 0;


}