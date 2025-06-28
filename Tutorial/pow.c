#include <stdio.h>
#include <math.h>
void pri();
void as(char *b);
int main()
{
    int i = 0;
    char b;

    while (i < 5)
    {
        pri();
        as(&b);
        printf("%c", b);
        i++;
    }

    return 0;
}
void pri()
{
    printf("\nEnter the answer of option a,b,c,d\n");
    // THIS IS FUNCTION IS USE TO PRINT INSTRUCTION
}
void as(char *a)
{
    // THIS IS FUNCTION USE TO ANSWER FROM USER
    // char x;
    scanf(" %c", &a);
}