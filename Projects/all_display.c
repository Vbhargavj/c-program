#include <stdio.h>
char ANS(char *x)
{
    char a;
    printf("Enter the answer from(a,b,c,d)\n");
    scanf("%c", &a);
    printf("this is value from  ans function%c",a);
    x=a;
}
char con(char *a)
{
    char x;
    x=a;
    printf("The valu of a is %c and x is %c\n",a,x);
    if (x == 'a' || x == 'b' || x == 'c' || x == 'd')
    {
        printf("Enter valid information\n");
        printf("Enter again answer\n");
        ANS(&a);
    }
    else{
        printf("This is wrwong");
    }
}
int main()
{
    FILE *ptr, *cal;
    ptr = fopen("vbj.txt", "r");
    cal = fopen("calculation", "a");
    char c = getc(ptr);
    int count = 0, ans;
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(ptr);
        count++;
        if (c == 'A')
        {
            break;
        }
    }
    char a;
    // printf("Enter the answer ");
    // scanf("%c",&a);

    ANS(&a);
    printf("%c is ",a);
    con(&a);
    printf("%d", count);
    fclose(ptr);
    return 0;
}



