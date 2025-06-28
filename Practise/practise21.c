
#include<stdio.h>

void pt(int a);

int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    pt(a);


return 0;


}
void pt (int a){
    for (int i = 1; i < 11; i++)
    {
      printf("%d\n",i*a);
    }
    
}