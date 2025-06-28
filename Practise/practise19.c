#include <stdio.h>
void nm();
void bj();
 int main()
{
    char ch;
    printf("if you indian than enter i\nare you from french then you can enter f ");
    scanf("%c",&ch);
    if (ch=='i'){
        nm();
    }
    else if (ch=='f'){
         bj();
    }
    else {
        printf("wow i am found world greatest genious");
    }
    return 0;
}
void nm()
{

    printf("NAMASTE");
}
void bj()
{
    printf("bojour");
}