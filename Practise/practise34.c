// print to enter the values

#include<stdio.h>


int main(){

    int arr[4]={1,22,4,4};
    printf("%d",arr[3]);
    int n;
    printf("Enter the values of need you \n");
    scanf("%d",&n);
    int ary[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d\n",&ary[i]);
    }
    


return 0;


}