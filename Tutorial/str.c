#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char s[5][25];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        scanf("%s", &(*(s + i)));
    }

    for (int i = 0; i < 5; i++)
    {
        if(strcmp(s[i],s[i+1])>0){
            printf("%s", s[i]);
        }

        printf("%s", (*(s + i)));
    }

    return 0;
}