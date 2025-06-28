#include<stdio.h>
#include<math.h>

int fact(int a){
    if (a==1)
    {
      return 1;
    }
    return a*fact(a-1);
}
int main(){
    int n;
    printf("Enter hte value for factorial");
    scanf("%d",&n);
    printf("%d",fact(n));


return 0;


}