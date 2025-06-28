#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int add,sum;
    add=*a+*b;
    sum=*a-*b;
      return a+b,a-b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
