#include <stdio.h>

int main()
{

    int r, c, bhargav[2][2];

    scanf("%d", &r);
    scanf("%d", &c);

    for (int i = 0; i < 2; i++)
    {         
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &bhargav[i][j]);
        }
    }
    printf("Rows:- %d\n", r);
    printf("Collumn:- %d\n", c);
    printf("The matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", bhargav[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of a matrix is :\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", bhargav[j][i]);
        }
        printf("\n");
    }

    return 0;
}