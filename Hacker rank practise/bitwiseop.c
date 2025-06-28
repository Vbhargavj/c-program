#include<stdio.h>

int main(){

    int a=5,b=4;

    printf("%d",a&b);
    printf("%d",a|b);
    printf("%d",a^b);
    //       
    // 5=    1 1 0 0
    // 4=    0 1 0 0
    // 1=    1 0 0 0 = 1
    // 9=    1 0 1 0 = 9
    // a&b=  0 1 0 0 = 4
    // a|b=  1 1 0 0 = 5
    // a^b=  1 0 0 0 = 1
    // ans a&b
    

return 0;

}