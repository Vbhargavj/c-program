#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{

    char *ary;
    int count[10];
    ary = (char *)malloc(1024);
    scanf("%s", ary);
    ary = realloc(ary, strlen(ary) + 1);
    char t='0'-1;int g=0;
    for (int i = 0; i < 10; i++)
    {
        t++;
        for (int j = 0; j < strlen(ary); j++)
        {
            // printf("i%d\n",i);
            // printf("c%c\n",t);
            if (ary[j]==t)
            {
                g++;
            // printf("g%d\n",g);
            }
            
        }
        printf("\n");
    }
     printf("g%d\n",g);

    return 0;
}