// print reverse numbers

#include<stdio.h>


int main(){
     int n=0;

    printf("Enter the number of values you are enter in program ");
    scanf("%d", &n);
    int ary[n];
    printf("Enter the values of numbers");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    for (int i = 0; i < n; i++)
    {
       printf("%d\n",ary[i]);
    }
    printf("thia  a a%d\n");
    for (int i = n-1; i >=0; i--)
    {
        printf("%d\n",ary[i]);
    }
    


return 0;


}