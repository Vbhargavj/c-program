#include <stdio.h>

int main()
{

    char c = '0'+1;
    char ch[5];
            printf("%c",c);
    scanf("%s", ch);
    for (int i = 0; i < 5; i++)
    {
        if (ch[i] == c)
        {
            printf("yes");
        }
        else {
            printf("no");
        }
    }

    return 0;
}