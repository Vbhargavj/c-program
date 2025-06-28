#include <stdio.h>
int main() 
{
    int mark;
    printf("Enter your real makr for know you pass or fail");
    scanf("%d", &mark);
    // if (30 < mark)
    // {
    //     printf("cograculation ! you are pass");
    // }
    // else
    // {
    //     printf("Congraslulation you are fail");
    // }
   mark<=30 ? printf("fail"):printf("pass");
    return 0;
}