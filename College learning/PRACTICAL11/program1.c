#include<stdio.h>

int main()
{
    printf("This is content of file....\n");
    FILE *ptr;
    ptr=fopen("text.txt","r");
    char c=getc(ptr);
    while (c!=EOF)
    {
        printf("%c",c);
        c=getc(ptr);
    }
    return 0;
}