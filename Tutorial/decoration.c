#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {

            printf("*");
        }
        sleep(1);
        printf("\n");
    }
    // how to short array in c ?
    system("cls");

    return 0;
}