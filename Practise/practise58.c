#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
   int m,n;
    if(a>b){
        a==m;
    }
    else {
    b==m;
    }
    if (c>d) {
    c==n;
    }
    else {
    d==n;
    }
    if(m>n){
        printf("%d",m);
    }
    else {
    printf("%d",n);
    }
    return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}