#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char s[5][25], s1[25];  //this array take input from user
    // this is our counter
    int i, j;
    printf("\n.......Enter the city name......\n");
    // this loop is take input from user
    for (i = 0; i < 5; i++)
    {
        scanf("%s", &(*(s + i)));
    }

    printf("\n._._._.These are city name enter by user._._._.\n");

    // this loop is print input given by user
    for (int i = 0; i < 5; i++)
    {
        for (j = 0; j < strlen(s[i]); j++)
        {
            printf("%c", *(*(s + i) + j));
        }
        printf("\n");
    }

    // this loop is short array like short array
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(s1, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], s1);
            }
        }
    }
    
    printf("\n!_!_!_These are name is alphabaticaly_!_!_!\n");
    // this loop is print short array
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }
    return 0;
}