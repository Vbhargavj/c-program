#include <stdio.h>
int main()
{
    char p;
    
    printf("Enter the character\n ");
    scanf("%c", &p);
    if ('a' <= p && p<= 'z')
    {
        printf("you enter character is lower case");
    }
    else if ('A'<= p && p<= 'Z')
    {
        printf("You enter the character is upper case ");
    }
    else
    {
        printf("Wow you are dump");
    }

    return 0;
}