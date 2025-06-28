// code with harry

#include<stdio.h>

#include<math.h>

int sum(int a){
    if (a==1)
    {
       return 1;
    }
    
    return a+sum(a-1);
}


int main(){

    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",sum(n));


return 0;


}

