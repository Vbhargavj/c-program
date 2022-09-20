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
        for (j = 0; j < strlen(s[i]); j++)
        {
            printf("%c", *(*(s + i) + j));
        }
        printf("\n");
    }

    return 0;
}