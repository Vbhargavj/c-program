#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char **ptr, s1[25]; // this array take input from user
                        // this is our counter

    char **s;
    s = (char **)malloc(sizeof(char *) * 5);
    for (int i = 0; i < 5; i++)
    {
        s[i] = (char *)malloc(sizeof(char) * 25);
    }
    printf("\n.......Enter the city name......\n");
    // this loop is take input from user
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", s[i]);
    }
    printf("|_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t |\n");
    printf("\x1B[35m");
    printf("|                                         VADUKAR BHARGAV JENTIBHAI                                              |\n");
    printf("|                                     ENROLLMENT NUMBER : 210210116054                                           |\n");
    printf("\x1B[0m");
    printf("|_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n\n");
    printf("\n._._._.These are city name enter by user._._._.\n");

    // this loop is print input given by user
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < strlen(s[i]); j++)
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