#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **ptr;
    ptr = (int **)malloc(sizeof(int *) * 2);
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = (int *)malloc(sizeof(int) * 5);
    }
    printf("%d\n", sizeof(ptr[1][5]));
    char **p;
    p= (char**)malloc(sizeof(char*) * 2);
    for (int i = 0; i < 5; i++)
    {
        p[i] = (char*)malloc(sizeof(char) * 4);
    }
    for (int i = 0; i < 2; i++){
        scanf("%s",p[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%s",p[i]);
    }
    
    
    // for (int j = 0; j < 2; j++)
    // {

    //     for (int i = 0; i < 5; i++)
    //     {
    //         scanf("%d", &ptr[j][i]);
    //     }
    // }
    // for (int j = 0; j < 2; j++)
    // {

    //     for (int i = 0; i < 5; i++)
    //     {
    //         printf("%d", ptr[j][i]);
    //     }
    // }
    return 0;
}